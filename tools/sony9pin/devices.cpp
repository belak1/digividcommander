/*  Copyright (c) MIPoPS. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-3-Clause license that can
 *  be found in the LICENSE.txt file in the same directory.
 */


#include <utility>
#include <string>
#include <vector>
#include <map>

std::map<uint16_t, std::pair<std::string, std::vector<std::string>>> devices = {
  { 0x0001, { "SONY", { "BVH-2000" } } },
  { 0x0010, { "SONY", { "BVH-2000" } } },
  { 0x0011, { "SONY", { "BVH-2000" } } },
  { 0x0014, { "SONY", { "BVH-2000P" } } },
  { 0x0015, { "SONY", { "BVH-2000P" } } },
  { 0x0018, { "SONY", { "BVH-2180" } } },
  { 0x0019, { "SONY", { "BVH-2180" } } },
  { 0x001c, { "SONY", { "BVH-2180P" } } },
  { 0x001d, { "SONY", { "BVH-2180P" } } },
  { 0x0020, { "SONY", { "BVH-2500" } } },
  { 0x0024, { "SONY", { "BVH-2500P" } } },
  { 0x0030, { "SONY", { "BVH-2700" } } },
  { 0x0040, { "SONY", { "BVH-2800" } } },
  { 0x0044, { "SONY", { "BVH-2800P" } } },
  { 0x0048, { "SONY", { "BVH-2830" } } },
  { 0x004c, { "SONY", { "BVH-2800P" } } },
  { 0x0050, { "SONY", { "BVH-3000" } } },
  { 0x0052, { "SONY", { "BVH-3000P" } } },
  { 0x0054, { "SONY", { "BVH-3000P" } } },
  { 0x0060, { "SONY", { "BVH-3100" } } },
  { 0x0062, { "SONY", { "BVH-3100P" } } },
  { 0x0064, { "SONY", { "BVH-3100P" } } },
  { 0x0070, { "Studer", { "D820" } } },
  { 0x0071, { "Studer", { "TLS1" } } },
  { 0x0072, { "Studer", { "A807" } } },
  { 0x0073, { "Studer", { "A812" } } },
  { 0x0074, { "Studer", { "A820" } } },
  { 0x0075, { "Studer", { "A820" } } },
  { 0x0081, { "Studer", { "A820" } } },
  { 0x0090, { "CB Electronics", { "Dubber" } } },
  { 0x0091, { "CB Electronics", { "AK ES1" } } },
  { 0x0092, { "CB Electronics", { "VS-1" } } },
  { 0x0093, { "", { "TL Lynx" } } },
  { 0x0094, { "", { "MRP-16" } } },
  { 0x0095, { "", { "DCT-700" } } },
  { 0x0096, { "AMP", { "VPR-3" } } },
  { 0x0097, { "AMP", { "VPR-6" } } },
  { 0x0098, { "AMP", { "XVR80" } } },
  { 0x0099, { "AMP", { "VPR-300" } } },
  { 0x009a, { "AMP", { "VPR-80" } } },
  { 0x00a0, { "CB Electronics", { "P2MMC" } } },
  { 0x00a1, { "CB Electronics", { "TG-2" } } },
  { 0x00a2, { "", { "PionerDVD" } } },
  { 0x00b0, { "CB Electronics", { "SR-GEN" } } },
  { 0x00b1, { "CB Electronics", { "SR-RDR" } } },
  { 0x00e0, { "SONY", { "HDD-1000" } } },
  { 0x00f0, { "SONY", { "HDV-1000" } } },
  { 0x00ff, { "SONY", { "DMR-2000" } } },
  { 0x1000, { "SONY", { "BVU-800" } } },
  { 0x1001, { "SONY", { "BVU-820" } } },
  { 0x1002, { "SONY", { "BVU-850" } } },
  { 0x1003, { "SONY", { "BVU-870" } } },
  { 0x1012, { "Digital Audio Research", { "OMR-8" } } },
  { 0x1018, { "SONY", { "BVU-900" } } },
  { 0x1019, { "SONY", { "BVU-920" } } },
  { 0x101c, { "SONY", { "BVU-950" } } },
  { 0x1020, { "SONY", { "SVO-5800" } } },
  { 0x1021, { "SONY", { "SVP-5600" } } },
  { 0x1028, { "SONY", { "SVP-9020" } } },
  { 0x102c, { "SONY", { "SVO-9620" } } },
  { 0x1034, { "Digital Audio Research", { "DAR-OMR8" } } },
  { 0x1048, { "SONY", { "VO-9800" } } },
  { 0x104c, { "SONY", { "VO-9850" } } },
  { 0x1080, { "SONY", { "BVU-900" } } },
  { 0x10e0, { "Nagra", { "Nagra-T" } } },
  { 0x10e1, { "Nagra", { "Nagra-D" } } },
  { 0x10f0, { "SONY", { "VO-5850" } } },
  { 0x10ff, { "SONY", { "DMR-2000" } } },
  { 0x2000, { "SONY", { "BVW-10" } } },
  { 0x2001, { "SONY", { "BVW-40" } } },
  { 0x2002, { "SONY", { "BVW-11" } } },
  { 0x2003, { "SONY", { "BVW-15" } } },
  { 0x2010, { "SONY", { "BVW-35" } } },
  { 0x2018, { "SONY", { "BVW-35P" } } },
  { 0x2020, { "SONY", { "BVW-60" } } },
  { 0x2021, { "SONY", { "BVW-65" } } },
  { 0x2022, { "SONY", { "BVW-95" } } },
  { 0x2023, { "SONY", { "BVW-96" } } },
  { 0x2024, { "SONY", { "BVW-70" } } },
  { 0x2025, { "SONY", { "BVW-75" } } },
  { 0x2026, { "SONY", { "BVW-85P" } } },
  { 0x2029, { "SONY", { "BVW-65P" } } },
  { 0x202a, { "SONY", { "BVW-95P" } } },
  { 0x202c, { "SONY", { "BVW-70S" } } },
  { 0x202d, { "SONY", { "BVW-75P" } } },
  { 0x202f, { "SONY", { "WBR-700" } } },
  { 0x2030, { "SONY", { "BVW-50" } } },
  { 0x2040, { "SONY", { "PVW-2600" } } },
  { 0x2041, { "SONY", { "PVW-2800" } } },
  { 0x2042, { "SONY", { "PVW-2650" } } },
  { 0x2045, { "SONY", { "BVW-D265" } } },
  { 0x2046, { "SONY", { "BVW-D75" } } },
  { 0x2047, { "SONY", { "BVW-9000" } } },
  { 0x2050, { "SONY", { "UVW-1600" } } },
  { 0x2051, { "SONY", { "UVW-1800" } } },
  { 0x2052, { "SONY", { "UVW-1700G" } } },
  { 0x20a1, { "SONY", { "SRW-5500" } } },
  { 0x20e0, { "SONY", { "HDW-500" } } },
  { 0x20f0, { "SONY", { "HDV-10" } } },
  { 0x20f9, { "SONY", { "HDV-500" } } },
  { 0x3000, { "SONY", { "DVR-1000" } } },
  { 0x3003, { "", { "OMX-24" } } },
  { 0x3010, { "SONY", { "DVR-2000" } } },
  { 0x3011, { "SONY", { "DVR-2100" } } },
  { 0x4000, { "SONY", { "DVR-10" } } },
  { 0x4002, { "SONY", { "DVR-C10" } } },
  { 0x4003, { "SONY", { "DVR-18" } } },
  { 0x4010, { "SONY", { "DVR-2" } } },
  { 0x4020, { "SONY", { "DVR-20" } } },
  { 0x4021, { "SONY", { "DVR-C10" } } },
  { 0x4022, { "SONY", { "DVR-28" } } },
  { 0x4023, { "SONY", { "DVR-P20" } } },
  { 0x5000, { "SONY", { "APR-5003V" } } },
  { 0x5024, { "SONY", { "APR-24" } } },
  { 0x5033, { "Panasonic", { "AJD-750" } } },
  { 0x6002, { "SONY", { "PCM-3402" } } },
  { 0x6003, { "SONY", { "PCM-3324S" } } },
  { 0x6005, { "SONY", { "3348 HRV" } } },
  { 0x6007, { "SONY", { "3348 HR" } } },
  { 0x7000, { "SONY", { "PCM-7030" } } },
  { 0x7001, { "SONY", { "PCM-7050" } } },
  { 0x7002, { "SONY", { "PCM-7010" } } },
  { 0x7003, { "SONY", { "PCM-800" } } },
  { 0x7004, { "SONY", { "PCM-7040" } } },
  { 0x70a2, { "", { "A1-2" } } },
  { 0x70e0, { "SONY", { "M20" } } },
  { 0x70e1, { "SONY", { "M20 *2" } } },
  { 0x70e2, { "SONY", { "M20 *3" } } },
  { 0x70e3, { "SONY", { "M20 *4" } } },
  { 0x70e4, { "SONY", { "M20 *5" } } },
  { 0x70e5, { "SONY", { "M20 *6" } } },
  { 0x70e6, { "SONY", { "M20 *7" } } },
  { 0x70e7, { "SONY", { "M20 *8" } } },
  { 0x8001, { "SONY", { "DRU-8" } } },
  { 0x8008, { "SONY", { "EVO-9800" } } },
  { 0x800c, { "SONY", { "EVO-9850" } } },
  { 0x8010, { "SONY", { "DSR-85" } } },
  { 0x8011, { "SONY", { "DSR-80" } } },
  { 0x8012, { "SONY", { "DSR-60" } } },
  { 0x8013, { "SONY", { "DSR-70" } } },
  { 0x8014, { "SONY", { "DSR-2000" } } },
  { 0x8015, { "SONY", { "DSR-1800" } } },
  { 0x8016, { "SONY", { "DSR-1600" } } },
  { 0x8017, { "SONY", { "DSR-1500", "DSR-1500A" } } },
  { 0x8031, { "SONY", { "DSR-45" } } },
  { 0x9000, { "SONY", { "DEM-1000" } } },
  { 0x9010, { "SONY", { "HDDF-500" } } },
  { 0xa000, { "", { "ASC-VR" } } },
  { 0xa001, { "SONY", { "LVR-5000AP" } } },
  { 0xa002, { "SONY", { "LVR-3000" } } },
  { 0xa007, { "", { "M2 AU-850" } } },
  { 0xa010, { "SONY", { "LVA-7000" } } },
  { 0xa011, { "SONY", { "LVA-3000" } } },
  { 0xa015, { "Panasonic", { "AU-65" } } },
  { 0xa020, { "SONY", { "CDP-3100" } } },
  { 0xa030, { "SONY", { "PCM-9000" } } },
  { 0xa031, { "Panasonic", { "AG-7750" } } },
  { 0xa040, { "SONY", { "BKDE-550" } } },
  { 0xa04d, { "", { "GalVirVTR" } } },
  { 0xa050, { "Doremi Labs", { "V1" } } },
  { 0xa070, { "SONY", { "MAV-555" } } },
  { 0xa080, { "Panasonic", { "AG-7750" } } },
  { 0xa081, { "Panasonic", { "AG-7650" } } },
  { 0xa082, { "", { "DS-850" } } },
  { 0xa086, { "Panasonic", { "AG-8700" } } },
  { 0xa098, { "SONY", { "PDW-F75" } } },
  { 0xa0a1, { "", { "SM Atom" } } },
  { 0xa0f0, { "SONY", { "HDL-5800" } } },
  { 0xb000, { "SONY", { "DVW-A500" } } },
  { 0xb001, { "SONY", { "DVW-A510" } } },
  { 0xb002, { "SONY", { "DVW-CA500" } } },
  { 0xb003, { "SONY", { "DVW-CA510" } } },
  { 0xb010, { "SONY", { "DVW-500" } } },
  { 0xb011, { "SONY", { "DVW-510" } } },
  { 0xb012, { "SONY", { "DVW-C500" } } },
  { 0xb013, { "SONY", { "DVW-C510" } } },
  { 0xb030, { "SONY", { "DVW-250" } } },
  { 0xb040, { "SONY", { "DNW-A100" } } },
  { 0xb041, { "SONY", { "DNW-A100" } } },
  { 0xb045, { "SONY", { "DNW-A45" } } },
  { 0xb046, { "SONY", { "DNW-A75" } } },
  { 0xb048, { "SONY", { "DNW-A30" } } },
  { 0xb049, { "SONY", { "DNW-30" } } },
  { 0xb04a, { "SONY", { "DNW-220" } } },
  { 0xb04c, { "SONY", { "DNW-220" } } },
  { 0xb060, { "SONY", { "MSW-M2000" } } },
  { 0xb070, { "SONY", { "J-3" } } },
  { 0xd000, { "SONY", { "DME-5000" } } },
  { 0xd001, { "SONY", { "DME-9000" } } },
  { 0xd002, { "SONY", { "DME-3000" } } },
  { 0xd010, { "Solid State Logic", { "ScreenSnd" } } },
  { 0xd011, { "Solid State Logic", { "9000j" } } },
  { 0xd012, { "Solid State Logic", { "Axiom" } } },
  { 0xd013, { "Solid State Logic", { "APS" } } },
  { 0xd014, { "Solid State Logic", { "Scenaria" } } },
  { 0xd015, { "Solid State Logic", { "Omnimix" } } },
  { 0xd016, { "Solid State Logic", { "VisionTrk" } } },
  { 0xd017, { "Solid State Logic", { "Aysis Air" } } },
  { 0xd018, { "Solid State Logic", { "Avant" } } },
  { 0xd019, { "Solid State Logic", { "Axiom MT" } } },
  { 0xd030, { "SONY", { "MAV-1000" } } },
  { 0xd031, { "SONY", { "MAV-1200" } } },
  { 0xd035, { "SONY", { "MAV-2000" } } },
  { 0xd036, { "SONY", { "BKMA-2010" } } },
  { 0xd040, { "SONY", { "DME-9000" } } },
  { 0xd050, { "", { "DADR-5000" } } },
  { 0xd051, { "", { "DADR-5032" } } },
  { 0xd052, { "", { "DADR-5048" } } },
  { 0xd053, { "", { "DADR-5064" } } },
  { 0xd081, { "DPS", { "DPS-PVR" } } },
  { 0xd090, { "", { "DN-C680" } } },
  { 0xd091, { "", { "DN-M51050R" } } },
  { 0xd0a0, { "AVID", { "AS 4" } } },
  { 0xd0a1, { "AVID", { "AS 8" } } },
  { 0xd0a2, { "AVID", { "AS16" } } },
  { 0xd0a3, { "AVID", { "AS32" } } },
  { 0xd0a8, { "AVID", { "AV 4" } } },
  { 0xd0a9, { "AVID", { "AV 8" } } },
  { 0xd0aa, { "AVID", { "AV16" } } },
  { 0xd0ab, { "AVID", { "AV32" } } },
  { 0xd0b0, { "", { "RADAR" } } },
  { 0xd0c0, { "Genex", { "GX2000" } } },
  { 0xd0c1, { "Genex", { "GX8000" } } },
  { 0xd0c2, { "Genex", { "GX8016" } } },
  { 0xd0c3, { "Genex", { "GX8024" } } },
  { 0xd0c4, { "Genex", { "GX8032" } } },
  { 0xd0c5, { "Genex", { "GX8040" } } },
  { 0xd0c6, { "Genex", { "GX8048" } } },
  { 0xd0c7, { "Genex", { "GX8056" } } },
  { 0xd0c8, { "Genex", { "GX8064" } } },
  { 0xd0d0, { "", { "Dolby Drv" } } },
  { 0xd0d1, { "", { "Dolby Drv" } } },
  { 0xd0d4, { "", { "dAVE SP" } } },
  { 0xd0e0, { "", { "Protools" } } },
  { 0xd0e1, { "", { "Protools" } } },
  { 0xd0e2, { "", { "Protools" } } },
  { 0xd0f3, { "", { "Zeta 3" } } },
  { 0xd0f8, { "CB Electronics", { "MC-1" } } },
  { 0xd0f9, { "", { "LANC I/F" } } },
  { 0xf000, { "JVC", { "CR850" } } },
  { 0xf002, { "Bosch", { "BCN-52" } } },
  { 0xf003, { "Abekas", { "AbekasA62" } } },
  { 0xf004, { "Abekas", { "AbekasA64" } } },
  { 0xf005, { "Abekas", { "AbekasA60" } } },
  { 0xf006, { "Abekas", { "AbekasA53D" } } },
  { 0xf007, { "Ampex", { "VPR6" } } },
  { 0xf008, { "Abekas", { "AbekasA57" } } },
  { 0xf009, { "", { "DCR100" } } },
  { 0xf00a, { "", { "KR-M800" } } },
  { 0xf00b, { "", { "SA-F911" } } },
  { 0xf00c, { "Hitachi", { "VL-D500" } } },
  { 0xf00d, { "Hitachi", { "VL-D505" } } },
  { 0xf00e, { "Hitachi", { "VL-S100" } } },
  { 0xf00f, { "", { "FOSTEX" } } },
  { 0xf010, { "", { "D-20" } } },
  { 0xf011, { "Abekas", { "AbekasA84" } } },
  { 0xf012, { "Abekas", { "AbekasA82" } } },
  { 0xf013, { "", { "VPR 2/300" } } },
  { 0xf014, { "", { "VPR-305" } } },
  { 0xf015, { "Pioneer", { "VDR-1000A" } } },
  { 0xf016, { "Pioneer", { "VDR-V100" } } },
  { 0xf017, { "Pioneer", { "VDR-V100" } } },
  { 0xf018, { "Pioneer", { "VDR-V100" } } },
  { 0xf019, { "Panasonic", { "AJ-D350" } } },
  { 0xf01c, { "", { "DA-60" } } },
  { 0xf01e, { "SONY", { "HD-1200" } } },
  { 0xf01f, { "JVC", { "BR-S822E", "BR-S822U" } } },
  { 0xf020, { "", { "QuickFrm" } } },
  { 0xf021, { "ACCOM", { "RTD-4224" } } },
  { 0xf022, { "", { "RCI-5/625" } } },
  { 0xf023, { "", { "RCI HD rt" } } },
  { 0xf024, { "", { "RCI HDnrt" } } },
  { 0xf025, { "", { "DCT" } } },
  { 0xf026, { "JVC", { "BR-S800E" } } },
  { 0xf027, { "OTARI", { "DTR-90" } } },
  { 0xf028, { "OTARI", { "DTR-90" } } },
  { 0xf029, { "", { "MotionWrk" } } },
  { 0xf02a, { "Studer", { "D424" } } },
  { 0xf031, { "Pioneer", { "9601" } } },
  { 0xf032, { "JVC", { "BR-S85E" } } },
  { 0xf033, { "", { "AG DVCPRO" } } },
  { 0xf034, { "AKAI", { "DR8" } } },
  { 0xf035, { "AKAI", { "DR16" } } },
  { 0xf036, { "AKAI", { "DD1500" } } },
  { 0xf039, { "AKAI", { "DD8" } } },
  { 0xf03a, { "JVC", { "BRD92E" } } },
  { 0xf03c, { "", { "ES/2" } } },
  { 0xf043, { "", { "TCR-4" } } },
  { 0xf044, { "", { "TCR-8" } } },
  { 0xf088, { "", { "Sondor" } } },
  { 0xf0a0, { "Fairlight", { "MFX3" } } },
  { 0xf0a1, { "Fairlight", { "VIVID" } } },
  { 0xf0a2, { "Fairlight", { "MFX-3A" } } },
  { 0xf0b0, { "", { "Luxor 48" } } },
  { 0xf0b1, { "", { "Luxor 96" } } },
  { 0xf0b2, { "", { "Pyramix" } } },
  { 0xf0b3, { "", { "V.T." } } },
  { 0xf0d1, { "", { "StarSync" } } },
  { 0xf01a, { "TASCAM", { "MMR-8", "MMP-16", "TL-SYNC", "MX-2424" } } },
  { 0xf01d, { "TASCAM", { "DA-88", "DA-98", "DA-98HR", "DS-D98" } } },
  { 0xfe01, { "Drastic", { "VVCR" } } }
};
