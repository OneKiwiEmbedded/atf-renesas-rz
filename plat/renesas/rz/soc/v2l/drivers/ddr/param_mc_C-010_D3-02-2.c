/*
 * Copyright (c) 2020-2021, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>
#include <ddr_mc_regs.h>

const char ddr_an_version[] = "v0.0.0";

const uint32_t mc_init_tbl[MC_INIT_NUM][2] = {
	{	DENALI_CTL_00,	0x00000600	},
	{	DENALI_CTL_01,	0x00000000	},
	{	DENALI_CTL_02,	0x00000000	},
	{	DENALI_CTL_03,	0x00000000	},
	{	DENALI_CTL_04,	0x00000000	},
	{	DENALI_CTL_05,	0x00000000	},
	{	DENALI_CTL_06,	0x00000000	},
	{	DENALI_CTL_07,	0x00000000	},
	{	DENALI_CTL_08,	0x00000000	},
	{	DENALI_CTL_09,	0x00000000	},
	{	DENALI_CTL_10,	0x00000000	},
	{	DENALI_CTL_11,	0x01000007	},
	{	DENALI_CTL_12,	0x00100100	},
	{	DENALI_CTL_13,	0x000208D6	},
	{	DENALI_CTL_14,	0x00051616	},
	{	DENALI_CTL_15,	0x07120200	},
	{	DENALI_CTL_16,	0x00000000	},
	{	DENALI_CTL_17,	0x05000404	},
	{	DENALI_CTL_18,	0x00002100	},
	{	DENALI_CTL_19,	0x0505001E	},
	{	DENALI_CTL_20,	0x05001E09	},
	{	DENALI_CTL_21,	0x000C0405	},
	{	DENALI_CTL_22,	0x0400B6D0	},
	{	DENALI_CTL_23,	0x00030305	},
	{	DENALI_CTL_24,	0x00000A09	},
	{	DENALI_CTL_25,	0x03130101	},
	{	DENALI_CTL_26,	0x00000909	},
	{	DENALI_CTL_27,	0x00010101	},
	{	DENALI_CTL_29,	0x00000000	},
	{	DENALI_CTL_30,	0x00000000	},
	{	DENALI_CTL_31,	0x00040301	},
	{	DENALI_CTL_32,	0x000000AE	},
	{	DENALI_CTL_33,	0x00001448	},
	{	DENALI_CTL_34,	0x00000005	},
	{	DENALI_CTL_35,	0x00100004	},
	{	DENALI_CTL_36,	0x00B40200	},
	{	DENALI_CTL_37,	0x000000B4	},
	{	DENALI_CTL_38,	0x01000201	},
	{	DENALI_CTL_39,	0x80104002	},
	{	DENALI_CTL_40,	0x00000000	},
	{	DENALI_CTL_41,	0x00040000	},
	{	DENALI_CTL_42,	0x00000000	},
	{	DENALI_CTL_43,	0x00051200	},
	{	DENALI_CTL_44,	0x000007D0	},
	{	DENALI_CTL_45,	0x00051200	},
	{	DENALI_CTL_46,	0x00051200	},
	{	DENALI_CTL_47,	0x00051200	},
	{	DENALI_CTL_48,	0x00000000	},
	{	DENALI_CTL_49,	0x01000000	},
	{	DENALI_CTL_50,	0x00000000	},
	{	DENALI_CTL_51,	0x00000000	},
	{	DENALI_CTL_52,	0x00000000	},
	{	DENALI_CTL_53,	0x00000000	},
	{	DENALI_CTL_54,	0x00000000	},
	{	DENALI_CTL_55,	0x00000000	},
	{	DENALI_CTL_56,	0x00000000	},
	{	DENALI_CTL_57,	0x26260000	},
	{	DENALI_CTL_58,	0x07000000	},
	{	DENALI_CTL_59,	0x0E010A09	},
	{	DENALI_CTL_60,	0x0003002F	},
	{	DENALI_CTL_61,	0x00010004	},
	{	DENALI_CTL_62,	0x00000800	},
	{	DENALI_CTL_63,	0x00000000	},
	{	DENALI_CTL_64,	0x00000000	},
	{	DENALI_CTL_65,	0x00000000	},
	{	DENALI_CTL_66,	0x00000100	},
	{	DENALI_CTL_67,	0x00000200	},
	{	DENALI_CTL_68,	0x00001000	},
	{	DENALI_CTL_69,	0x00000000	},
	{	DENALI_CTL_70,	0x00000000	},
	{	DENALI_CTL_74,	0x00000A50	},
	{	DENALI_CTL_75,	0x00000206	},
	{	DENALI_CTL_76,	0x00000210	},
	{	DENALI_CTL_77,	0x00000A50	},
	{	DENALI_CTL_78,	0x00000206	},
	{	DENALI_CTL_79,	0x00000210	},
	{	DENALI_CTL_80,	0x00000000	},
	{	DENALI_CTL_81,	0x00000000	},
	{	DENALI_CTL_82,	0x00000000	},
	{	DENALI_CTL_83,	0x00000000	},
	{	DENALI_CTL_84,	0x00000000	},
	{	DENALI_CTL_85,	0x00000000	},
	{	DENALI_CTL_86,	0x00000000	},
	{	DENALI_CTL_87,	0x00000000	},
	{	DENALI_CTL_88,	0x00000000	},
	{	DENALI_CTL_89,	0x00000000	},
	{	DENALI_CTL_90,	0x00000000	},
	{	DENALI_CTL_91,	0x00010100	},
	{	DENALI_CTL_92,	0x00000000	},
	{	DENALI_CTL_93,	0x00000000	},
	{	DENALI_CTL_94,	0x00000000	},
	{	DENALI_CTL_95,	0x00000000	},
	{	DENALI_CTL_96,	0x00000000	},
	{	DENALI_CTL_97,	0x00000000	},
	{	DENALI_CTL_98,	0x00000000	},
	{	DENALI_CTL_99,	0x00000000	},
	{	DENALI_CTL_100,	0x00000000	},
	{	DENALI_CTL_101,	0x01000200	},
	{	DENALI_CTL_102,	0x00010801	},
	{	DENALI_CTL_103,	0x00000000	},
	{	DENALI_CTL_104,	0x00000000	},
	{	DENALI_CTL_105,	0x00000000	},
	{	DENALI_CTL_106,	0x00000000	},
	{	DENALI_CTL_107,	0x00000000	},
	{	DENALI_CTL_108,	0x00000000	},
	{	DENALI_CTL_109,	0x00000000	},
	{	DENALI_CTL_110,	0x00000000	},
	{	DENALI_CTL_111,	0x00000000	},
	{	DENALI_CTL_112,	0x00000000	},
	{	DENALI_CTL_113,	0x00000000	},
	{	DENALI_CTL_114,	0x00000000	},
	{	DENALI_CTL_115,	0x00000000	},
	{	DENALI_CTL_116,	0x00000008	},
	{	DENALI_CTL_117,	0x006403E8	},
	{	DENALI_CTL_118,	0x00000000	},
	{	DENALI_CTL_119,	0x00000000	},
	{	DENALI_CTL_120,	0x00000000	},
	{	DENALI_CTL_121,	0x14110000	},
	{	DENALI_CTL_122,	0x00080C18	},
	{	DENALI_CTL_123,	0x009ECA03	},
	{	DENALI_CTL_124,	0x0000A299	},
	{	DENALI_CTL_125,	0x00000000	},
	{	DENALI_CTL_126,	0x01000200	},
	{	DENALI_CTL_127,	0x00000040	},
	{	DENALI_CTL_128,	0x02010100	},
	{	DENALI_CTL_129,	0x00010102	},
	{	DENALI_CTL_130,	0x07FF0000	},
	{	DENALI_CTL_131,	0x0000FF00	},
	{	DENALI_CTL_132,	0x0FFF0800	},
	{	DENALI_CTL_133,	0x0100FF01	},
	{	DENALI_CTL_134,	0xFFFF0A00	},
	{	DENALI_CTL_135,	0x01010001	},
	{	DENALI_CTL_136,	0x01010101	},
	{	DENALI_CTL_137,	0x01030101	},
	{	DENALI_CTL_138,	0x0C030000	},
	{	DENALI_CTL_139,	0x01000000	},
	{	DENALI_CTL_140,	0x00000000	},
	{	DENALI_CTL_141,	0x00010000	},
	{	DENALI_CTL_142,	0x00000000	},
	{	DENALI_CTL_143,	0x00000000	},
	{	DENALI_CTL_144,	0x00000000	},
	{	DENALI_CTL_145,	0x00000000	},
	{	DENALI_CTL_146,	0x00000000	},
	{	DENALI_CTL_147,	0x00000000	},
	{	DENALI_CTL_148,	0x00000000	},
	{	DENALI_CTL_149,	0x00000000	},
	{	DENALI_CTL_150,	0x00000000	},
	{	DENALI_CTL_151,	0x00000000	},
	{	DENALI_CTL_152,	0x00000000	},
	{	DENALI_CTL_153,	0x00000000	},
	{	DENALI_CTL_154,	0x00000000	},
	{	DENALI_CTL_155,	0x00000000	},
	{	DENALI_CTL_156,	0x00000000	},
	{	DENALI_CTL_157,	0x00000000	},
	{	DENALI_CTL_158,	0x00000000	},
	{	DENALI_CTL_159,	0x00000000	},
	{	DENALI_CTL_160,	0x00000000	},
	{	DENALI_CTL_161,	0x00000000	},
	{	DENALI_CTL_162,	0x00000000	},
	{	DENALI_CTL_163,	0x00010000	},
	{	DENALI_CTL_164,	0x00000000	},
	{	DENALI_CTL_165,	0x00000800	},
	{	DENALI_CTL_166,	0x00000000	},
	{	DENALI_CTL_167,	0x00000898	},
	{	DENALI_CTL_168,	0x03000000	},
	{	DENALI_CTL_169,	0x00000408	},
	{	DENALI_CTL_170,	0x00000000	},
	{	DENALI_CTL_171,	0x00000000	},
	{	DENALI_CTL_172,	0x00000000	},
	{	DENALI_CTL_173,	0x00000000	},
	{	DENALI_CTL_174,	0x00000000	},
	{	DENALI_CTL_175,	0x00000000	},
	{	DENALI_CTL_176,	0x00000000	},
	{	DENALI_CTL_177,	0x00000000	},
	{	DENALI_CTL_178,	0x00000000	},
	{	DENALI_CTL_179,	0x00000000	},
	{	DENALI_CTL_180,	0x00000000	},
	{	DENALI_CTL_181,	0x06060600	},
	{	DENALI_CTL_182,	0x02020001	},
	{	DENALI_CTL_183,	0x01020101	},
	{	DENALI_CTL_184,	0x03000302	},
	{	DENALI_CTL_185,	0x00000000	},
	{	DENALI_CTL_186,	0x00080801	},
	{	DENALI_CTL_187,	0x00080801	},
	{	DENALI_CTL_188,	0x00070601	},
	{	DENALI_CTL_189,	0x00080801	},
	{	DENALI_CTL_190,	0x00000000	},
	{	DENALI_CTL_191,	0x000FFFFF	},
	{	DENALI_CTL_192,	0xFFFFFFFF	},
	{	DENALI_CTL_193,	0x000F000F	},
	{	DENALI_CTL_194,	0x00000000	},
	{	DENALI_CTL_195,	0x030FFFFF	},
	{	DENALI_CTL_196,	0xFFFFFFFF	},
	{	DENALI_CTL_197,	0x000F000F	},
	{	DENALI_CTL_198,	0x00000000	},
	{	DENALI_CTL_199,	0x030FFFFF	},
	{	DENALI_CTL_200,	0xFFFFFFFF	},
	{	DENALI_CTL_201,	0x000F000F	},
	{	DENALI_CTL_202,	0x00000000	},
	{	DENALI_CTL_203,	0x030FFFFF	},
	{	DENALI_CTL_204,	0xFFFFFFFF	},
	{	DENALI_CTL_205,	0x000F000F	},
	{	DENALI_CTL_206,	0x00000000	},
	{	DENALI_CTL_207,	0x030FFFFF	},
	{	DENALI_CTL_208,	0xFFFFFFFF	},
	{	DENALI_CTL_209,	0x000F000F	},
	{	DENALI_CTL_210,	0x00000000	},
	{	DENALI_CTL_211,	0x030FFFFF	},
	{	DENALI_CTL_212,	0xFFFFFFFF	},
	{	DENALI_CTL_213,	0x000F000F	},
	{	DENALI_CTL_214,	0x00000000	},
	{	DENALI_CTL_215,	0x030FFFFF	},
	{	DENALI_CTL_216,	0xFFFFFFFF	},
	{	DENALI_CTL_217,	0x000F000F	},
	{	DENALI_CTL_218,	0x00000000	},
	{	DENALI_CTL_219,	0x030FFFFF	},
	{	DENALI_CTL_220,	0xFFFFFFFF	},
	{	DENALI_CTL_221,	0x000F000F	},
	{	DENALI_CTL_222,	0x00000000	},
	{	DENALI_CTL_223,	0x030FFFFF	},
	{	DENALI_CTL_224,	0xFFFFFFFF	},
	{	DENALI_CTL_225,	0x000F000F	},
	{	DENALI_CTL_226,	0x00000000	},
	{	DENALI_CTL_227,	0x030FFFFF	},
	{	DENALI_CTL_228,	0xFFFFFFFF	},
	{	DENALI_CTL_229,	0x000F000F	},
	{	DENALI_CTL_230,	0x00000000	},
	{	DENALI_CTL_231,	0x030FFFFF	},
	{	DENALI_CTL_232,	0xFFFFFFFF	},
	{	DENALI_CTL_233,	0x000F000F	},
	{	DENALI_CTL_234,	0x00000000	},
	{	DENALI_CTL_235,	0x030FFFFF	},
	{	DENALI_CTL_236,	0xFFFFFFFF	},
	{	DENALI_CTL_237,	0x000F000F	},
	{	DENALI_CTL_238,	0x00000000	},
	{	DENALI_CTL_239,	0x030FFFFF	},
	{	DENALI_CTL_240,	0xFFFFFFFF	},
	{	DENALI_CTL_241,	0x000F000F	},
	{	DENALI_CTL_242,	0x00000000	},
	{	DENALI_CTL_243,	0x030FFFFF	},
	{	DENALI_CTL_244,	0xFFFFFFFF	},
	{	DENALI_CTL_245,	0x000F000F	},
	{	DENALI_CTL_246,	0x00000000	},
	{	DENALI_CTL_247,	0x030FFFFF	},
	{	DENALI_CTL_248,	0xFFFFFFFF	},
	{	DENALI_CTL_249,	0x000F000F	},
	{	DENALI_CTL_250,	0x00000000	},
	{	DENALI_CTL_251,	0x030FFFFF	},
	{	DENALI_CTL_252,	0xFFFFFFFF	},
	{	DENALI_CTL_253,	0x000F000F	},
	{	DENALI_CTL_254,	0x00000000	},
	{	DENALI_CTL_255,	0x000FFFFF	},
	{	DENALI_CTL_256,	0xFFFFFFFF	},
	{	DENALI_CTL_257,	0x000F000F	},
	{	DENALI_CTL_258,	0x00000000	},
	{	DENALI_CTL_259,	0x030FFFFF	},
	{	DENALI_CTL_260,	0xFFFFFFFF	},
	{	DENALI_CTL_261,	0x000F000F	},
	{	DENALI_CTL_262,	0x00000000	},
	{	DENALI_CTL_263,	0x030FFFFF	},
	{	DENALI_CTL_264,	0xFFFFFFFF	},
	{	DENALI_CTL_265,	0x000F000F	},
	{	DENALI_CTL_266,	0x00000000	},
	{	DENALI_CTL_267,	0x030FFFFF	},
	{	DENALI_CTL_268,	0xFFFFFFFF	},
	{	DENALI_CTL_269,	0x000F000F	},
	{	DENALI_CTL_270,	0x00000000	},
	{	DENALI_CTL_271,	0x030FFFFF	},
	{	DENALI_CTL_272,	0xFFFFFFFF	},
	{	DENALI_CTL_273,	0x000F000F	},
	{	DENALI_CTL_274,	0x00000000	},
	{	DENALI_CTL_275,	0x030FFFFF	},
	{	DENALI_CTL_276,	0xFFFFFFFF	},
	{	DENALI_CTL_277,	0x000F000F	},
	{	DENALI_CTL_278,	0x00000000	},
	{	DENALI_CTL_279,	0x030FFFFF	},
	{	DENALI_CTL_280,	0xFFFFFFFF	},
	{	DENALI_CTL_281,	0x000F000F	},
	{	DENALI_CTL_282,	0x00000000	},
	{	DENALI_CTL_283,	0x030FFFFF	},
	{	DENALI_CTL_284,	0xFFFFFFFF	},
	{	DENALI_CTL_285,	0x000F000F	},
	{	DENALI_CTL_286,	0x00000000	},
	{	DENALI_CTL_287,	0x030FFFFF	},
	{	DENALI_CTL_288,	0xFFFFFFFF	},
	{	DENALI_CTL_289,	0x000F000F	},
	{	DENALI_CTL_290,	0x00000000	},
	{	DENALI_CTL_291,	0x030FFFFF	},
	{	DENALI_CTL_292,	0xFFFFFFFF	},
	{	DENALI_CTL_293,	0x000F000F	},
	{	DENALI_CTL_294,	0x00000000	},
	{	DENALI_CTL_295,	0x030FFFFF	},
	{	DENALI_CTL_296,	0xFFFFFFFF	},
	{	DENALI_CTL_297,	0x000F000F	},
	{	DENALI_CTL_298,	0x00000000	},
	{	DENALI_CTL_299,	0x030FFFFF	},
	{	DENALI_CTL_300,	0xFFFFFFFF	},
	{	DENALI_CTL_301,	0x000F000F	},
	{	DENALI_CTL_302,	0x00000000	},
	{	DENALI_CTL_303,	0x030FFFFF	},
	{	DENALI_CTL_304,	0xFFFFFFFF	},
	{	DENALI_CTL_305,	0x000F000F	},
	{	DENALI_CTL_306,	0x00000000	},
	{	DENALI_CTL_307,	0x030FFFFF	},
	{	DENALI_CTL_308,	0xFFFFFFFF	},
	{	DENALI_CTL_309,	0x000F000F	},
	{	DENALI_CTL_310,	0x00000000	},
	{	DENALI_CTL_311,	0x030FFFFF	},
	{	DENALI_CTL_312,	0xFFFFFFFF	},
	{	DENALI_CTL_313,	0x000F000F	},
	{	DENALI_CTL_314,	0x00000000	},
	{	DENALI_CTL_315,	0x030FFFFF	},
	{	DENALI_CTL_316,	0xFFFFFFFF	},
	{	DENALI_CTL_317,	0x000F000F	},
	{	DENALI_CTL_318,	0x00000000	},
	{	DENALI_CTL_319,	0x000FFFFF	},
	{	DENALI_CTL_320,	0xFFFFFFFF	},
	{	DENALI_CTL_321,	0x000F000F	},
	{	DENALI_CTL_322,	0x00000000	},
	{	DENALI_CTL_323,	0x030FFFFF	},
	{	DENALI_CTL_324,	0xFFFFFFFF	},
	{	DENALI_CTL_325,	0x000F000F	},
	{	DENALI_CTL_326,	0x00000000	},
	{	DENALI_CTL_327,	0x030FFFFF	},
	{	DENALI_CTL_328,	0xFFFFFFFF	},
	{	DENALI_CTL_329,	0x000F000F	},
	{	DENALI_CTL_330,	0x00000000	},
	{	DENALI_CTL_331,	0x030FFFFF	},
	{	DENALI_CTL_332,	0xFFFFFFFF	},
	{	DENALI_CTL_333,	0x000F000F	},
	{	DENALI_CTL_334,	0x00000000	},
	{	DENALI_CTL_335,	0x030FFFFF	},
	{	DENALI_CTL_336,	0xFFFFFFFF	},
	{	DENALI_CTL_337,	0x000F000F	},
	{	DENALI_CTL_338,	0x00000000	},
	{	DENALI_CTL_339,	0x030FFFFF	},
	{	DENALI_CTL_340,	0xFFFFFFFF	},
	{	DENALI_CTL_341,	0x000F000F	},
	{	DENALI_CTL_342,	0x00000000	},
	{	DENALI_CTL_343,	0x030FFFFF	},
	{	DENALI_CTL_344,	0xFFFFFFFF	},
	{	DENALI_CTL_345,	0x000F000F	},
	{	DENALI_CTL_346,	0x00000000	},
	{	DENALI_CTL_347,	0x030FFFFF	},
	{	DENALI_CTL_348,	0xFFFFFFFF	},
	{	DENALI_CTL_349,	0x000F000F	},
	{	DENALI_CTL_350,	0x00000000	},
	{	DENALI_CTL_351,	0x030FFFFF	},
	{	DENALI_CTL_352,	0xFFFFFFFF	},
	{	DENALI_CTL_353,	0x000F000F	},
	{	DENALI_CTL_354,	0x00000000	},
	{	DENALI_CTL_355,	0x030FFFFF	},
	{	DENALI_CTL_356,	0xFFFFFFFF	},
	{	DENALI_CTL_357,	0x000F000F	},
	{	DENALI_CTL_358,	0x00000000	},
	{	DENALI_CTL_359,	0x030FFFFF	},
	{	DENALI_CTL_360,	0xFFFFFFFF	},
	{	DENALI_CTL_361,	0x000F000F	},
	{	DENALI_CTL_362,	0x00000000	},
	{	DENALI_CTL_363,	0x030FFFFF	},
	{	DENALI_CTL_364,	0xFFFFFFFF	},
	{	DENALI_CTL_365,	0x000F000F	},
	{	DENALI_CTL_366,	0x00000000	},
	{	DENALI_CTL_367,	0x030FFFFF	},
	{	DENALI_CTL_368,	0xFFFFFFFF	},
	{	DENALI_CTL_369,	0x000F000F	},
	{	DENALI_CTL_370,	0x00000000	},
	{	DENALI_CTL_371,	0x030FFFFF	},
	{	DENALI_CTL_372,	0xFFFFFFFF	},
	{	DENALI_CTL_373,	0x000F000F	},
	{	DENALI_CTL_374,	0x00000000	},
	{	DENALI_CTL_375,	0x030FFFFF	},
	{	DENALI_CTL_376,	0xFFFFFFFF	},
	{	DENALI_CTL_377,	0x000F000F	},
	{	DENALI_CTL_378,	0x00000000	},
	{	DENALI_CTL_379,	0x030FFFFF	},
	{	DENALI_CTL_380,	0xFFFFFFFF	},
	{	DENALI_CTL_381,	0x000F000F	},
	{	DENALI_CTL_382,	0x00000000	},
	{	DENALI_CTL_383,	0x030FFFFF	},
	{	DENALI_CTL_384,	0xFFFFFFFF	},
	{	DENALI_CTL_385,	0x000F000F	},
	{	DENALI_CTL_386,	0x00000000	},
	{	DENALI_CTL_387,	0x030FFFFF	},
	{	DENALI_CTL_388,	0xFFFFFFFF	},
	{	DENALI_CTL_389,	0x000F000F	},
	{	DENALI_CTL_390,	0x00000000	},
	{	DENALI_CTL_391,	0x030FFFFF	},
	{	DENALI_CTL_392,	0xFFFFFFFF	},
	{	DENALI_CTL_393,	0x000F000F	},
	{	DENALI_CTL_394,	0x00000000	},
	{	DENALI_CTL_395,	0x030FFFFF	},
	{	DENALI_CTL_396,	0xFFFFFFFF	},
	{	DENALI_CTL_397,	0x000F000F	},
	{	DENALI_CTL_398,	0x00000000	},
	{	DENALI_CTL_399,	0x030FFFFF	},
	{	DENALI_CTL_400,	0xFFFFFFFF	},
	{	DENALI_CTL_401,	0x000F000F	},
	{	DENALI_CTL_402,	0x00000000	},
	{	DENALI_CTL_403,	0x030FFFFF	},
	{	DENALI_CTL_404,	0xFFFFFFFF	},
	{	DENALI_CTL_405,	0x000F000F	},
	{	DENALI_CTL_406,	0x00000000	},
	{	DENALI_CTL_407,	0x030FFFFF	},
	{	DENALI_CTL_408,	0xFFFFFFFF	},
	{	DENALI_CTL_409,	0x000F000F	},
	{	DENALI_CTL_410,	0x00000000	},
	{	DENALI_CTL_411,	0x030FFFFF	},
	{	DENALI_CTL_412,	0xFFFFFFFF	},
	{	DENALI_CTL_413,	0x000F000F	},
	{	DENALI_CTL_414,	0x00000000	},
	{	DENALI_CTL_415,	0x030FFFFF	},
	{	DENALI_CTL_416,	0xFFFFFFFF	},
	{	DENALI_CTL_417,	0x000F000F	},
	{	DENALI_CTL_418,	0x00000000	},
	{	DENALI_CTL_419,	0x030FFFFF	},
	{	DENALI_CTL_420,	0xFFFFFFFF	},
	{	DENALI_CTL_421,	0x000F000F	},
	{	DENALI_CTL_422,	0x00000000	},
	{	DENALI_CTL_423,	0x030FFFFF	},
	{	DENALI_CTL_424,	0xFFFFFFFF	},
	{	DENALI_CTL_425,	0x000F000F	},
	{	DENALI_CTL_426,	0x00000000	},
	{	DENALI_CTL_427,	0x030FFFFF	},
	{	DENALI_CTL_428,	0xFFFFFFFF	},
	{	DENALI_CTL_429,	0x000F000F	},
	{	DENALI_CTL_430,	0x00000000	},
	{	DENALI_CTL_431,	0x030FFFFF	},
	{	DENALI_CTL_432,	0xFFFFFFFF	},
	{	DENALI_CTL_433,	0x000F000F	},
	{	DENALI_CTL_434,	0x00000000	},
	{	DENALI_CTL_435,	0x030FFFFF	},
	{	DENALI_CTL_436,	0xFFFFFFFF	},
	{	DENALI_CTL_437,	0x000F000F	},
	{	DENALI_CTL_438,	0x00000000	},
	{	DENALI_CTL_439,	0x030FFFFF	},
	{	DENALI_CTL_440,	0xFFFFFFFF	},
	{	DENALI_CTL_441,	0x000F000F	},
	{	DENALI_CTL_442,	0x00000000	},
	{	DENALI_CTL_443,	0x030FFFFF	},
	{	DENALI_CTL_444,	0xFFFFFFFF	},
	{	DENALI_CTL_445,	0x000F000F	},
	{	DENALI_CTL_446,	0x04000000	},
	{	DENALI_CTL_447,	0x04040404	},
	{	DENALI_CTL_448,	0x04040404	},
	{	DENALI_CTL_449,	0x04040404	},
	{	DENALI_CTL_450,	0x00040404	},
	{	DENALI_CTL_451,	0x03030064	},
	{	DENALI_CTL_452,	0x03030303	},
	{	DENALI_CTL_453,	0x03030303	},
	{	DENALI_CTL_454,	0x03030303	},
	{	DENALI_CTL_455,	0x00010303	},
	{	DENALI_CTL_456,	0x02020064	},
	{	DENALI_CTL_457,	0x02020202	},
	{	DENALI_CTL_458,	0x02020202	},
	{	DENALI_CTL_459,	0x02020202	},
	{	DENALI_CTL_460,	0x00020202	},
	{	DENALI_CTL_461,	0x01010064	},
	{	DENALI_CTL_462,	0x01010101	},
	{	DENALI_CTL_463,	0x01010101	},
	{	DENALI_CTL_464,	0x01010101	},
	{	DENALI_CTL_465,	0x00030101	},
	{	DENALI_CTL_466,	0x00000064	},
	{	DENALI_CTL_467,	0x00000006	},
	{	DENALI_CTL_468,	0x000007D0	},
	{	DENALI_CTL_469,	0x00000032	},
	{	DENALI_CTL_470,	0x00000200	},
	{	DENALI_CTL_471,	0x00000200	},
	{	DENALI_CTL_472,	0x00000000	},
	{	DENALI_CTL_473,	0x00000000	},
	{	DENALI_CTL_474,	0x01080205	},
	{	DENALI_CTL_475,	0x00200106	},
	{	DENALI_CTL_476,	0x00000000	},
	{	DENALI_CTL_477,	0x0A000200	},
	{	DENALI_CTL_478,	0x000C000A	},
	{	DENALI_CTL_479,	0x00000000	},
	{	DENALI_CTL_480,	0x00000000	},
	{	DENALI_CTL_481,	0x00000000	},
	{	DENALI_CTL_482,	0x00000000	},
	{	DENALI_CTL_483,	0x00000000	},
	{	DENALI_CTL_484,	0x00000000	},
	{	DENALI_CTL_485,	0x00000000	},
	{	DENALI_CTL_486,	0x00000000	},
	{	DENALI_CTL_487,	0x00000000	},
	{	DENALI_CTL_488,	0x0000000F	},
	{	DENALI_CTL_489,	0x01F105DD	},
	{	DENALI_CTL_490,	0x4F7206E8	},
	{	DENALI_CTL_491,	0x00002822	},
	{	DENALI_CTL_492,	0x1E1E3C22	},
	{	DENALI_CTL_493,	0x00000000	},
	{	DENALI_CTL_494,	0x00000000	},
	{	DENALI_CTL_495,	0x00000000	},
	{	DENALI_CTL_496,	0x00000000	},
	{	DENALI_CTL_497,	0x00000000	},
	{	DENALI_CTL_498,	0x00000000	},
	{	DENALI_CTL_499,	0x00000000	},
	{	DENALI_CTL_500,	0x00000000	},
	{	DENALI_CTL_501,	0x00000000	},
	{	DENALI_CTL_502,	0x00000000	},
	{	DENALI_CTL_503,	0x00000000	},
	{	DENALI_CTL_504,	0x00000000	},
	{	DENALI_CTL_505,	0x00000000	},
	{	DENALI_CTL_506,	0x00000000	},
	{	DENALI_CTL_507,	0x00000000	},
	{	DENALI_CTL_508,	0x00000000	},
	{	DENALI_CTL_509,	0x00000000	},
	{	DENALI_CTL_510,	0x00000000	}
};
