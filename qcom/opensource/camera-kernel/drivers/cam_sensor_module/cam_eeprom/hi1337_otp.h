/* Copyright (c) 2011-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef HI1337_OTP_H
#define HI1337_OTP_H


#define SENSOR_HI1337_OTP_BANK_SELECT_REGISTER			        0x0700

struct cam_sensor_i2c_reg_array load_sensor_hi1337_otp_setfile_reg[] = {
 {0x0790,	0x0100},
 {0x2000,	0x0000},
 {0x2002,	0x0058},
 {0x2006,	0x40B2},
 {0x2008,	0xB05C},
 {0x200A,	0x8446},
 {0x200C,	0x40B2},
 {0x200E,	0xB082},
 {0x2010,	0x8450},
 {0x2012,	0x40B2},
 {0x2014,	0xB0AE},
 {0x2016,	0x84C6},
 {0x2018,	0x40B2},
 {0x201A,	0xB0FA},
 {0x201C,	0x8470},
 {0x201E,	0x40B2},
 {0x2020,	0xB120},
 {0x2022,	0x84B4},
 {0x2024,	0x40B2},
 {0x2026,	0xB15C},
 {0x2028,	0x84B0},
 {0x202A,	0x40B2},
 {0x202C,	0xB18A},
 {0x202E,	0x84B8},
 {0x2030,	0x40B2},
 {0x2032,	0xB1C0},
 {0x2034,	0x847C},
 {0x2036,	0x40B2},
 {0x2038,	0xB42E},
 {0x203A,	0x8478},
 {0x203C,	0x40B2},
 {0x203E,	0xB4C2},
 {0x2040,	0x8476},
 {0x2042,	0x40B2},
 {0x2044,	0xB53E},
 {0x2046,	0x847E},
 {0x2048,	0x40B2},
 {0x204A,	0xB64E},
 {0x204C,	0x843A},
 {0x204E,	0x40B2},
 {0x2050,	0xB830},
 {0x2052,	0x845C},
 {0x2054,	0x40B2},
 {0x2056,	0xB860},
 {0x2058,	0x845E},
 {0x205A,	0x4130},
 {0x205C,	0x1292},
 {0x205E,	0xD016},
 {0x2060,	0xB3D2},
 {0x2062,	0x0B00},
 {0x2064,	0x2002},
 {0x2066,	0xD2E2},
 {0x2068,	0x0381},
 {0x206A,	0x93C2},
 {0x206C,	0x0263},
 {0x206E,	0x2001},
 {0x2070,	0x4130},
 {0x2072,	0x422D},
 {0x2074,	0x403E},
 {0x2076,	0x879E},
 {0x2078,	0x403F},
 {0x207A,	0x192A},
 {0x207C,	0x1292},
 {0x207E,	0x843E},
 {0x2080,	0x3FF7},
 {0x2082,	0x422D},
 {0x2084,	0x403E},
 {0x2086,	0x192A},
 {0x2088,	0x403F},
 {0x208A,	0x862C},
 {0x208C,	0x1292},
 {0x208E,	0x843E},
 {0x2090,	0xB3D2},
 {0x2092,	0x0267},
 {0x2094,	0x2403},
 {0x2096,	0xD0F2},
 {0x2098,	0x0040},
 {0x209A,	0x0381},
 {0x209C,	0x90F2},
 {0x209E,	0x0010},
 {0x20A0,	0x0260},
 {0x20A2,	0x2002},
 {0x20A4,	0x1292},
 {0x20A6,	0x84BC},
 {0x20A8,	0x1292},
 {0x20AA,	0xD020},
 {0x20AC,	0x4130},
 {0x20AE,	0x1292},
 {0x20B0,	0x8470},
 {0x20B2,	0x1292},
 {0x20B4,	0x8452},
 {0x20B6,	0x0900},
 {0x20B8,	0x7118},
 {0x20BA,	0x1292},
 {0x20BC,	0x848E},
 {0x20BE,	0x0900},
 {0x20C0,	0x7112},
 {0x20C2,	0x0800},
 {0x20C4,	0x7A20},
 {0x20C6,	0x4292},
 {0x20C8,	0x86EE},
 {0x20CA,	0x7334},
 {0x20CC,	0x0F00},
 {0x20CE,	0x7304},
 {0x20D0,	0x421F},
 {0x20D2,	0x8620},
 {0x20D4,	0x1292},
 {0x20D6,	0x846E},
 {0x20D8,	0x1292},
 {0x20DA,	0x8488},
 {0x20DC,	0x0B00},
 {0x20DE,	0x7114},
 {0x20E0,	0x0002},
 {0x20E2,	0x1292},
 {0x20E4,	0x848C},
 {0x20E6,	0x1292},
 {0x20E8,	0x8454},
 {0x20EA,	0x43C2},
 {0x20EC,	0x85F6},
 {0x20EE,	0x4292},
 {0x20F0,	0x0C34},
 {0x20F2,	0x0202},
 {0x20F4,	0x1292},
 {0x20F6,	0x8444},
 {0x20F8,	0x4130},
 {0x20FA,	0x4392},
 {0x20FC,	0x7360},
 {0x20FE,	0xB3D2},
 {0x2100,	0x0B00},
 {0x2102,	0x2402},
 {0x2104,	0xC2E2},
 {0x2106,	0x0381},
 {0x2108,	0x0900},
 {0x210A,	0x732C},
 {0x210C,	0x4382},
 {0x210E,	0x7360},
 {0x2110,	0x422D},
 {0x2112,	0x403E},
 {0x2114,	0x8700},
 {0x2116,	0x403F},
 {0x2118,	0x86F8},
 {0x211A,	0x1292},
 {0x211C,	0x843E},
 {0x211E,	0x4130},
 {0x2120,	0x4F0C},
 {0x2122,	0x403F},
 {0x2124,	0x0267},
 {0x2126,	0xF0FF},
 {0x2128,	0xFFDF},
 {0x212A,	0x0000},
 {0x212C,	0xF0FF},
 {0x212E,	0xFFEF},
 {0x2130,	0x0000},
 {0x2132,	0x421D},
 {0x2134,	0x84B0},
 {0x2136,	0x403E},
 {0x2138,	0x06F9},
 {0x213A,	0x4C0F},
 {0x213C,	0x1292},
 {0x213E,	0x84AC},
 {0x2140,	0x4F4E},
 {0x2142,	0xB31E},
 {0x2144,	0x2403},
 {0x2146,	0xD0F2},
 {0x2148,	0x0020},
 {0x214A,	0x0267},
 {0x214C,	0xB32E},
 {0x214E,	0x2403},
 {0x2150,	0xD0F2},
 {0x2152,	0x0010},
 {0x2154,	0x0267},
 {0x2156,	0xC3E2},
 {0x2158,	0x0267},
 {0x215A,	0x4130},
 {0x215C,	0x120B},
 {0x215E,	0x120A},
 {0x2160,	0x403A},
 {0x2162,	0x1140},
 {0x2164,	0x1292},
 {0x2166,	0xD080},
 {0x2168,	0x430B},
 {0x216A,	0x4A0F},
 {0x216C,	0x532A},
 {0x216E,	0x1292},
 {0x2170,	0x84A4},
 {0x2172,	0x4F0E},
 {0x2174,	0x430F},
 {0x2176,	0x5E82},
 {0x2178,	0x870C},
 {0x217A,	0x6F82},
 {0x217C,	0x870E},
 {0x217E,	0x531B},
 {0x2180,	0x923B},
 {0x2182,	0x2BF3},
 {0x2184,	0x413A},
 {0x2186,	0x413B},
 {0x2188,	0x4130},
 {0x218A,	0xF0F2},
 {0x218C,	0x007F},
 {0x218E,	0x0267},
 {0x2190,	0x421D},
 {0x2192,	0x84B6},
 {0x2194,	0x403E},
 {0x2196,	0x01F9},
 {0x2198,	0x1292},
 {0x219A,	0x84AC},
 {0x219C,	0x4F4E},
 {0x219E,	0xF35F},
 {0x21A0,	0x2403},
 {0x21A2,	0xD0F2},
 {0x21A4,	0xFF80},
 {0x21A6,	0x0267},
 {0x21A8,	0xB36E},
 {0x21AA,	0x2404},
 {0x21AC,	0xD0F2},
 {0x21AE,	0x0040},
 {0x21B0,	0x0267},
 {0x21B2,	0x3C03},
 {0x21B4,	0xF0F2},
 {0x21B6,	0xFFBF},
 {0x21B8,	0x0267},
 {0x21BA,	0xC2E2},
 {0x21BC,	0x0267},
 {0x21BE,	0x4130},
 {0x21C0,	0x120B},
 {0x21C2,	0x120A},
 {0x21C4,	0x8231},
 {0x21C6,	0x430B},
 {0x21C8,	0x93C2},
 {0x21CA,	0x0C0A},
 {0x21CC,	0x2404},
 {0x21CE,	0xB3D2},
 {0x21D0,	0x0B05},
 {0x21D2,	0x2401},
 {0x21D4,	0x431B},
 {0x21D6,	0x422D},
 {0x21D8,	0x403E},
 {0x21DA,	0x192A},
 {0x21DC,	0x403F},
 {0x21DE,	0x879E},
 {0x21E0,	0x1292},
 {0x21E2,	0x843E},
 {0x21E4,	0x930B},
 {0x21E6,	0x20F4},
 {0x21E8,	0x93E2},
 {0x21EA,	0x0241},
 {0x21EC,	0x24EB},
 {0x21EE,	0x403A},
 {0x21F0,	0x0292},
 {0x21F2,	0x4AA2},
 {0x21F4,	0x0A00},
 {0x21F6,	0xB2E2},
 {0x21F8,	0x0361},
 {0x21FA,	0x2405},
 {0x21FC,	0x4A2F},
 {0x21FE,	0x1292},
 {0x2200,	0x8474},
 {0x2202,	0x4F82},
 {0x2204,	0x0A1C},
 {0x2206,	0x93C2},
 {0x2208,	0x0360},
 {0x220A,	0x34CD},
 {0x220C,	0x430C},
 {0x220E,	0x4C0F},
 {0x2210,	0x5F0F},
 {0x2212,	0x4F0D},
 {0x2214,	0x510D},
 {0x2216,	0x4F0E},
 {0x2218,	0x5A0E},
 {0x221A,	0x4E1E},
 {0x221C,	0x0002},
 {0x221E,	0x4F1F},
 {0x2220,	0x192A},
 {0x2222,	0x1202},
 {0x2224,	0xC232},
 {0x2226,	0x4303},
 {0x2228,	0x4E82},
 {0x222A,	0x0130},
 {0x222C,	0x4F82},
 {0x222E,	0x0138},
 {0x2230,	0x421E},
 {0x2232,	0x013A},
 {0x2234,	0x421F},
 {0x2236,	0x013C},
 {0x2238,	0x4132},
 {0x223A,	0x108E},
 {0x223C,	0x108F},
 {0x223E,	0xEF4E},
 {0x2240,	0xEF0E},
 {0x2242,	0xF37F},
 {0x2244,	0xC312},
 {0x2246,	0x100F},
 {0x2248,	0x100E},
 {0x224A,	0x4E8D},
 {0x224C,	0x0000},
 {0x224E,	0x531C},
 {0x2250,	0x922C},
 {0x2252,	0x2BDD},
 {0x2254,	0xB3D2},
 {0x2256,	0x1921},
 {0x2258,	0x2403},
 {0x225A,	0x410F},
 {0x225C,	0x1292},
 {0x225E,	0x847E},
 {0x2260,	0x403B},
 {0x2262,	0x843E},
 {0x2264,	0x422D},
 {0x2266,	0x410E},
 {0x2268,	0x403F},
 {0x226A,	0x1908},
 {0x226C,	0x12AB},
 {0x226E,	0x403D},
 {0x2270,	0x0005},
 {0x2272,	0x403E},
 {0x2274,	0x0292},
 {0x2276,	0x403F},
 {0x2278,	0x85EC},
 {0x227A,	0x12AB},
 {0x227C,	0x421F},
 {0x227E,	0x060E},
 {0x2280,	0x9F82},
 {0x2282,	0x8628},
 {0x2284,	0x288D},
 {0x2286,	0x9382},
 {0x2288,	0x060E},
 {0x228A,	0x248A},
 {0x228C,	0x90BA},
 {0x228E,	0x0010},
 {0x2290,	0x0000},
 {0x2292,	0x2C0B},
 {0x2294,	0x93C2},
 {0x2296,	0x85F6},
 {0x2298,	0x2008},
 {0x229A,	0x403F},
 {0x229C,	0x06A7},
 {0x229E,	0xD0FF},
 {0x22A0,	0x0007},
 {0x22A2,	0x0000},
 {0x22A4,	0xF0FF},
 {0x22A6,	0xFFF8},
 {0x22A8,	0x0000},
 {0x22AA,	0x4392},
 {0x22AC,	0x8628},
 {0x22AE,	0x403F},
 {0x22B0,	0x06A7},
 {0x22B2,	0xD2EF},
 {0x22B4,	0x0000},
 {0x22B6,	0xC2EF},
 {0x22B8,	0x0000},
 {0x22BA,	0x93C2},
 {0x22BC,	0x86E3},
 {0x22BE,	0x2068},
 {0x22C0,	0xB0F2},
 {0x22C2,	0x0040},
 {0x22C4,	0x0B05},
 {0x22C6,	0x2461},
 {0x22C8,	0xD3D2},
 {0x22CA,	0x0410},
 {0x22CC,	0xB3E2},
 {0x22CE,	0x0381},
 {0x22D0,	0x2089},
 {0x22D2,	0x90B2},
 {0x22D4,	0x0030},
 {0x22D6,	0x0A00},
 {0x22D8,	0x2C52},
 {0x22DA,	0x93C2},
 {0x22DC,	0x85F6},
 {0x22DE,	0x204F},
 {0x22E0,	0x430E},
 {0x22E2,	0x430C},
 {0x22E4,	0x4C0F},
 {0x22E6,	0x5F0F},
 {0x22E8,	0x5F0F},
 {0x22EA,	0x5F0F},
 {0x22EC,	0x4F1F},
 {0x22EE,	0x8570},
 {0x22F0,	0xF03F},
 {0x22F2,	0x07FF},
 {0x22F4,	0x903F},
 {0x22F6,	0x0400},
 {0x22F8,	0x343E},
 {0x22FA,	0x5F0E},
 {0x22FC,	0x531C},
 {0x22FE,	0x923C},
 {0x2300,	0x2BF1},
 {0x2302,	0x4E0F},
 {0x2304,	0x930E},
 {0x2306,	0x3834},
 {0x2308,	0x110F},
 {0x230A,	0x110F},
 {0x230C,	0x110F},
 {0x230E,	0x9382},
 {0x2310,	0x85F6},
 {0x2312,	0x2023},
 {0x2314,	0x5F82},
 {0x2316,	0x86E6},
 {0x2318,	0x403B},
 {0x231A,	0x86E6},
 {0x231C,	0x4B2F},
 {0x231E,	0x12B0},
 {0x2320,	0xB3FA},
 {0x2322,	0x4F8B},
 {0x2324,	0x0000},
 {0x2326,	0x430C},
 {0x2328,	0x4C0D},
 {0x232A,	0x5D0D},
 {0x232C,	0x5D0D},
 {0x232E,	0x5D0D},
 {0x2330,	0x403A},
 {0x2332,	0x86E8},
 {0x2334,	0x421B},
 {0x2336,	0x86E6},
 {0x2338,	0x4B0F},
 {0x233A,	0x8A2F},
 {0x233C,	0x4F0E},
 {0x233E,	0x4E0F},
 {0x2340,	0x5F0F},
 {0x2342,	0x7F0F},
 {0x2344,	0xE33F},
 {0x2346,	0x8E8D},
 {0x2348,	0x8570},
 {0x234A,	0x7F8D},
 {0x234C,	0x8572},
 {0x234E,	0x531C},
 {0x2350,	0x923C},
 {0x2352,	0x2BEA},
 {0x2354,	0x4B8A},
 {0x2356,	0x0000},
 {0x2358,	0x3C45},
 {0x235A,	0x9382},
 {0x235C,	0x85F8},
 {0x235E,	0x2005},
 {0x2360,	0x4382},
 {0x2362,	0x86E6},
 {0x2364,	0x4382},
 {0x2366,	0x86E8},
 {0x2368,	0x3FD7},
 {0x236A,	0x4F82},
 {0x236C,	0x86E6},
 {0x236E,	0x3FD4},
 {0x2370,	0x503F},
 {0x2372,	0x0007},
 {0x2374,	0x3FC9},
 {0x2376,	0x5F0E},
 {0x2378,	0x503E},
 {0x237A,	0xF800},
 {0x237C,	0x3FBF},
 {0x237E,	0x430F},
 {0x2380,	0x12B0},
 {0x2382,	0xB3FA},
 {0x2384,	0x4382},
 {0x2386,	0x86E6},
 {0x2388,	0x3C2D},
 {0x238A,	0xC3D2},
 {0x238C,	0x0410},
 {0x238E,	0x3F9E},
 {0x2390,	0x430D},
 {0x2392,	0x403E},
 {0x2394,	0x0050},
 {0x2396,	0x403F},
 {0x2398,	0x84D0},
 {0x239A,	0x1292},
 {0x239C,	0x844E},
 {0x239E,	0x3F90},
 {0x23A0,	0x5392},
 {0x23A2,	0x8628},
 {0x23A4,	0x3F84},
 {0x23A6,	0x403B},
 {0x23A8,	0x843E},
 {0x23AA,	0x4A0F},
 {0x23AC,	0x532F},
 {0x23AE,	0x422D},
 {0x23B0,	0x4F0E},
 {0x23B2,	0x403F},
 {0x23B4,	0x0E08},
 {0x23B6,	0x12AB},
 {0x23B8,	0x422D},
 {0x23BA,	0x403E},
 {0x23BC,	0x192A},
 {0x23BE,	0x410F},
 {0x23C0,	0x12AB},
 {0x23C2,	0x3F48},
 {0x23C4,	0x93C2},
 {0x23C6,	0x85F6},
 {0x23C8,	0x2312},
 {0x23CA,	0x403A},
 {0x23CC,	0x85EC},
 {0x23CE,	0x3F11},
 {0x23D0,	0x403D},
 {0x23D2,	0x0200},
 {0x23D4,	0x422E},
 {0x23D6,	0x403F},
 {0x23D8,	0x192A},
 {0x23DA,	0x1292},
 {0x23DC,	0x844E},
 {0x23DE,	0xC3D2},
 {0x23E0,	0x1921},
 {0x23E2,	0x3F02},
 {0x23E4,	0x422D},
 {0x23E6,	0x403E},
 {0x23E8,	0x879E},
 {0x23EA,	0x403F},
 {0x23EC,	0x192A},
 {0x23EE,	0x1292},
 {0x23F0,	0x843E},
 {0x23F2,	0x5231},
 {0x23F4,	0x413A},
 {0x23F6,	0x413B},
 {0x23F8,	0x4130},
 {0x23FA,	0x4382},
 {0x23FC,	0x052C},
 {0x23FE,	0x4F0D},
 {0x2400,	0x930D},
 {0x2402,	0x3402},
 {0x2404,	0xE33D},
 {0x2406,	0x531D},
 {0x2408,	0xF03D},
 {0x240A,	0x07F0},
 {0x240C,	0x4D0E},
 {0x240E,	0xC312},
 {0x2410,	0x100E},
 {0x2412,	0x110E},
 {0x2414,	0x110E},
 {0x2416,	0x110E},
 {0x2418,	0x930F},
 {0x241A,	0x3803},
 {0x241C,	0x4EC2},
 {0x241E,	0x052C},
 {0x2420,	0x3C04},
 {0x2422,	0x4EC2},
 {0x2424,	0x052D},
 {0x2426,	0xE33D},
 {0x2428,	0x531D},
 {0x242A,	0x4D0F},
 {0x242C,	0x4130},
 {0x242E,	0x120B},
 {0x2430,	0x120A},
 {0x2432,	0x93C2},
 {0x2434,	0x85F6},
 {0x2436,	0x2003},
 {0x2438,	0xB3D2},
 {0x243A,	0x0360},
 {0x243C,	0x2402},
 {0x243E,	0x1292},
 {0x2440,	0x847A},
 {0x2442,	0x1292},
 {0x2444,	0x847C},
 {0x2446,	0x93C2},
 {0x2448,	0x0600},
 {0x244A,	0x3803},
 {0x244C,	0x93C2},
 {0x244E,	0x0604},
 {0x2450,	0x3832},
 {0x2452,	0xD2F2},
 {0x2454,	0x0F01},
 {0x2456,	0xB3D2},
 {0x2458,	0x0363},
 {0x245A,	0x2418},
 {0x245C,	0x421F},
 {0x245E,	0x1246},
 {0x2460,	0x4F0E},
 {0x2462,	0x430F},
 {0x2464,	0x421B},
 {0x2466,	0x1244},
 {0x2468,	0x430A},
 {0x246A,	0xDA0E},
 {0x246C,	0xDB0F},
 {0x246E,	0x821E},
 {0x2470,	0x86F4},
 {0x2472,	0x721F},
 {0x2474,	0x86F6},
 {0x2476,	0x2C1B},
 {0x2478,	0x421F},
 {0x247A,	0x1240},
 {0x247C,	0xF03F},
 {0x247E,	0x01FF},
 {0x2480,	0x9F82},
 {0x2482,	0x0A00},
 {0x2484,	0x2814},
 {0x2486,	0xD0F2},
 {0x2488,	0xFF80},
 {0x248A,	0x1240},
 {0x248C,	0x93C2},
 {0x248E,	0x85F6},
 {0x2490,	0x2015},
 {0x2492,	0xB0F2},
 {0x2494,	0x0020},
 {0x2496,	0x0381},
 {0x2498,	0x2407},
 {0x249A,	0x9292},
 {0x249C,	0x862A},
 {0x249E,	0x0384},
 {0x24A0,	0x2C03},
 {0x24A2,	0xD3D2},
 {0x24A4,	0x0649},
 {0x24A6,	0x3C0A},
 {0x24A8,	0xC3D2},
 {0x24AA,	0x0649},
 {0x24AC,	0x3C07},
 {0x24AE,	0xF0F2},
 {0x24B0,	0x007F},
 {0x24B2,	0x1240},
 {0x24B4,	0x3FEB},
 {0x24B6,	0xC2F2},
 {0x24B8,	0x0F01},
 {0x24BA,	0x3FCD},
 {0x24BC,	0x413A},
 {0x24BE,	0x413B},
 {0x24C0,	0x4130},
 {0x24C2,	0x425F},
 {0x24C4,	0x86E2},
 {0x24C6,	0xD25F},
 {0x24C8,	0x86E1},
 {0x24CA,	0x4F4E},
 {0x24CC,	0x5E0E},
 {0x24CE,	0x425F},
 {0x24D0,	0x0204},
 {0x24D2,	0xF07F},
 {0x24D4,	0x0003},
 {0x24D6,	0xF37F},
 {0x24D8,	0xDF0E},
 {0x24DA,	0x40B2},
 {0x24DC,	0x8030},
 {0x24DE,	0x7A00},
 {0x24E0,	0x40B2},
 {0x24E2,	0x0100},
 {0x24E4,	0x7A02},
 {0x24E6,	0x40B2},
 {0x24E8,	0x0D04},
 {0x24EA,	0x7A0C},
 {0x24EC,	0x40B2},
 {0x24EE,	0xFFF0},
 {0x24F0,	0x7A04},
 {0x24F2,	0x93C2},
 {0x24F4,	0x86E0},
 {0x24F6,	0x240A},
 {0x24F8,	0x40B2},
 {0x24FA,	0xFFF1},
 {0x24FC,	0x7A06},
 {0x24FE,	0x40B2},
 {0x2500,	0xFFF4},
 {0x2502,	0x7A08},
 {0x2504,	0x40B2},
 {0x2506,	0xFFF5},
 {0x2508,	0x7A0A},
 {0x250A,	0x3C09},
 {0x250C,	0x40B2},
 {0x250E,	0xFFF2},
 {0x2510,	0x7A06},
 {0x2512,	0x40B2},
 {0x2514,	0xFFF4},
 {0x2516,	0x7A08},
 {0x2518,	0x40B2},
 {0x251A,	0xFFF6},
 {0x251C,	0x7A0A},
 {0x251E,	0xF03E},
 {0x2520,	0x0003},
 {0x2522,	0x5E0E},
 {0x2524,	0x425F},
 {0x2526,	0x86E2},
 {0x2528,	0xD25F},
 {0x252A,	0x86E1},
 {0x252C,	0xF31F},
 {0x252E,	0x5F0F},
 {0x2530,	0x5F0F},
 {0x2532,	0x5F0F},
 {0x2534,	0xD31E},
 {0x2536,	0xDF0E},
 {0x2538,	0x4E82},
 {0x253A,	0x7A12},
 {0x253C,	0x4130},
 {0x253E,	0x120B},
 {0x2540,	0x120A},
 {0x2542,	0x1209},
 {0x2544,	0x1208},
 {0x2546,	0x1207},
 {0x2548,	0x1206},
 {0x254A,	0x1205},
 {0x254C,	0x1204},
 {0x254E,	0x8231},
 {0x2550,	0x4F81},
 {0x2552,	0x0000},
 {0x2554,	0x4381},
 {0x2556,	0x0002},
 {0x2558,	0x4304},
 {0x255A,	0x411C},
 {0x255C,	0x0002},
 {0x255E,	0x5C0C},
 {0x2560,	0x4C0F},
 {0x2562,	0x5F0F},
 {0x2564,	0x5F0F},
 {0x2566,	0x5F0F},
 {0x2568,	0x5F0F},
 {0x256A,	0x5F0F},
 {0x256C,	0x503F},
 {0x256E,	0x1980},
 {0x2570,	0x440D},
 {0x2572,	0x5D0D},
 {0x2574,	0x4D0E},
 {0x2576,	0x5F0E},
 {0x2578,	0x4E2E},
 {0x257A,	0x4D05},
 {0x257C,	0x5505},
 {0x257E,	0x5F05},
 {0x2580,	0x4516},
 {0x2582,	0x0008},
 {0x2584,	0x4517},
 {0x2586,	0x000A},
 {0x2588,	0x460A},
 {0x258A,	0x470B},
 {0x258C,	0xF30A},
 {0x258E,	0xF32B},
 {0x2590,	0x4A81},
 {0x2592,	0x0004},
 {0x2594,	0x4B81},
 {0x2596,	0x0006},
 {0x2598,	0xB03E},
 {0x259A,	0x2000},
 {0x259C,	0x2404},
 {0x259E,	0xF03E},
 {0x25A0,	0x1FFF},
 {0x25A2,	0xE33E},
 {0x25A4,	0x531E},
 {0x25A6,	0xF317},
 {0x25A8,	0x503E},
 {0x25AA,	0x2000},
 {0x25AC,	0x4E0F},
 {0x25AE,	0x5F0F},
 {0x25B0,	0x7F0F},
 {0x25B2,	0xE33F},
 {0x25B4,	0x512C},
 {0x25B6,	0x4C28},
 {0x25B8,	0x4309},
 {0x25BA,	0x4E0A},
 {0x25BC,	0x4F0B},
 {0x25BE,	0x480C},
 {0x25C0,	0x490D},
 {0x25C2,	0x1202},
 {0x25C4,	0xC232},
 {0x25C6,	0x12B0},
 {0x25C8,	0xFFC0},
 {0x25CA,	0x4132},
 {0x25CC,	0x108E},
 {0x25CE,	0x108F},
 {0x25D0,	0xEF4E},
 {0x25D2,	0xEF0E},
 {0x25D4,	0xF37F},
 {0x25D6,	0xC312},
 {0x25D8,	0x100F},
 {0x25DA,	0x100E},
 {0x25DC,	0x4E85},
 {0x25DE,	0x0018},
 {0x25E0,	0x4F85},
 {0x25E2,	0x001A},
 {0x25E4,	0x480A},
 {0x25E6,	0x490B},
 {0x25E8,	0x460C},
 {0x25EA,	0x470D},
 {0x25EC,	0x1202},
 {0x25EE,	0xC232},
 {0x25F0,	0x12B0},
 {0x25F2,	0xFFC0},
 {0x25F4,	0x4132},
 {0x25F6,	0x4E0C},
 {0x25F8,	0x4F0D},
 {0x25FA,	0x108C},
 {0x25FC,	0x108D},
 {0x25FE,	0xED4C},
 {0x2600,	0xED0C},
 {0x2602,	0xF37D},
 {0x2604,	0xC312},
 {0x2606,	0x100D},
 {0x2608,	0x100C},
 {0x260A,	0x411E},
 {0x260C,	0x0004},
 {0x260E,	0x411F},
 {0x2610,	0x0006},
 {0x2612,	0x5E0E},
 {0x2614,	0x6F0F},
 {0x2616,	0x5E0E},
 {0x2618,	0x6F0F},
 {0x261A,	0x5E0E},
 {0x261C,	0x6F0F},
 {0x261E,	0xDE0C},
 {0x2620,	0xDF0D},
 {0x2622,	0x4C85},
 {0x2624,	0x002C},
 {0x2626,	0x4D85},
 {0x2628,	0x002E},
 {0x262A,	0x5314},
 {0x262C,	0x9224},
 {0x262E,	0x2B95},
 {0x2630,	0x5391},
 {0x2632,	0x0002},
 {0x2634,	0x92A1},
 {0x2636,	0x0002},
 {0x2638,	0x2B8F},
 {0x263A,	0x5231},
 {0x263C,	0x4134},
 {0x263E,	0x4135},
 {0x2640,	0x4136},
 {0x2642,	0x4137},
 {0x2644,	0x4138},
 {0x2646,	0x4139},
 {0x2648,	0x413A},
 {0x264A,	0x413B},
 {0x264C,	0x4130},
 {0x264E,	0x120B},
 {0x2650,	0x120A},
 {0x2652,	0x1209},
 {0x2654,	0x8031},
 {0x2656,	0x000C},
 {0x2658,	0x425F},
 {0x265A,	0x0205},
 {0x265C,	0xC312},
 {0x265E,	0x104F},
 {0x2660,	0x114F},
 {0x2662,	0x114F},
 {0x2664,	0x114F},
 {0x2666,	0x114F},
 {0x2668,	0x114F},
 {0x266A,	0xF37F},
 {0x266C,	0x4F0B},
 {0x266E,	0xF31B},
 {0x2670,	0x5B0B},
 {0x2672,	0x5B0B},
 {0x2674,	0x5B0B},
 {0x2676,	0x503B},
 {0x2678,	0xD196},
 {0x267A,	0x4219},
 {0x267C,	0x0508},
 {0x267E,	0xF039},
 {0x2680,	0x2000},
 {0x2682,	0x4F0A},
 {0x2684,	0xC312},
 {0x2686,	0x100A},
 {0x2688,	0xE31A},
 {0x268A,	0x421F},
 {0x268C,	0x86EE},
 {0x268E,	0x503F},
 {0x2690,	0xFF60},
 {0x2692,	0x903F},
 {0x2694,	0x00C8},
 {0x2696,	0x2C02},
 {0x2698,	0x403F},
 {0x269A,	0x00C8},
 {0x269C,	0x4F82},
 {0x269E,	0x7322},
 {0x26A0,	0xB3D2},
 {0x26A2,	0x0381},
 {0x26A4,	0x2009},
 {0x26A6,	0x421F},
 {0x26A8,	0x85F8},
 {0x26AA,	0xD21F},
 {0x26AC,	0x85F6},
 {0x26AE,	0x930F},
 {0x26B0,	0x24B1},
 {0x26B2,	0x40F2},
 {0x26B4,	0xFF80},
 {0x26B6,	0x0619},
 {0x26B8,	0x1292},
 {0x26BA,	0xD00A},
 {0x26BC,	0x430D},
 {0x26BE,	0x93C2},
 {0x26C0,	0x86E0},
 {0x26C2,	0x2003},
 {0x26C4,	0xB2F2},
 {0x26C6,	0x0360},
 {0x26C8,	0x2001},
 {0x26CA,	0x431D},
 {0x26CC,	0x425F},
 {0x26CE,	0x86E3},
 {0x26D0,	0xD25F},
 {0x26D2,	0x86E2},
 {0x26D4,	0xF37F},
 {0x26D6,	0x5F0F},
 {0x26D8,	0x425E},
 {0x26DA,	0x86DD},
 {0x26DC,	0xDE0F},
 {0x26DE,	0x5F0F},
 {0x26E0,	0x5B0F},
 {0x26E2,	0x4FA2},
 {0x26E4,	0x0402},
 {0x26E6,	0x930D},
 {0x26E8,	0x2007},
 {0x26EA,	0x930A},
 {0x26EC,	0x248E},
 {0x26EE,	0x4F5F},
 {0x26F0,	0x0001},
 {0x26F2,	0xF37F},
 {0x26F4,	0x4FC2},
 {0x26F6,	0x0403},
 {0x26F8,	0x93C2},
 {0x26FA,	0x86DD},
 {0x26FC,	0x2483},
 {0x26FE,	0xC2F2},
 {0x2700,	0x0400},
 {0x2702,	0xB2E2},
 {0x2704,	0x0265},
 {0x2706,	0x2407},
 {0x2708,	0x421F},
 {0x270A,	0x0508},
 {0x270C,	0xF03F},
 {0x270E,	0xFFDF},
 {0x2710,	0xD90F},
 {0x2712,	0x4F82},
 {0x2714,	0x0508},
 {0x2716,	0xB3D2},
 {0x2718,	0x0383},
 {0x271A,	0x2484},
 {0x271C,	0x403F},
 {0x271E,	0x0508},
 {0x2720,	0x4FB1},
 {0x2722,	0x0000},
 {0x2724,	0x4FB1},
 {0x2726,	0x0002},
 {0x2728,	0x4FB1},
 {0x272A,	0x0004},
 {0x272C,	0x403F},
 {0x272E,	0x0500},
 {0x2730,	0x4FB1},
 {0x2732,	0x0006},
 {0x2734,	0x4FB1},
 {0x2736,	0x0008},
 {0x2738,	0x4FB1},
 {0x273A,	0x000A},
 {0x273C,	0xB3E2},
 {0x273E,	0x0383},
 {0x2740,	0x2412},
 {0x2742,	0xC2E1},
 {0x2744,	0x0002},
 {0x2746,	0xB2E2},
 {0x2748,	0x0383},
 {0x274A,	0x434F},
 {0x274C,	0x634F},
 {0x274E,	0xF37F},
 {0x2750,	0x4F4E},
 {0x2752,	0x114E},
 {0x2754,	0x434E},
 {0x2756,	0x104E},
 {0x2758,	0x415F},
 {0x275A,	0x0007},
 {0x275C,	0xF07F},
 {0x275E,	0x007F},
 {0x2760,	0xDE4F},
 {0x2762,	0x4FC1},
 {0x2764,	0x0007},
 {0x2766,	0xB2F2},
 {0x2768,	0x0383},
 {0x276A,	0x2415},
 {0x276C,	0xF0F1},
 {0x276E,	0xFFBF},
 {0x2770,	0x0000},
 {0x2772,	0xB0F2},
 {0x2774,	0x0010},
 {0x2776,	0x0383},
 {0x2778,	0x434E},
 {0x277A,	0x634E},
 {0x277C,	0x5E4E},
 {0x277E,	0x5E4E},
 {0x2780,	0x5E4E},
 {0x2782,	0x5E4E},
 {0x2784,	0x5E4E},
 {0x2786,	0x5E4E},
 {0x2788,	0x415F},
 {0x278A,	0x0006},
 {0x278C,	0xF07F},
 {0x278E,	0xFFBF},
 {0x2790,	0xDE4F},
 {0x2792,	0x4FC1},
 {0x2794,	0x0006},
 {0x2796,	0xB0F2},
 {0x2798,	0x0020},
 {0x279A,	0x0383},
 {0x279C,	0x2410},
 {0x279E,	0xF0F1},
 {0x27A0,	0xFFDF},
 {0x27A2,	0x0002},
 {0x27A4,	0xB0F2},
 {0x27A6,	0x0040},
 {0x27A8,	0x0383},
 {0x27AA,	0x434E},
 {0x27AC,	0x634E},
 {0x27AE,	0x5E4E},
 {0x27B0,	0x5E4E},
 {0x27B2,	0x415F},
 {0x27B4,	0x0008},
 {0x27B6,	0xC26F},
 {0x27B8,	0xDE4F},
 {0x27BA,	0x4FC1},
 {0x27BC,	0x0008},
 {0x27BE,	0x93C2},
 {0x27C0,	0x0383},
 {0x27C2,	0x3412},
 {0x27C4,	0xF0F1},
 {0x27C6,	0xFFDF},
 {0x27C8,	0x0000},
 {0x27CA,	0x425E},
 {0x27CC,	0x0382},
 {0x27CE,	0xF35E},
 {0x27D0,	0x5E4E},
 {0x27D2,	0x5E4E},
 {0x27D4,	0x5E4E},
 {0x27D6,	0x5E4E},
 {0x27D8,	0x5E4E},
 {0x27DA,	0x415F},
 {0x27DC,	0x0006},
 {0x27DE,	0xF07F},
 {0x27E0,	0xFFDF},
 {0x27E2,	0xDE4F},
 {0x27E4,	0x4FC1},
 {0x27E6,	0x0006},
 {0x27E8,	0x410F},
 {0x27EA,	0x4FB2},
 {0x27EC,	0x0508},
 {0x27EE,	0x4FB2},
 {0x27F0,	0x050A},
 {0x27F2,	0x4FB2},
 {0x27F4,	0x050C},
 {0x27F6,	0x4FB2},
 {0x27F8,	0x0500},
 {0x27FA,	0x4FB2},
 {0x27FC,	0x0502},
 {0x27FE,	0x4FB2},
 {0x2800,	0x0504},
 {0x2802,	0x3C10},
 {0x2804,	0xD2F2},
 {0x2806,	0x0400},
 {0x2808,	0x3F7C},
 {0x280A,	0x4F6F},
 {0x280C,	0xF37F},
 {0x280E,	0x4FC2},
 {0x2810,	0x0402},
 {0x2812,	0x3F72},
 {0x2814,	0x90F2},
 {0x2816,	0x0011},
 {0x2818,	0x0619},
 {0x281A,	0x2B4E},
 {0x281C,	0x50F2},
 {0x281E,	0xFFF0},
 {0x2820,	0x0619},
 {0x2822,	0x3F4A},
 {0x2824,	0x5031},
 {0x2826,	0x000C},
 {0x2828,	0x4139},
 {0x282A,	0x413A},
 {0x282C,	0x413B},
 {0x282E,	0x4130},
 {0x2830,	0x0900},
 {0x2832,	0x7312},
 {0x2834,	0x421F},
 {0x2836,	0x0A08},
 {0x2838,	0xF03F},
 {0x283A,	0xF7FF},
 {0x283C,	0x4F82},
 {0x283E,	0x0A88},
 {0x2840,	0x0900},
 {0x2842,	0x7312},
 {0x2844,	0x421F},
 {0x2846,	0x0A0E},
 {0x2848,	0xF03F},
 {0x284A,	0x7FFF},
 {0x284C,	0x4F82},
 {0x284E,	0x0A8E},
 {0x2850,	0x0900},
 {0x2852,	0x7312},
 {0x2854,	0x421F},
 {0x2856,	0x0A1E},
 {0x2858,	0xC31F},
 {0x285A,	0x4F82},
 {0x285C,	0x0A9E},
 {0x285E,	0x4130},
 {0x2860,	0x4292},
 {0x2862,	0x0A08},
 {0x2864,	0x0A88},
 {0x2866,	0x0900},
 {0x2868,	0x7312},
 {0x286A,	0x4292},
 {0x286C,	0x0A0E},
 {0x286E,	0x0A8E},
 {0x2870,	0x0900},
 {0x2872,	0x7312},
 {0x2874,	0x4292},
 {0x2876,	0x0A1E},
 {0x2878,	0x0A9E},
 {0x287A,	0x4130},
 {0x287C,	0x7400},
 {0x287E,	0x8058},
 {0x2880,	0x1807},
 {0x2882,	0x00E0},
 {0x2884,	0x7002},
 {0x2886,	0x17C7},
 {0x2888,	0x0045},
 {0x288A,	0x0006},
 {0x288C,	0x17CC},
 {0x288E,	0x0015},
 {0x2890,	0x1512},
 {0x2892,	0x216F},
 {0x2894,	0x005B},
 {0x2896,	0x005D},
 {0x2898,	0x00DE},
 {0x289A,	0x00DD},
 {0x289C,	0x5023},
 {0x289E,	0x00DE},
 {0x28A0,	0x005B},
 {0x28A2,	0x0410},
 {0x28A4,	0x0091},
 {0x28A6,	0x0015},
 {0x28A8,	0x0040},
 {0x28AA,	0x7023},
 {0x28AC,	0x1653},
 {0x28AE,	0x0156},
 {0x28B0,	0x0001},
 {0x28B2,	0x2081},
 {0x28B4,	0x700E},
 {0x28B6,	0x2F99},
 {0x28B8,	0x005C},
 {0x28BA,	0x0000},
 {0x28BC,	0x5040},
 {0x28BE,	0x0045},
 {0x28C0,	0x213A},
 {0x28C2,	0x0303},
 {0x28C4,	0x0148},
 {0x28C6,	0x0049},
 {0x28C8,	0x0045},
 {0x28CA,	0x0046},
 {0x28CC,	0x081D},
 {0x28CE,	0x00DE},
 {0x28D0,	0x00DD},
 {0x28D2,	0x00DC},
 {0x28D4,	0x00DE},
 {0x28D6,	0x04D6},
 {0x28D8,	0x2014},
 {0x28DA,	0x2081},
 {0x28DC,	0x704E},
 {0x28DE,	0x2F99},
 {0x28E0,	0x005C},
 {0x28E2,	0x0002},
 {0x28E4,	0x5060},
 {0x28E6,	0x31C0},
 {0x28E8,	0x2122},
 {0x28EA,	0x7800},
 {0x28EC,	0xC08C},
 {0x28EE,	0x0001},
 {0x28F0,	0x9038},
 {0x28F2,	0x59F7},
 {0x28F4,	0x907A},
 {0x28F6,	0x03D8},
 {0x28F8,	0x8D90},
 {0x28FA,	0x01C0},
 {0x28FC,	0x7400},
 {0x28FE,	0x2002},
 {0x2900,	0x70DF},
 {0x2902,	0x3F40},
 {0x2904,	0x0240},
 {0x2906,	0x7800},
 {0x2908,	0x0021},
 {0x290A,	0x7400},
 {0x290C,	0x0001},
 {0x290E,	0x70DF},
 {0x2910,	0x3F5F},
 {0x2912,	0x7012},
 {0x2914,	0x2F01},
 {0x2916,	0x7800},
 {0x2918,	0x7400},
 {0x291A,	0x2004},
 {0x291C,	0x70DF},
 {0x291E,	0x3F20},
 {0x2920,	0x0240},
 {0x2922,	0x7800},
 {0x2924,	0x0041},
 {0x2926,	0x7400},
 {0x2928,	0x2008},
 {0x292A,	0x70DF},
 {0x292C,	0x3F20},
 {0x292E,	0x0240},
 {0x2930,	0x7800},
 {0x2932,	0x0041},
 {0x2934,	0x7400},
 {0x2936,	0x0004},
 {0x2938,	0x70DF},
 {0x293A,	0x3F5F},
 {0x293C,	0x7012},
 {0x293E,	0x2F01},
 {0x2940,	0x7800},
 {0x2942,	0x7400},
 {0x2944,	0x2010},
 {0x2946,	0x70DF},
 {0x2948,	0x3F40},
 {0x294A,	0x0240},
 {0x294C,	0x7800},
 {0x294E,	0x0000},
 {0x2950,	0xB87C},
 {0x2952,	0x0000},
 {0x2954,	0xB87C},
 {0x2956,	0xB8EC},
 {0x2958,	0x0002},
 {0x295A,	0x0063},
 {0x295C,	0xB918},
 {0x295E,	0x0063},
 {0x2960,	0xB8FC},
 {0x2962,	0x0063},
 {0x2964,	0xB926},
 {0x2966,	0x0063},
 {0x2968,	0xB934},
 {0x296A,	0xB908},
 {0x296C,	0x0004},
 {0x296E,	0x0063},
 {0x2970,	0xB926},
 {0x2972,	0x0063},
 {0x2974,	0xB942},
 {0x2976,	0x0063},
 {0x2978,	0xB918},
 {0x297A,	0x0063},
 {0x297C,	0xB90A},
 {0x297E,	0xB908},
 {0x2980,	0x0004},
 {0x2982,	0x0066},
 {0x2984,	0x0067},
 {0x2986,	0x00AF},
 {0x2988,	0x01CF},
 {0x298A,	0x0087},
 {0x298C,	0x0083},
 {0x298E,	0x011B},
 {0x2990,	0x035A},
 {0x2992,	0x00FA},
 {0x2994,	0x00F2},
 {0x2996,	0x00A6},
 {0x2998,	0x00A4},
 {0x299A,	0xFFFF},
 {0x299C,	0x002D},
 {0x299E,	0x005A},
 {0x29A0,	0x0000},
 {0x29A2,	0x0000},
 {0x29A4,	0xB982},
 {0x29A6,	0xB94E},
 {0x29A8,	0xB99C},
 {0x29AA,	0xB95A},
 {0x29AC,	0xB96E},
 {0x29AE,	0xB95A},
 {0x29B0,	0xB96E},
 {0x29B2,	0xB95A},
 {0x29B4,	0xB96E},
 {0x29B6,	0xB95A},
 {0x29B8,	0xB96E},
 {0x29BA,	0xB95A},
 {0x29BC,	0xB96E},
 {0x29BE,	0xB95A},
 {0x29C0,	0xB96E},
 {0x29C2,	0xB95A},
 {0x29C4,	0xB96E},
 {0x29C6,	0xB95A},
 {0x29C8,	0xB96E},
 {0x29CA,	0xB95A},
 {0x29CC,	0xB96E},
 {0x29CE,	0xB95A},
 {0x29D0,	0xB96E},
 {0x29D2,	0xB95A},
 {0x29D4,	0xB96E},
 {0x29D6,	0xB95A},
 {0x29D8,	0xB96E},
 {0x29DA,	0xB95A},
 {0x29DC,	0xB96E},
 {0x29DE,	0xB95A},
 {0x29E0,	0xB96E},
 {0x29E2,	0xB95A},
 {0x29E4,	0xB96E},
 {0x29E6,	0xB95A},
 {0x29E8,	0xB96E},
 {0x3710,	0x871E},
 {0x3712,	0xB9CA},
 {0x3714,	0xB9A8},
 {0x3716,	0xD140},
 {0x3718,	0xB9AA},
 {0x371A,	0xB9A6},
 {0x371C,	0x0000},
 {0x371E,	0x0040},
 {0x3720,	0x0040},
 {0x3722,	0x0040},
 {0x3724,	0x0040},
 {0x3726,	0x0044},
 {0x3728,	0x0049},
 {0x372A,	0x004D},
 {0x372C,	0x0052},
 {0x372E,	0x0057},
 {0x3730,	0x005C},
 {0x3732,	0x0062},
 {0x3734,	0x0068},
 {0x3736,	0x006E},
 {0x3738,	0x0074},
 {0x373A,	0x007A},
 {0x373C,	0x0080},
 {0x373E,	0x0087},
 {0x3740,	0x008E},
 {0x3742,	0x0095},
 {0x3744,	0x009C},
 {0x3746,	0x00A4},
 {0x3748,	0x00AB},
 {0x374A,	0x00B2},
 {0x374C,	0x00BA},
 {0x374E,	0x00C1},
 {0x3750,	0x00C7},
 {0x3752,	0x00CD},
 {0x3754,	0x00D4},
 {0x3756,	0x00DA},
 {0x3758,	0x00E0},
 {0x375A,	0x00E6},
 {0x375C,	0x00E6},
 {0x375E,	0x0000},
 {0x3760,	0x0000},
 {0x3762,	0x0000},
 {0x3764,	0x0000},
 {0x3766,	0x0000},
 {0x3768,	0x0000},
 {0x376A,	0x0000},
 {0x376C,	0x0000},
 {0x376E,	0x0000},
 {0x3770,	0x0000},
 {0x3772,	0x0000},
 {0x3774,	0x0000},
 {0x3776,	0x0000},
 {0x3778,	0x0000},
 {0x377A,	0x0000},
 {0x377C,	0x0000},
 {0x377E,	0x0000},
 {0x3780,	0x0000},
 {0x3782,	0x0000},
 {0x3784,	0x0000},
 {0x3786,	0x0000},
 {0x3788,	0x0000},
 {0x378A,	0x0000},
 {0x378C,	0x0000},
 {0x378E,	0x0000},
 {0x3790,	0x0000},
 {0x3792,	0x0000},
 {0x3794,	0x0000},
 {0x3796,	0x0000},
 {0x3798,	0x0000},
 {0x379A,	0x0000},
 {0x379C,	0x0000},
 {0x026A,	0xFFFF},
 {0x026C,	0x00FF},
 {0x026E,	0x0000},
 {0x0360,	0x1E8E},
 {0x040E,	0x01EB},
 {0x0600,	0x1130},
 {0x0602,	0x3112},
 {0x0604,	0x8048},
 {0x0606,	0x00E9},
 {0x0676,	0x07FF},
 {0x0678,	0x0002},
 {0x067A,	0x0505},
 {0x067C,	0x0505},
 {0x06A8,	0x0240},
 {0x06AA,	0x00CA},
 {0x06AC,	0x0041},
 {0x06B4,	0x3FFF},
 {0x06DE,	0x0505},
 {0x06E0,	0x0505},
 {0x06E2,	0xFF00},
 {0x06E4,	0x8369},
 {0x06E6,	0x8369},
 {0x06E8,	0x8369},
 {0x06EA,	0x8369},
 {0x052A,	0x0000},
 {0x052C,	0x0000},
 {0x1102,	0x0008},
 {0x0A04,	0xB4C5},
 {0x0A06,	0xC400},
 {0x0A08,	0x988A},
 {0x0A0A,	0xF386},
 {0x0A0E,	0xEEC0},
 {0x0A12,	0x0000},
 {0x0A18,	0x0010},
 {0x0A1E,	0x000F},
 {0x0A20,	0x0015},
 {0x0C00,	0x0021},
 {0x0C16,	0x0002},
 {0x0708,	0x6FC0},
 {0x070C,	0x0000},
 {0x0780,	0x010F},
 {0x120C,	0x1428},
 {0x121A,	0x0000},
 {0x121C,	0x1896},
 {0x121E,	0x0032},
 {0x1220,	0x0000},
 {0x1222,	0x96FF},
 {0x1244,	0x0000},
 {0x105C,	0x0F0B},
 {0x1958,	0x003F},
 {0x195A,	0x004C},
 {0x195C,	0x0097},
 {0x195E,	0x0221},
 {0x1960,	0x03FF},
 {0x1980,	0x007D},
 {0x1982,	0x0028},
 {0x1984,	0x2018},
 {0x1986,	0x0010},
 {0x1988,	0x0000},
 {0x198A,	0x0000},
 {0x198C,	0x0428},
 {0x198E,	0x0000},
 {0x1990,	0x1B33},
 {0x1992,	0x0000},
 {0x1994,	0x3000},
 {0x1996,	0x0002},
 {0x1962,	0x003F},
 {0x1964,	0x004C},
 {0x1966,	0x0097},
 {0x1968,	0x0221},
 {0x196A,	0x03FF},
 {0x19C0,	0x007D},
 {0x19C2,	0x0028},
 {0x19C4,	0x2018},
 {0x19C6,	0x0010},
 {0x19C8,	0x0000},
 {0x19CA,	0x0000},
 {0x19CC,	0x0428},
 {0x19CE,	0x0000},
 {0x19D0,	0x1B33},
 {0x19D2,	0x0000},
 {0x19D4,	0x3000},
 {0x19D6,	0x0002},
 {0x196C,	0x003F},
 {0x196E,	0x004C},
 {0x1970,	0x0097},
 {0x1972,	0x0221},
 {0x1974,	0x03FF},
 {0x1A00,	0x007D},
 {0x1A02,	0x0028},
 {0x1A04,	0x2018},
 {0x1A06,	0x0010},
 {0x1A08,	0x0000},
 {0x1A0A,	0x0000},
 {0x1A0C,	0x0428},
 {0x1A0E,	0x0000},
 {0x1A10,	0x1B33},
 {0x1A12,	0x0000},
 {0x1A14,	0x3000},
 {0x1A16,	0x0002},
 {0x1976,	0x003F},
 {0x1978,	0x004C},
 {0x197A,	0x0097},
 {0x197C,	0x0221},
 {0x197E,	0x03FF},
 {0x1A40,	0x007D},
 {0x1A42,	0x0028},
 {0x1A44,	0x2018},
 {0x1A46,	0x0010},
 {0x1A48,	0x0000},
 {0x1A4A,	0x0000},
 {0x1A4C,	0x0428},
 {0x1A4E,	0x0000},
 {0x1A50,	0x1B33},
 {0x1A52,	0x0000},
 {0x1A54,	0x3000},
 {0x1A56,	0x0002},
 {0x027E,	0x0100},
 {0x0204,	0x0000},
 {0x0206,	0x02D0},
 {0x020A,	0x0CF6},
 {0x020E,	0x0CFA},
 {0x0214,	0x0200},
 {0x0216,	0x0200},
 {0x0218,	0x0200},
 {0x021A,	0x0200},
 {0x0406,	0x0008},
 {0x0408,	0x1084},
 {0x0224,	0x002E},
 {0x022A,	0x0017},
 {0x022C,	0x0E1F},
 {0x022E,	0x0C61},
 {0x0234,	0x1111},
 {0x0236,	0x1111},
 {0x0238,	0x1111},
 {0x023A,	0x1111},
 {0x0248,	0x0100},
 {0x0250,	0x0000},
 {0x0252,	0x0006},
 {0x0254,	0x0000},
 {0x0256,	0x0000},
 {0x0258,	0x0000},
 {0x025A,	0x0000},
 {0x025C,	0x0000},
 {0x025E,	0x0202},
 {0x0440,	0x0031},
 {0x0F00,	0x0000},
 {0x0F04,	0x0070},
 {0x0B02,	0x0000},
 {0x0B04,	0x00DC},
 {0x0B12,	0x0FA0},
 {0x0B14,	0x0BB8},
 {0x0B20,	0x0100},
 {0x1100,	0x1100},
 {0x1108,	0x0202},
 {0x1118,	0x0000},
 {0x0A10,	0xB040},
 {0x0C14,	0x0070},
 {0x0C18,	0x0FA0},
 {0x0C1A,	0x0BB8},
 {0x0730,	0x0001},
 {0x0732,	0x0000},
 {0x0734,	0x0300},
 {0x0736,	0x005A},
 {0x0738,	0x0002},
 {0x073C,	0x0700},
 {0x0740,	0x0000},
 {0x0742,	0x0000},
 {0x0744,	0x0300},
 {0x0746,	0x00DC},
 {0x0748,	0x0002},
 {0x074A,	0x0900},
 {0x074C,	0x0000},
 {0x074E,	0x0100},
 {0x0750,	0x0000},
 {0x1200,	0x0526},
 {0x1202,	0x0A00},
 {0x120E,	0xF027},
 {0x1210,	0x8027},
 {0x1000,	0x0300},
 {0x1002,	0xC311},
 {0x1004,	0x2BAB},
 {0x1010,	0x0100},
 {0x1012,	0x019C},
 {0x1014,	0x0076},
 {0x1016,	0x0076},
 {0x101A,	0x0076},
 {0x1020,	0xC10B},
 {0x1022,	0x0B34},
 {0x1024,	0x050D},
 {0x1026,	0x1311},
 {0x1028,	0x1B0E},
 {0x102A,	0x130A},
 {0x102C,	0x2200},
 {0x1038,	0x1100},
 {0x103E,	0x0001},
 {0x1042,	0x0108},
 {0x1044,	0x00F8},
 {0x1046,	0x0004},
 {0x1048,	0x00F8},
 {0x1066,	0x0100},
 {0x1600,	0xE000},
 {0x1608,	0x0080},
 {0x160A,	0x0F80},
 {0x160C,	0x004A},
 {0x160E,	0x0BA0},
 {0x0268,	0x00EB},
 {0x0F06,	0x003E},
 {0x1246,	0x012C},
 {0x0B00,	0x0100},
 {0x0B00, 0x0000},
 {0x027E, 0x0000},
 {0x0700, 0x0117},
 {0x0700, 0x0017},
 {0x0790, 0x0100},
 {0x2000, 0x0000},
 {0x2002, 0x0058},
 {0x2006, 0x4130},
 {0x2008, 0x403D},
 {0x200A, 0x004D},
 {0x200C, 0x403E},
 {0x200E, 0xD000},
 {0x2010, 0x403F},
 {0x2012, 0x8430},
 {0x2014, 0x12B0},
 {0x2016, 0xD6F4},
 {0x2018, 0x1292},
 {0x201A, 0x84BE},
 {0x201C, 0x40B2},
 {0x201E, 0x1FFF},
 {0x2020, 0x8708},
 {0x2022, 0x93C2},
 {0x2024, 0x0263},
 {0x2026, 0x2005},
 {0x2028, 0xB3E2},
 {0x202A, 0x0360},
 {0x202C, 0x2402},
 {0x202E, 0x1292},
 {0x2030, 0x84A0},
 {0x2032, 0x1292},
 {0x2034, 0x8446},
 {0x2036, 0x40B2},
 {0x2038, 0xF518},
 {0x203A, 0x8494},
 {0x203C, 0x90F2},
 {0x203E, 0x0010},
 {0x2040, 0x0260},
 {0x2042, 0x23FC},
 {0x2044, 0x1292},
 {0x2046, 0x84BC},
 {0x2048, 0x3FF9},
 {0x204A, 0x4130},
 {0x204C, 0xB008},
 {0x036A, 0xB008},
 {0x0708, 0xEF82},
 {0x070C, 0x0000},
 {0x0732, 0x0000},
 {0x0734, 0x0300},
 {0x0736, 0x0064},
 {0x0738, 0x0003},
 {0x0266, 0x0000},
 {0x0360, 0x2C8E},
 {0x027E, 0x0100},
 {0x0B00, 0x0000},
};

struct cam_sensor_i2c_reg_array hi1337_otp_init_reg1[] = {
	{0x0B00, 0x00, 0},
};

struct cam_sensor_i2c_reg_array hi1337_otp_init_reg2[] = {
	{0x0260, 0x10, 0},
	{0x030F, 0x14, 0},
	{0x0B00, 0x01, 0},
};

struct cam_sensor_i2c_reg_array hi1337_otp_finish_reg1[] = {
	{0x0B00, 0x00, 0},
};

struct cam_sensor_i2c_reg_array hi1337_otp_finish_reg2[] = {
	{0x0260, 0x00, 0},
	{0x0B00, 0x01, 0},
};

#endif /* HI1337_OTP_H */