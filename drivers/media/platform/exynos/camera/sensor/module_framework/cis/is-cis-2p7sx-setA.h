/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_2P7SX_SET_A_H
#define IS_CIS_2P7SX_SET_A_H

#include "is-cis.h"
#include "is-cis-2p7sx.h"

const u32 sensor_2p7sx_setfile_A_Global[] = {
	0x6028, 0x4000, 0x02,
	0x0100, 0x0000, 0x02,
	IXC_MODE_DELAY, 0x3000, 0x00,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,

	0xF444, 0x0801, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF472, 0x0014, 0x02,
	0xF406, 0xFFFF, 0x02,
	0xF40A, 0x001F, 0x02,
	0xF43E, 0x0000, 0x02,
	0xF440, 0x002F, 0x02,
	0xF442, 0x64C6, 0x02,
	0xF43C, 0x0090, 0x02,
	0xF474, 0x0000, 0x02,
	0xF494, 0x0810, 0x02,
	0xF496, 0x0000, 0x02,
	0xF470, 0x0010, 0x02,
	0xF47C, 0x0014, 0x02,
	0xF47E, 0x0000, 0x02,
	0xF486, 0x0007, 0x02,
	0xF488, 0x0008, 0x02,
	0xF48A, 0x0000, 0x02,
	0xF262, 0x0001, 0x02,
	0xF498, 0x001D, 0x02,
	0xF4CC, 0x0DEC, 0x02,
	0xF4CE, 0x0DF4, 0x02,
	0xA3FC, 0x0100, 0x02,
	0xA3FE, 0x0000, 0x02,
	0xB138, 0x0000, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1F94, 0x02,
	0x6F12, 0x4010, 0x02,
	0x602A, 0x1EBC, 0x02,
	0x6F12, 0x8080, 0x02,
	0x602A, 0x21B0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x01F0, 0x02,
	0x6F12, 0x01FF, 0x02,
	0x6F12, 0x6486, 0x02,
	0x6F12, 0x64A6, 0x02,
	0x6F12, 0xF442, 0x02,
	0x602A, 0x2250, 0x02,
	0x6F12, 0x03E8, 0x02,
	0x602A, 0x1B26, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1AE2, 0x02,
	0x6F12, 0x0105, 0x02,
	0x6F12, 0x0105, 0x02,
	0x602A, 0x1AEA, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x602A, 0x1ACC, 0x02,
	0x6F12, 0x0100, 0x02,

	0x6028, 0x2000, 0x02,
	0x602A, 0x3E10, 0x02,
	0x6F12, 0x70B5, 0x02,
	0x6F12, 0x0646, 0x02,
	0x6F12, 0x2748, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x0168, 0x02,
	0x6F12, 0x0C0C, 0x02,
	0x6F12, 0x8DB2, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x4BF8, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x4DF8, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x50F8, 0x02,
	0x6F12, 0xA6F8, 0x02,
	0x6F12, 0x9600, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0x7040, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x3DB8, 0x02,
	0x6F12, 0x2DE9, 0x02,
	0x6F12, 0xF041, 0x02,
	0x6F12, 0x0746, 0x02,
	0x6F12, 0x1A48, 0x02,
	0x6F12, 0x8846, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x4068, 0x02,
	0x6F12, 0x85B2, 0x02,
	0x6F12, 0x060C, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x30F8, 0x02,
	0x6F12, 0x164C, 0x02,
	0x6F12, 0xB4F8, 0x02,
	0x6F12, 0x6613, 0x02,
	0x6F12, 0xA078, 0x02,
	0x6F12, 0x94F8, 0x02,
	0x6F12, 0x7623, 0x02,
	0x6F12, 0x00FB, 0x02,
	0x6F12, 0x1211, 0x02,
	0x6F12, 0xA4F8, 0x02,
	0x6F12, 0x6613, 0x02,
	0x6F12, 0xB7F8, 0x02,
	0x6F12, 0x5E10, 0x02,
	0x6F12, 0x0844, 0x02,
	0x6F12, 0xE178, 0x02,
	0x6F12, 0x0844, 0x02,
	0x6F12, 0xA4F8, 0x02,
	0x6F12, 0x6E03, 0x02,
	0x6F12, 0x4146, 0x02,
	0x6F12, 0x3846, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x2AF8, 0x02,
	0x6F12, 0xB4F8, 0x02,
	0x6F12, 0x6613, 0x02,
	0x6F12, 0xA078, 0x02,
	0x6F12, 0x94F8, 0x02,
	0x6F12, 0x7623, 0x02,
	0x6F12, 0x00FB, 0x02,
	0x6F12, 0x0211, 0x02,
	0x6F12, 0xA4F8, 0x02,
	0x6F12, 0x6613, 0x02,
	0x6F12, 0xB4F8, 0x02,
	0x6F12, 0x6E13, 0x02,
	0x6F12, 0x081A, 0x02,
	0x6F12, 0xE178, 0x02,
	0x6F12, 0x401A, 0x02,
	0x6F12, 0xA4F8, 0x02,
	0x6F12, 0x6E03, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0xF041, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x04B8, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x43E0, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2A40, 0x02,
	0x6F12, 0x40F6, 0x02,
	0x6F12, 0x0B0C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x47F2, 0x02,
	0x6F12, 0xFF3C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x49F6, 0x02,
	0x6F12, 0xB91C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F6, 0x02,
	0x6F12, 0xC90C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x602A, 0x4364, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0449, 0x02,
	0x6F12, 0x0348, 0x02,
	0x6F12, 0x044A, 0x02,
	0x6F12, 0x0860, 0x02,
	0x6F12, 0x101A, 0x02,
	0x6F12, 0x8880, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x08B8, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x43E8, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2A10, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x4C00, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x10B5, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x0649, 0x02,
	0x6F12, 0x0748, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x14F8, 0x02,
	0x6F12, 0x064C, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x0649, 0x02,
	0x6F12, 0x2060, 0x02,
	0x6F12, 0x0648, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x0DF8, 0x02,
	0x6F12, 0x6060, 0x02,
	0x6F12, 0x10BD, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x3E11, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x73FF, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x43E0, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x3E43, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x08C9, 0x02,
	0x6F12, 0x4DF6, 0x02,
	0x6F12, 0xC90C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x2107, 0x02,
	0x6F12, 0x018D, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,

	0x3246, 0x0001, 0x02,
	0x3588, 0x0069, 0x02,
	0x358E, 0x005E, 0x02,
	0x3594, 0x004D, 0x02,
	0x359A, 0x0010, 0x02,
	0x35A0, 0x0065, 0x02,
	0x35A6, 0x0062, 0x02,
	0x35AC, 0x0049, 0x02,
	0x35B8, 0x004B, 0x02,
	0x37E6, 0x0001, 0x02,
	0x37E8, 0x001B, 0x02,
	0x37FA, 0x007F, 0x02,
	0x37C0, 0x0907, 0x02,
	0x37C8, 0x300F, 0x02,
	0x37CA, 0x1813, 0x02,
	0x37CC, 0x0F18, 0x02,
	0x37CE, 0x1305, 0x02,
	0x37D0, 0x0803, 0x02,
	0x37D2, 0x0404, 0x02,
	0x37E4, 0x0064, 0x02,
	0x37F8, 0x0001, 0x02,
	0x37FC, 0x0107, 0x02,
	0x31AA, 0x0001, 0x02,
	0x31B2, 0x0035, 0x02,
	0x37EA, 0x004E, 0x02,
	0x37EC, 0x004D, 0x02,
	0x37F0, 0x0004, 0x02,
	0x37F2, 0x0004, 0x02,
	0x37F6, 0x0001, 0x02,
	0x3218, 0x01C0, 0x02,
	0x3252, 0x00BC, 0x02,
	0x3258, 0x00DF, 0x02,
	0x325E, 0x00BA, 0x02,
	0x3264, 0x00E1, 0x02,
	0x326A, 0x00B8, 0x02,
	0x3270, 0x01E8, 0x02,
	0x3276, 0x00BC, 0x02,
	0x327C, 0x01E6, 0x02,
	0x3282, 0x00B8, 0x02,
	0x3288, 0x00FD, 0x02,
	0x32B8, 0x00B8, 0x02,
	0x32CA, 0x00DF, 0x02,
	0x32D0, 0x00F7, 0x02,
	0x32F4, 0x01E4, 0x02,
	0x333C, 0x00BA, 0x02,
	0x3342, 0x0125, 0x02,
	0x3348, 0x01E6, 0x02,
	0x3354, 0x00BE, 0x02,
	0x335A, 0x0121, 0x02,
	0x3360, 0x01EA, 0x02,
	0x3390, 0x00B8, 0x02,
	0x3396, 0x014C, 0x02,
	0x339C, 0x01E4, 0x02,
	0x33A2, 0x00C0, 0x02,
	0x33A8, 0x00D7, 0x02,
	0x33AE, 0x00C7, 0x02,
	0x33B4, 0x00DF, 0x02,
	0x33BA, 0x00CF, 0x02,
	0x33C0, 0x00DF, 0x02,
	0x33C6, 0x00C0, 0x02,
	0x33CC, 0x00C2, 0x02,
	0x33DE, 0x00C7, 0x02,
	0x33E4, 0x00DF, 0x02,
	0x33F6, 0x00C0, 0x02,
	0x33FC, 0x00C2, 0x02,
	0x3408, 0x00BA, 0x02,
	0x340E, 0x014A, 0x02,
	0x3414, 0x01E6, 0x02,
	0x3432, 0x00C0, 0x02,
	0x3438, 0x00DA, 0x02,
	0x344A, 0x00C0, 0x02,
	0x3450, 0x00C2, 0x02,
	0x345C, 0x01EA, 0x02,
	0x346E, 0x00BA, 0x02,
	0x3474, 0x00BD, 0x02,
	0x347A, 0x01E6, 0x02,
	0x3480, 0x01E9, 0x02,
	0x3486, 0x00BA, 0x02,
	0x361E, 0x00ED, 0x02,
	0x3636, 0x01FE, 0x02,
	0x3642, 0x0109, 0x02,
	0x3648, 0x00BB, 0x02,
	0x3654, 0x01E7, 0x02,
	0x365A, 0x01FE, 0x02,
	0x3666, 0x00ED, 0x02,
	0x366C, 0x000B, 0x02,
	0x3678, 0x00BB, 0x02,
	0x367E, 0x01FE, 0x02,
	0x368A, 0x00F1, 0x02,
	0x36A2, 0x01FE, 0x02,
	0x36AE, 0x010D, 0x02,
	0x36B4, 0x00BB, 0x02,
	0x36C0, 0x01E7, 0x02,
	0x36C6, 0x01FE, 0x02,
	0x36D2, 0x00F1, 0x02,
	0x36D8, 0x000B, 0x02,
	0x36E4, 0x00BB, 0x02,
	0x36EA, 0x01FE, 0x02,
	0x6028, 0x4000, 0x02,
	0x3056, 0x0100, 0x02,
	0x0B0E, 0x0000, 0x02, //PD correction off
	0x30D4, 0x0001, 0x02,
	0x0B04, 0x0101, 0x02,
	0x0B08, 0x0000, 0x02,
	0x307C, 0x0340, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1E10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x1E84, 0x02,
	0x6F12, 0x0101, 0x02,
	0x0B00, 0x0080, 0x02,
	0x3060, 0x0742, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1C7A, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x1CA2, 0x02,
	0x6F12, 0x0000, 0x02,
};

/*
 * [Mode Information]
 *	0: 4608 x 3456 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1508, MIPI Mclk(Mhz): 26
 *	1: 2304 x 1728 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1508, MIPI Mclk(Mhz): 26
 *	2: 2304 x 1296 @120, MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1508, MIPI Mclk(Mhz): 26
 */

const u32 sensor_2p7sx_setfile_A_4608x3456_30fps[] = {
	0x6028, 0x2000, 0x02,
	0x602A, 0x2230, 0x02,
	0x6F12, 0x0000, 0x02, //tail on
	0x317A, 0x0100, 0x02,
	0x317C, 0x0130, 0x02,
	0x3190, 0x0008, 0x02,
	0x0340, 0x0E1A, 0x02, //FLL
	0x0342, 0x1400, 0x02, //LLP
	0x0344, 0x0018, 0x02,
	0x0346, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x034A, 0x0D97, 0x02,
	0x034C, 0x1200, 0x02,
	0x034E, 0x0D80, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x0136, 0x1A00, 0x02, //26Mhz
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0060, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x0073, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0202, 0x0E00, 0x02,
	0x0204, 0x0020, 0x02,
	0x0216, 0x0000, 0x02,
	0x021C, 0x0000, 0x02,
	0x021E, 0x0000, 0x02,
	0x0700, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x37B0, 0x0002, 0x02,
	0x37B2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x6214, 0x7970, 0x02,
};

const u32 sensor_2p7sx_setfile_A_2304x1728_30fps[] = {
	0x6028, 0x2000, 0x02,
	0x602A, 0x2230, 0x02,
	0x6F12, 0x0000, 0x02, //tail on
	0x317A, 0x0000, 0x02,
	0x317C, 0x0130, 0x02,
	0x3190, 0x0004, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x0342, 0x1400, 0x02,
	0x0344, 0x0018, 0x02,
	0x0346, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x034A, 0x0D97, 0x02,
	0x034C, 0x0900, 0x02,
	0x034E, 0x06C0, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x0136, 0x1A00, 0x02, //26Mhz
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0060, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x0064, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0202, 0x0710, 0x02,
	0x0204, 0x0020, 0x02,
	0x0216, 0x0000, 0x02,
	0x021C, 0x0000, 0x02,
	0x021E, 0x0000, 0x02,
	0x0700, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x37B0, 0x0002, 0x02,
	0x37B2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x6214, 0x7970, 0x02,
};

const u32 sensor_2p7sx_setfile_A_2304x1296_120fps[] = {
	0x6028, 0x2000, 0x02,
	0x602A, 0x2230, 0x02,
	0x6F12, 0x0100, 0x02, //tail off
	0x317A, 0x0000, 0x02,
	0x317C, 0x0130, 0x02,
	0x3190, 0x0004, 0x02,
	0x0340, 0x0582, 0x02, //FLL
	0x0342, 0x0CE0, 0x02, //LLP
	0x0344, 0x0018, 0x02,
	0x0346, 0x01C8, 0x02,
	0x0348, 0x1217, 0x02,
	0x034A, 0x0BE7, 0x02,
	0x034C, 0x0900, 0x02,
	0x034E, 0x0510, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x0136, 0x1A00, 0x02, //26Mhz
	0x0300, 0x0005, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00A1, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x0064, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0202, 0x0578, 0x02,
	0x0204, 0x0020, 0x02,
	0x0216, 0x0000, 0x02,
	0x021C, 0x0000, 0x02,
	0x021E, 0x0000, 0x02,
	0x0700, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x37B0, 0x0000, 0x02, //HS
	0x37B2, 0x0303, 0x02, //HS
	0x3004, 0x0005, 0x02, //HS
	0x0114, 0x0300, 0x02,
	0x6214, 0x7970, 0x02,
};

const struct sensor_pll_info sensor_2p7sx_pllinfo_A_4608x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x60, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x73, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_2p7sx_pllinfo_A_2304x1728_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x60, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x64, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_2p7sx_pllinfo_A_2304x1296_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x05, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xA1, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x64, /* secnd_pll_multiplier	(0x030E) */
	0x0582, /* frame_length_lines	(0x0340) */
	0x0CE0, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_2p7sx_setfiles_A[] = {
	sensor_2p7sx_setfile_A_4608x3456_30fps,
	sensor_2p7sx_setfile_A_2304x1728_30fps,
	sensor_2p7sx_setfile_A_2304x1296_120fps,
};

static const u32 sensor_2p7sx_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_2p7sx_setfile_A_4608x3456_30fps),
	ARRAY_SIZE(sensor_2p7sx_setfile_A_2304x1728_30fps),
	ARRAY_SIZE(sensor_2p7sx_setfile_A_2304x1296_120fps),
};

static const struct sensor_pll_info *sensor_2p7sx_pllinfos_A[] = {
	&sensor_2p7sx_pllinfo_A_4608x3456_30fps,
	&sensor_2p7sx_pllinfo_A_2304x1728_30fps,
	&sensor_2p7sx_pllinfo_A_2304x1296_120fps,
};
#endif