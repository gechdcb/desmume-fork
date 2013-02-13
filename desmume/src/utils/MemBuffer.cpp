/*
	Copyright (C) 2008-2009 DeSmuME team

	This file is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	This file is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with the this software.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "types.h"
#include "MemBuffer.h"
#include <stdio.h>

#ifdef _WINDOWS
#include <windows.h>
#else
#include <sys/mman.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#endif

u32 MemBuffer::s_PageSize = 0;

static u32 CalcPages(u32 size, u32 pagesize)
{
	return (size + pagesize-4) / pagesize;
}

#ifdef _WINDOWS
static u32 GetPageSize()
{
	SYSTEM_INFO system_info;

	GetSystemInfo(&system_info);

	return system_info.dwPageSize;
}

static DWORD ConvertToWinApi(int mode)
{
	DWORD winmode = PAGE_NOACCESS;

	if (mode & MemBuffer::kExec)
	{
		winmode = (mode & MemBuffer::kWrite) ? PAGE_EXECUTE_READWRITE : PAGE_EXECUTE_READ;
	}
	else if (mode & MemBuffer::kRead)
	{
		winmode = (mode & MemBuffer::kWrite) ? PAGE_READWRITE : PAGE_READONLY;
	}

	return winmode;
}

void* MemBuffer::Reserve(u32 size)
{
	if (m_Baseptr) return m_Baseptr;

	if (size < m_DefSize) size = m_DefSize;
	if (!size) return NULL;

	m_ReservedPages = CalcPages(size, s_PageSize);
	m_ReservedSize = m_ReservedPages * s_PageSize;
	m_CommittedSize = 0;

	m_Baseptr = VirtualAlloc(NULL, m_ReservedSize, MEM_RESERVE, PAGE_NOACCESS);
	if (m_Baseptr && !Commit(m_DefSize))
		Release();

	return m_Baseptr;
}

void MemBuffer::Release()
{
	if (m_Baseptr)
	{
		VirtualFree(m_Baseptr, 0, MEM_RELEASE);
		m_Baseptr = NULL;
	}

	m_ReservedSize = 0;
	m_ReservedPages = 0;
	m_CommittedSize = 0;
	m_UsedSize = 0;
}

bool MemBuffer::Commit(u32 size)
{
	if (!m_Baseptr) return false;

	if (size <= m_CommittedSize) return true;
	if (size > m_ReservedSize) return false;

	u32 pages = CalcPages(size, s_PageSize);
	size = pages * s_PageSize;

	void* ptr = VirtualAlloc(m_Baseptr, size, MEM_COMMIT, ConvertToWinApi(m_Mode));
	if (ptr)
	{
		m_CommittedSize = size;
		return true;
	}

	return false;
}

#else
static u32 GetPageSize()
{
	//return getpagesize();
	return (u32)sysconf(_SC_PAGESIZE);
}
#endif

MemBuffer::MemBuffer(u32 mode, u32 def_size)
	: m_Baseptr(NULL)

	, m_Mode(mode)

	, m_DefSize(def_size)

	, m_ReservedSize(0)
	, m_ReservedPages(0)

	, m_CommittedSize(0)
	, m_UsedSize(0)
{
	if (!s_PageSize)
		s_PageSize = GetPageSize();
}

MemBuffer::~MemBuffer()
{
	Release();
}

void* MemBuffer::Alloc(u32 size)
{
	void* ptr = NULL;
	u32 off = size + m_UsedSize;

	if (off <= m_CommittedSize || Commit(off))
	{
		ptr = (void*)((uintptr_t)m_Baseptr + m_UsedSize);

		m_UsedSize = off;
	}

	return ptr;
}

void MemBuffer::Reset()
{
	m_UsedSize = 0;
}

void* MemBuffer::GetBasePtr()
{
	return m_Baseptr;
}

u32 MemBuffer::GetReservedSize()
{
	return m_ReservedSize;
}

u32 MemBuffer::GetCommittedSize()
{
	return m_CommittedSize;
}

u32 MemBuffer::GetUsedSize()
{
	return m_UsedSize;
}