/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define TFHAR_REGNO 112
#define SFBOOL_BOOL_A1 5
#define SFBOOL_BOOL_A2 6
#define LAST_ALTIVEC_REGNO 108
#define FIRST_FPR_REGNO 32
#define TFIAR_SPR 129
#define SFBOOL_BOOL_D 4
#define FIRST_ALTIVEC_REGNO 77
#define STATIC_CHAIN_REGNUM 11
#define SFBOOL_MFVSR_A 3
#define SFBOOL_MFVSR_D 2
#define CR7_REGNO 75
#define TEXASR_SPR 130
#define CA_REGNO 76
#define TEXASR_REGNO 114
#define SFBOOL_TMP_VSX_DI 12
#define SFBOOL_SHL_A 8
#define SFBOOL_SHL_D 7
#define SFBOOL_MTVSR_D 9
#define CR6_REGNO 74
#define MAX_CR_REGNO 75
#define TFIAR_REGNO 113
#define ARG_POINTER_REGNUM 67
#define VRSAVE_REGNO 109
#define CR2_REGNO 70
#define TOC_REGNUM 2
#define CR4_REGNO 72
#define SFBOOL_MFVSR_A_V4SF 10
#define FIRST_GPR_REGNO 0
#define CR1_REGNO 69
#define LAST_GPR_REGNO 31
#define TFHAR_SPR 128
#define SFBOOL_TMP_VSX 1
#define MAX_HTM_OPERANDS 4
#define CR3_REGNO 71
#define VSCR_REGNO 110
#define CTR_REGNO 66
#define SFBOOL_MTVSR_D_V4SF 13
#define CR0_REGNO 68
#define SFBOOL_BOOL_A_DI 11
#define FRAME_POINTER_REGNUM 111
#define CR5_REGNO 73
#define SFBOOL_TMP_GPR 0
#define LAST_FPR_REGNO 63
#define HARD_FRAME_POINTER_REGNUM 31
#define TEXASRU_SPR 131
#define LR_REGNO 65
#define STACK_POINTER_REGNUM 1

enum unspec {
  UNSPEC_FRSP = 0,
  UNSPEC_PROBE_STACK = 1,
  UNSPEC_TOCPTR = 2,
  UNSPEC_TOC = 3,
  UNSPEC_TOCSLOT = 4,
  UNSPEC_MOVSI_GOT = 5,
  UNSPEC_MV_CR_OV = 6,
  UNSPEC_FCTIWZ = 7,
  UNSPEC_FRIM = 8,
  UNSPEC_FRIN = 9,
  UNSPEC_FRIP = 10,
  UNSPEC_FRIZ = 11,
  UNSPEC_XSRDPI = 12,
  UNSPEC_LD_MPIC = 13,
  UNSPEC_RELD_MPIC = 14,
  UNSPEC_MPIC_CORRECT = 15,
  UNSPEC_TLSGD = 16,
  UNSPEC_TLSLD = 17,
  UNSPEC_MOVESI_FROM_CR = 18,
  UNSPEC_MOVESI_TO_CR = 19,
  UNSPEC_TLSDTPREL = 20,
  UNSPEC_TLSDTPRELHA = 21,
  UNSPEC_TLSDTPRELLO = 22,
  UNSPEC_TLSGOTDTPREL = 23,
  UNSPEC_TLSTPREL = 24,
  UNSPEC_TLSTPRELHA = 25,
  UNSPEC_TLSTPRELLO = 26,
  UNSPEC_TLSGOTTPREL = 27,
  UNSPEC_TLSTLS = 28,
  UNSPEC_FIX_TRUNC_TF = 29,
  UNSPEC_STFIWX = 30,
  UNSPEC_POPCNTB = 31,
  UNSPEC_FRES = 32,
  UNSPEC_SP_SET = 33,
  UNSPEC_SP_TEST = 34,
  UNSPEC_SYNC = 35,
  UNSPEC_LWSYNC = 36,
  UNSPEC_SYNC_OP = 37,
  UNSPEC_ATOMIC = 38,
  UNSPEC_CMPXCHG = 39,
  UNSPEC_XCHG = 40,
  UNSPEC_AND = 41,
  UNSPEC_DLMZB = 42,
  UNSPEC_DLMZB_CR = 43,
  UNSPEC_DLMZB_STRLEN = 44,
  UNSPEC_RSQRT = 45,
  UNSPEC_TOCREL = 46,
  UNSPEC_MACHOPIC_OFFSET = 47,
  UNSPEC_BPERM = 48,
  UNSPEC_COPYSIGN = 49,
  UNSPEC_PARITY = 50,
  UNSPEC_CMPB = 51,
  UNSPEC_FCTIW = 52,
  UNSPEC_FCTID = 53,
  UNSPEC_LFIWAX = 54,
  UNSPEC_LFIWZX = 55,
  UNSPEC_FCTIWUZ = 56,
  UNSPEC_NOP = 57,
  UNSPEC_GRP_END_NOP = 58,
  UNSPEC_P8V_FMRGOW = 59,
  UNSPEC_P8V_MTVSRWZ = 60,
  UNSPEC_P8V_RELOAD_FROM_GPR = 61,
  UNSPEC_P8V_MTVSRD = 62,
  UNSPEC_P8V_XXPERMDI = 63,
  UNSPEC_P8V_RELOAD_FROM_VSX = 64,
  UNSPEC_ADDG6S = 65,
  UNSPEC_CDTBCD = 66,
  UNSPEC_CBCDTD = 67,
  UNSPEC_DIVE = 68,
  UNSPEC_DIVEU = 69,
  UNSPEC_UNPACK_128BIT = 70,
  UNSPEC_PACK_128BIT = 71,
  UNSPEC_LSQ = 72,
  UNSPEC_FUSION_GPR = 73,
  UNSPEC_STACK_CHECK = 74,
  UNSPEC_FUSION_P9 = 75,
  UNSPEC_FUSION_ADDIS = 76,
  UNSPEC_ADD_ROUND_TO_ODD = 77,
  UNSPEC_SUB_ROUND_TO_ODD = 78,
  UNSPEC_MUL_ROUND_TO_ODD = 79,
  UNSPEC_DIV_ROUND_TO_ODD = 80,
  UNSPEC_FMA_ROUND_TO_ODD = 81,
  UNSPEC_SQRT_ROUND_TO_ODD = 82,
  UNSPEC_TRUNC_ROUND_TO_ODD = 83,
  UNSPEC_SIGNBIT = 84,
  UNSPEC_SF_FROM_SI = 85,
  UNSPEC_SI_FROM_SF = 86,
  UNSPEC_PREDICATE = 87,
  UNSPEC_REDUC = 88,
  UNSPEC_NEZ_P = 89,
  UNSPEC_VSX_CONCAT = 90,
  UNSPEC_VSX_CVDPSXWS = 91,
  UNSPEC_VSX_CVDPUXWS = 92,
  UNSPEC_VSX_CVSPDP = 93,
  UNSPEC_VSX_CVHPSP = 94,
  UNSPEC_VSX_CVSPDPN = 95,
  UNSPEC_VSX_CVDPSPN = 96,
  UNSPEC_VSX_CVSXWDP = 97,
  UNSPEC_VSX_CVUXWDP = 98,
  UNSPEC_VSX_CVSXDSP = 99,
  UNSPEC_VSX_CVUXDSP = 100,
  UNSPEC_VSX_CVSPSXDS = 101,
  UNSPEC_VSX_CVSPUXDS = 102,
  UNSPEC_VSX_CVSXWSP = 103,
  UNSPEC_VSX_CVUXWSP = 104,
  UNSPEC_VSX_FLOAT2 = 105,
  UNSPEC_VSX_UNS_FLOAT2 = 106,
  UNSPEC_VSX_FLOATE = 107,
  UNSPEC_VSX_UNS_FLOATE = 108,
  UNSPEC_VSX_FLOATO = 109,
  UNSPEC_VSX_UNS_FLOATO = 110,
  UNSPEC_VSX_TDIV = 111,
  UNSPEC_VSX_TSQRT = 112,
  UNSPEC_VSX_SET = 113,
  UNSPEC_VSX_ROUND_I = 114,
  UNSPEC_VSX_ROUND_IC = 115,
  UNSPEC_VSX_SLDWI = 116,
  UNSPEC_VSX_XXPERM = 117,
  UNSPEC_VSX_XXSPLTW = 118,
  UNSPEC_VSX_XXSPLTD = 119,
  UNSPEC_VSX_DIVSD = 120,
  UNSPEC_VSX_DIVUD = 121,
  UNSPEC_VSX_MULSD = 122,
  UNSPEC_VSX_XVCVSXDDP = 123,
  UNSPEC_VSX_XVCVUXDDP = 124,
  UNSPEC_VSX_XVCVDPSXDS = 125,
  UNSPEC_VSX_XVCDPSP = 126,
  UNSPEC_VSX_XVCVDPUXDS = 127,
  UNSPEC_VSX_SIGN_EXTEND = 128,
  UNSPEC_VSX_XVCVSPSXWS = 129,
  UNSPEC_VSX_XVCVSPSXDS = 130,
  UNSPEC_VSX_VSLO = 131,
  UNSPEC_VSX_EXTRACT = 132,
  UNSPEC_VSX_SXEXPDP = 133,
  UNSPEC_VSX_SXSIG = 134,
  UNSPEC_VSX_SIEXPDP = 135,
  UNSPEC_VSX_SIEXPQP = 136,
  UNSPEC_VSX_SCMPEXPDP = 137,
  UNSPEC_VSX_STSTDC = 138,
  UNSPEC_VSX_VEXTRACT_FP_FROM_SHORTH = 139,
  UNSPEC_VSX_VEXTRACT_FP_FROM_SHORTL = 140,
  UNSPEC_VSX_VXEXP = 141,
  UNSPEC_VSX_VXSIG = 142,
  UNSPEC_VSX_VIEXP = 143,
  UNSPEC_VSX_VTSTDC = 144,
  UNSPEC_VSX_VEC_INIT = 145,
  UNSPEC_VSX_VSIGNED2 = 146,
  UNSPEC_LXVL = 147,
  UNSPEC_LXVLL = 148,
  UNSPEC_LVSL_REG = 149,
  UNSPEC_LVSR_REG = 150,
  UNSPEC_STXVL = 151,
  UNSPEC_STXVLL = 152,
  UNSPEC_XL_LEN_R = 153,
  UNSPEC_XST_LEN_R = 154,
  UNSPEC_VCLZLSBB = 155,
  UNSPEC_VCTZLSBB = 156,
  UNSPEC_VEXTUBLX = 157,
  UNSPEC_VEXTUHLX = 158,
  UNSPEC_VEXTUWLX = 159,
  UNSPEC_VEXTUBRX = 160,
  UNSPEC_VEXTUHRX = 161,
  UNSPEC_VEXTUWRX = 162,
  UNSPEC_VCMPNEB = 163,
  UNSPEC_VCMPNEZB = 164,
  UNSPEC_VCMPNEH = 165,
  UNSPEC_VCMPNEZH = 166,
  UNSPEC_VCMPNEW = 167,
  UNSPEC_VCMPNEZW = 168,
  UNSPEC_XXEXTRACTUW = 169,
  UNSPEC_XXINSERTW = 170,
  UNSPEC_VSX_FIRST_MATCH_INDEX = 171,
  UNSPEC_VSX_FIRST_MATCH_EOS_INDEX = 172,
  UNSPEC_VSX_FIRST_MISMATCH_INDEX = 173,
  UNSPEC_VSX_FIRST_MISMATCH_EOS_INDEX = 174,
  UNSPEC_VCMPBFP = 175,
  UNSPEC_VMSUMU = 176,
  UNSPEC_VMSUMM = 177,
  UNSPEC_VMSUMSHM = 178,
  UNSPEC_VMSUMUHS = 179,
  UNSPEC_VMSUMSHS = 180,
  UNSPEC_VMHADDSHS = 181,
  UNSPEC_VMHRADDSHS = 182,
  UNSPEC_VADDCUW = 183,
  UNSPEC_VADDU = 184,
  UNSPEC_VADDS = 185,
  UNSPEC_VAVGU = 186,
  UNSPEC_VAVGS = 187,
  UNSPEC_VMULEUB = 188,
  UNSPEC_VMULESB = 189,
  UNSPEC_VMULEUH = 190,
  UNSPEC_VMULESH = 191,
  UNSPEC_VMULEUW = 192,
  UNSPEC_VMULESW = 193,
  UNSPEC_VMULOUB = 194,
  UNSPEC_VMULOSB = 195,
  UNSPEC_VMULOUH = 196,
  UNSPEC_VMULOSH = 197,
  UNSPEC_VMULOUW = 198,
  UNSPEC_VMULOSW = 199,
  UNSPEC_VPKPX = 200,
  UNSPEC_VPACK_SIGN_SIGN_SAT = 201,
  UNSPEC_VPACK_SIGN_UNS_SAT = 202,
  UNSPEC_VPACK_UNS_UNS_SAT = 203,
  UNSPEC_VPACK_UNS_UNS_MOD = 204,
  UNSPEC_VPACK_UNS_UNS_MOD_DIRECT = 205,
  UNSPEC_VREVEV = 206,
  UNSPEC_VSLV4SI = 207,
  UNSPEC_VSLO = 208,
  UNSPEC_VSR = 209,
  UNSPEC_VSRO = 210,
  UNSPEC_VSUBCUW = 211,
  UNSPEC_VSUBU = 212,
  UNSPEC_VSUBS = 213,
  UNSPEC_VSUM4UBS = 214,
  UNSPEC_VSUM4S = 215,
  UNSPEC_VSUM2SWS = 216,
  UNSPEC_VSUMSWS = 217,
  UNSPEC_VPERM = 218,
  UNSPEC_VPERMR = 219,
  UNSPEC_VPERM_UNS = 220,
  UNSPEC_VRFIN = 221,
  UNSPEC_VCFUX = 222,
  UNSPEC_VCFSX = 223,
  UNSPEC_VCTUXS = 224,
  UNSPEC_VCTSXS = 225,
  UNSPEC_VLOGEFP = 226,
  UNSPEC_VEXPTEFP = 227,
  UNSPEC_VSLDOI = 228,
  UNSPEC_VUNPACK_HI_SIGN = 229,
  UNSPEC_VUNPACK_LO_SIGN = 230,
  UNSPEC_VUNPACK_HI_SIGN_DIRECT = 231,
  UNSPEC_VUNPACK_LO_SIGN_DIRECT = 232,
  UNSPEC_VUPKHPX = 233,
  UNSPEC_VUPKLPX = 234,
  UNSPEC_CONVERT_4F32_8I16 = 235,
  UNSPEC_DARN = 236,
  UNSPEC_DARN_32 = 237,
  UNSPEC_DARN_RAW = 238,
  UNSPEC_DST = 239,
  UNSPEC_DSTT = 240,
  UNSPEC_DSTST = 241,
  UNSPEC_DSTSTT = 242,
  UNSPEC_LVSL = 243,
  UNSPEC_LVSR = 244,
  UNSPEC_LVE = 245,
  UNSPEC_STVX = 246,
  UNSPEC_STVXL = 247,
  UNSPEC_STVE = 248,
  UNSPEC_SET_VSCR = 249,
  UNSPEC_GET_VRSAVE = 250,
  UNSPEC_LVX = 251,
  UNSPEC_REDUC_PLUS = 252,
  UNSPEC_VECSH = 253,
  UNSPEC_EXTEVEN_V4SI = 254,
  UNSPEC_EXTEVEN_V8HI = 255,
  UNSPEC_EXTEVEN_V16QI = 256,
  UNSPEC_EXTEVEN_V4SF = 257,
  UNSPEC_EXTODD_V4SI = 258,
  UNSPEC_EXTODD_V8HI = 259,
  UNSPEC_EXTODD_V16QI = 260,
  UNSPEC_EXTODD_V4SF = 261,
  UNSPEC_INTERHI_V4SI = 262,
  UNSPEC_INTERHI_V8HI = 263,
  UNSPEC_INTERHI_V16QI = 264,
  UNSPEC_INTERLO_V4SI = 265,
  UNSPEC_INTERLO_V8HI = 266,
  UNSPEC_INTERLO_V16QI = 267,
  UNSPEC_LVLX = 268,
  UNSPEC_LVLXL = 269,
  UNSPEC_LVRX = 270,
  UNSPEC_LVRXL = 271,
  UNSPEC_STVLX = 272,
  UNSPEC_STVLXL = 273,
  UNSPEC_STVRX = 274,
  UNSPEC_STVRXL = 275,
  UNSPEC_VADU = 276,
  UNSPEC_VSLV = 277,
  UNSPEC_VSRV = 278,
  UNSPEC_VMULWHUB = 279,
  UNSPEC_VMULWLUB = 280,
  UNSPEC_VMULWHSB = 281,
  UNSPEC_VMULWLSB = 282,
  UNSPEC_VMULWHUH = 283,
  UNSPEC_VMULWLUH = 284,
  UNSPEC_VMULWHSH = 285,
  UNSPEC_VMULWLSH = 286,
  UNSPEC_VUPKHUB = 287,
  UNSPEC_VUPKHUH = 288,
  UNSPEC_VUPKLUB = 289,
  UNSPEC_VUPKLUH = 290,
  UNSPEC_VPERMSI = 291,
  UNSPEC_VPERMHI = 292,
  UNSPEC_INTERHI = 293,
  UNSPEC_INTERLO = 294,
  UNSPEC_VUPKHS_V4SF = 295,
  UNSPEC_VUPKLS_V4SF = 296,
  UNSPEC_VUPKHU_V4SF = 297,
  UNSPEC_VUPKLU_V4SF = 298,
  UNSPEC_VGBBD = 299,
  UNSPEC_VMRGH_DIRECT = 300,
  UNSPEC_VMRGL_DIRECT = 301,
  UNSPEC_VSPLT_DIRECT = 302,
  UNSPEC_VMRGEW_DIRECT = 303,
  UNSPEC_VMRGOW_DIRECT = 304,
  UNSPEC_VSUMSWS_DIRECT = 305,
  UNSPEC_VADDCUQ = 306,
  UNSPEC_VADDEUQM = 307,
  UNSPEC_VADDECUQ = 308,
  UNSPEC_VSUBCUQ = 309,
  UNSPEC_VSUBEUQM = 310,
  UNSPEC_VSUBECUQ = 311,
  UNSPEC_VBPERMQ = 312,
  UNSPEC_VBPERMD = 313,
  UNSPEC_BCDADD = 314,
  UNSPEC_BCDSUB = 315,
  UNSPEC_BCD_OVERFLOW = 316,
  UNSPEC_CMPRB = 317,
  UNSPEC_CMPRB2 = 318,
  UNSPEC_CMPEQB = 319,
  UNSPEC_VRLMI = 320,
  UNSPEC_VRLNM = 321,
  UNSPEC_MOVSD_LOAD = 322,
  UNSPEC_MOVSD_STORE = 323,
  UNSPEC_DDEDPD = 324,
  UNSPEC_DENBCD = 325,
  UNSPEC_DXEX = 326,
  UNSPEC_DIEX = 327,
  UNSPEC_DSCLI = 328,
  UNSPEC_DTSTSFI = 329,
  UNSPEC_DSCRI = 330,
  UNSPEC_INTERHI_V2SF = 331,
  UNSPEC_INTERLO_V2SF = 332,
  UNSPEC_EXTEVEN_V2SF = 333,
  UNSPEC_EXTODD_V2SF = 334,
  UNSPEC_VCIPHER = 335,
  UNSPEC_VNCIPHER = 336,
  UNSPEC_VCIPHERLAST = 337,
  UNSPEC_VNCIPHERLAST = 338,
  UNSPEC_VSBOX = 339,
  UNSPEC_VSHASIGMA = 340,
  UNSPEC_VPERMXOR = 341,
  UNSPEC_VPMSUM = 342,
  UNSPEC_HTM_FENCE = 343
};
#define NUM_UNSPEC_VALUES 344
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_BLOCK = 0,
  UNSPECV_LL = 1,
  UNSPECV_SC = 2,
  UNSPECV_PROBE_STACK_RANGE = 3,
  UNSPECV_EH_RR = 4,
  UNSPECV_ISYNC = 5,
  UNSPECV_MFTB = 6,
  UNSPECV_NLGR = 7,
  UNSPECV_MFFS = 8,
  UNSPECV_MTFSF = 9,
  UNSPECV_SPLIT_STACK_RETURN = 10,
  UNSPECV_SPEC_BARRIER = 11,
  UNSPECV_SET_VRSAVE = 12,
  UNSPECV_MTVSCR = 13,
  UNSPECV_MFVSCR = 14,
  UNSPECV_DSSALL = 15,
  UNSPECV_DSS = 16,
  UNSPECV_HTM_TABORT = 17,
  UNSPECV_HTM_TABORTXC = 18,
  UNSPECV_HTM_TABORTXCI = 19,
  UNSPECV_HTM_TBEGIN = 20,
  UNSPECV_HTM_TCHECK = 21,
  UNSPECV_HTM_TEND = 22,
  UNSPECV_HTM_TRECHKPT = 23,
  UNSPECV_HTM_TRECLAIM = 24,
  UNSPECV_HTM_TSR = 25,
  UNSPECV_HTM_TTEST = 26,
  UNSPECV_HTM_MFSPR = 27,
  UNSPECV_HTM_MTSPR = 28
};
#define NUM_UNSPECV_VALUES 29
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
