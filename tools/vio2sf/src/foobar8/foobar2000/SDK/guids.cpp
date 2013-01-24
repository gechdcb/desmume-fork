#include "foobar2000.h"

#ifdef _MSC_VER
#define FOOGUIDDECL __declspec(selectany)	//hack against msvc linker stupidity
#else
#define FOOGUIDDECL
#endif

// {10BB3EBD-DDF7-4975-A3CC-23084829453E}
FOOGUIDDECL const GUID componentversion::class_guid =
{ 0x10bb3ebd, 0xddf7, 0x4975, { 0xa3, 0xcc, 0x23, 0x8, 0x48, 0x29, 0x45, 0x3e } };

// {7255E8D0-3FCF-4781-B93B-D06CB88DFAFA}
FOOGUIDDECL const GUID config::class_guid =
{ 0x7255e8d0, 0x3fcf, 0x4781, { 0xb9, 0x3b, 0xd0, 0x6c, 0xb8, 0x8d, 0xfa, 0xfa } };

// {056B51C7-E78C-4a4e-B84E-6BFF3F8AB8F2}
FOOGUIDDECL const GUID console::class_guid =
{ 0x56b51c7, 0xe78c, 0x4a4e, { 0xb8, 0x4e, 0x6b, 0xff, 0x3f, 0x8a, 0xb8, 0xf2 } };

// {0C36A649-9EA0-4f48-B229-0CB2AA9AB6F4}
FOOGUIDDECL const GUID core_version_info::class_guid =
{ 0xc36a649, 0x9ea0, 0x4f48, { 0xb2, 0x29, 0xc, 0xb2, 0xaa, 0x9a, 0xb6, 0xf4 } };

// {545F99D1-602D-4175-867F-F7C6AD680A81}
FOOGUIDDECL const GUID cvt_float_to_linear::class_guid =
{ 0x545f99d1, 0x602d, 0x4175, { 0x86, 0x7f, 0xf7, 0xc6, 0xad, 0x68, 0xa, 0x81 } };

// {D9239DB0-210B-4680-82AF-C37DBDD6A43D}
FOOGUIDDECL const GUID dsp_v2::class_guid =
{ 0xd9239db0, 0x210b, 0x4680, { 0x82, 0xaf, 0xc3, 0x7d, 0xbd, 0xd6, 0xa4, 0x3d } };

// {2A42AFEA-940B-455b-AEFF-CFDACAF52AFF}
FOOGUIDDECL const GUID dsp::class_guid =
{ 0x2a42afea, 0x940b, 0x455b, { 0xae, 0xff, 0xcf, 0xda, 0xca, 0xf5, 0x2a, 0xff } };

// {D63655B2-B0CE-4069-BDF9-E364E43FF23C}
FOOGUIDDECL const GUID input::class_guid = 
{ 0xd63655b2, 0xb0ce, 0x4069, { 0xbd, 0xf9, 0xe3, 0x64, 0xe4, 0x3f, 0xf2, 0x3c } };

// {113773C4-B387-4b48-8BDF-AB58BC6CE538}
FOOGUIDDECL const GUID initquit::class_guid = 
{ 0x113773c4, 0xb387, 0x4b48, { 0x8b, 0xdf, 0xab, 0x58, 0xbc, 0x6c, 0xe5, 0x38 } };

// {609D48C8-C6A6-4784-8BBD-FDD32BF0740E}
FOOGUIDDECL const GUID metadb::class_guid = 
{ 0x609d48c8, 0xc6a6, 0x4784, { 0x8b, 0xbd, 0xfd, 0xd3, 0x2b, 0xf0, 0x74, 0xe } };

// {D5286BB4-FDED-47ef-A623-4C3FF056DEC1}
FOOGUIDDECL const GUID metadb_callback::class_guid = 
{ 0xd5286bb4, 0xfded, 0x47ef, { 0xa6, 0x23, 0x4c, 0x3f, 0xf0, 0x56, 0xde, 0xc1 } };

// {065190FC-9C8A-4b2b-A5EC-E21EBE288234}
FOOGUIDDECL const GUID metadb_callback_simple::class_guid = 
{ 0x65190fc, 0x9c8a, 0x4b2b, { 0xa5, 0xec, 0xe2, 0x1e, 0xbe, 0x28, 0x82, 0x34 } };

// {1C0802F7-CF24-49ef-B914-8B9866F19779}
FOOGUIDDECL const GUID menu_item::class_guid = 
{ 0x1c0802f7, 0xcf24, 0x49ef, { 0xb9, 0x14, 0x8b, 0x98, 0x66, 0xf1, 0x97, 0x79 } };

// {C1CAF378-BCAF-4271-AE4D-45A49B9C3B79}
FOOGUIDDECL const GUID output::class_guid = 
{ 0xc1caf378, 0xbcaf, 0x4271, { 0xae, 0x4d, 0x45, 0xa4, 0x9b, 0x9c, 0x3b, 0x79 } };

// {D9CF88FF-AC2B-4a8a-8A50-DA0933A03792}
FOOGUIDDECL const GUID visualisation::class_guid = 
{ 0xd9cf88ff, 0xac2b, 0x4a8a, { 0x8a, 0x50, 0xda, 0x9, 0x33, 0xa0, 0x37, 0x92 } };

// {A7E799BC-9774-41cf-8785-0D91634F937B}
FOOGUIDDECL const GUID packet_decoder::class_guid = 
{ 0xa7e799bc, 0x9774, 0x41cf, { 0x87, 0x85, 0xd, 0x91, 0x63, 0x4f, 0x93, 0x7b } };

// {D3BD5F53-A6D6-4346-991F-CF14DFAD2B3A}
FOOGUIDDECL const GUID menu_manager::class_guid = 
{ 0xd3bd5f53, 0xa6d6, 0x4346, { 0x99, 0x1f, 0xcf, 0x14, 0xdf, 0xad, 0x2b, 0x3a } };

// {61CF61E5-7C8E-469b-88E7-CE9B217DD38E}
FOOGUIDDECL const GUID menu_manager_defaults::class_guid = 
{ 0x61cf61e5, 0x7c8e, 0x469b, { 0x88, 0xe7, 0xce, 0x9b, 0x21, 0x7d, 0xd3, 0x8e } };

// {640E006E-2934-4d6c-8327-4FA9F341ECF2}
FOOGUIDDECL const GUID input_file_type::class_guid = 
{ 0x640e006e, 0x2934, 0x4d6c, { 0x83, 0x27, 0x4f, 0xa9, 0xf3, 0x41, 0xec, 0xf2 } };

// {B2518A41-A251-4941-9E28-BC51F7B840C3}
FOOGUIDDECL const GUID input_v2::class_guid = 
{ 0xb2518a41, 0xa251, 0x4941, { 0x9e, 0x28, 0xbc, 0x51, 0xf7, 0xb8, 0x40, 0xc3 } };

// {2DEB68AB-49ED-460a-BFC0-4936AD39BA4F}
FOOGUIDDECL const GUID diskwriter::class_guid = 
{ 0x2deb68ab, 0x49ed, 0x460a, { 0xbf, 0xc0, 0x49, 0x36, 0xad, 0x39, 0xba, 0x4f } };

// {8C6775A2-56FC-4a64-89F4-2609595C86A2}
FOOGUIDDECL const GUID ui_control::class_guid = 
{ 0x8c6775a2, 0x56fc, 0x4a64, { 0x89, 0xf4, 0x26, 0x9, 0x59, 0x5c, 0x86, 0xa2 } };

// {52BD7A17-540C-4a97-B812-72BC84EC4FF5}
FOOGUIDDECL const GUID ui_drop_item_callback::class_guid = 
{ 0x52bd7a17, 0x540c, 0x4a97, { 0xb8, 0x12, 0x72, 0xbc, 0x84, 0xec, 0x4f, 0xf5 } };

// {85605A78-101A-47cb-9541-4101EEBAC724}
FOOGUIDDECL const GUID track_indexer_v2::class_guid = 
{ 0x85605a78, 0x101a, 0x47cb, { 0x95, 0x41, 0x41, 0x1, 0xee, 0xba, 0xc7, 0x24 } };

// {550B3A19-42A4-4c0f-91F2-90550189CBFF}
FOOGUIDDECL const GUID commandline_handler::class_guid = 
{ 0x550b3a19, 0x42a4, 0x4c0f, { 0x91, 0xf2, 0x90, 0x55, 0x1, 0x89, 0xcb, 0xff } };

// {B92230CE-12A1-49f4-AFC7-3B5C57AD3760}
FOOGUIDDECL const GUID playback_flow_control::class_guid = 
{ 0xb92230ce, 0x12a1, 0x49f4, { 0xaf, 0xc7, 0x3b, 0x5c, 0x57, 0xad, 0x37, 0x60 } };

// {7E82BE03-5956-412b-A9C4-6D1A3E2D7123}
FOOGUIDDECL const GUID playback_flow_control_v2::class_guid = 
{ 0x7e82be03, 0x5956, 0x412b, { 0xa9, 0xc4, 0x6d, 0x1a, 0x3e, 0x2d, 0x71, 0x23 } };

// {8A17F5C7-0EA0-409c-93F6-3A2BF9CE65BF}
FOOGUIDDECL const GUID dsp_manager::class_guid = 
{ 0x8a17f5c7, 0xea0, 0x409c, { 0x93, 0xf6, 0x3a, 0x2b, 0xf9, 0xce, 0x65, 0xbf } };

// {C71B99BD-12C5-48fe-A9C0-469F6FEA88BF}
FOOGUIDDECL const GUID modeless_dialog_manager::class_guid = 
{ 0xc71b99bd, 0x12c5, 0x48fe, { 0xa9, 0xc0, 0x46, 0x9f, 0x6f, 0xea, 0x88, 0xbf } };

// {05C42951-1373-43ed-8F0C-F7B55D867868}
FOOGUIDDECL const GUID output_manager::class_guid = 
{ 0x5c42951, 0x1373, 0x43ed, { 0x8f, 0xc, 0xf7, 0xb5, 0x5d, 0x86, 0x78, 0x68 } };

// {CF91D5CB-743B-401a-A8CC-E149F8944CCB}
FOOGUIDDECL const GUID play_callback::class_guid = 
{ 0xcf91d5cb, 0x743b, 0x401a, { 0xa8, 0xcc, 0xe1, 0x49, 0xf8, 0x94, 0x4c, 0xcb } };

// {66E4FD37-5839-4233-A2D3-787E86A69011}
FOOGUIDDECL const GUID play_control::class_guid = 
{ 0x66e4fd37, 0x5839, 0x4233, { 0xa2, 0xd3, 0x78, 0x7e, 0x86, 0xa6, 0x90, 0x11 } };

// {04AEC60C-BF22-46a6-B69E-BB8B4BE31AC2}
FOOGUIDDECL const GUID playback_core::class_guid = 
{ 0x4aec60c, 0xbf22, 0x46a6, { 0xb6, 0x9e, 0xbb, 0x8b, 0x4b, 0xe3, 0x1a, 0xc2 } };

// {1673784D-E82E-4a70-8FFE-3D5613BD7C3C}
FOOGUIDDECL const GUID play_sound::class_guid = 
{ 0x1673784d, 0xe82e, 0x4a70, { 0x8f, 0xfe, 0x3d, 0x56, 0x13, 0xbd, 0x7c, 0x3c } };

// {F384709D-7B49-472f-8D41-9D622877BA4E}
FOOGUIDDECL const GUID playlist_callback::class_guid = 
{ 0xf384709d, 0x7b49, 0x472f, { 0x8d, 0x41, 0x9d, 0x62, 0x28, 0x77, 0xba, 0x4e } };

// {D2E5F92B-3424-4822-AE60-8663E6D26EAB}
FOOGUIDDECL const GUID playlist_loader::class_guid = 
{ 0xd2e5f92b, 0x3424, 0x4822, { 0xae, 0x60, 0x86, 0x63, 0xe6, 0xd2, 0x6e, 0xab } };

// {95510C89-9968-4ebe-9968-5290CAAB39D2}
FOOGUIDDECL const GUID track_indexer::class_guid = 
{ 0x95510c89, 0x9968, 0x4ebe, { 0x99, 0x68, 0x52, 0x90, 0xca, 0xab, 0x39, 0xd2 } };

// {2FBCE1E5-902E-49e0-B9CF-CE0FBA765348}
FOOGUIDDECL const GUID file::class_guid = 
{ 0x2fbce1e5, 0x902e, 0x49e0, { 0xb9, 0xcf, 0xce, 0xf, 0xba, 0x76, 0x53, 0x48 } };

// {E84E9847-ADBB-447b-92F8-E9446EF2F427}
FOOGUIDDECL const GUID directory::class_guid = 
{ 0xe84e9847, 0xadbb, 0x447b, { 0x92, 0xf8, 0xe9, 0x44, 0x6e, 0xf2, 0xf4, 0x27 } };

// {9098AF12-61A3-4caa-8AA9-BB95C2EF8346}
FOOGUIDDECL const GUID unpacker::class_guid = 
{ 0x9098af12, 0x61a3, 0x4caa, { 0x8a, 0xa9, 0xbb, 0x95, 0xc2, 0xef, 0x83, 0x46 } };

// {EC707440-FA3E-4d12-9876-FC369F04D4A4}
FOOGUIDDECL const GUID archive::class_guid = 
{ 0xec707440, 0xfa3e, 0x4d12, { 0x98, 0x76, 0xfc, 0x36, 0x9f, 0x4, 0xd4, 0xa4 } };

// {B2F9FC40-3E55-4b23-A2C9-22BAAD8795B1}
FOOGUIDDECL const GUID reader::class_guid = 
{ 0xb2f9fc40, 0x3e55, 0x4b23, { 0xa2, 0xc9, 0x22, 0xba, 0xad, 0x87, 0x95, 0xb1 } };

// {C40598AA-089B-4c9f-AFCA-5FEE1CA1973D}
FOOGUIDDECL const GUID reader_dynamicinfo::class_guid = 
{ 0xc40598aa, 0x89b, 0x4c9f, { 0xaf, 0xca, 0x5f, 0xee, 0x1c, 0xa1, 0x97, 0x3d } };

// {376B8EA5-DA53-4a83-881B-E92CF73D8D60}
FOOGUIDDECL const GUID reader_filetime::class_guid = 
{ 0x376b8ea5, 0xda53, 0x4a83, { 0x88, 0x1b, 0xe9, 0x2c, 0xf7, 0x3d, 0x8d, 0x60 } };

// {A00CB77D-ED72-4031-806B-4E45AF995241}
FOOGUIDDECL const GUID replaygain::class_guid = 
{ 0xa00cb77d, 0xed72, 0x4031, { 0x80, 0x6b, 0x4e, 0x45, 0xaf, 0x99, 0x52, 0x41 } };

// {3FEED4FC-A400-4a30-8E73-F0ECD114D7E8}
FOOGUIDDECL const GUID resampler::class_guid = 
{ 0x3feed4fc, 0xa400, 0x4a30, { 0x8e, 0x73, 0xf0, 0xec, 0xd1, 0x14, 0xd7, 0xe8 } };

// {BB360EDA-1E11-4604-87FC-56CE6C249DD7}
FOOGUIDDECL const GUID tag_reader::class_guid = 
{ 0xbb360eda, 0x1e11, 0x4604, { 0x87, 0xfc, 0x56, 0xce, 0x6c, 0x24, 0x9d, 0xd7 } };

// {2BE790FB-070F-4b96-BF68-DA579EACE69A}
FOOGUIDDECL const GUID tag_writer::class_guid = 
{ 0x2be790fb, 0x70f, 0x4b96, { 0xbf, 0x68, 0xda, 0x57, 0x9e, 0xac, 0xe6, 0x9a } };

// {E434F1CA-92DA-482c-A76A-2129EE1CD2E3}
FOOGUIDDECL const GUID tag_remover::class_guid = 
{ 0xe434f1ca, 0x92da, 0x482c, { 0xa7, 0x6a, 0x21, 0x29, 0xee, 0x1c, 0xd2, 0xe3 } };

// {3F7674AB-044C-4796-8801-6C443C244D88}
FOOGUIDDECL const GUID titleformat::class_guid = 
{ 0x3f7674ab, 0x44c, 0x4796, { 0x88, 0x1, 0x6c, 0x44, 0x3c, 0x24, 0x4d, 0x88 } };

// {A2AC631F-38D0-46ee-B9B1-F1599DF02BB6}
FOOGUIDDECL const GUID user_interface::class_guid = 
{ 0xa2ac631f, 0x38d0, 0x46ee, { 0xb9, 0xb1, 0xf1, 0x59, 0x9d, 0xf0, 0x2b, 0xb6 } };

// {8634CA5E-7CE1-419c-97C9-B47B5B6C538F}
FOOGUIDDECL const GUID playlist_switcher::class_guid = 
{ 0x8634ca5e, 0x7ce1, 0x419c, { 0x97, 0xc9, 0xb4, 0x7b, 0x5b, 0x6c, 0x53, 0x8f } };

// {7F0FB76C-6BB7-4435-8337-8E7598F44BDA}
FOOGUIDDECL const GUID playlist_switcher_callback::class_guid = 
{ 0x7f0fb76c, 0x6bb7, 0x4435, { 0x83, 0x37, 0x8e, 0x75, 0x98, 0xf4, 0x4b, 0xda } };

// {8CC36FD2-9BC6-46b9-A748-1568DE4CD602}
FOOGUIDDECL const GUID playlist_oper::class_guid = 
{ 0x8cc36fd2, 0x9bc6, 0x46b9, { 0xa7, 0x48, 0x15, 0x68, 0xde, 0x4c, 0xd6, 0x2 } };

// {994C0D0E-319E-45f3-92FC-518616E73ADC}
FOOGUIDDECL const GUID menu_item::caller_now_playing =
{ 0x994c0d0e, 0x319e, 0x45f3, { 0x92, 0xfc, 0x51, 0x86, 0x16, 0xe7, 0x3a, 0xdc } };

// {47502BA1-816D-4a3e-ADE5-A7A9860A67DB}
FOOGUIDDECL const GUID menu_item::caller_playlist =
{ 0x47502ba1, 0x816d, 0x4a3e, { 0xad, 0xe5, 0xa7, 0xa9, 0x86, 0xa, 0x67, 0xdb } };

// {00000000-0000-0000-0000-000000000000}
FOOGUIDDECL const GUID menu_item::caller_undefined =
{ 0x00000000, 0x0000, 0x0000, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } };

// {79D28AA9-4E71-4b9b-98BA-36DB16593FDF}
FOOGUIDDECL const GUID menu_item_v2::class_guid = 
{ 0x79d28aa9, 0x4e71, 0x4b9b, { 0x98, 0xba, 0x36, 0xdb, 0x16, 0x59, 0x3f, 0xdf } };

// {95DE5842-30F5-4f72-B40C-191663782F80}
FOOGUIDDECL const GUID keyboard_shortcut_manager::class_guid = 
{ 0x95de5842, 0x30f5, 0x4f72, { 0xb4, 0xc, 0x19, 0x16, 0x63, 0x78, 0x2f, 0x80 } };

// {FF77A2C6-7ACD-483d-841C-A052E5CA5E03}
FOOGUIDDECL const GUID config_var::class_guid = 
{ 0xff77a2c6, 0x7acd, 0x483d, { 0x84, 0x1c, 0xa0, 0x52, 0xe5, 0xca, 0x5e, 0x3 } };

// {30F95BEB-FDF4-4a75-B597-60CAF93B39C4}
FOOGUIDDECL const GUID packet_decoder::owner_MP4 = 
{ 0x30f95beb, 0xfdf4, 0x4a75, { 0xb5, 0x97, 0x60, 0xca, 0xf9, 0x3b, 0x39, 0xc4 } };

// {5C2DE804-EAEE-4b8e-8C14-9207A2549BBE}
FOOGUIDDECL const GUID packet_decoder::owner_matroska =
{ 0x5c2de804, 0xeaee, 0x4b8e, { 0x8c, 0x14, 0x92, 0x7, 0xa2, 0x54, 0x9b, 0xbe } };

// {7B741A69-1AC7-440d-A01D-88536DD4DE1C}
FOOGUIDDECL const GUID packet_decoder::owner_MP3 = 
{ 0x7b741a69, 0x1ac7, 0x440d, { 0xa0, 0x1d, 0x88, 0x53, 0x6d, 0xd4, 0xde, 0x1c } };

// {BC73F9FC-0107-480e-BF0E-BE58AF7AF328}
FOOGUIDDECL const GUID packet_decoder::property_samplerate = 
{ 0xbc73f9fc, 0x107, 0x480e, { 0xbf, 0xe, 0xbe, 0x58, 0xaf, 0x7a, 0xf3, 0x28 } };

// {E5D19AAD-931B-48ac-AA6E-95E2C23BEC37}
FOOGUIDDECL const GUID packet_decoder::property_bitspersample = 
{ 0xe5d19aad, 0x931b, 0x48ac, { 0xaa, 0x6e, 0x95, 0xe2, 0xc2, 0x3b, 0xec, 0x37 } };

// {1AFA1145-E774-4c26-91D6-3F5DD61E260E}
FOOGUIDDECL const GUID packet_decoder::property_channels = 
{ 0x1afa1145, 0xe774, 0x4c26, { 0x91, 0xd6, 0x3f, 0x5d, 0xd6, 0x1e, 0x26, 0xe } };

// {29C556DA-065A-4d24-8A11-0F9DBC05A817}
FOOGUIDDECL const GUID packet_decoder::property_byteorder = 
{ 0x29c556da, 0x65a, 0x4d24, { 0x8a, 0x11, 0xf, 0x9d, 0xbc, 0x5, 0xa8, 0x17 } };

// {0759C32F-E78E-4479-B0C0-B653DFA014D8}
FOOGUIDDECL const GUID packet_decoder::property_signed = 
{ 0x759c32f, 0xe78e, 0x4479, { 0xb0, 0xc0, 0xb6, 0x53, 0xdf, 0xa0, 0x14, 0xd8 } };

// {646930F3-30AC-40e7-B7E4-EB7DFD2C0A47}
FOOGUIDDECL const GUID config_var_int::var_type = 
{ 0x646930f3, 0x30ac, 0x40e7, { 0xb7, 0xe4, 0xeb, 0x7d, 0xfd, 0x2c, 0xa, 0x47 } };

// {335B8AA3-D05F-459a-A15C-115A3AEB2507}
FOOGUIDDECL const GUID config_var_struct_var_type = 
{ 0x335b8aa3, 0xd05f, 0x459a, { 0xa1, 0x5c, 0x11, 0x5a, 0x3a, 0xeb, 0x25, 0x7 } };

// {FA9DA2B0-1F5E-42ab-866B-A567E1CE861B}
FOOGUIDDECL const GUID config_var_string::var_type = 
{ 0xfa9da2b0, 0x1f5e, 0x42ab, { 0x86, 0x6b, 0xa5, 0x67, 0xe1, 0xce, 0x86, 0x1b } };

// {6F441057-1D18-4a58-9AC4-8F409CDA7DFD}
FOOGUIDDECL const GUID standard_commands::guid_context_file_properties = 
{ 0x6f441057, 0x1d18, 0x4a58, { 0x9a, 0xc4, 0x8f, 0x40, 0x9c, 0xda, 0x7d, 0xfd } };

// {6F441057-1D18-4a58-9AC4-8F409CDA7DFD}
FOOGUIDDECL const GUID standard_commands::guid_context_file_open_directory = 
{ 0x6f441057, 0x1d18, 0x4a58, { 0x9a, 0xc4, 0x8f, 0x40, 0x9c, 0xda, 0x7d, 0xfd } };

// {FFE18008-BCA2-4b29-AB88-8816B492C434}
FOOGUIDDECL const GUID standard_commands::guid_context_copy_names = 
{ 0xffe18008, 0xbca2, 0x4b29, { 0xab, 0x88, 0x88, 0x16, 0xb4, 0x92, 0xc4, 0x34 } };

// {44B8F02B-5408-4361-8240-18DEC881B95E}
FOOGUIDDECL const GUID standard_commands::guid_context_send_to_playlist = 
{ 0x44b8f02b, 0x5408, 0x4361, { 0x82, 0x40, 0x18, 0xde, 0xc8, 0x81, 0xb9, 0x5e } };

// {8C3BA2CB-BC4D-4752-8282-C6F9AED75A78}
FOOGUIDDECL const GUID standard_commands::guid_context_reload_info = 
{ 0x8c3ba2cb, 0xbc4d, 0x4752, { 0x82, 0x82, 0xc6, 0xf9, 0xae, 0xd7, 0x5a, 0x78 } };

// {BD045EA4-E5E9-4206-8FF9-12AD9F5DCDE1}
FOOGUIDDECL const GUID standard_commands::guid_context_reload_info_if_changed = 
{ 0xbd045ea4, 0xe5e9, 0x4206, { 0x8f, 0xf9, 0x12, 0xad, 0x9f, 0x5d, 0xcd, 0xe1 } };

// {684D9FBB-4383-44a2-9789-7EE1376209C6}
FOOGUIDDECL const GUID standard_commands::guid_context_rewrite_info = 
{ 0x684d9fbb, 0x4383, 0x44a2, { 0x97, 0x89, 0x7e, 0xe1, 0x37, 0x62, 0x9, 0xc6 } };

// {860179B7-962F-4340-ACAD-0DDAF060A6B8}
FOOGUIDDECL const GUID standard_commands::guid_context_remove_tags = 
{ 0x860179b7, 0x962f, 0x4340, { 0xac, 0xad, 0xd, 0xda, 0xf0, 0x60, 0xa6, 0xb8 } };

// {4DD1E1AD-F481-480c-BC3E-DD9C878EAFC3}
FOOGUIDDECL const GUID standard_commands::guid_context_remove_from_database = 
{ 0x4dd1e1ad, 0xf481, 0x480c, { 0xbc, 0x3e, 0xdd, 0x9c, 0x87, 0x8e, 0xaf, 0xc3 } };

// {A7E7ECB7-1943-4907-83B3-60E92353C7FA}
FOOGUIDDECL const GUID standard_commands::guid_context_convert_run = 
{ 0xa7e7ecb7, 0x1943, 0x4907, { 0x83, 0xb3, 0x60, 0xe9, 0x23, 0x53, 0xc7, 0xfa } };

// {A58AE6EA-A34F-4879-B25C-F31F2CBC4DA9}
FOOGUIDDECL const GUID standard_commands::guid_context_convert_run_singlefile = 
{ 0xa58ae6ea, 0xa34f, 0x4879, { 0xb2, 0x5c, 0xf3, 0x1f, 0x2c, 0xbc, 0x4d, 0xa9 } };

// {A8EFA42D-76CB-42bc-8803-70516567B13D}
FOOGUIDDECL const GUID standard_commands::guid_context_write_cd = 
{ 0xa8efa42d, 0x76cb, 0x42bc, { 0x88, 0x3, 0x70, 0x51, 0x65, 0x67, 0xb1, 0x3d } };

// {487DAED1-02FB-4336-A813-5E90317AB041}
FOOGUIDDECL const GUID standard_commands::guid_context_rg_scan_track = 
{ 0x487daed1, 0x2fb, 0x4336, { 0xa8, 0x13, 0x5e, 0x90, 0x31, 0x7a, 0xb0, 0x41 } };

// {3850F34C-F619-4296-B8A0-26C617B1D16C}
FOOGUIDDECL const GUID standard_commands::guid_context_rg_scan_album = 
{ 0x3850f34c, 0xf619, 0x4296, { 0xb8, 0xa0, 0x26, 0xc6, 0x17, 0xb1, 0xd1, 0x6c } };

// {6A2DBA02-260C-436f-8F41-0190A4298266}
FOOGUIDDECL const GUID standard_commands::guid_context_rg_scan_album_multi = 
{ 0x6a2dba02, 0x260c, 0x436f, { 0x8f, 0x41, 0x1, 0x90, 0xa4, 0x29, 0x82, 0x66 } };

// {54C82A92-5824-4381-8D1B-79FBB1E2ABB8}
FOOGUIDDECL const GUID standard_commands::guid_context_rg_remove = 
{ 0x54c82a92, 0x5824, 0x4381, { 0x8d, 0x1b, 0x79, 0xfb, 0xb1, 0xe2, 0xab, 0xb8 } };

// {69EAA594-13D9-4237-9BD7-11A39FDD1454}
FOOGUIDDECL const GUID standard_commands::guid_context_save_playlist = 
{ 0x69eaa594, 0x13d9, 0x4237, { 0x9b, 0xd7, 0x11, 0xa3, 0x9f, 0xdd, 0x14, 0x54 } };

// {2BEB6836-C657-40ef-BB6E-D5B222AB89CE}
FOOGUIDDECL const GUID standard_commands::guid_context_masstag_edit = 
{ 0x2beb6836, 0xc657, 0x40ef, { 0xbb, 0x6e, 0xd5, 0xb2, 0x22, 0xab, 0x89, 0xce } };

// {A579FF07-5D0B-48ed-A071-B6FCE4385AA9}
FOOGUIDDECL const GUID standard_commands::guid_context_masstag_rename = 
{ 0xa579ff07, 0x5d0b, 0x48ed, { 0xa0, 0x71, 0xb6, 0xfc, 0xe4, 0x38, 0x5a, 0xa9 } };

// {77CFBCD0-98DC-4015-B327-D7142C664806}
FOOGUIDDECL const GUID standard_commands::guid_main_always_on_top = 
{ 0x77cfbcd0, 0x98dc, 0x4015, { 0xb3, 0x27, 0xd7, 0x14, 0x2c, 0x66, 0x48, 0x6 } };

// {11213A01-9F36-4e69-A1BB-7A72F418DE3A}
FOOGUIDDECL const GUID standard_commands::guid_main_preferences = 
{ 0x11213a01, 0x9f36, 0x4e69, { 0xa1, 0xbb, 0x7a, 0x72, 0xf4, 0x18, 0xde, 0x3a } };

// {EDA23441-5D38-4499-A22C-FE0CE0A987D9}
FOOGUIDDECL const GUID standard_commands::guid_main_about = 
{ 0xeda23441, 0x5d38, 0x4499, { 0xa2, 0x2c, 0xfe, 0xc, 0xe0, 0xa9, 0x87, 0xd9 } };

// {6D38C73A-15D8-472c-8E68-6F946B82ECB4}
FOOGUIDDECL const GUID standard_commands::guid_main_exit = 
{ 0x6d38c73a, 0x15d8, 0x472c, { 0x8e, 0x68, 0x6f, 0x94, 0x6b, 0x82, 0xec, 0xb4 } };

// {EF9B60FE-CB03-4c40-A8FD-3F1821020B37}
FOOGUIDDECL const GUID standard_commands::guid_main_restart = 
{ 0xef9b60fe, 0xcb03, 0x4c40, { 0xa8, 0xfd, 0x3f, 0x18, 0x21, 0x2, 0xb, 0x37 } };

// {90500F09-F16F-415e-A047-AC5045C95FFE}
FOOGUIDDECL const GUID standard_commands::guid_main_activate = 
{ 0x90500f09, 0xf16f, 0x415e, { 0xa0, 0x47, 0xac, 0x50, 0x45, 0xc9, 0x5f, 0xfe } };

// {13C17E8D-0D6F-41a4-B24A-59371043E925}
FOOGUIDDECL const GUID standard_commands::guid_main_hide = 
{ 0x13c17e8d, 0xd6f, 0x41a4, { 0xb2, 0x4a, 0x59, 0x37, 0x10, 0x43, 0xe9, 0x25 } };

// {D9473FB2-BF11-4be0-972F-0E43F166A118}
FOOGUIDDECL const GUID standard_commands::guid_main_activate_or_hide = 
{ 0xd9473fb2, 0xbf11, 0x4be0, { 0x97, 0x2f, 0xe, 0x43, 0xf1, 0x66, 0xa1, 0x18 } };

// {91E349DA-8800-42e5-BC8C-F3A92577AE84}
FOOGUIDDECL const GUID standard_commands::guid_main_titleformat_help = 
{ 0x91e349da, 0x8800, 0x42e5, { 0xbc, 0x8c, 0xf3, 0xa9, 0x25, 0x77, 0xae, 0x84 } };

// {FBCFE01C-6C57-4e6a-A9F1-62334640DC91}
FOOGUIDDECL const GUID standard_commands::guid_main_follow_cursor = 
{ 0xfbcfe01c, 0x6c57, 0x4e6a, { 0xa9, 0xf1, 0x62, 0x33, 0x46, 0x40, 0xdc, 0x91 } };

// {E58895A0-A2F0-45b6-8799-1440E4DB7284}
FOOGUIDDECL const GUID standard_commands::guid_main_next = 
{ 0xe58895a0, 0xa2f0, 0x45b6, { 0x87, 0x99, 0x14, 0x40, 0xe4, 0xdb, 0x72, 0x84 } };

// {059C4566-4708-4ebf-8139-6A8EA5A9DFC8}
FOOGUIDDECL const GUID standard_commands::guid_main_previous = 
{ 0x59c4566, 0x4708, 0x4ebf, { 0x81, 0x39, 0x6a, 0x8e, 0xa5, 0xa9, 0xdf, 0xc8 } };

// {18B1278A-F1BB-4b48-BC3D-6EC9EF80AD19}
FOOGUIDDECL const GUID standard_commands::guid_main_next_or_random = 
{ 0x18b1278a, 0xf1bb, 0x4b48, { 0xbc, 0x3d, 0x6e, 0xc9, 0xef, 0x80, 0xad, 0x19 } };

// {42BDA765-30A8-40fa-BFA4-6A4E2F2B2CE9}
FOOGUIDDECL const GUID standard_commands::guid_main_random = 
{ 0x42bda765, 0x30a8, 0x40fa, { 0xbf, 0xa4, 0x6a, 0x4e, 0x2f, 0x2b, 0x2c, 0xe9 } };

// {FCEF5262-7FA5-452e-A527-C14E0CB582DE}
FOOGUIDDECL const GUID standard_commands::guid_main_pause = 
{ 0xfcef5262, 0x7fa5, 0x452e, { 0xa5, 0x27, 0xc1, 0x4e, 0xc, 0xb5, 0x82, 0xde } };

// {D3F83B15-D4AF-4586-8BD0-4EA415E31FE1}
FOOGUIDDECL const GUID standard_commands::guid_main_play = 
{ 0xd3f83b15, 0xd4af, 0x4586, { 0x8b, 0xd0, 0x4e, 0xa4, 0x15, 0xe3, 0x1f, 0xe1 } };

// {8DEBC44E-EDA2-48d4-8696-31FC29D1F383}
FOOGUIDDECL const GUID standard_commands::guid_main_play_or_pause = 
{ 0x8debc44e, 0xeda2, 0x48d4, { 0x86, 0x96, 0x31, 0xfc, 0x29, 0xd1, 0xf3, 0x83 } };

// {2DF17F25-80B9-4a43-B21D-620458FDDE1E}
FOOGUIDDECL const GUID standard_commands::guid_main_rg_set_album = 
{ 0x2df17f25, 0x80b9, 0x4a43, { 0xb2, 0x1d, 0x62, 0x4, 0x58, 0xfd, 0xde, 0x1e } };

// {C26F1955-5753-4836-887F-84A563DD6DD9}
FOOGUIDDECL const GUID standard_commands::guid_main_rg_set_track = 
{ 0xc26f1955, 0x5753, 0x4836, { 0x88, 0x7f, 0x84, 0xa5, 0x63, 0xdd, 0x6d, 0xd9 } };

// {8D2D808E-6AA2-455b-A2F1-CDB019328140}
FOOGUIDDECL const GUID standard_commands::guid_main_rg_disable = 
{ 0x8d2d808e, 0x6aa2, 0x455b, { 0xa2, 0xf1, 0xcd, 0xb0, 0x19, 0x32, 0x81, 0x40 } };

// {C3378028-165F-4374-966C-2FA2E0FCD3A8}
FOOGUIDDECL const GUID standard_commands::guid_main_stop = 
{ 0xc3378028, 0x165f, 0x4374, { 0x96, 0x6c, 0x2f, 0xa2, 0xe0, 0xfc, 0xd3, 0xa8 } };

// {EE057982-22F9-4862-A986-859E463316FB}
FOOGUIDDECL const GUID standard_commands::guid_main_stop_after_current = 
{ 0xee057982, 0x22f9, 0x4862, { 0xa9, 0x86, 0x85, 0x9e, 0x46, 0x33, 0x16, 0xfb } };

// {11DC6526-73C4-44f0-91B1-DE5C2D26B0C7}
FOOGUIDDECL const GUID standard_commands::guid_main_volume_down = 
{ 0x11dc6526, 0x73c4, 0x44f0, { 0x91, 0xb1, 0xde, 0x5c, 0x2d, 0x26, 0xb0, 0xc7 } };

// {A313E630-A04A-4ae8-B5B4-0A944AC964FF}
FOOGUIDDECL const GUID standard_commands::guid_main_volume_up = 
{ 0xa313e630, 0xa04a, 0x4ae8, { 0xb5, 0xb4, 0xa, 0x94, 0x4a, 0xc9, 0x64, 0xff } };

// {4A36285B-B4AF-46ed-A1AA-6333057F485B}
FOOGUIDDECL const GUID standard_commands::guid_main_volume_mute = 
{ 0x4a36285b, 0xb4af, 0x46ed, { 0xa1, 0xaa, 0x63, 0x33, 0x5, 0x7f, 0x48, 0x5b } };

// {2DC43C22-CA09-4ef9-A61E-7A0C1DAAE21E}
FOOGUIDDECL const GUID standard_commands::guid_main_add_directory = 
{ 0x2dc43c22, 0xca09, 0x4ef9, { 0xa6, 0x1e, 0x7a, 0xc, 0x1d, 0xaa, 0xe2, 0x1e } };

// {FC89C278-4475-4853-96C9-F7F05E8CC837}
FOOGUIDDECL const GUID standard_commands::guid_main_add_files = 
{ 0xfc89c278, 0x4475, 0x4853, { 0x96, 0xc9, 0xf7, 0xf0, 0x5e, 0x8c, 0xc8, 0x37 } };

// {9CA39D38-AC9B-4cca-B0CE-C0F62D188114}
FOOGUIDDECL const GUID standard_commands::guid_main_add_location = 
{ 0x9ca39d38, 0xac9b, 0x4cca, { 0xb0, 0xce, 0xc0, 0xf6, 0x2d, 0x18, 0x81, 0x14 } };

// {73D6E69D-0DC9-4d5c-A7EE-FF4BE3896B08}
FOOGUIDDECL const GUID standard_commands::guid_main_add_playlist = 
{ 0x73d6e69d, 0xdc9, 0x4d5c, { 0xa7, 0xee, 0xff, 0x4b, 0xe3, 0x89, 0x6b, 0x8 } };

// {55559142-7AEA-4c20-9B72-1D48E970A274}
FOOGUIDDECL const GUID standard_commands::guid_main_clear_playlist = 
{ 0x55559142, 0x7aea, 0x4c20, { 0x9b, 0x72, 0x1d, 0x48, 0xe9, 0x70, 0xa2, 0x74 } };

// {BF72488F-36AC-46b3-A36D-193E60C79BC5}
FOOGUIDDECL const GUID standard_commands::guid_main_create_playlist = 
{ 0xbf72488f, 0x36ac, 0x46b3, { 0xa3, 0x6d, 0x19, 0x3e, 0x60, 0xc7, 0x9b, 0xc5 } };

// {59E99BEE-42A3-4526-B06D-56C0C49F0BC1}
FOOGUIDDECL const GUID standard_commands::guid_main_highlight_playing = 
{ 0x59e99bee, 0x42a3, 0x4526, { 0xb0, 0x6d, 0x56, 0xc0, 0xc4, 0x9f, 0xb, 0xc1 } };

// {D94393D4-9DBB-4e5c-BE8C-BE9CA80E214D}
FOOGUIDDECL const GUID standard_commands::guid_main_load_playlist = 
{ 0xd94393d4, 0x9dbb, 0x4e5c, { 0xbe, 0x8c, 0xbe, 0x9c, 0xa8, 0xe, 0x21, 0x4d } };

// {EE1308C5-EBD2-48f1-959D-2627069C2E0F}
FOOGUIDDECL const GUID standard_commands::guid_main_next_playlist = 
{ 0xee1308c5, 0xebd2, 0x48f1, { 0x95, 0x9d, 0x26, 0x27, 0x6, 0x9c, 0x2e, 0xf } };

// {486ECDA3-7BA2-49e9-BB44-4DB9DF9320C7}
FOOGUIDDECL const GUID standard_commands::guid_main_previous_playlist = 
{ 0x486ecda3, 0x7ba2, 0x49e9, { 0xbb, 0x44, 0x4d, 0xb9, 0xdf, 0x93, 0x20, 0xc7 } };

// {69C778AA-B836-40a0-89CD-7A2E50C102CB}
FOOGUIDDECL const GUID standard_commands::guid_main_open = 
{ 0x69c778aa, 0xb836, 0x40a0, { 0x89, 0xcd, 0x7a, 0x2e, 0x50, 0xc1, 0x2, 0xcb } };

// {EB7FB5A4-5904-4d2c-B66C-D882A3B15277}
FOOGUIDDECL const GUID standard_commands::guid_main_remove_playlist = 
{ 0xeb7fb5a4, 0x5904, 0x4d2c, { 0xb6, 0x6c, 0xd8, 0x82, 0xa3, 0xb1, 0x52, 0x77 } };

// {C297BADB-8098-45a9-A5E8-B53A0D780CE3}
FOOGUIDDECL const GUID standard_commands::guid_main_remove_dead_entries = 
{ 0xc297badb, 0x8098, 0x45a9, { 0xa5, 0xe8, 0xb5, 0x3a, 0xd, 0x78, 0xc, 0xe3 } };

// {D08C2921-7750-4979-98F9-3A513A31FF96}
FOOGUIDDECL const GUID standard_commands::guid_main_remove_duplicates = 
{ 0xd08c2921, 0x7750, 0x4979, { 0x98, 0xf9, 0x3a, 0x51, 0x3a, 0x31, 0xff, 0x96 } };

// {D3A25E47-BA98-4e6b-95AD-A7502919EB75}
FOOGUIDDECL const GUID standard_commands::guid_main_rename_playlist = 
{ 0xd3a25e47, 0xba98, 0x4e6b, { 0x95, 0xad, 0xa7, 0x50, 0x29, 0x19, 0xeb, 0x75 } };

// {0FDCFC65-9B39-445a-AA88-4D245F217480}
FOOGUIDDECL const GUID standard_commands::guid_main_save_all_playlists = 
{ 0xfdcfc65, 0x9b39, 0x445a, { 0xaa, 0x88, 0x4d, 0x24, 0x5f, 0x21, 0x74, 0x80 } };

// {370B720B-4CF7-465b-908C-2D2ADD027900}
FOOGUIDDECL const GUID standard_commands::guid_main_save_playlist = 
{ 0x370b720b, 0x4cf7, 0x465b, { 0x90, 0x8c, 0x2d, 0x2a, 0xdd, 0x2, 0x79, 0x0 } };

// {A6CFC2A8-56B3-4d12-88E7-0237961AC47E}
FOOGUIDDECL const GUID standard_commands::guid_main_playlist_search = 
{ 0xa6cfc2a8, 0x56b3, 0x4d12, { 0x88, 0xe7, 0x2, 0x37, 0x96, 0x1a, 0xc4, 0x7e } };

// {383D4E8D-7E30-4fb8-B5DD-8C975D89E58E}
FOOGUIDDECL const GUID standard_commands::guid_main_playlist_sel_crop = 
{ 0x383d4e8d, 0x7e30, 0x4fb8, { 0xb5, 0xdd, 0x8c, 0x97, 0x5d, 0x89, 0xe5, 0x8e } };

// {E0EEA319-E282-4e6c-8B82-4DFD42A1D4ED}
FOOGUIDDECL const GUID standard_commands::guid_main_playlist_sel_remove = 
{ 0xe0eea319, 0xe282, 0x4e6c, { 0x8b, 0x82, 0x4d, 0xfd, 0x42, 0xa1, 0xd4, 0xed } };

// {F0845920-7F6D-40ac-B2EB-3D00C2C8260B}
FOOGUIDDECL const GUID standard_commands::guid_main_playlist_sel_invert = 
{ 0xf0845920, 0x7f6d, 0x40ac, { 0xb2, 0xeb, 0x3d, 0x0, 0xc2, 0xc8, 0x26, 0xb } };

// {29910B33-79E9-40da-992B-5A4AA4281F78}
FOOGUIDDECL const GUID standard_commands::guid_main_playlist_undo = 
{ 0x29910b33, 0x79e9, 0x40da, { 0x99, 0x2b, 0x5a, 0x4a, 0xa4, 0x28, 0x1f, 0x78 } };

// {02D89A8A-5F7D-41c3-A215-6731D8621036}
FOOGUIDDECL const GUID standard_commands::guid_main_show_console = 
{ 0x2d89a8a, 0x5f7d, 0x41c3, { 0xa2, 0x15, 0x67, 0x31, 0xd8, 0x62, 0x10, 0x36 } };

// {E6970E91-33BE-4288-AC01-4B02F07B5D38}
FOOGUIDDECL const GUID standard_commands::guid_main_play_cd = 
{ 0xe6970e91, 0x33be, 0x4288, { 0xac, 0x1, 0x4b, 0x2, 0xf0, 0x7b, 0x5d, 0x38 } };

// {1073AB1D-38ED-4957-8B06-38BC878C1F40}
FOOGUIDDECL const GUID standard_commands::guid_main_restart_resetconfig = 
{ 0x1073ab1d, 0x38ed, 0x4957, { 0x8b, 0x6, 0x38, 0xbc, 0x87, 0x8c, 0x1f, 0x40 } };

// {FDC8A1C2-93EF-4415-8C20-60B6517F0B5F}
FOOGUIDDECL const GUID standard_commands::guid_main_record = 
{ 0xfdc8a1c2, 0x93ef, 0x4415, { 0x8c, 0x20, 0x60, 0xb6, 0x51, 0x7f, 0xb, 0x5f } };

// {45EB37D2-3CD9-4f0a-9B20-8EAE649D7A9F}
FOOGUIDDECL const GUID standard_commands::guid_main_playlist_moveback = 
{ 0x45eb37d2, 0x3cd9, 0x4f0a, { 0x9b, 0x20, 0x8e, 0xae, 0x64, 0x9d, 0x7a, 0x9f } };

// {02298938-596A-41f7-A398-19766A06E6EB}
FOOGUIDDECL const GUID standard_commands::guid_main_playlist_moveforward = 
{ 0x2298938, 0x596a, 0x41f7, { 0xa3, 0x98, 0x19, 0x76, 0x6a, 0x6, 0xe6, 0xeb } };

// {DE5A47E0-28BE-4c49-BEEA-F0DE65C489A4}
FOOGUIDDECL const GUID playlist_loader_v2::class_guid= 
{ 0xde5a47e0, 0x28be, 0x4c49, { 0xbe, 0xea, 0xf0, 0xde, 0x65, 0xc4, 0x89, 0xa4 } };
