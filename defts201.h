//*
//* defTS201.h
//*
//* Copyright (c) 2002-2006 Analog Devices, Inc., All rights reserved
//*

#if !defined(__DEFTS201_H_)
#define __DEFTS201_H_

//
// Bit Mask Macros
//
#if !defined(MAKE_BITMASK_)
#define MAKE_BITMASK_(x_) (1<<(x_)) // Make a bit mask from a bit position
#endif
#if !defined(MAKE_LL_BITMASK_)
#define MAKE_LL_BITMASK_(x_) (1LL<<(x_)) // Make a bit mask from a bit position (usable only in C)
#endif

//*
//* Unmapped Registers Defines *
//*

//* XSTAT *
// Bit positions
#define XSTAT_AZ_P ( 0)
#define XSTAT_AN_P ( 1)
#define XSTAT_AV_P ( 2)
#define XSTAT_AC_P ( 3)
#define XSTAT_MZ_P ( 4)
#define XSTAT_MN_P ( 5)
#define XSTAT_MV_P ( 6)
#define XSTAT_MU_P ( 7)
#define XSTAT_SZ_P ( 8)
#define XSTAT_SN_P ( 9)
#define XSTAT_BF_P (10)
#define XSTAT_AI_P (12)
#define XSTAT_MI_P (13)
#define XSTAT_UEN_P (20)
#define XSTAT_OEN_P (21)
#define XSTAT_IVEN_P (22)
#define XSTAT_AUS_P (24)
#define XSTAT_AVS_P (25)
#define XSTAT_AOS_P (26)
#define XSTAT_AIS_P (27)
#define XSTAT_MUS_P (28)
#define XSTAT_MVS_P (29)
#define XSTAT_MOS_P (30)
#define XSTAT_MIS_P (31)

// Bit Masks
#define XSTAT_AZ MAKE_BITMASK_(XSTAT_AZ_P)
#define XSTAT_AN MAKE_BITMASK_(XSTAT_AN_P)
#define XSTAT_AV MAKE_BITMASK_(XSTAT_AV_P)
#define XSTAT_AC MAKE_BITMASK_(XSTAT_AC_P)
#define XSTAT_MZ MAKE_BITMASK_(XSTAT_MZ_P)
#define XSTAT_MN MAKE_BITMASK_(XSTAT_MN_P)
#define XSTAT_MV MAKE_BITMASK_(XSTAT_MV_P)
#define XSTAT_MU MAKE_BITMASK_(XSTAT_MU_P)
#define XSTAT_SZ MAKE_BITMASK_(XSTAT_SZ_P)
#define XSTAT_SN MAKE_BITMASK_(XSTAT_SN_P)
#define XSTAT_BF MAKE_BITMASK_(XSTAT_BF_P)
#define XSTAT_AI MAKE_BITMASK_(XSTAT_AI_P)
#define XSTAT_MI MAKE_BITMASK_(XSTAT_MI_P)
#define XSTAT_UEN MAKE_BITMASK_(XSTAT_UEN_P)
#define XSTAT_OEN MAKE_BITMASK_(XSTAT_OEN_P)
#define XSTAT_IVEN MAKE_BITMASK_(XSTAT_IVEN_P)
#define XSTAT_AUS MAKE_BITMASK_(XSTAT_AUS_P)
#define XSTAT_AVS MAKE_BITMASK_(XSTAT_AVS_P)
#define XSTAT_AOS MAKE_BITMASK_(XSTAT_AOS_P)
#define XSTAT_AIS MAKE_BITMASK_(XSTAT_AIS_P)
#define XSTAT_MUS MAKE_BITMASK_(XSTAT_MUS_P)
#define XSTAT_MVS MAKE_BITMASK_(XSTAT_MVS_P)
#define XSTAT_MOS MAKE_BITMASK_(XSTAT_MOS_P)
#define XSTAT_MIS MAKE_BITMASK_(XSTAT_MIS_P)

//* YSTAT *
// Bit positions
#define YSTAT_AZ_P ( 0)
#define YSTAT_AN_P ( 1)
#define YSTAT_AV_P ( 2)
#define YSTAT_AC_P ( 3)
#define YSTAT_MZ_P ( 4)
#define YSTAT_MN_P ( 5)
#define YSTAT_MV_P ( 6)
#define YSTAT_MU_P ( 7)
#define YSTAT_SZ_P ( 8)
#define YSTAT_SN_P ( 9)
#define YSTAT_BF_P (10)
#define YSTAT_AI_P (12)
#define YSTAT_MI_P (13)
#define YSTAT_UEN_P (20)
#define YSTAT_OEN_P (21)
#define YSTAT_IVEN_P (22)
#define YSTAT_AUS_P (24)
#define YSTAT_AVS_P (25)
#define YSTAT_AOS_P (26)
#define YSTAT_AIS_P (27)
#define YSTAT_MUS_P (28)
#define YSTAT_MVS_P (29)
#define YSTAT_MOS_P (30)
#define YSTAT_MIS_P (31)

// Bit Masks
#define YSTAT_AZ MAKE_BITMASK_(YSTAT_AZ_P)
#define YSTAT_AN MAKE_BITMASK_(YSTAT_AN_P)
#define YSTAT_AV MAKE_BITMASK_(YSTAT_AV_P)
#define YSTAT_AC MAKE_BITMASK_(YSTAT_AC_P)
#define YSTAT_MZ MAKE_BITMASK_(YSTAT_MZ_P)
#define YSTAT_MN MAKE_BITMASK_(YSTAT_MN_P)
#define YSTAT_MV MAKE_BITMASK_(YSTAT_MV_P)
#define YSTAT_MU MAKE_BITMASK_(YSTAT_MU_P)
#define YSTAT_SZ MAKE_BITMASK_(YSTAT_SZ_P)
#define YSTAT_SN MAKE_BITMASK_(YSTAT_SN_P)
#define YSTAT_BF MAKE_BITMASK_(YSTAT_BF_P)
#define YSTAT_AI MAKE_BITMASK_(YSTAT_AI_P)
#define YSTAT_MI MAKE_BITMASK_(YSTAT_MI_P)
#define YSTAT_UEN MAKE_BITMASK_(YSTAT_UEN_P)
#define YSTAT_OEN MAKE_BITMASK_(YSTAT_OEN_P)
#define YSTAT_IVEN MAKE_BITMASK_(YSTAT_IVEN_P)
#define YSTAT_AUS MAKE_BITMASK_(YSTAT_AUS_P)
#define YSTAT_AVS MAKE_BITMASK_(YSTAT_AVS_P)
#define YSTAT_AOS MAKE_BITMASK_(YSTAT_AOS_P)
#define YSTAT_AIS MAKE_BITMASK_(YSTAT_AIS_P)
#define YSTAT_MUS MAKE_BITMASK_(YSTAT_MUS_P)
#define YSTAT_MVS MAKE_BITMASK_(YSTAT_MVS_P)
#define YSTAT_MOS MAKE_BITMASK_(YSTAT_MOS_P)
#define YSTAT_MIS MAKE_BITMASK_(YSTAT_MIS_P)


//*
//* Mapped Register Defines *
//*


//* X Comp Block *

#define XR0_LOC (0x1E0000)
#define XR1_LOC (0x1E0001)
#define XR2_LOC (0x1E0002)
#define XR3_LOC (0x1E0003)
#define XR4_LOC (0x1E0004)
#define XR5_LOC (0x1E0005)
#define XR6_LOC (0x1E0006)
#define XR7_LOC (0x1E0007)
#define XR8_LOC (0x1E0008)
#define XR9_LOC (0x1E0009)
#define XR10_LOC (0x1E000A)
#define XR11_LOC (0x1E000B)
#define XR12_LOC (0x1E000C)
#define XR13_LOC (0x1E000D)
#define XR14_LOC (0x1E000E)
#define XR15_LOC (0x1E000F)
#define XR16_LOC (0x1E0010)
#define XR17_LOC (0x1E0011)
#define XR18_LOC (0x1E0012)
#define XR19_LOC (0x1E0013)
#define XR20_LOC (0x1E0014)
#define XR21_LOC (0x1E0015)
#define XR22_LOC (0x1E0016)
#define XR23_LOC (0x1E0017)
#define XR24_LOC (0x1E0018)
#define XR25_LOC (0x1E0019)
#define XR26_LOC (0x1E001A)
#define XR27_LOC (0x1E001B)
#define XR28_LOC (0x1E001C)
#define XR29_LOC (0x1E001D)
#define XR30_LOC (0x1E001E)
#define XR31_LOC (0x1E001F)

//* Y Comp Block *

#define YR0_LOC (0x1E0040)
#define YR1_LOC (0x1E0041)
#define YR2_LOC (0x1E0042)
#define YR3_LOC (0x1E0043)
#define YR4_LOC (0x1E0044)
#define YR5_LOC (0x1E0045)
#define YR6_LOC (0x1E0046)
#define YR7_LOC (0x1E0047)
#define YR8_LOC (0x1E0048)
#define YR9_LOC (0x1E0049)
#define YR10_LOC (0x1E004A)
#define YR11_LOC (0x1E004B)
#define YR12_LOC (0x1E004C)
#define YR13_LOC (0x1E004D)
#define YR14_LOC (0x1E004E)
#define YR15_LOC (0x1E004F)
#define YR16_LOC (0x1E0050)
#define YR17_LOC (0x1E0051)
#define YR18_LOC (0x1E0052)
#define YR19_LOC (0x1E0053)
#define YR20_LOC (0x1E0054)
#define YR21_LOC (0x1E0055)
#define YR22_LOC (0x1E0056)
#define YR23_LOC (0x1E0057)
#define YR24_LOC (0x1E0058)
#define YR25_LOC (0x1E0059)
#define YR26_LOC (0x1E005A)
#define YR27_LOC (0x1E005B)
#define YR28_LOC (0x1E005C)
#define YR29_LOC (0x1E005D)
#define YR30_LOC (0x1E005E)
#define YR31_LOC (0x1E005F)

//* XY Comp Block Merged *

#define XYR0_LOC (0x1E0080)
#define XYR1_LOC (0x1E0081)
#define XYR2_LOC (0x1E0082)
#define XYR3_LOC (0x1E0083)
#define XYR4_LOC (0x1E0084)
#define XYR5_LOC (0x1E0085)
#define XYR6_LOC (0x1E0086)
#define XYR7_LOC (0x1E0087)
#define XYR8_LOC (0x1E0088)
#define XYR9_LOC (0x1E0089)
#define XYR10_LOC (0x1E008A)
#define XYR11_LOC (0x1E008B)
#define XYR12_LOC (0x1E008C)
#define XYR13_LOC (0x1E008D)
#define XYR14_LOC (0x1E008E)
#define XYR15_LOC (0x1E008F)
#define XYR16_LOC (0x1E0090)
#define XYR17_LOC (0x1E0091)
#define XYR18_LOC (0x1E0092)
#define XYR19_LOC (0x1E0093)
#define XYR20_LOC (0x1E0094)
#define XYR21_LOC (0x1E0095)
#define XYR22_LOC (0x1E0096)
#define XYR23_LOC (0x1E0097)
#define XYR24_LOC (0x1E0098)
#define XYR25_LOC (0x1E0099)
#define XYR26_LOC (0x1E009A)
#define XYR27_LOC (0x1E009B)
#define XYR28_LOC (0x1E009C)
#define XYR29_LOC (0x1E009D)
#define XYR30_LOC (0x1E009E)
#define XYR31_LOC (0x1E009F)

//* YX Comp Block Merged *

#define YXR0_LOC (0x1E00C0)
#define YXR1_LOC (0x1E00C1)
#define YXR2_LOC (0x1E00C2)
#define YXR3_LOC (0x1E00C3)
#define YXR4_LOC (0x1E00C4)
#define YXR5_LOC (0x1E00C5)
#define YXR6_LOC (0x1E00C6)
#define YXR7_LOC (0x1E00C7)
#define YXR8_LOC (0x1E00C8)
#define YXR9_LOC (0x1E00C9)
#define YXR10_LOC (0x1E00CA)
#define YXR11_LOC (0x1E00CB)
#define YXR12_LOC (0x1E00CC)
#define YXR13_LOC (0x1E00CD)
#define YXR14_LOC (0x1E00CE)
#define YXR15_LOC (0x1E00CF)
#define YXR16_LOC (0x1E00D0)
#define YXR17_LOC (0x1E00D1)
#define YXR18_LOC (0x1E00D2)
#define YXR19_LOC (0x1E00D3)
#define YXR20_LOC (0x1E00D4)
#define YXR21_LOC (0x1E00D5)
#define YXR22_LOC (0x1E00D6)
#define YXR23_LOC (0x1E00D7)
#define YXR24_LOC (0x1E00D8)
#define YXR25_LOC (0x1E00D9)
#define YXR26_LOC (0x1E00DA)
#define YXR27_LOC (0x1E00DB)
#define YXR28_LOC (0x1E00DC)
#define YXR29_LOC (0x1E00DD)
#define YXR30_LOC (0x1E00DE)
#define YXR31_LOC (0x1E00DF)

//* XY Comp Block Broadcast *

#define XYBR0_LOC (0x1E0100)
#define XYBR1_LOC (0x1E0101)
#define XYBR2_LOC (0x1E0102)
#define XYBR3_LOC (0x1E0103)
#define XYBR4_LOC (0x1E0104)
#define XYBR5_LOC (0x1E0105)
#define XYBR6_LOC (0x1E0106)
#define XYBR7_LOC (0x1E0107)
#define XYBR8_LOC (0x1E0108)
#define XYBR9_LOC (0x1E0109)
#define XYBR10_LOC (0x1E010A)
#define XYBR11_LOC (0x1E010B)
#define XYBR12_LOC (0x1E010C)
#define XYBR13_LOC (0x1E010D)
#define XYBR14_LOC (0x1E010E)
#define XYBR15_LOC (0x1E010F)
#define XYBR16_LOC (0x1E0110)
#define XYBR17_LOC (0x1E0111)
#define XYBR18_LOC (0x1E0112)
#define XYBR19_LOC (0x1E0113)
#define XYBR20_LOC (0x1E0114)
#define XYBR21_LOC (0x1E0115)
#define XYBR22_LOC (0x1E0116)
#define XYBR23_LOC (0x1E0117)
#define XYBR24_LOC (0x1E0118)
#define XYBR25_LOC (0x1E0119)
#define XYBR26_LOC (0x1E011A)
#define XYBR27_LOC (0x1E011B)
#define XYBR28_LOC (0x1E011C)
#define XYBR29_LOC (0x1E011D)
#define XYBR30_LOC (0x1E011E)
#define XYBR31_LOC (0x1E011F)

//* JALU *

#define J0_LOC (0x1E0180)
#define J1_LOC (0x1E0181)
#define J2_LOC (0x1E0182)
#define J3_LOC (0x1E0183)
#define J4_LOC (0x1E0184)
#define J5_LOC (0x1E0185)
#define J6_LOC (0x1E0186)
#define J7_LOC (0x1E0187)
#define J8_LOC (0x1E0188)
#define J9_LOC (0x1E0189)
#define J10_LOC (0x1E018A)
#define J11_LOC (0x1E018B)
#define J12_LOC (0x1E018C)
#define J13_LOC (0x1E018D)
#define J14_LOC (0x1E018E)
#define J15_LOC (0x1E018F)
#define J16_LOC (0x1E0190)
#define J17_LOC (0x1E0191)
#define J18_LOC (0x1E0192)
#define J19_LOC (0x1E0193)
#define J20_LOC (0x1E0194)
#define J21_LOC (0x1E0195)
#define J22_LOC (0x1E0196)
#define J23_LOC (0x1E0197)
#define J24_LOC (0x1E0198)
#define J25_LOC (0x1E0199)
#define J26_LOC (0x1E019A)
#define J27_LOC (0x1E019B)
#define J28_LOC (0x1E019C)
#define J29_LOC (0x1E019D)
#define J30_LOC (0x1E019E)
#define J31_LOC (0x1E019F)

//* KALU *

#define K0_LOC (0x1E01A0)
#define K1_LOC (0x1E01A1)
#define K2_LOC (0x1E01A2)
#define K3_LOC (0x1E01A3)
#define K4_LOC (0x1E01A4)
#define K5_LOC (0x1E01A5)
#define K6_LOC (0x1E01A6)
#define K7_LOC (0x1E01A7)
#define K8_LOC (0x1E01A8)
#define K9_LOC (0x1E01A9)
#define K10_LOC (0x1E01AA)
#define K11_LOC (0x1E01AB)
#define K12_LOC (0x1E01AC)
#define K13_LOC (0x1E01AD)
#define K14_LOC (0x1E01AE)
#define K15_LOC (0x1E01AF)
#define K16_LOC (0x1E01B0)
#define K17_LOC (0x1E01B1)
#define K18_LOC (0x1E01B2)
#define K19_LOC (0x1E01B3)
#define K20_LOC (0x1E01B4)
#define K21_LOC (0x1E01B5)
#define K22_LOC (0x1E01B6)
#define K23_LOC (0x1E01B7)
#define K24_LOC (0x1E01B8)
#define K25_LOC (0x1E01B9)
#define K26_LOC (0x1E01BA)
#define K27_LOC (0x1E01BB)
#define K28_LOC (0x1E01BC)
#define K29_LOC (0x1E01BD)
#define K30_LOC (0x1E01BE)
#define K31_LOC (0x1E01BF)

//* JALU Circular *

#define JB0_LOC (0x1E01C0)
#define JB1_LOC (0x1E01C1)
#define JB2_LOC (0x1E01C2)
#define JB3_LOC (0x1E01C3)
#define JL0_LOC (0x1E01C4)
#define JL1_LOC (0x1E01C5)
#define JL2_LOC (0x1E01C6)
#define JL3_LOC (0x1E01C7)

//* KALU Circular *

#define KB0_LOC (0x1E01E0)
#define KB1_LOC (0x1E01E1)
#define KB2_LOC (0x1E01E2)
#define KB3_LOC (0x1E01E3)
#define KL0_LOC (0x1E01E4)
#define KL1_LOC (0x1E01E5)
#define KL2_LOC (0x1E01E6)
#define KL3_LOC (0x1E01E7)

//* Sequencer Registers *

#define CJMP_LOC (0x1E0340)
#define RETI_LOC (0x1E0342)
#define RETS_LOC (0x1E0344)
#define DBGE_LOC (0x1E0345)
#define LC0_LOC (0x1E0348)
#define LC1_LOC (0x1E0349)

//*

#define IVSW_LOC (0x1E0350)

//* Flag Control, Set, and Clear Registers with Bit Defines
#define FLAGREG_LOC (0x1E0354)
#define FLAGREGST_LOC (0x1E0355)
#define FLAGREGCL_LOC (0x1E0356)

// Bit positions
#define FLAGREG_FLAG0_EN_P (0) // FLAG0 output enable is bit 0 in FLAGREG
#define FLAGREG_FLAG1_EN_P (1) // FLAG1 output enable is bit 1 in FLAGREG
#define FLAGREG_FLAG2_EN_P (2) // FLAG2 output enable is bit 2 in FLAGREG
#define FLAGREG_FLAG3_EN_P (3) // FLAG3 output enable is bit 3 in FLAGREG
#define FLAGREG_FLAG0_OUT_P (4) // FLAG0 out pin is bit 4 in FLAGREG
#define FLAGREG_FLAG1_OUT_P (5) // FLAG1 out pin is bit 5 in FLAGREG
#define FLAGREG_FLAG2_OUT_P (6) // FLAG2 out pin is bit 6 in FLAGREG
#define FLAGREG_FLAG3_OUT_P (7) // FLAG3 out pin is bit 7 in FLAGREG

// Bit masks
#define FLAGREG_FLAG0_EN MAKE_BITMASK_(FLAGREG_FLAG0_EN_P)
#define FLAGREG_FLAG1_EN MAKE_BITMASK_(FLAGREG_FLAG1_EN_P)
#define FLAGREG_FLAG2_EN MAKE_BITMASK_(FLAGREG_FLAG2_EN_P)
#define FLAGREG_FLAG3_EN MAKE_BITMASK_(FLAGREG_FLAG3_EN_P)
#define FLAGREG_FLAG0_OUT MAKE_BITMASK_(FLAGREG_FLAG0_OUT_P)
#define FLAGREG_FLAG1_OUT MAKE_BITMASK_(FLAGREG_FLAG1_OUT_P)
#define FLAGREG_FLAG2_OUT MAKE_BITMASK_(FLAGREG_FLAG2_OUT_P)
#define FLAGREG_FLAG3_OUT MAKE_BITMASK_(FLAGREG_FLAG3_OUT_P)

//* SQCTL With Bit Defines *
#define SQCTL_LOC (0x1E0358)
#define SQCTLST_LOC (0x1E0359)
#define SQCTLCL_LOC (0x1E035A)

// Bit positions
#define SQCTL_GIE_P (2)
#define SQCTL_SW_P (3)
#define SQCTL_DBGDSBL_P (8)
#define SQCTL_NMOD_P (9)
#define SQCTL_TRCBEN_P (10)
#define SQCTL_TRCBEXEN_P (11)

// Bit Masks
#define SQCTL_GIE MAKE_BITMASK_(SQCTL_GIE_P)
#define SQCTL_SW MAKE_BITMASK_(SQCTL_SW_P)
#define SQCTL_DBGDSBL MAKE_BITMASK_(SQCTL_DBGDSBL_P)
#define SQCTL_NMOD MAKE_BITMASK_(SQCTL_NMOD_P)
#define SQCTL_TRCBEN MAKE_BITMASK_(SQCTL_TRCBEN_P)
#define SQCTL_TRCBEXEN MAKE_BITMASK_(SQCTL_TRCBEXEN_P)

//* SQSTAT With Bit Defines *

#define SQSTAT_LOC (0x1E035B)

// Bit positions (of the masks)
#define SQSTAT_MODE_P (0)
#define SQSTAT_IDLE_P (2)
#define SQSTAT_SPVCMD_P (3)
#define SQSTAT_EXCAUSE_P (8)
#define SQSTAT_EMCAUSE_P (12)
#define SQSTAT_FLG_P (16)
#define SQSTAT_GIE_P (20)
#define SQSTAT_SW_P (21)
#define SQSTAT_EMU_P (22)
#define SQSTAT_BTBEN_P (24)
#define SQSTAT_BTBLK_P (25)

// Bit masks
#define SQSTAT_MODE (0x00000003)
#define SQSTAT_IDLE (0x00000004)
#define SQSTAT_SPVCMD (0x000000F8)
#define SQSTAT_EXCAUSE (0x00000F00)
#define SQSTAT_EMCAUSE (0x0000F000)
#define SQSTAT_FLG (0x000F0000)

//* SFREG With Bit Defines *

#define SFREG_LOC (0x1E035C)

// Bit positions
#define SFREG_GSCF0_P (0)
#define SFREG_GSCF1_P (1)
#define SFREG_XSCF0_P (2)
#define SFREG_XSCF1_P (3)
#define SFREG_YSCF0_P (4)
#define SFREG_YSCF1_P (5)

// Bit Masks
#define SFREG_GSCF0 MAKE_BITMASK_(SFREG_GSCF0_P )
#define SFREG_GSCF1 MAKE_BITMASK_(SFREG_GSCF1_P )
#define SFREG_XSCF0 MAKE_BITMASK_(SFREG_XSCF0_P )
#define SFREG_XSCF1 MAKE_BITMASK_(SFREG_XSCF1_P )
#define SFREG_YSCF0 MAKE_BITMASK_(SFREG_YSCF0_P )
#define SFREG_YSCF1 MAKE_BITMASK_(SFREG_YSCF1_P )

//* Emulation Registers I *

//* Watchpoint Registers *

#define WP0CTL_LOC (0x1E0360)
#define WP1CTL_LOC (0x1E0361)
#define WP2CTL_LOC (0x1E0362)

// Bit Masks
// OPMODE
#define WPCTL_DSBL (0x00000000)
#define WPCTL_ADDRESS (0x00000001)
#define WPCTL_RANGE (0x00000002)
#define WPCTL_NOTRANGE (0x00000003)
// EXTYPE
#define WPCTL_NOEXCEPT (0x0000000)
#define WPCTL_EXCEPT (0x00000004)
#define WPCTL_EMUTRAP (0x00000008)
// SSTP, WP0CTL
#define WPCTL_SSTP (0x00000010)
// R/W, WP1CTL and WP2CTL
#define WPCTL_READ (0x00000010)
#define WPCTL_WRITE (0x00000020)
// JK, WP1CTL
#define WPCTL_JK_JBUS (0x00000040)
#define WPCTL_JK_KBUS (0x00000080)
#define WPCTL_JK_BOTH (0x000000C0)

#define WP0STAT_LOC (0x1E0364)
#define WP1STAT_LOC (0x1E0365)
#define WP2STAT_LOC (0x1E0366)

// Bit positions (of the masks)
#define WPSTAT_VALUE_P (0)
#define WPSTAT_EX_P (16)

// Bit masks
#define WPSTAT_VALUE (0x0000FFFF)
#define WPSTAT_EX (0x00030000)

#define WP0L_LOC (0x1E0368)
#define WP0H_LOC (0x1E0369)
#define WP1L_LOC (0x1E036A)
#define WP1H_LOC (0x1E036B)
#define WP2L_LOC (0x1E036C)
#define WP2H_LOC (0x1E036D)

#define CCNT0_LOC (0x1E0370)
#define CCNT1_LOC (0x1E0371)
#define PRFM_LOC (0x1E0372)

// Bit Masks
// Non Granted Requests
#define PRFM_NGR_SEQ (0)
#define PRFM_NGR_JALU (1)
#define PRFM_NGR_KALU (2)
#define PRFM_NGR_SOC (3)

// Granted Requests
#define PRFM_GR_SEQ (4)
#define PRFM_GR_JALU (5)
#define PRFM_GR_KALU (6)
#define PRFM_GR_SOC (7)

// Module Used
#define PRFM_MODULE_JALU (8)
#define PRFM_MODULE_KALU (9)
#define PRFM_MODULE_CBX (10)
#define PRFM_MODULE_CBY (11)
#define PRFM_MODULE_CTRL (12)

#define PRFM_SCYCLE (16)
#define PRFM_BTBPR (17)
#define PRFM_ISL (18)
#define PRFM_CCYCLE (19)
#define PRFM_SUMEN (31)

#define PRFCNT_LOC (0x1E0373)

#define TRCBMASK_LOC (0x1E0374)
#define TRCBPTR_LOC (0x1E0375)

//* Cache Registers With Bit Defines *
// Command registers
#define CACMD0_LOC (0x1E03C0)
#define CACMD2_LOC (0x1E03C8)
#define CACMD4_LOC (0x1E03D0)
#define CACMD6_LOC (0x1E03D8)
#define CACMD8_LOC (0x1E03E0)
#define CACMD10_LOC (0x1E03E8)
#define CACMDB_LOC (0x1E03FC)

// Bit Masks
#define CACMD_EN (0x00000000)
#define CACMD_DIS (0x04000000)
#define CACMD_SET_BUS (0x1c000000)
#define CACMD_SLOCK (0x08000000)
#define CACMD_ELOCK (0x0c000000)
#define CACMD_CB (0x10000000)
#define CACMD_INV (0x14000000)
#define CACHE_INIT (0x40000000)
#define CACHE_INIT_LOCK (0x44000000)
#define CACMD_REFRESH (0x50000000)

#define CACMD_NOSTALL (0x00004000)

#define CACMD_K_BUS_N_ (0x000000)
#define CACMD_K_BUS_R_ (0x008000)
#define CACMD_K_BUS_W_ (0x010000)
#define CACMD_K_BUS_RW (0x018000)
#define CACMD_J_BUS_N_ (0x000000)
#define CACMD_J_BUS_R_ (0x020000)
#define CACMD_J_BUS_W_ (0x040000)
#define CACMD_J_BUS_RW (0x060000)
#define CACMD_S_BUS_N_ (0x000000)
#define CACMD_S_BUS_R_ (0x080000)
#define CACMD_S_BUS_W_ (0x100000)
#define CACMD_S_BUS_RW (0x180000)
#define CACMD_I_BUS_N_ (0x000000)
#define CACMD_I_BUS_R_ (0x200000)

// Bit Positions
#define CACMD_LEN_P (15)

// Address/Index registers
#define CCAIR0_LOC (0x1E03C1)
#define CCAIR2_LOC (0x1E03C9)
#define CCAIR4_LOC (0x1E03D1)
#define CCAIR6_LOC (0x1E03D9)
#define CCAIR8_LOC (0x1E03E1)
#define CCAIR10_LOC (0x1E03E9)
#define CCAIRB_LOC (0x1E03FD)

// Status registers
#define CASTAT0_LOC (0x1E03C2)
#define CASTAT2_LOC (0x1E03CA)
#define CASTAT4_LOC (0x1E03D2)
#define CASTAT6_LOC (0x1E03DA)
#define CASTAT8_LOC (0x1E03E2)
#define CASTAT10_LOC (0x1E03EA)

// Bit Positions
#define CASTAT_ENBL_P (14)
#define CASTAT_LOCK_P (15)
#define CASTAT_COM_ACTIVE_P (16)
#define CASTAT_COM_ABRTD_P (17)
#define CASTAT_STL_ACTIVE_P (19)
#define CASTAT_K_CACHING_P (20)
#define CASTAT_J_CACHING_P (22)
#define CASTAT_S_CACHING_P (24)
#define CASTAT_I_CACHING_P (26)

// Bit Masks
#define CASTAT_REFCNTR (0x00003fff)
#define CASTAT_ENBL MAKE_BITMASK_(CASTAT_ENBL_P)
#define CASTAT_LOCK MAKE_BITMASK_(CASTAT_LOCK_P)
#define CASTAT_COM_ACTIVE MAKE_BITMASK_(CASTAT_COM_ACTIVE_P)
#define CASTAT_COM_ABRTD MAKE_BITMASK_(CASTAT_COM_ABRTD_P)

#define CADATA0_LOC (0x1E03C3)
#define CADATA2_LOC (0x1E03CB)
#define CADATA4_LOC (0x1E03D3)
#define CADATA6_LOC (0x1E03DB)
#define CADATA8_LOC (0x1E03E3)
#define CADATA10_LOC (0x1E03EB)
#define CADATAB_LOC (0x1E03FF)

//* Cache Commands Macros *

#if !defined(SET_REFRESH0_)
#define SET_REFRESH0_(x_) () // Make a bit mask from a bit position
#endif

//* TCBs With Bit Defines *

#define DCS0_LOC (0x1F0000)
#define DCD0_LOC (0x1F0004)
#define DCS1_LOC (0x1F0008)
#define DCD1_LOC (0x1F000c)
#define DCS2_LOC (0x1F0010)
#define DCD2_LOC (0x1F0014)
#define DCS3_LOC (0x1F0018)
#define DCD3_LOC (0x1F001C)
#define DC4_LOC (0x1F0020)
#define DC5_LOC (0x1F0024)
#define DC6_LOC (0x1F0028)
#define DC7_LOC (0x1F002C)
#define DC8_LOC (0x1F0040)
#define DC9_LOC (0x1F0044)
#define DC10_LOC (0x1F0048)
#define DC11_LOC (0x1F004C)
#define DC12_LOC (0x1F0058)
#define DC13_LOC (0x1F005C)

// TYPES (TY)
#define TCB_EPROM (0xC0000000)
#define TCB_FLYBY (0xA0000000)
#define TCB_EXTMEM (0x80000000)
#define TCB_INTMEM (0x40000000)
#define TCB_LINK (0x20000000)
#define TCB_DISABLE (0x00000000)
// PRIORITY (PR)
#define TCB_HPRIORITY (0x10000000)
// 2DDMA
#define TCB_TWODIM (0x08000000)
// OPERAND LENGTH (LEN)
#define TCB_QUAD (0x06000000)
#define TCB_LONG (0x04000000)
#define TCB_NORMAL (0x02000000)
// INTERRUPT (INT)
#define TCB_INT (0x01000000)
// DMA REQUEST (DRQ)
#define TCB_DMAR (0x00800000)
// CHAINING ENABLE (CHEN)
#define TCB_CHAIN (0x00400000)
// CHAINED CHANNEL (CHTG)
#define TCB_DMA8DEST (0x00000000)
#define TCB_DMA9DEST (0x00080000)
#define TCB_DMA10DEST (0x00100000)
#define TCB_DMA11DEST (0x00180000)
#define TCB_DMA4DEST (0x00200000)
#define TCB_DMA5DEST (0x00280000)
#define TCB_DMA6DEST (0x00300000)
#define TCB_DMA7DEST (0x00380000)

//* DMA Controls With Bit Defines *
#define DCNT_LOC (0x1F0060)
#define DCNTST_LOC (0x1F0064)
#define DCNTCL_LOC (0x1F0068)

// Bit positions
#define DCNT_DMA0_P (0)
#define DCNT_DMA1_P (1)
#define DCNT_DMA2_P (2)
#define DCNT_DMA3_P (3)
#define DCNT_DMA4_P (4)
#define DCNT_DMA5_P (5)
#define DCNT_DMA6_P (6)
#define DCNT_DMA7_P (7)
#define DCNT_DMA8_P (10)
#define DCNT_DMA9_P (11)
#define DCNT_DMA10_P (12)
#define DCNT_DMA11_P (13)
#define DCNT_DMA12_P (16)
#define DCNT_DMA13_P (17)

// Bit Masks
#define DCNT_DMA0 MAKE_BITMASK_(DCNT_DMA0_P)
#define DCNT_DMA1 MAKE_BITMASK_(DCNT_DMA1_P)
#define DCNT_DMA2 MAKE_BITMASK_(DCNT_DMA2_P)
#define DCNT_DMA3 MAKE_BITMASK_(DCNT_DMA3_P)
#define DCNT_DMA4 MAKE_BITMASK_(DCNT_DMA4_P)
#define DCNT_DMA5 MAKE_BITMASK_(DCNT_DMA5_P)
#define DCNT_DMA6 MAKE_BITMASK_(DCNT_DMA6_P)
#define DCNT_DMA7 MAKE_BITMASK_(DCNT_DMA7_P)
#define DCNT_DMA8 MAKE_BITMASK_(DCNT_DMA8_P)
#define DCNT_DMA9 MAKE_BITMASK_(DCNT_DMA9_P)
#define DCNT_DMA10 MAKE_BITMASK_(DCNT_DMA10_P)
#define DCNT_DMA11 MAKE_BITMASK_(DCNT_DMA11_P)
#define DCNT_DMA12 MAKE_BITMASK_(DCNT_DMA12_P)
#define DCNT_DMA13 MAKE_BITMASK_(DCNT_DMA13_P)

//* DMA Status With Bit Defines *
#define DSTATL_LOC (0x1F006C)
#define DSTATCL_LOC (0x1F0070)

// Bit Masks
#define DSTAT_IDLE (0x00000000)
#define DSTAT_ACT (0x00000001)
#define DSTAT_DONE (0x00000002)
#define DSTAT_ACT_ERR (0x00000004)
#define DSTAT_CFG_ERR (0x00000005)
#define DSTAT_ADD_ERR (0x00000007)

// Field Extracts - use with fext instruction
#define DSTATL0 (0x0003) // 0th position of length 3
#define DSTATL1 (0x0303) // 3rd position of length 3
#define DSTATL2 (0x0603) // 6th position of length 3
#define DSTATL3 (0x0903) // 9th position of length 3
#define DSTATL4 (0x0C03) // 12th position of length 3
#define DSTATL5 (0x0F03) // 15th position of length 3
#define DSTATL6 (0x1203) // 18th position of length 3
#define DSTATL7 (0x1503) // 21st position of length 3

#define DSTATH_LOC (0x1F006D)
#define DSTATCH_LOC (0x1F0071)

#define DSTATH8 (0x0003) // 0th position of length 3
#define DSTATH9 (0x0303) // 3rd position of length 3
#define DSTATH10 (0x0603) // 6th position of length 3
#define DSTATH11 (0x0903) // 9th position of length 3
#define DSTATH12 (0x1203) // 18th position of length 3
#define DSTATH13 (0x1503) // 21st position of length 3

//* SYSCON register With Bit Masks *
#define SYSCON_LOC (0x1F0080)

// Bit Masks
#define SYSCON_MS0_IDLE (0x00000001)
#define SYSCON_MS0_WT0 (0x00000000)
#define SYSCON_MS0_WT1 (0x00000002)
#define SYSCON_MS0_WT2 (0x00000004)
#define SYSCON_MS0_WT3 (0x00000006)
#define SYSCON_MS0_PIPE1 (0x00000000)
#define SYSCON_MS0_PIPE2 (0x00000008)
#define SYSCON_MS0_PIPE3 (0x00000010)
#define SYSCON_MS0_PIPE4 (0x00000018)
#define SYSCON_MS0_SLOW (0x00000020)
#define SYSCON_MS1_IDLE (SYSCON_MS0_IDLE << 6)
#define SYSCON_MS1_WT0 (SYSCON_MS0_WT0 << 6)
#define SYSCON_MS1_WT1 (SYSCON_MS0_WT1 << 6)
#define SYSCON_MS1_WT2 (SYSCON_MS0_WT2 << 6)
#define SYSCON_MS1_WT3 (SYSCON_MS0_WT3 << 6)
#define SYSCON_MS1_PIPE1 (SYSCON_MS0_PIPE1 << 6)
#define SYSCON_MS1_PIPE2 (SYSCON_MS0_PIPE2 << 6)
#define SYSCON_MS1_PIPE3 (SYSCON_MS0_PIPE3 << 6)
#define SYSCON_MS1_PIPE4 (SYSCON_MS0_PIPE4 << 6)
#define SYSCON_MS1_SLOW (SYSCON_MS0_SLOW << 6)
#define SYSCON_MSH_IDLE (SYSCON_MS0_IDLE << 12)
#define SYSCON_MSH_WT0 (SYSCON_MS0_WT0 << 12)
#define SYSCON_MSH_WT1 (SYSCON_MS0_WT1 << 12)
#define SYSCON_MSH_WT2 (SYSCON_MS0_WT2 << 12)
#define SYSCON_MSH_WT3 (SYSCON_MS0_WT3 << 12)
#define SYSCON_MSH_PIPE1 (SYSCON_MS0_PIPE1 << 12)
#define SYSCON_MSH_PIPE2 (SYSCON_MS0_PIPE2 << 12)
#define SYSCON_MSH_PIPE3 (SYSCON_MS0_PIPE3 << 12)
#define SYSCON_MSH_PIPE4 (SYSCON_MS0_PIPE4 << 12)
#define SYSCON_MSH_SLOW (SYSCON_MS0_SLOW << 12)
#define SYSCON_MEM_WID64 (0x00080000)
#define SYSCON_MP_WID64 (0x00100000)
#define SYSCON_HOST_WID64 (0x00200000)

//* BUSLOCK register *
#define BUSLOCK_LOC (0x1F0083)

//* SDRCON register With Bit Masks *
#define SDRCON_LOC (0x1F0084)

// Bit Masks
#define SDRCON_ENBL (0x00000001)
#define SDRCON_CLAT1 (0x00000000)
#define SDRCON_CLAT2 (0x00000002)
#define SDRCON_CLAT3 (0x00000004)
#define SDRCON_PIPE1 (0x00000008)
#define SDRCON_PG256 (0x00000000)
#define SDRCON_PG512 (0x00000010)
#define SDRCON_PG1K (0x00000020)
#define SDRCON_REF1100 (0x00000000)
#define SDRCON_REF1850 (0x00000080)
#define SDRCON_REF2200 (0x00000100)
#define SDRCON_REF3700 (0x00000180)
#define SDRCON_PC2RAS2 (0x00000000)
#define SDRCON_PC2RAS3 (0x00000200)
#define SDRCON_PC2RAS4 (0x00000400)
#define SDRCON_PC2RAS5 (0x00000600)
#define SDRCON_RAS2PC2 (0x00000000)
#define SDRCON_RAS2PC3 (0x00000800)
#define SDRCON_RAS2PC4 (0x00001000)
#define SDRCON_RAS2PC5 (0x00001800)
#define SDRCON_RAS2PC6 (0x00002000)
#define SDRCON_RAS2PC7 (0x00002800)
#define SDRCON_RAS2PC8 (0x00003000)
#define SDRCON_INIT (0x00004000)
#define SDRCON_EMRS (0x00008000)

//* SYSTAT registers *
#define SYSTAT_LOC (0x1F0086)
#define SYSTATCL_LOC (0x1F0087)

//* BMAX registers *
#define BMAX_LOC (0x1F008C)
#define BMAXC_LOC (0x1F008D)

//* Link Buffer Registers *
#define LBUFTX0_LOC (0x1F04A0)
#define LBUFRX0_LOC (0x1F04A4)
#define LBUFTX1_LOC (0x1F04A8)
#define LBUFRX1_LOC (0x1F04AC)
#define LBUFTX2_LOC (0x1F04B0)
#define LBUFRX2_LOC (0x1F04B4)
#define LBUFTX3_LOC (0x1F04B8)
#define LBUFRX3_LOC (0x1F04BC)

//* Link Receive Control Registers with Bit Masks *
#define LRCTL0_LOC (0x1F00E0)
#define LRCTL1_LOC (0x1F00E1)
#define LRCTL2_LOC (0x1F00E2)
#define LRCTL3_LOC (0x1F00E3)

// Bit positions
#define LRCTL_REN_P (0)
#define LRCTL_RVERE_P (1)
#define LRCTL_RTOE_P (2)
#define LRCTL_RBCMPE_P (3)
#define LRCTL_RDSIZE_P (4)
#define LRCTL_ROVRE_P (5)
#define LRCTL_RINIF_P (6)
#define LRCTL_RINIV_P (7)

// Bit Masks
#define LRCTL_REN MAKE_BITMASK_(LRCTL_REN_P)
#define LRCTL_RVERE MAKE_BITMASK_(LRCTL_RVERE_P)
#define LRCTL_RTOE MAKE_BITMASK_(LRCTL_RTOE_P)
#define LRCTL_RBCMPE MAKE_BITMASK_(LRCTL_RBCMPE_P)
#define LRCTL_RDSIZE MAKE_BITMASK_(LRCTL_RDSIZE_P)
#define LRCTL_ROVRE MAKE_BITMASK_(LRCTL_ROVRE_P)
#define LRCTL_RINIF MAKE_BITMASK_(LRCTL_RINIF_P)
#define LRCTL_RINIV MAKE_BITMASK_(LRCTL_RINIV_P)

//* Link Transmit Control Registers with Bit Masks *
#define LTCTL0_LOC (0x1F00E4)
#define LTCTL1_LOC (0x1F00E5)
#define LTCTL2_LOC (0x1F00E6)
#define LTCTL3_LOC (0x1F00E7)

// Bit positions
#define LTCTL_TEN_P (0)
#define LTCTL_TVERE_P (1)
#define LTCTL_TTOE_P (2)
#define LTCTL_TBCMPE_P (3)
#define LTCTL_TDSIZE_P (4)

// Bit Masks
#define LTCTL_TEN MAKE_BITMASK_(LTCTL_TEN_P)
#define LTCTL_TVERE MAKE_BITMASK_(LTCTL_TVERE_P)
#define LTCTL_TTOE MAKE_BITMASK_(LTCTL_TTOE_P)
#define LTCTL_TBCMPE MAKE_BITMASK_(LTCTL_TBCMPE_P)
#define LTCTL_TDSIZE MAKE_BITMASK_(LTCTL_TDSIZE_P)
#define LTCTL_TCLKDIV1 (0x00000000)
#define LTCTL_TCLKDIV1P5 (0x00000020)
#define LTCTL_TCLKDIV2 (0x00000040)
#define LTCTL_TCLKDIV4 (0x00000080)

//* Link Status Registers with Bit Masks *
#define LRSTAT0_LOC (0x1F00F0)
#define LRSTAT1_LOC (0x1F00F1)
#define LRSTAT2_LOC (0x1F00F2)
#define LRSTAT3_LOC (0x1F00F3)

#define LTSTAT0_LOC (0x1F00F4)
#define LTSTAT1_LOC (0x1F00F5)
#define LTSTAT2_LOC (0x1F00F6)
#define LTSTAT3_LOC (0x1F00F7)

#define LRSTATC0_LOC (0x1F00F8)
#define LRSTATC1_LOC (0x1F00F9)
#define LRSTATC2_LOC (0x1F00FA)
#define LRSTATC3_LOC (0x1F00FB)

#define LTSTATC0_LOC (0x1F00FC)
#define LTSTATC1_LOC (0x1F00FD)
#define LTSTATC2_LOC (0x1F00FE)
#define LTSTATC3_LOC (0x1F00FF)

// Bit positions - Receive Status
#define LRSTAT_RTER_P (2)
#define LRSTAT_RWER_P (3)
#define LRSTAT_RCSER_P (4)
#define LRSTAT_ROVER_P (5)

// Bit positions - Transmit Status
#define LTSTAT_TVACANT_P (0)
#define LTSTAT_TEMPTY_P (1)
#define LTSTAT_TTER_P (2)
#define LTSTAT_TWER_P (3)

// Bit Masks - Receive Status
#define LRSTAT_RSTAT (0x00000003)
#define LRSTAT_RTER MAKE_BITMASK_(LRSTAT_RTER_P)
#define LRSTAT_RWER MAKE_BITMASK_(LRSTAT_RWER_P)
#define LRSTAT_RCSER MAKE_BITMASK_(LRSTAT_RCSER_P)
#define LRSTAT_ROVER MAKE_BITMASK_(LRSTAT_ROVER_P)

// Bit Masks - Transmit Status
#define LTSTAT_TVACANT MAKE_BITMASK_(LTSTAT_TVACANT_P)
#define LTSTAT_TEMPTY MAKE_BITMASK_(LTSTAT_TEMPTY_P)
#define LTSTAT_TTER MAKE_BITMASK_(LTSTAT_TTER_P)
#define LTSTAT_TWER MAKE_BITMASK_(LTSTAT_TWER_P)

//* Interrupt Vectors (except SW interrupt) *

#define IVKERNEL_LOC (0x1F0300)
#define IVTIMER0LP_LOC (0x1F0302)
#define IVTIMER1LP_LOC (0x1F0303)
#define IVLINK0_LOC (0x1F0306)
#define IVLINK1_LOC (0x1F0307)
#define IVLINK2_LOC (0x1F0308)
#define IVLINK3_LOC (0x1F0309)
#define IVDMA0_LOC (0x1F030E)
#define IVDMA1_LOC (0x1F030F)
#define IVDMA2_LOC (0x1F0310)
#define IVDMA3_LOC (0x1F0311)
#define IVDMA4_LOC (0x1F0316)
#define IVDMA5_LOC (0x1F0317)
#define IVDMA6_LOC (0x1F0318)
#define IVDMA7_LOC (0x1F0319)
#define IVDMA8_LOC (0x1F031D)
#define IVDMA9_LOC (0x1F031E)
#define IVDMA10_LOC (0x1F031F)
#define IVDMA11_LOC (0x1F0320)
#define IVDMA12_LOC (0x1F0325)
#define IVDMA13_LOC (0x1F0326)
#define IVIRQ0_LOC (0x1F0329)
#define IVIRQ1_LOC (0x1F032A)
#define IVIRQ2_LOC (0x1F032B)
#define IVIRQ3_LOC (0x1F032C)
#define VIRPT_LOC (0x1F0330)
#define IVBUSLK_LOC (0x1F0332)
#define IVBUSLOCK_LOC (0x1F0332)				// added 5/6/04 per request of VDK to maintain compat with TS101
#define IVTIMER0HP_LOC (0x1F0334)
#define IVTIMER1HP_LOC (0x1F0335)
#define IVHW_LOC (0x1F0339)

//* ILAT, IMASK and PMASK with bit defines *

#define ILATL_LOC (0x1F0340)
#define ILATH_LOC (0x1F0341)
#define ILATSTL_LOC (0x1F0342)
#define ILATSTH_LOC (0x1F0343)
#define ILATCLL_LOC (0x1F0344)
#define ILATCLH_LOC (0x1F0345)
#define PMASKL_LOC (0x1F0346)
#define PMASKH_LOC (0x1F0347)
#define IMASKL_LOC (0x1F0348)
#define IMASKH_LOC (0x1F0349)

// Bit positions
#define INT_KERNEL_P (0)
#define INT_RES1_P (1)
#define INT_TIMER0L_P (2)
#define INT_TIMER1L_P (3)
#define INT_RES4_P (4)
#define INT_RES5_P (5)
#define INT_LINK0_P (6)
#define INT_LINK1_P (7)
#define INT_LINK2_P (8)
#define INT_LINK3_P (9)
#define INT_RES_10_P (10)
#define INT_RES_11_P (11)
#define INT_RES_12_P (12)
#define INT_RES_13_P (13)
#define INT_DMA0_P (14)
#define INT_DMA1_P (15)
#define INT_DMA2_P (16)
#define INT_DMA3_P (17)
#define INT_RES18_P (18)
#define INT_RES19_P (19)
#define INT_RES20_P (20)
#define INT_RES21_P (21)
#define INT_DMA4_P (22)
#define INT_DMA5_P (23)
#define INT_DMA6_P (24)
#define INT_DMA7_P (25)
#define INT_RES26_P (26)
#define INT_RES27_P (27)
#define INT_RES28_P (28)
#define INT_DMA8_P (29)
#define INT_DMA9_P (30)
#define INT_DMA10_P (31)
#define INT_DMA11_P (0)
#define INT_RES33_P (1)
#define INT_RES34_P (2)
#define INT_RES35_P (3)
#define INT_RES36_P (4)
#define INT_DMA12_P (5)
#define INT_DMA13_P (6)
#define INT_RES39_P (7)
#define INT_RES40_P (8)
#define INT_IRQ0_P (9)
#define INT_IRQ1_P (10)
#define INT_IRQ2_P (11)
#define INT_IRQ3_P (12)
#define INT_RES45_P (13)
#define INT_RES46_P (14)
#define INT_RES47_P (15)
#define INT_VIRPT_P (16)
#define INT_RES49_P (17)
#define INT_BUSLOCK_P (18)
#define INT_RES51_P (19)
#define INT_TIMER0H_P (20)
#define INT_TIMER1H_P (21)
#define INT_RES54_P (22)
#define INT_RES55_P (23)
#define INT_RES56_P (24)
#define INT_HWERR_P (25)
#define INT_RES58_P (26)
#define INT_RES59_P (27)
#define INT_RES61_P (29)

// Bit Masks for C only
#define INT_KERNEL_64 MAKE_LL_BITMASK_(INT_KERNEL_P + 0 )
#define INT_RES1_64 MAKE_LL_BITMASK_(INT_RES1_P + 0 )
#define INT_TIMER0L_64 MAKE_LL_BITMASK_(INT_TIMER0L_P + 0 )
#define INT_TIMER1L_64 MAKE_LL_BITMASK_(INT_TIMER1L_P + 0 )
#define INT_RES4_64 MAKE_LL_BITMASK_(INT_RES4_P + 0 )
#define INT_RES5_64 MAKE_LL_BITMASK_(INT_RES5_P + 0 )
#define INT_LINK0_64 MAKE_LL_BITMASK_(INT_LINK0_P + 0 )
#define INT_LINK1_64 MAKE_LL_BITMASK_(INT_LINK1_P + 0 )
#define INT_LINK2_64 MAKE_LL_BITMASK_(INT_LINK2_P + 0 )
#define INT_LINK3_64 MAKE_LL_BITMASK_(INT_LINK3_P + 0 )
#define INT_RES_10_64 MAKE_LL_BITMASK_(INT_RES_10_P + 0 )
#define INT_RES_11_64 MAKE_LL_BITMASK_(INT_RES_11_P + 0 )
#define INT_RES_12_64 MAKE_LL_BITMASK_(INT_RES_12_P + 0 )
#define INT_RES_13_64 MAKE_LL_BITMASK_(INT_RES_13_P + 0 )
#define INT_DMA0_64 MAKE_LL_BITMASK_(INT_DMA0_P + 0 )
#define INT_DMA1_64 MAKE_LL_BITMASK_(INT_DMA1_P + 0 )
#define INT_DMA2_64 MAKE_LL_BITMASK_(INT_DMA2_P + 0 )
#define INT_DMA3_64 MAKE_LL_BITMASK_(INT_DMA3_P + 0 )
#define INT_RES18_64 MAKE_LL_BITMASK_(INT_RES18_P + 0 )
#define INT_RES19_64 MAKE_LL_BITMASK_(INT_RES19_P + 0 )
#define INT_RES20_64 MAKE_LL_BITMASK_(INT_RES20_P + 0 )
#define INT_RES21_64 MAKE_LL_BITMASK_(INT_RES21_P + 0 )
#define INT_DMA4_64 MAKE_LL_BITMASK_(INT_DMA4_P + 0 )
#define INT_DMA5_64 MAKE_LL_BITMASK_(INT_DMA5_P + 0 )
#define INT_DMA6_64 MAKE_LL_BITMASK_(INT_DMA6_P + 0 )
#define INT_DMA7_64 MAKE_LL_BITMASK_(INT_DMA7_P + 0 )
#define INT_RES26_64 MAKE_LL_BITMASK_(INT_RES26_P + 0 )
#define INT_RES27_64 MAKE_LL_BITMASK_(INT_RES27_P + 0 )
#define INT_RES28_64 MAKE_LL_BITMASK_(INT_RES28_P + 0 )
#define INT_DMA8_64 MAKE_LL_BITMASK_(INT_DMA8_P + 0 )
#define INT_DMA9_64 MAKE_LL_BITMASK_(INT_DMA9_P + 0 )
#define INT_DMA10_64 MAKE_LL_BITMASK_(INT_DMA10_P + 0 )
#define INT_DMA11_64 MAKE_LL_BITMASK_(INT_DMA11_P + 32)
#define INT_RES33_64 MAKE_LL_BITMASK_(INT_RES33_P + 32)
#define INT_RES34_64 MAKE_LL_BITMASK_(INT_RES34_P + 32)
#define INT_RES35_64 MAKE_LL_BITMASK_(INT_RES35_P + 32)
#define INT_RES36_64 MAKE_LL_BITMASK_(INT_RES36_P + 32)
#define INT_DMA12_64 MAKE_LL_BITMASK_(INT_DMA12_P + 32)
#define INT_DMA13_64 MAKE_LL_BITMASK_(INT_DMA13_P + 32)
#define INT_RES39_64 MAKE_LL_BITMASK_(INT_RES39_P + 32)
#define INT_RES40_64 MAKE_LL_BITMASK_(INT_RES40_P + 32)
#define INT_IRQ0_64 MAKE_LL_BITMASK_(INT_IRQ0_P + 32)
#define INT_IRQ1_64 MAKE_LL_BITMASK_(INT_IRQ1_P + 32)
#define INT_IRQ2_64 MAKE_LL_BITMASK_(INT_IRQ2_P + 32)
#define INT_IRQ3_64 MAKE_LL_BITMASK_(INT_IRQ3_P + 32)
#define INT_RES45_64 MAKE_LL_BITMASK_(INT_RES45_P + 32)
#define INT_RES46_64 MAKE_LL_BITMASK_(INT_RES46_P + 32)
#define INT_RES47_64 MAKE_LL_BITMASK_(INT_RES47_P + 32)
#define INT_VIRPT_64 MAKE_LL_BITMASK_(INT_VIRPT_P + 32)
#define INT_RES49_64 MAKE_LL_BITMASK_(INT_RES49_P + 32)
#define INT_BUSLOCK_64 MAKE_LL_BITMASK_(INT_BUSLOCK_P + 32)
#define INT_RES51_64 MAKE_LL_BITMASK_(INT_RES51_P + 32)
#define INT_TIMER0H_64 MAKE_LL_BITMASK_(INT_TIMER0H_P + 32)
#define INT_TIMER1H_64 MAKE_LL_BITMASK_(INT_TIMER1H_P + 32)
#define INT_RES54_64 MAKE_LL_BITMASK_(INT_RES54_P + 32)
#define INT_RES55_64 MAKE_LL_BITMASK_(INT_RES55_P + 32)
#define INT_RES56_64 MAKE_LL_BITMASK_(INT_RES56_P + 32)
#define INT_HWERR_64 MAKE_LL_BITMASK_(INT_HWERR_P + 32)
#define INT_RES58_64 MAKE_LL_BITMASK_(INT_RES58_P + 32)
#define INT_RES59_64 MAKE_LL_BITMASK_(INT_RES59_P + 32)
#define INT_RES61_64 MAKE_LL_BITMASK_(INT_RES61_P + 32)

// Bit Masks
#define INT_KERNEL MAKE_BITMASK_(INT_KERNEL_P )
#define INT_RES1 MAKE_BITMASK_(INT_RES1_P )
#define INT_TIMER0L MAKE_BITMASK_(INT_TIMER0L_P)
#define INT_TIMER1L MAKE_BITMASK_(INT_TIMER1L_P)
#define INT_RES4 MAKE_BITMASK_(INT_RES4_P )
#define INT_RES5 MAKE_BITMASK_(INT_RES5_P )
#define INT_LINK0 MAKE_BITMASK_(INT_LINK0_P )
#define INT_LINK1 MAKE_BITMASK_(INT_LINK1_P )
#define INT_LINK2 MAKE_BITMASK_(INT_LINK2_P )
#define INT_LINK3 MAKE_BITMASK_(INT_LINK3_P )
#define INT_RES_10 MAKE_BITMASK_(INT_RES_10_P )
#define INT_RES_11 MAKE_BITMASK_(INT_RES_11_P )
#define INT_RES_12 MAKE_BITMASK_(INT_RES_12_P )
#define INT_RES_13 MAKE_BITMASK_(INT_RES_13_P )
#define INT_DMA0 MAKE_BITMASK_(INT_DMA0_P )
#define INT_DMA1 MAKE_BITMASK_(INT_DMA1_P )
#define INT_DMA2 MAKE_BITMASK_(INT_DMA2_P )
#define INT_DMA3 MAKE_BITMASK_(INT_DMA3_P )
#define INT_RES18 MAKE_BITMASK_(INT_RES18_P )
#define INT_RES19 MAKE_BITMASK_(INT_RES19_P )
#define INT_RES20 MAKE_BITMASK_(INT_RES20_P )
#define INT_RES21 MAKE_BITMASK_(INT_RES21_P )
#define INT_DMA4 MAKE_BITMASK_(INT_DMA4_P )
#define INT_DMA5 MAKE_BITMASK_(INT_DMA5_P )
#define INT_DMA6 MAKE_BITMASK_(INT_DMA6_P )
#define INT_DMA7 MAKE_BITMASK_(INT_DMA7_P )
#define INT_RES26 MAKE_BITMASK_(INT_RES26_P )
#define INT_RES27 MAKE_BITMASK_(INT_RES27_P )
#define INT_RES28 MAKE_BITMASK_(INT_RES28_P )
#define INT_DMA8 MAKE_BITMASK_(INT_DMA8_P )
#define INT_DMA9 MAKE_BITMASK_(INT_DMA9_P )
#define INT_DMA10 MAKE_BITMASK_(INT_DMA10_P )
#define INT_DMA11 MAKE_BITMASK_(INT_DMA11_P )
#define INT_RES33 MAKE_BITMASK_(INT_RES33_P )
#define INT_RES34 MAKE_BITMASK_(INT_RES34_P )
#define INT_RES35 MAKE_BITMASK_(INT_RES35_P )
#define INT_RES36 MAKE_BITMASK_(INT_RES36_P )
#define INT_DMA12 MAKE_BITMASK_(INT_DMA12_P )
#define INT_DMA13 MAKE_BITMASK_(INT_DMA13_P )
#define INT_RES39 MAKE_BITMASK_(INT_RES39_P )
#define INT_RES40 MAKE_BITMASK_(INT_RES40_P )
#define INT_IRQ0 MAKE_BITMASK_(INT_IRQ0_P )
#define INT_IRQ1 MAKE_BITMASK_(INT_IRQ1_P )
#define INT_IRQ2 MAKE_BITMASK_(INT_IRQ2_P )
#define INT_IRQ3 MAKE_BITMASK_(INT_IRQ3_P )
#define INT_RES45 MAKE_BITMASK_(INT_RES45_P )
#define INT_RES46 MAKE_BITMASK_(INT_RES46_P )
#define INT_RES47 MAKE_BITMASK_(INT_RES47_P )
#define INT_VIRPT MAKE_BITMASK_(INT_VIRPT_P )
#define INT_RES49 MAKE_BITMASK_(INT_RES49_P )
#define INT_BUSLOCK MAKE_BITMASK_(INT_BUSLOCK_P)
#define INT_RES51 MAKE_BITMASK_(INT_RES51_P )
#define INT_TIMER0H MAKE_BITMASK_(INT_TIMER0H_P)
#define INT_TIMER1H MAKE_BITMASK_(INT_TIMER1H_P)
#define INT_RES54 MAKE_BITMASK_(INT_RES54_P )
#define INT_RES55 MAKE_BITMASK_(INT_RES55_P )
#define INT_RES56 MAKE_BITMASK_(INT_RES56_P )
#define INT_HWERR MAKE_BITMASK_(INT_HWERR_P )
#define INT_RES58 MAKE_BITMASK_(INT_RES58_P )
#define INT_RES59 MAKE_BITMASK_(INT_RES59_P )
#define INT_RES61 MAKE_BITMASK_(INT_RES61_P )

//* Interrupt Control Register with Bit Defines *
#define INTCTL_LOC (0x1F034E)

// Bit positions
#define INTCTL_IRQ0_EDGE_P (0)
#define INTCTL_IRQ1_EDGE_P (1)
#define INTCTL_IRQ2_EDGE_P (2)
#define INTCTL_IRQ3_EDGE_P (3)
#define INTCTL_TMR0RN_P (4)
#define INTCTL_TMR1RN_P (5)

// Bit masks
#define INTCTL_IRQ0_EDGE MAKE_BITMASK_(INTCTL_IRQ0_EDGE_P )
#define INTCTL_IRQ1_EDGE MAKE_BITMASK_(INTCTL_IRQ1_EDGE_P )
#define INTCTL_IRQ2_EDGE MAKE_BITMASK_(INTCTL_IRQ2_EDGE_P )
#define INTCTL_IRQ3_EDGE MAKE_BITMASK_(INTCTL_IRQ3_EDGE_P )
#define INTCTL_TMR0RN MAKE_BITMASK_(INTCTL_TMR0RN_P )
#define INTCTL_TMR1RN MAKE_BITMASK_(INTCTL_TMR1RN_P )

//* Timer Registers *
#define TIMER0L_LOC (0x1F0350)
#define TIMER0H_LOC (0x1F0351)
#define TIMER1L_LOC (0x1F0352)
#define TIMER1H_LOC (0x1F0353)
#define TMRIN0L_LOC (0x1F0354)
#define TMRIN0H_LOC (0x1F0355)
#define TMRIN1L_LOC (0x1F0356)
#define TMRIN1H_LOC (0x1F0357)

//* Emulation Registers II *

//* EMUCTL With Bit Defines *
#define EMUCTL_LOC (0x1F03A0)

// Bit positions
#define EMUCTL_EMEN_P (0)
#define EMUCTL_TEME_P (1)
#define EMUCTL_EMUOE_P (2)
#define EMUCTL_SPFDIS_P (3)
#define EMUCTL_SWRST_P (4)
#define EMUCTL_BOOTDSBL_P (5)

// Bit Masks
#define EMUCTL_EMEN MAKE_BITMASK_(EMUCTL_EMEN_P) 
#define EMUCTL_TEME MAKE_BITMASK_(EMUCTL_TEME_P)
#define EMUCTL_EMUOE MAKE_BITMASK_(EMUCTL_EMUOE_P)
#define EMUCTL_SPFDIS MAKE_BITMASK_(EMUCTL_SPFDIS_P)
#define EMUCTL_SWRST MAKE_BITMASK_(EMUCTL_SWRST_P)
#define EMUCTL_BOOTDSBL MAKE_BITMASK_(EMUCTL_BOOTDSBL_P)

//* EMUSTAT With Bit Defines *
#define EMUSTAT_LOC (0x1F03A1)

// Bit positions
#define EMUSTAT_EMUMOD_P (0)
#define EMUSTAT_IRFREE_P (1)
#define EMUSTAT_INRESET_P (2)

// Bit Masks
#define EMUSTAT_EMUMOD MAKE_BITMASK_(EMUSTAT_EMUMOD_P)
#define EMUSTAT_IRFREE MAKE_BITMASK_(EMUSTAT_IRFREE_P)
#define EMUSTAT_INRESET MAKE_BITMASK_(EMUSTAT_INRESET_P)

//*
#define EMUDAT_LOC (0x1F03A2)
#define IDCODE_LOC (0x1F03A3)
#define EMUIR_LOC (0x1F03A4)

//* Trace Buffer Registers *

#define TRCB0_LOC (0x1E0140)
#define TRCB1_LOC (0x1E0141)
#define TRCB2_LOC (0x1E0142)
#define TRCB3_LOC (0x1E0143)
#define TRCB4_LOC (0x1E0144)
#define TRCB5_LOC (0x1E0145)
#define TRCB6_LOC (0x1E0146)
#define TRCB7_LOC (0x1E0147)
#define TRCB8_LOC (0x1E0148)
#define TRCB9_LOC (0x1E0149)
#define TRCB10_LOC (0x1E014A)
#define TRCB11_LOC (0x1E014B)
#define TRCB12_LOC (0x1E014C)
#define TRCB13_LOC (0x1E014D)
#define TRCB14_LOC (0x1E014E)
#define TRCB15_LOC (0x1E014F)
#define TRCB16_LOC (0x1E0150)
#define TRCB17_LOC (0x1E0151)
#define TRCB18_LOC (0x1E0152)
#define TRCB19_LOC (0x1E0153)
#define TRCB20_LOC (0x1E0154)
#define TRCB21_LOC (0x1E0155)
#define TRCB22_LOC (0x1E0156)
#define TRCB23_LOC (0x1E0157)
#define TRCB24_LOC (0x1E0158)
#define TRCB25_LOC (0x1E0159)
#define TRCB26_LOC (0x1E015A)
#define TRCB27_LOC (0x1E015B)
#define TRCB28_LOC (0x1E015C)
#define TRCB29_LOC (0x1E015D)
#define TRCB30_LOC (0x1E015E)
#define TRCB31_LOC (0x1E015F)

//*

#define AUTODMA0_LOC (0x1F03E0)
#define AUTODMA1_LOC (0x1F03E4)

//* Global memory *

#define BLOCK0_LOC (0x00000000) // Internal memory block 0
#define BLOCK2_LOC (0x00040000) // Internal memory block 2
#define BLOCK4_LOC (0x00080000) // Internal memory block 4
#define BLOCK6_LOC (0x000C0000) // Internal memory block 6
#define BLOCK8_LOC (0x00100000) // Internal memory block 8
#define BLOCK10_LOC (0x00140000) // Internal memory block 10

#define BCST_OFFSET_LOC (0x0C000000) // Broadcast MP memory offset
#define P0_OFFSET_LOC (0x10000000) // Processor ID0 MP memory offset
#define P1_OFFSET_LOC (0x14000000) // Processor ID1 MP memory offset
#define P2_OFFSET_LOC (0x18000000) // Processor ID2 MP memory offset
#define P3_OFFSET_LOC (0x1C000000) // Processor ID3 MP memory offset
#define P4_OFFSET_LOC (0x20000000) // Processor ID4 MP memory offset
#define P5_OFFSET_LOC (0x24000000) // Processor ID5 MP memory offset
#define P6_OFFSET_LOC (0x28000000) // Processor ID6 MP memory offset
#define P7_OFFSET_LOC (0x2C000000) // Processor ID7 MP memory offset

#endif // !defined(__DEFTS201_H_)
