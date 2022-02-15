/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SFP_REGNUM 64
#define VG_REGNUM 67
#define P12_REGNUM 80
#define R12_REGNUM 12
#define R29_REGNUM 29
#define R25_REGNUM 25
#define P15_REGNUM 83
#define R15_REGNUM 15
#define V15_REGNUM 47
#define V4_REGNUM 36
#define R2_REGNUM 2
#define P1_REGNUM 69
#define R22_REGNUM 22
#define R18_REGNUM 18
#define IP0_REGNUM 16
#define P7_REGNUM 75
#define V8_REGNUM 40
#define R5_REGNUM 5
#define P4_REGNUM 72
#define V31_REGNUM 63
#define V12_REGNUM 44
#define P11_REGNUM 79
#define R11_REGNUM 11
#define R9_REGNUM 9
#define P8_REGNUM 76
#define LAST_SAVED_REGNUM 63
#define V0_REGNUM 32
#define V28_REGNUM 60
#define CC_REGNUM 66
#define R10_REGNUM 10
#define P14_REGNUM 82
#define R14_REGNUM 14
#define SP_REGNUM 31
#define R1_REGNUM 1
#define P0_REGNUM 68
#define R20_REGNUM 20
#define V20_REGNUM 52
#define R21_REGNUM 21
#define R17_REGNUM 17
#define R4_REGNUM 4
#define P3_REGNUM 71
#define R24_REGNUM 24
#define V24_REGNUM 56
#define P10_REGNUM 78
#define R30_REGNUM 30
#define R8_REGNUM 8
#define P6_REGNUM 74
#define R27_REGNUM 27
#define V16_REGNUM 48
#define P9_REGNUM 77
#define P13_REGNUM 81
#define R13_REGNUM 13
#define AP_REGNUM 65
#define R0_REGNUM 0
#define R6_REGNUM 6
#define LR_REGNUM 30
#define R28_REGNUM 28
#define R16_REGNUM 16
#define R3_REGNUM 3
#define P2_REGNUM 70
#define R23_REGNUM 23
#define R19_REGNUM 19
#define IP1_REGNUM 17
#define R7_REGNUM 7
#define P5_REGNUM 73
#define R26_REGNUM 26

enum unspec {
  UNSPEC_AUTI1716 = 0,
  UNSPEC_AUTISP = 1,
  UNSPEC_CASESI = 2,
  UNSPEC_CRC32B = 3,
  UNSPEC_CRC32CB = 4,
  UNSPEC_CRC32CH = 5,
  UNSPEC_CRC32CW = 6,
  UNSPEC_CRC32CX = 7,
  UNSPEC_CRC32H = 8,
  UNSPEC_CRC32W = 9,
  UNSPEC_CRC32X = 10,
  UNSPEC_FCVTZS = 11,
  UNSPEC_FCVTZU = 12,
  UNSPEC_URECPE = 13,
  UNSPEC_FRECPE = 14,
  UNSPEC_FRECPS = 15,
  UNSPEC_FRECPX = 16,
  UNSPEC_FRINTA = 17,
  UNSPEC_FRINTI = 18,
  UNSPEC_FRINTM = 19,
  UNSPEC_FRINTN = 20,
  UNSPEC_FRINTP = 21,
  UNSPEC_FRINTX = 22,
  UNSPEC_FRINTZ = 23,
  UNSPEC_GOTSMALLPIC = 24,
  UNSPEC_GOTSMALLPIC28K = 25,
  UNSPEC_GOTSMALLTLS = 26,
  UNSPEC_GOTTINYPIC = 27,
  UNSPEC_GOTTINYTLS = 28,
  UNSPEC_LD1 = 29,
  UNSPEC_LD2 = 30,
  UNSPEC_LD2_DREG = 31,
  UNSPEC_LD2_DUP = 32,
  UNSPEC_LD3 = 33,
  UNSPEC_LD3_DREG = 34,
  UNSPEC_LD3_DUP = 35,
  UNSPEC_LD4 = 36,
  UNSPEC_LD4_DREG = 37,
  UNSPEC_LD4_DUP = 38,
  UNSPEC_LD2_LANE = 39,
  UNSPEC_LD3_LANE = 40,
  UNSPEC_LD4_LANE = 41,
  UNSPEC_MB = 42,
  UNSPEC_NOP = 43,
  UNSPEC_PACI1716 = 44,
  UNSPEC_PACISP = 45,
  UNSPEC_PRLG_STK = 46,
  UNSPEC_REV = 47,
  UNSPEC_RBIT = 48,
  UNSPEC_SCVTF = 49,
  UNSPEC_SISD_NEG = 50,
  UNSPEC_SISD_SSHL = 51,
  UNSPEC_SISD_USHL = 52,
  UNSPEC_SSHL_2S = 53,
  UNSPEC_ST1 = 54,
  UNSPEC_ST2 = 55,
  UNSPEC_ST3 = 56,
  UNSPEC_ST4 = 57,
  UNSPEC_ST2_LANE = 58,
  UNSPEC_ST3_LANE = 59,
  UNSPEC_ST4_LANE = 60,
  UNSPEC_TLS = 61,
  UNSPEC_TLSDESC = 62,
  UNSPEC_TLSLE12 = 63,
  UNSPEC_TLSLE24 = 64,
  UNSPEC_TLSLE32 = 65,
  UNSPEC_TLSLE48 = 66,
  UNSPEC_UCVTF = 67,
  UNSPEC_USHL_2S = 68,
  UNSPEC_VSTRUCTDUMMY = 69,
  UNSPEC_SP_SET = 70,
  UNSPEC_SP_TEST = 71,
  UNSPEC_RSQRT = 72,
  UNSPEC_RSQRTE = 73,
  UNSPEC_RSQRTS = 74,
  UNSPEC_NZCV = 75,
  UNSPEC_XPACLRI = 76,
  UNSPEC_LD1_SVE = 77,
  UNSPEC_ST1_SVE = 78,
  UNSPEC_LD1RQ = 79,
  UNSPEC_LD1_GATHER = 80,
  UNSPEC_ST1_SCATTER = 81,
  UNSPEC_MERGE_PTRUE = 82,
  UNSPEC_PTEST_PTRUE = 83,
  UNSPEC_UNPACKSHI = 84,
  UNSPEC_UNPACKUHI = 85,
  UNSPEC_UNPACKSLO = 86,
  UNSPEC_UNPACKULO = 87,
  UNSPEC_PACK = 88,
  UNSPEC_FLOAT_CONVERT = 89,
  UNSPEC_WHILE_LO = 90,
  UNSPEC_LDN = 91,
  UNSPEC_STN = 92,
  UNSPEC_INSR = 93,
  UNSPEC_CLASTB = 94,
  UNSPEC_FADDA = 95,
  UNSPEC_REV_SUBREG = 96,
  UNSPEC_ASHIFT_SIGNED = 97,
  UNSPEC_ASHIFT_UNSIGNED = 98,
  UNSPEC_ABS = 99,
  UNSPEC_FMAX = 100,
  UNSPEC_FMAXNMV = 101,
  UNSPEC_FMAXV = 102,
  UNSPEC_FMIN = 103,
  UNSPEC_FMINNMV = 104,
  UNSPEC_FMINV = 105,
  UNSPEC_FADDV = 106,
  UNSPEC_ADDV = 107,
  UNSPEC_SMAXV = 108,
  UNSPEC_SMINV = 109,
  UNSPEC_UMAXV = 110,
  UNSPEC_UMINV = 111,
  UNSPEC_SHADD = 112,
  UNSPEC_UHADD = 113,
  UNSPEC_SRHADD = 114,
  UNSPEC_URHADD = 115,
  UNSPEC_SHSUB = 116,
  UNSPEC_UHSUB = 117,
  UNSPEC_SRHSUB = 118,
  UNSPEC_URHSUB = 119,
  UNSPEC_ADDHN = 120,
  UNSPEC_RADDHN = 121,
  UNSPEC_SUBHN = 122,
  UNSPEC_RSUBHN = 123,
  UNSPEC_ADDHN2 = 124,
  UNSPEC_RADDHN2 = 125,
  UNSPEC_SUBHN2 = 126,
  UNSPEC_RSUBHN2 = 127,
  UNSPEC_SQDMULH = 128,
  UNSPEC_SQRDMULH = 129,
  UNSPEC_PMUL = 130,
  UNSPEC_FMULX = 131,
  UNSPEC_USQADD = 132,
  UNSPEC_SUQADD = 133,
  UNSPEC_SQXTUN = 134,
  UNSPEC_SQXTN = 135,
  UNSPEC_UQXTN = 136,
  UNSPEC_SSRA = 137,
  UNSPEC_USRA = 138,
  UNSPEC_SRSRA = 139,
  UNSPEC_URSRA = 140,
  UNSPEC_SRSHR = 141,
  UNSPEC_URSHR = 142,
  UNSPEC_SQSHLU = 143,
  UNSPEC_SQSHL = 144,
  UNSPEC_UQSHL = 145,
  UNSPEC_SQSHRUN = 146,
  UNSPEC_SQRSHRUN = 147,
  UNSPEC_SQSHRN = 148,
  UNSPEC_UQSHRN = 149,
  UNSPEC_SQRSHRN = 150,
  UNSPEC_UQRSHRN = 151,
  UNSPEC_SSHL = 152,
  UNSPEC_USHL = 153,
  UNSPEC_SRSHL = 154,
  UNSPEC_URSHL = 155,
  UNSPEC_SQRSHL = 156,
  UNSPEC_UQRSHL = 157,
  UNSPEC_SSLI = 158,
  UNSPEC_USLI = 159,
  UNSPEC_SSRI = 160,
  UNSPEC_USRI = 161,
  UNSPEC_SSHLL = 162,
  UNSPEC_USHLL = 163,
  UNSPEC_ADDP = 164,
  UNSPEC_TBL = 165,
  UNSPEC_TBX = 166,
  UNSPEC_CONCAT = 167,
  UNSPEC_ZIP1 = 168,
  UNSPEC_ZIP2 = 169,
  UNSPEC_UZP1 = 170,
  UNSPEC_UZP2 = 171,
  UNSPEC_TRN1 = 172,
  UNSPEC_TRN2 = 173,
  UNSPEC_EXT = 174,
  UNSPEC_REV64 = 175,
  UNSPEC_REV32 = 176,
  UNSPEC_REV16 = 177,
  UNSPEC_AESE = 178,
  UNSPEC_AESD = 179,
  UNSPEC_AESMC = 180,
  UNSPEC_AESIMC = 181,
  UNSPEC_SHA1C = 182,
  UNSPEC_SHA1M = 183,
  UNSPEC_SHA1P = 184,
  UNSPEC_SHA1H = 185,
  UNSPEC_SHA1SU0 = 186,
  UNSPEC_SHA1SU1 = 187,
  UNSPEC_SHA256H = 188,
  UNSPEC_SHA256H2 = 189,
  UNSPEC_SHA256SU0 = 190,
  UNSPEC_SHA256SU1 = 191,
  UNSPEC_PMULL = 192,
  UNSPEC_PMULL2 = 193,
  UNSPEC_REV_REGLIST = 194,
  UNSPEC_VEC_SHR = 195,
  UNSPEC_SQRDMLAH = 196,
  UNSPEC_SQRDMLSH = 197,
  UNSPEC_FMAXNM = 198,
  UNSPEC_FMINNM = 199,
  UNSPEC_SDOT = 200,
  UNSPEC_UDOT = 201,
  UNSPEC_SM3SS1 = 202,
  UNSPEC_SM3TT1A = 203,
  UNSPEC_SM3TT1B = 204,
  UNSPEC_SM3TT2A = 205,
  UNSPEC_SM3TT2B = 206,
  UNSPEC_SM3PARTW1 = 207,
  UNSPEC_SM3PARTW2 = 208,
  UNSPEC_SM4E = 209,
  UNSPEC_SM4EKEY = 210,
  UNSPEC_SHA512H = 211,
  UNSPEC_SHA512H2 = 212,
  UNSPEC_SHA512SU0 = 213,
  UNSPEC_SHA512SU1 = 214,
  UNSPEC_FMLAL = 215,
  UNSPEC_FMLSL = 216,
  UNSPEC_FMLAL2 = 217,
  UNSPEC_FMLSL2 = 218,
  UNSPEC_SEL = 219,
  UNSPEC_ANDV = 220,
  UNSPEC_IORV = 221,
  UNSPEC_XORV = 222,
  UNSPEC_ANDF = 223,
  UNSPEC_IORF = 224,
  UNSPEC_XORF = 225,
  UNSPEC_SMUL_HIGHPART = 226,
  UNSPEC_UMUL_HIGHPART = 227,
  UNSPEC_COND_ADD = 228,
  UNSPEC_COND_SUB = 229,
  UNSPEC_COND_SMAX = 230,
  UNSPEC_COND_UMAX = 231,
  UNSPEC_COND_SMIN = 232,
  UNSPEC_COND_UMIN = 233,
  UNSPEC_COND_AND = 234,
  UNSPEC_COND_ORR = 235,
  UNSPEC_COND_EOR = 236,
  UNSPEC_COND_LT = 237,
  UNSPEC_COND_LE = 238,
  UNSPEC_COND_EQ = 239,
  UNSPEC_COND_NE = 240,
  UNSPEC_COND_GE = 241,
  UNSPEC_COND_GT = 242,
  UNSPEC_COND_LO = 243,
  UNSPEC_COND_LS = 244,
  UNSPEC_COND_HS = 245,
  UNSPEC_COND_HI = 246,
  UNSPEC_COND_UO = 247,
  UNSPEC_LASTB = 248
};
#define NUM_UNSPEC_VALUES 249
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_BLOCKAGE = 5,
  UNSPECV_PROBE_STACK_RANGE = 6,
  UNSPECV_LX = 7,
  UNSPECV_SX = 8,
  UNSPECV_LDA = 9,
  UNSPECV_STL = 10,
  UNSPECV_ATOMIC_CMPSW = 11,
  UNSPECV_ATOMIC_EXCHG = 12,
  UNSPECV_ATOMIC_CAS = 13,
  UNSPECV_ATOMIC_SWP = 14,
  UNSPECV_ATOMIC_OP = 15,
  UNSPECV_ATOMIC_LDOP = 16,
  UNSPECV_ATOMIC_LDOP_OR = 17,
  UNSPECV_ATOMIC_LDOP_BIC = 18,
  UNSPECV_ATOMIC_LDOP_XOR = 19,
  UNSPECV_ATOMIC_LDOP_PLUS = 20
};
#define NUM_UNSPECV_VALUES 21
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
