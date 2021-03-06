/*
	Copyright (C) 2010-2013 DeSmuME team

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

#ifndef __SLOT1_H__
#define __SLOT1_H__

#include <string>
#include "common.h"
#include "types.h"
#include "debug.h"
#include "MMU.h"

class EMUFILE;

class Slot1Info
{
public:
	virtual const char* name() const = 0;
	virtual const char* descr()const  = 0;
};

class Slot1InfoSimple : public Slot1Info
{
public:
	Slot1InfoSimple(const char* _name, const char* _descr)
		: mName(_name)
		, mDescr(_descr)
	{
	}
	virtual const char* name() const { return mName; }
	virtual const char* descr() const { return mDescr; }
private:
	const char* mName, *mDescr;
};

class ISlot1Interface
{
public:
	//called to get info about device (description)
	virtual Slot1Info const* info() = 0;

	//called once when the emulator starts up, or when the device springs into existence
	virtual bool init() { return true; }
	
	//called when the emulator connects the device
	virtual void connect() { }

	//called when the emulator disconnects the device
	virtual void disconnect() { }
	
	//called when the emulator shuts down, or when the device disappears from existence
	virtual void shutdown() { }

	//called then the cpu begins a new command/block on the GC bus
	virtual void write_command(u8 PROCNUM, GC_Command command) { }

	//called when the cpu writes to the GC bus
	virtual void write_GCDATAIN(u8 PROCNUM, u32 val) { }

	//called when the cpu reads from the GC bus
	virtual u32 read_GCDATAIN(u8 PROCNUM) { return 0xFFFFFFFF; }

	//transfers a byte to the slot-1 device via auxspi, and returns the incoming byte
	//cpu is provided for diagnostic purposes only.. the slot-1 device wouldn't know which CPU it is.
	virtual u8 auxspi_transaction(int PROCNUM, u8 value) { return 0x00; }

	//called when the auxspi burst is ended (SPI chipselect in is going low)
	virtual void auxspi_reset(int PROCNUM) {}

	virtual void savestate(EMUFILE* os) {}

	virtual void loadstate(EMUFILE* is) {}
}; 

typedef ISlot1Interface* TISlot1InterfaceConstructor();

enum NDS_SLOT1_TYPE
{
	NDS_SLOT1_NONE,
	NDS_SLOT1_RETAIL_AUTO,	//autodetect which kind of retail card to use 
	NDS_SLOT1_R4,			//R4 flash card
	NDS_SLOT1_RETAIL_NAND,	//Made in Ore/WarioWare D.I.Y.
	NDS_SLOT1_RETAIL_MCROM,	//a standard MC (eeprom, flash, fram) -bearing retail card. Also supports motion, for now, because that's the way we originally coded it
	NDS_SLOT1_RETAIL_DEBUG,	//for romhacking and fan-made translations
	NDS_SLOT1_COUNT			//use to count addons - MUST BE LAST!!!
};

extern ISlot1Interface* slot1_device;						//the current slot1 device instance
extern ISlot1Interface* slot1_List[NDS_SLOT1_COUNT];

void slot1_Init();
bool slot1_Connect();
void slot1_Disconnect();
void slot1_Shutdown();
void slot1_Savestate(EMUFILE* os);
void slot1_Loadstate(EMUFILE* is);

//just disconnects and reconnects the device. ideally, the disconnection and connection would be called with sensible timing
void slot1_Reset();

//change the current device
bool slot1_Change(NDS_SLOT1_TYPE type);

//check on the current device
NDS_SLOT1_TYPE slot1_GetCurrentType();

void slot1_SetFatDir(const std::string& dir);
std::string slot1_GetFatDir();
EMUFILE* slot1_GetFatImage();


#endif //__SLOT1_H__
