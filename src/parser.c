#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 358
#define ALIAS_COUNT 0
#define TOKEN_COUNT 340
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_id = 1,
  anon_sym_public = 2,
  anon_sym_internal = 3,
  anon_sym_protected = 4,
  anon_sym_private = 5,
  anon_sym_static = 6,
  anon_sym_abstract = 7,
  anon_sym_const = 8,
  anon_sym_extern = 9,
  anon_sym_override = 10,
  anon_sym_partial = 11,
  anon_sym_readonly = 12,
  anon_sym_sealed = 13,
  anon_sym_unsafe = 14,
  anon_sym_virtual = 15,
  anon_sym_volatile = 16,
  anon_sym_explicit = 17,
  anon_sym_implicit = 18,
  anon_sym_ = 19,
  anon_sym_2 = 20,
  anon_sym_3 = 21,
  anon_sym_4 = 22,
  anon_sym_5 = 23,
  anon_sym_6 = 24,
  anon_sym_7 = 25,
  anon_sym_8 = 26,
  anon_sym_9 = 27,
  anon_sym_10 = 28,
  anon_sym_11 = 29,
  anon_sym_12 = 30,
  anon_sym_13 = 31,
  anon_sym_14 = 32,
  anon_sym_15 = 33,
  anon_sym_16 = 34,
  anon_sym_17 = 35,
  anon_sym_18 = 36,
  anon_sym_19 = 37,
  anon_sym_20 = 38,
  anon_sym_21 = 39,
  anon_sym_22 = 40,
  anon_sym_23 = 41,
  anon_sym_24 = 42,
  anon_sym_25 = 43,
  anon_sym_26 = 44,
  anon_sym_27 = 45,
  anon_sym_28 = 46,
  anon_sym_29 = 47,
  anon_sym_30 = 48,
  anon_sym_31 = 49,
  anon_sym_32 = 50,
  anon_sym_class = 51,
  anon_sym_interface = 52,
  anon_sym_struct = 53,
  anon_sym_enum = 54,
  anon_sym_var = 55,
  anon_sym_delegate = 56,
  anon_sym_33 = 57,
  anon_sym_34 = 58,
  anon_sym_35 = 59,
  anon_sym_36 = 60,
  anon_sym_37 = 61,
  anon_sym_38 = 62,
  anon_sym_PLUS = 63,
  anon_sym_DASH = 64,
  anon_sym_39 = 65,
  anon_sym_40 = 66,
  anon_sym_41 = 67,
  anon_sym_42 = 68,
  anon_sym_43 = 69,
  anon_sym_44 = 70,
  anon_sym_45 = 71,
  anon_sym_46 = 72,
  anon_sym_47 = 73,
  anon_sym_48 = 74,
  anon_sym_49 = 75,
  anon_sym_50 = 76,
  anon_sym_51 = 77,
  anon_sym_52 = 78,
  anon_sym_53 = 79,
  anon_sym_54 = 80,
  anon_sym_55 = 81,
  anon_sym_56 = 82,
  anon_sym_57 = 83,
  anon_sym_58 = 84,
  anon_sym_59 = 85,
  anon_sym_60 = 86,
  anon_sym_61 = 87,
  anon_sym_return = 88,
  anon_sym_62 = 89,
  anon_sym_async = 90,
  anon_sym_await = 91,
  anon_sym_by = 92,
  anon_sym_if = 93,
  anon_sym_else = 94,
  anon_sym_foreach = 95,
  anon_sym_in = 96,
  anon_sym_for = 97,
  anon_sym_do = 98,
  anon_sym_while = 99,
  anon_sym_switch = 100,
  anon_sym_case = 101,
  anon_sym_break = 102,
  anon_sym_yield = 103,
  anon_sym_try = 104,
  anon_sym_catch = 105,
  anon_sym_finally = 106,
  anon_sym_continue = 107,
  anon_sym_from = 108,
  anon_sym_where = 109,
  anon_sym_select = 110,
  anon_sym_throw = 111,
  anon_sym_join = 112,
  anon_sym_goto = 113,
  anon_sym_lock = 114,
  anon_sym_orderby = 115,
  anon_sym_63 = 116,
  anon_sym_64 = 117,
  anon_sym_65 = 118,
  anon_sym_66 = 119,
  anon_sym_67 = 120,
  anon_sym_LPAREN_RPAREN = 121,
  anon_sym_68 = 122,
  anon_sym_69 = 123,
  anon_sym_70 = 124,
  anon_sym_71 = 125,
  anon_sym_72 = 126,
  anon_sym_73 = 127,
  anon_sym_74 = 128,
  anon_sym_75 = 129,
  anon_sym_76 = 130,
  anon_sym_77 = 131,
  anon_sym_78 = 132,
  anon_sym_79 = 133,
  anon_sym_80 = 134,
  anon_sym_81 = 135,
  anon_sym_82 = 136,
  anon_sym_83 = 137,
  anon_sym_84 = 138,
  anon_sym_85 = 139,
  anon_sym_LPAREN_RPAREN2 = 140,
  anon_sym_LPAREN_RPAREN3 = 141,
  anon_sym_86 = 142,
  anon_sym_87 = 143,
  anon_sym_88 = 144,
  anon_sym_89 = 145,
  anon_sym_90 = 146,
  anon_sym_91 = 147,
  anon_sym_92 = 148,
  anon_sym_93 = 149,
  anon_sym_94 = 150,
  anon_sym_95 = 151,
  anon_sym_96 = 152,
  anon_sym_97 = 153,
  anon_sym_98 = 154,
  anon_sym_99 = 155,
  anon_sym_100 = 156,
  anon_sym_101 = 157,
  anon_sym_102 = 158,
  anon_sym_103 = 159,
  anon_sym_add = 160,
  anon_sym_checked = 161,
  anon_sym_into = 162,
  anon_sym_nameof = 163,
  anon_sym_new = 164,
  anon_sym_using = 165,
  anon_sym_value = 166,
  anon_sym_global = 167,
  anon_sym_let = 168,
  anon_sym_operator = 169,
  anon_sym_params = 170,
  anon_sym_this = 171,
  anon_sym_typeof = 172,
  anon_sym_default = 173,
  anon_sym_equals = 174,
  anon_sym_long = 175,
  anon_sym_out = 176,
  anon_sym_ref = 177,
  anon_sym_sizeof = 178,
  anon_sym_descending = 179,
  anon_sym_ascending = 180,
  anon_sym_dynamic = 181,
  anon_sym_fixed = 182,
  anon_sym_group = 183,
  anon_sym_is = 184,
  anon_sym_get = 185,
  anon_sym_set = 186,
  anon_sym_on = 187,
  anon_sym_remove = 188,
  anon_sym_stackalloc = 189,
  anon_sym_unchecked = 190,
  anon_sym_as = 191,
  anon_sym_base = 192,
  anon_sym_104 = 193,
  anon_sym_105 = 194,
  anon_sym_106 = 195,
  anon_sym_107 = 196,
  anon_sym_108 = 197,
  anon_sym_109 = 198,
  anon_sym_110 = 199,
  anon_sym_111 = 200,
  anon_sym_112 = 201,
  anon_sym_113 = 202,
  anon_sym_114 = 203,
  anon_sym_115 = 204,
  anon_sym_116 = 205,
  anon_sym_117 = 206,
  anon_sym_118 = 207,
  anon_sym_119 = 208,
  anon_sym_120 = 209,
  anon_sym_121 = 210,
  anon_sym_122 = 211,
  anon_sym_123 = 212,
  anon_sym_124 = 213,
  anon_sym_125 = 214,
  anon_sym_126 = 215,
  anon_sym_127 = 216,
  anon_sym_128 = 217,
  anon_sym_129 = 218,
  anon_sym_130 = 219,
  anon_sym_131 = 220,
  anon_sym_132 = 221,
  anon_sym_133 = 222,
  anon_sym_134 = 223,
  anon_sym_135 = 224,
  anon_sym_136 = 225,
  anon_sym_137 = 226,
  anon_sym_138 = 227,
  anon_sym_139 = 228,
  anon_sym_140 = 229,
  anon_sym_141 = 230,
  anon_sym_142 = 231,
  anon_sym_143 = 232,
  anon_sym_144 = 233,
  anon_sym_145 = 234,
  anon_sym_146 = 235,
  anon_sym_147 = 236,
  anon_sym_148 = 237,
  anon_sym_149 = 238,
  anon_sym_150 = 239,
  anon_sym_151 = 240,
  anon_sym_152 = 241,
  anon_sym_153 = 242,
  anon_sym_int = 243,
  anon_sym_bool = 244,
  anon_sym_string = 245,
  anon_sym_float = 246,
  anon_sym_char = 247,
  anon_sym_double = 248,
  anon_sym_byte = 249,
  anon_sym_decimal = 250,
  anon_sym_sbyte = 251,
  anon_sym_short = 252,
  anon_sym_uint = 253,
  anon_sym_ushort = 254,
  anon_sym_object = 255,
  anon_sym_ulong = 256,
  anon_sym_154 = 257,
  anon_sym_155 = 258,
  anon_sym_156 = 259,
  anon_sym_157 = 260,
  anon_sym_158 = 261,
  anon_sym_159 = 262,
  anon_sym_160 = 263,
  anon_sym_161 = 264,
  anon_sym_162 = 265,
  anon_sym_163 = 266,
  anon_sym_164 = 267,
  anon_sym_165 = 268,
  anon_sym_166 = 269,
  anon_sym_167 = 270,
  anon_sym_168 = 271,
  anon_sym_169 = 272,
  anon_sym_170 = 273,
  anon_sym_171 = 274,
  anon_sym_172 = 275,
  anon_sym_173 = 276,
  anon_sym_174 = 277,
  anon_sym_175 = 278,
  anon_sym_176 = 279,
  anon_sym_177 = 280,
  anon_sym_178 = 281,
  anon_sym_179 = 282,
  anon_sym_180 = 283,
  anon_sym_181 = 284,
  anon_sym_182 = 285,
  anon_sym_183 = 286,
  anon_sym_184 = 287,
  anon_sym_185 = 288,
  anon_sym_186 = 289,
  anon_sym_187 = 290,
  anon_sym_188 = 291,
  anon_sym_189 = 292,
  anon_sym_190 = 293,
  anon_sym_191 = 294,
  anon_sym_192 = 295,
  anon_sym_193 = 296,
  anon_sym_194 = 297,
  anon_sym_195 = 298,
  anon_sym_196 = 299,
  anon_sym_197 = 300,
  anon_sym_198 = 301,
  anon_sym_199 = 302,
  anon_sym_200 = 303,
  anon_sym_201 = 304,
  anon_sym_202 = 305,
  anon_sym_203 = 306,
  anon_sym_204 = 307,
  anon_sym_205 = 308,
  anon_sym_206 = 309,
  anon_sym_207 = 310,
  anon_sym_208 = 311,
  anon_sym_209 = 312,
  anon_sym_210 = 313,
  anon_sym_211 = 314,
  anon_sym_212 = 315,
  anon_sym_213 = 316,
  anon_sym_214 = 317,
  anon_sym_215 = 318,
  sym_type = 319,
  sym_comment = 320,
  aux_sym_z_token1 = 321,
  aux_sym_z_token2 = 322,
  aux_sym_z_token3 = 323,
  sym_str = 324,
  sym_note = 325,
  anon_sym_true = 326,
  anon_sym_false = 327,
  anon_sym_216 = 328,
  anon_sym_217 = 329,
  anon_sym_218 = 330,
  anon_sym_219 = 331,
  anon_sym_220 = 332,
  anon_sym_SQUOTE = 333,
  aux_sym_char_token1 = 334,
  sym_escape_sequence = 335,
  sym_int = 336,
  anon_sym_null = 337,
  anon_sym_221 = 338,
  sym_real = 339,
  sym_ = 340,
  sym__e = 341,
  sym__lit = 342,
  sym_modifiers = 343,
  sym_mod = 344,
  sym_cat = 345,
  sym_op = 346,
  sym_return = 347,
  sym_flow = 348,
  sym_key = 349,
  sym_prim = 350,
  sym_z = 351,
  sym_bool = 352,
  sym_bt = 353,
  sym_char = 354,
  sym_null = 355,
  aux_sym__repeat1 = 356,
  aux_sym_modifiers_repeat1 = 357,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_public] = "public",
  [anon_sym_internal] = "internal",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_static] = "static",
  [anon_sym_abstract] = "abstract",
  [anon_sym_const] = "const",
  [anon_sym_extern] = "extern",
  [anon_sym_override] = "override",
  [anon_sym_partial] = "partial",
  [anon_sym_readonly] = "readonly",
  [anon_sym_sealed] = "sealed",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_virtual] = "virtual",
  [anon_sym_volatile] = "volatile",
  [anon_sym_explicit] = "explicit",
  [anon_sym_implicit] = "implicit",
  [anon_sym_] = "⒠",
  [anon_sym_2] = "⒤",
  [anon_sym_3] = "‒̥",
  [anon_sym_4] = "؟",
  [anon_sym_5] = "⍜",
  [anon_sym_6] = "⍉",
  [anon_sym_7] = "⏚",
  [anon_sym_8] = "⼻",
  [anon_sym_9] = "‒",
  [anon_sym_10] = "︲̥̑",
  [anon_sym_11] = "︲̑",
  [anon_sym_12] = "◠̥",
  [anon_sym_13] = "◠",
  [anon_sym_14] = "︲̥",
  [anon_sym_15] = "︲",
  [anon_sym_16] = "▰̥",
  [anon_sym_17] = "▰",
  [anon_sym_18] = "☋",
  [anon_sym_19] = "ᴸ",
  [anon_sym_20] = "⁺",
  [anon_sym_21] = "ᴾ",
  [anon_sym_22] = "⌷",
  [anon_sym_23] = "∘",
  [anon_sym_24] = "ᵛ",
  [anon_sym_25] = "🔒",
  [anon_sym_26] = "⒪",
  [anon_sym_27] = "ᑍ",
  [anon_sym_28] = "ᐅ",
  [anon_sym_29] = "ᑐ",
  [anon_sym_30] = "ᑔ",
  [anon_sym_31] = "🀰",
  [anon_sym_32] = "🀱",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_var] = "var",
  [anon_sym_delegate] = "delegate",
  [anon_sym_33] = "⊓",
  [anon_sym_34] = "○",
  [anon_sym_35] = "𐋆",
  [anon_sym_36] = "⍥",
  [anon_sym_37] = "𐋂",
  [anon_sym_38] = "⊟",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_39] = "⋺",
  [anon_sym_40] = "∋",
  [anon_sym_41] = "🝠",
  [anon_sym_42] = "⎚",
  [anon_sym_43] = "→",
  [anon_sym_44] = "☰",
  [anon_sym_45] = "≠",
  [anon_sym_46] = "≥",
  [anon_sym_47] = "≤",
  [anon_sym_48] = "∧",
  [anon_sym_49] = "∨",
  [anon_sym_50] = "ᐧ",
  [anon_sym_51] = "±",
  [anon_sym_52] = "∃",
  [anon_sym_53] = "⁝",
  [anon_sym_54] = "❙",
  [anon_sym_55] = "৴",
  [anon_sym_56] = "ᖾ",
  [anon_sym_57] = "¹",
  [anon_sym_58] = "❚",
  [anon_sym_59] = "ˮ",
  [anon_sym_60] = "≫",
  [anon_sym_61] = "×",
  [anon_sym_return] = "return",
  [anon_sym_62] = "⮐",
  [anon_sym_async] = "async",
  [anon_sym_await] = "await",
  [anon_sym_by] = "by",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_foreach] = "foreach",
  [anon_sym_in] = "in",
  [anon_sym_for] = "for",
  [anon_sym_do] = "do",
  [anon_sym_while] = "while",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_break] = "break",
  [anon_sym_yield] = "yield",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [anon_sym_continue] = "continue",
  [anon_sym_from] = "from",
  [anon_sym_where] = "where",
  [anon_sym_select] = "select",
  [anon_sym_throw] = "throw",
  [anon_sym_join] = "join",
  [anon_sym_goto] = "goto",
  [anon_sym_lock] = "lock",
  [anon_sym_orderby] = "orderby",
  [anon_sym_63] = "⤳",
  [anon_sym_64] = "⤴",
  [anon_sym_65] = "⤵",
  [anon_sym_66] = "∀",
  [anon_sym_67] = "〰",
  [anon_sym_LPAREN_RPAREN] = "(˙▿˙)",
  [anon_sym_68] = "◿",
  [anon_sym_69] = "◺",
  [anon_sym_70] = "∈",
  [anon_sym_71] = "⟳",
  [anon_sym_72] = "⟲",
  [anon_sym_73] = "⤭",
  [anon_sym_74] = "⥰",
  [anon_sym_75] = "～",
  [anon_sym_76] = "⤇",
  [anon_sym_77] = "¦",
  [anon_sym_78] = "⤏",
  [anon_sym_79] = "㆑",
  [anon_sym_80] = "⤬",
  [anon_sym_81] = "⟆",
  [anon_sym_82] = "⏂",
  [anon_sym_83] = "⟾",
  [anon_sym_84] = "↯",
  [anon_sym_85] = "⇤",
  [anon_sym_LPAREN_RPAREN2] = "(╯°ѡ°)⸗",
  [anon_sym_LPAREN_RPAREN3] = "(╯°□°)╯",
  [anon_sym_86] = "‖",
  [anon_sym_87] = "¿",
  [anon_sym_88] = "▸",
  [anon_sym_89] = "⏢",
  [anon_sym_90] = "•",
  [anon_sym_91] = "⎨",
  [anon_sym_92] = "⍈",
  [anon_sym_93] = "⍰",
  [anon_sym_94] = "。",
  [anon_sym_95] = "⎬",
  [anon_sym_96] = "⟦",
  [anon_sym_97] = "⟧",
  [anon_sym_98] = "❰",
  [anon_sym_99] = "❱",
  [anon_sym_100] = "⸨",
  [anon_sym_101] = "⸩",
  [anon_sym_102] = "⁅",
  [anon_sym_103] = "⁆",
  [anon_sym_add] = "add",
  [anon_sym_checked] = "checked",
  [anon_sym_into] = "into",
  [anon_sym_nameof] = "nameof",
  [anon_sym_new] = "new",
  [anon_sym_using] = "using",
  [anon_sym_value] = "value",
  [anon_sym_global] = "global",
  [anon_sym_let] = "let",
  [anon_sym_operator] = "operator",
  [anon_sym_params] = "params",
  [anon_sym_this] = "this",
  [anon_sym_typeof] = "typeof",
  [anon_sym_default] = "default",
  [anon_sym_equals] = "equals",
  [anon_sym_long] = "long",
  [anon_sym_out] = "out",
  [anon_sym_ref] = "ref",
  [anon_sym_sizeof] = "sizeof",
  [anon_sym_descending] = "descending",
  [anon_sym_ascending] = "ascending",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_fixed] = "fixed",
  [anon_sym_group] = "group",
  [anon_sym_is] = "is",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_on] = "on",
  [anon_sym_remove] = "remove",
  [anon_sym_stackalloc] = "stackalloc",
  [anon_sym_unchecked] = "unchecked",
  [anon_sym_as] = "as",
  [anon_sym_base] = "base",
  [anon_sym_104] = "Ɑℓ",
  [anon_sym_105] = "⊐̥",
  [anon_sym_106] = "𝐊",
  [anon_sym_107] = "𝖴",
  [anon_sym_108] = "𝖴ᵉ",
  [anon_sym_109] = "𝚂",
  [anon_sym_110] = "𝙲",
  [anon_sym_111] = "⊐",
  [anon_sym_112] = "𝚊̱",
  [anon_sym_113] = "𝑠̱",
  [anon_sym_114] = "ⓜ",
  [anon_sym_115] = "☡̱ʿ",
  [anon_sym_116] = "■̠ʿ",
  [anon_sym_117] = "◇̠ʾ",
  [anon_sym_118] = "☡̱ʾ",
  [anon_sym_119] = "𝐹",
  [anon_sym_120] = "˙",
  [anon_sym_121] = "⁰",
  [anon_sym_122] = "ˢ",
  [anon_sym_123] = "み",
  [anon_sym_124] = "⏰",
  [anon_sym_125] = "◇̠",
  [anon_sym_126] = "☡̱",
  [anon_sym_127] = "■̠",
  [anon_sym_128] = "⌽",
  [anon_sym_129] = "ⓧ̱",
  [anon_sym_130] = "𝟾̱",
  [anon_sym_131] = "⨕",
  [anon_sym_132] = "◍",
  [anon_sym_133] = "╭",
  [anon_sym_134] = "╰",
  [anon_sym_135] = "⌢",
  [anon_sym_136] = "⦿",
  [anon_sym_137] = "𝚊",
  [anon_sym_138] = "𝒹",
  [anon_sym_139] = "𝓂",
  [anon_sym_140] = "𝝇",
  [anon_sym_141] = "⧕",
  [anon_sym_142] = "𝜏",
  [anon_sym_143] = "𝓽",
  [anon_sym_144] = "𝓋",
  [anon_sym_145] = "ⓔ",
  [anon_sym_146] = "①",
  [anon_sym_147] = "ⓗ",
  [anon_sym_148] = "𝚜",
  [anon_sym_149] = "𝚛",
  [anon_sym_150] = "𝚙",
  [anon_sym_151] = "ʾ",
  [anon_sym_152] = "ʿ",
  [anon_sym_153] = "ᴼ",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_float] = "float",
  [anon_sym_char] = "char",
  [anon_sym_double] = "double",
  [anon_sym_byte] = "byte",
  [anon_sym_decimal] = "decimal",
  [anon_sym_sbyte] = "sbyte",
  [anon_sym_short] = "short",
  [anon_sym_uint] = "uint",
  [anon_sym_ushort] = "ushort",
  [anon_sym_object] = "object",
  [anon_sym_ulong] = "ulong",
  [anon_sym_154] = "ᆞ",
  [anon_sym_155] = "ㄹ",
  [anon_sym_156] = "Ⴋ",
  [anon_sym_157] = "Ⴌ",
  [anon_sym_158] = "Ⴄ",
  [anon_sym_159] = "⨴",
  [anon_sym_160] = "⨮",
  [anon_sym_161] = "エ",
  [anon_sym_162] = "⫫",
  [anon_sym_163] = "ㅇ",
  [anon_sym_164] = "ᆨ",
  [anon_sym_165] = "ᆩ",
  [anon_sym_166] = "ᅮ",
  [anon_sym_167] = "ᅭ",
  [anon_sym_168] = "ㅅ",
  [anon_sym_169] = "ㅆ",
  [anon_sym_170] = "ᄍ",
  [anon_sym_171] = "⊡",
  [anon_sym_172] = "∙",
  [anon_sym_173] = "⒜",
  [anon_sym_174] = "⒡",
  [anon_sym_175] = "𝕄",
  [anon_sym_176] = "𝕊",
  [anon_sym_177] = "ℚ",
  [anon_sym_178] = "✧",
  [anon_sym_179] = "𝕂",
  [anon_sym_180] = "𝔼",
  [anon_sym_181] = "‡",
  [anon_sym_182] = "𝕃",
  [anon_sym_183] = "√",
  [anon_sym_184] = "∑",
  [anon_sym_185] = "𝛑",
  [anon_sym_186] = "ロ",
  [anon_sym_187] = "⫙",
  [anon_sym_188] = "🧩",
  [anon_sym_189] = "🕹",
  [anon_sym_190] = "ᇅ",
  [anon_sym_191] = "フ",
  [anon_sym_192] = "シ",
  [anon_sym_193] = "タ",
  [anon_sym_194] = "ト",
  [anon_sym_195] = "メ",
  [anon_sym_196] = "メ̂",
  [anon_sym_197] = "Ʀ",
  [anon_sym_198] = "Ⴔ",
  [anon_sym_199] = "⒯",
  [anon_sym_200] = "𝛿𝚝",
  [anon_sym_201] = "∠ʳ",
  [anon_sym_202] = "∠°",
  [anon_sym_203] = "⊣",
  [anon_sym_204] = "⊢",
  [anon_sym_205] = "⊥",
  [anon_sym_206] = "⊤",
  [anon_sym_207] = "⫪",
  [anon_sym_208] = "⟛",
  [anon_sym_209] = "⑂",
  [anon_sym_210] = "▷",
  [anon_sym_211] = "𝟾",
  [anon_sym_212] = "ⓧ",
  [anon_sym_213] = "🌱",
  [anon_sym_214] = "🍄",
  [anon_sym_215] = "🦋",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [aux_sym_z_token1] = "z_token1",
  [aux_sym_z_token2] = "z_token2",
  [aux_sym_z_token3] = "z_token3",
  [sym_str] = "str",
  [sym_note] = "note",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_216] = "✓",
  [anon_sym_217] = "✗",
  [anon_sym_218] = "◇",
  [anon_sym_219] = "☡",
  [anon_sym_220] = "■",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_int] = "int",
  [anon_sym_null] = "null",
  [anon_sym_221] = "∅",
  [sym_real] = "real",
  [sym_] = "Σ",
  [sym__e] = "_e",
  [sym__lit] = "_lit",
  [sym_modifiers] = "modifiers",
  [sym_mod] = "mod",
  [sym_cat] = "cat",
  [sym_op] = "op",
  [sym_return] = "return",
  [sym_flow] = "flow",
  [sym_key] = "key",
  [sym_prim] = "prim",
  [sym_z] = "z",
  [sym_bool] = "bool",
  [sym_bt] = "bt",
  [sym_char] = "char",
  [sym_null] = "null",
  [aux_sym__repeat1] = "Σ_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_explicit] = anon_sym_explicit,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_28] = anon_sym_28,
  [anon_sym_29] = anon_sym_29,
  [anon_sym_30] = anon_sym_30,
  [anon_sym_31] = anon_sym_31,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_33] = anon_sym_33,
  [anon_sym_34] = anon_sym_34,
  [anon_sym_35] = anon_sym_35,
  [anon_sym_36] = anon_sym_36,
  [anon_sym_37] = anon_sym_37,
  [anon_sym_38] = anon_sym_38,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_39] = anon_sym_39,
  [anon_sym_40] = anon_sym_40,
  [anon_sym_41] = anon_sym_41,
  [anon_sym_42] = anon_sym_42,
  [anon_sym_43] = anon_sym_43,
  [anon_sym_44] = anon_sym_44,
  [anon_sym_45] = anon_sym_45,
  [anon_sym_46] = anon_sym_46,
  [anon_sym_47] = anon_sym_47,
  [anon_sym_48] = anon_sym_48,
  [anon_sym_49] = anon_sym_49,
  [anon_sym_50] = anon_sym_50,
  [anon_sym_51] = anon_sym_51,
  [anon_sym_52] = anon_sym_52,
  [anon_sym_53] = anon_sym_53,
  [anon_sym_54] = anon_sym_54,
  [anon_sym_55] = anon_sym_55,
  [anon_sym_56] = anon_sym_56,
  [anon_sym_57] = anon_sym_57,
  [anon_sym_58] = anon_sym_58,
  [anon_sym_59] = anon_sym_59,
  [anon_sym_60] = anon_sym_60,
  [anon_sym_61] = anon_sym_61,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_62] = anon_sym_62,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_orderby] = anon_sym_orderby,
  [anon_sym_63] = anon_sym_63,
  [anon_sym_64] = anon_sym_64,
  [anon_sym_65] = anon_sym_65,
  [anon_sym_66] = anon_sym_66,
  [anon_sym_67] = anon_sym_67,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_68] = anon_sym_68,
  [anon_sym_69] = anon_sym_69,
  [anon_sym_70] = anon_sym_70,
  [anon_sym_71] = anon_sym_71,
  [anon_sym_72] = anon_sym_72,
  [anon_sym_73] = anon_sym_73,
  [anon_sym_74] = anon_sym_74,
  [anon_sym_75] = anon_sym_75,
  [anon_sym_76] = anon_sym_76,
  [anon_sym_77] = anon_sym_77,
  [anon_sym_78] = anon_sym_78,
  [anon_sym_79] = anon_sym_79,
  [anon_sym_80] = anon_sym_80,
  [anon_sym_81] = anon_sym_81,
  [anon_sym_82] = anon_sym_82,
  [anon_sym_83] = anon_sym_83,
  [anon_sym_84] = anon_sym_84,
  [anon_sym_85] = anon_sym_85,
  [anon_sym_LPAREN_RPAREN2] = anon_sym_LPAREN_RPAREN2,
  [anon_sym_LPAREN_RPAREN3] = anon_sym_LPAREN_RPAREN3,
  [anon_sym_86] = anon_sym_86,
  [anon_sym_87] = anon_sym_87,
  [anon_sym_88] = anon_sym_88,
  [anon_sym_89] = anon_sym_89,
  [anon_sym_90] = anon_sym_90,
  [anon_sym_91] = anon_sym_91,
  [anon_sym_92] = anon_sym_92,
  [anon_sym_93] = anon_sym_93,
  [anon_sym_94] = anon_sym_94,
  [anon_sym_95] = anon_sym_95,
  [anon_sym_96] = anon_sym_96,
  [anon_sym_97] = anon_sym_97,
  [anon_sym_98] = anon_sym_98,
  [anon_sym_99] = anon_sym_99,
  [anon_sym_100] = anon_sym_100,
  [anon_sym_101] = anon_sym_101,
  [anon_sym_102] = anon_sym_102,
  [anon_sym_103] = anon_sym_103,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_into] = anon_sym_into,
  [anon_sym_nameof] = anon_sym_nameof,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_operator] = anon_sym_operator,
  [anon_sym_params] = anon_sym_params,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_typeof] = anon_sym_typeof,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_sizeof] = anon_sym_sizeof,
  [anon_sym_descending] = anon_sym_descending,
  [anon_sym_ascending] = anon_sym_ascending,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_fixed] = anon_sym_fixed,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_remove] = anon_sym_remove,
  [anon_sym_stackalloc] = anon_sym_stackalloc,
  [anon_sym_unchecked] = anon_sym_unchecked,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_base] = anon_sym_base,
  [anon_sym_104] = anon_sym_104,
  [anon_sym_105] = anon_sym_105,
  [anon_sym_106] = anon_sym_106,
  [anon_sym_107] = anon_sym_107,
  [anon_sym_108] = anon_sym_108,
  [anon_sym_109] = anon_sym_109,
  [anon_sym_110] = anon_sym_110,
  [anon_sym_111] = anon_sym_111,
  [anon_sym_112] = anon_sym_112,
  [anon_sym_113] = anon_sym_113,
  [anon_sym_114] = anon_sym_114,
  [anon_sym_115] = anon_sym_115,
  [anon_sym_116] = anon_sym_116,
  [anon_sym_117] = anon_sym_117,
  [anon_sym_118] = anon_sym_118,
  [anon_sym_119] = anon_sym_119,
  [anon_sym_120] = anon_sym_120,
  [anon_sym_121] = anon_sym_121,
  [anon_sym_122] = anon_sym_122,
  [anon_sym_123] = anon_sym_123,
  [anon_sym_124] = anon_sym_124,
  [anon_sym_125] = anon_sym_125,
  [anon_sym_126] = anon_sym_126,
  [anon_sym_127] = anon_sym_127,
  [anon_sym_128] = anon_sym_128,
  [anon_sym_129] = anon_sym_129,
  [anon_sym_130] = anon_sym_130,
  [anon_sym_131] = anon_sym_131,
  [anon_sym_132] = anon_sym_132,
  [anon_sym_133] = anon_sym_133,
  [anon_sym_134] = anon_sym_134,
  [anon_sym_135] = anon_sym_135,
  [anon_sym_136] = anon_sym_136,
  [anon_sym_137] = anon_sym_137,
  [anon_sym_138] = anon_sym_138,
  [anon_sym_139] = anon_sym_139,
  [anon_sym_140] = anon_sym_140,
  [anon_sym_141] = anon_sym_141,
  [anon_sym_142] = anon_sym_142,
  [anon_sym_143] = anon_sym_143,
  [anon_sym_144] = anon_sym_144,
  [anon_sym_145] = anon_sym_145,
  [anon_sym_146] = anon_sym_146,
  [anon_sym_147] = anon_sym_147,
  [anon_sym_148] = anon_sym_148,
  [anon_sym_149] = anon_sym_149,
  [anon_sym_150] = anon_sym_150,
  [anon_sym_151] = anon_sym_151,
  [anon_sym_152] = anon_sym_152,
  [anon_sym_153] = anon_sym_153,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_sbyte] = anon_sym_sbyte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_154] = anon_sym_154,
  [anon_sym_155] = anon_sym_155,
  [anon_sym_156] = anon_sym_156,
  [anon_sym_157] = anon_sym_157,
  [anon_sym_158] = anon_sym_158,
  [anon_sym_159] = anon_sym_159,
  [anon_sym_160] = anon_sym_160,
  [anon_sym_161] = anon_sym_161,
  [anon_sym_162] = anon_sym_162,
  [anon_sym_163] = anon_sym_163,
  [anon_sym_164] = anon_sym_164,
  [anon_sym_165] = anon_sym_165,
  [anon_sym_166] = anon_sym_166,
  [anon_sym_167] = anon_sym_167,
  [anon_sym_168] = anon_sym_168,
  [anon_sym_169] = anon_sym_169,
  [anon_sym_170] = anon_sym_170,
  [anon_sym_171] = anon_sym_171,
  [anon_sym_172] = anon_sym_172,
  [anon_sym_173] = anon_sym_173,
  [anon_sym_174] = anon_sym_174,
  [anon_sym_175] = anon_sym_175,
  [anon_sym_176] = anon_sym_176,
  [anon_sym_177] = anon_sym_177,
  [anon_sym_178] = anon_sym_178,
  [anon_sym_179] = anon_sym_179,
  [anon_sym_180] = anon_sym_180,
  [anon_sym_181] = anon_sym_181,
  [anon_sym_182] = anon_sym_182,
  [anon_sym_183] = anon_sym_183,
  [anon_sym_184] = anon_sym_184,
  [anon_sym_185] = anon_sym_185,
  [anon_sym_186] = anon_sym_186,
  [anon_sym_187] = anon_sym_187,
  [anon_sym_188] = anon_sym_188,
  [anon_sym_189] = anon_sym_189,
  [anon_sym_190] = anon_sym_190,
  [anon_sym_191] = anon_sym_191,
  [anon_sym_192] = anon_sym_192,
  [anon_sym_193] = anon_sym_193,
  [anon_sym_194] = anon_sym_194,
  [anon_sym_195] = anon_sym_195,
  [anon_sym_196] = anon_sym_196,
  [anon_sym_197] = anon_sym_197,
  [anon_sym_198] = anon_sym_198,
  [anon_sym_199] = anon_sym_199,
  [anon_sym_200] = anon_sym_200,
  [anon_sym_201] = anon_sym_201,
  [anon_sym_202] = anon_sym_202,
  [anon_sym_203] = anon_sym_203,
  [anon_sym_204] = anon_sym_204,
  [anon_sym_205] = anon_sym_205,
  [anon_sym_206] = anon_sym_206,
  [anon_sym_207] = anon_sym_207,
  [anon_sym_208] = anon_sym_208,
  [anon_sym_209] = anon_sym_209,
  [anon_sym_210] = anon_sym_210,
  [anon_sym_211] = anon_sym_211,
  [anon_sym_212] = anon_sym_212,
  [anon_sym_213] = anon_sym_213,
  [anon_sym_214] = anon_sym_214,
  [anon_sym_215] = anon_sym_215,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [aux_sym_z_token1] = aux_sym_z_token1,
  [aux_sym_z_token2] = aux_sym_z_token2,
  [aux_sym_z_token3] = aux_sym_z_token3,
  [sym_str] = sym_str,
  [sym_note] = sym_note,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_216] = anon_sym_216,
  [anon_sym_217] = anon_sym_217,
  [anon_sym_218] = anon_sym_218,
  [anon_sym_219] = anon_sym_219,
  [anon_sym_220] = anon_sym_220,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_int] = sym_int,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_221] = anon_sym_221,
  [sym_real] = sym_real,
  [sym_] = sym_,
  [sym__e] = sym__e,
  [sym__lit] = sym__lit,
  [sym_modifiers] = sym_modifiers,
  [sym_mod] = sym_mod,
  [sym_cat] = sym_cat,
  [sym_op] = sym_op,
  [sym_return] = sym_return,
  [sym_flow] = sym_flow,
  [sym_key] = sym_key,
  [sym_prim] = sym_prim,
  [sym_z] = sym_z,
  [sym_bool] = sym_bool,
  [sym_bt] = sym_bt,
  [sym_char] = sym_char,
  [sym_null] = sym_null,
  [aux_sym__repeat1] = aux_sym__repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_33] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_34] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_35] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_36] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_37] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_38] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_39] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_41] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_42] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_43] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_44] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_45] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_46] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_47] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_49] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_50] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_51] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_52] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_53] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_54] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_55] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_57] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_58] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_59] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_60] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_61] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_62] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orderby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_63] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_65] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_66] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_67] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_68] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_69] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_70] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_71] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_73] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_74] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_75] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_76] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_77] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_78] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_79] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_81] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_82] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_83] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_84] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_85] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_86] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_87] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_88] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_89] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_90] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_91] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_92] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_93] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_94] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_95] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_96] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_97] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_98] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_99] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_100] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_101] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_102] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_103] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nameof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_params] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_descending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stackalloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unchecked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_104] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_105] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_106] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_107] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_108] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_109] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_110] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_111] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_112] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_113] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_114] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_115] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_116] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_117] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_118] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_119] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_120] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_121] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_122] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_123] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_124] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_125] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_126] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_127] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_129] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_130] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_131] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_132] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_133] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_134] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_135] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_136] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_137] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_138] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_139] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_140] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_141] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_142] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_143] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_144] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_145] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_146] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_147] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_148] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_149] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_150] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_151] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_152] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_153] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_154] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_155] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_156] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_157] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_158] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_159] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_160] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_161] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_162] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_163] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_164] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_165] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_166] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_167] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_168] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_169] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_170] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_171] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_172] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_173] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_174] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_175] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_176] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_177] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_178] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_179] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_180] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_181] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_182] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_183] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_184] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_185] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_186] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_187] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_188] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_189] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_190] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_191] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_193] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_194] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_195] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_196] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_197] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_198] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_199] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_200] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_201] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_202] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_203] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_204] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_205] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_206] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_207] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_208] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_209] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_210] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_211] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_212] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_213] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_214] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_215] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_z_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_216] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_217] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_218] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_219] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_220] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_221] = {
    .visible = true,
    .named = false,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_] = {
    .visible = true,
    .named = true,
  },
  [sym__e] = {
    .visible = false,
    .named = true,
  },
  [sym__lit] = {
    .visible = false,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_cat] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_z] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '0') ADVANCE(231);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 166) ADVANCE(106);
      if (lookahead == 177) ADVANCE(81);
      if (lookahead == 185) ADVANCE(86);
      if (lookahead == 191) ADVANCE(118);
      if (lookahead == 215) ADVANCE(89);
      if (lookahead == 729) ADVANCE(151);
      if (lookahead == 1567) ADVANCE(40);
      if (lookahead == 2548) ADVANCE(85);
      if (lookahead == 8210) ADVANCE(45);
      if (lookahead == 8214) ADVANCE(117);
      if (lookahead == 8225) ADVANCE(193);
      if (lookahead == 8226) ADVANCE(121);
      if (lookahead == 8261) ADVANCE(133);
      if (lookahead == 8262) ADVANCE(134);
      if (lookahead == 8285) ADVANCE(83);
      if (lookahead == 8304) ADVANCE(152);
      if (lookahead == 8314) ADVANCE(55);
      if (lookahead == 8474) ADVANCE(189);
      if (lookahead == 8594) ADVANCE(74);
      if (lookahead == 8623) ADVANCE(113);
      if (lookahead == 8676) ADVANCE(114);
      if (lookahead == 8704) ADVANCE(94);
      if (lookahead == 8707) ADVANCE(82);
      if (lookahead == 8709) ADVANCE(257);
      if (lookahead == 8712) ADVANCE(99);
      if (lookahead == 8715) ADVANCE(71);
      if (lookahead == 8721) ADVANCE(196);
      if (lookahead == 8728) ADVANCE(57);
      if (lookahead == 8729) ADVANCE(184);
      if (lookahead == 8730) ADVANCE(195);
      if (lookahead == 8736) ADVANCE(11);
      if (lookahead == 8743) ADVANCE(79);
      if (lookahead == 8744) ADVANCE(80);
      if (lookahead == 8800) ADVANCE(76);
      if (lookahead == 8804) ADVANCE(78);
      if (lookahead == 8805) ADVANCE(77);
      if (lookahead == 8811) ADVANCE(88);
      if (lookahead == 8848) ADVANCE(142);
      if (lookahead == 8851) ADVANCE(62);
      if (lookahead == 8863) ADVANCE(67);
      if (lookahead == 8865) ADVANCE(183);
      if (lookahead == 8866) ADVANCE(206);
      if (lookahead == 8867) ADVANCE(205);
      if (lookahead == 8868) ADVANCE(208);
      if (lookahead == 8869) ADVANCE(207);
      if (lookahead == 8954) ADVANCE(70);
      if (lookahead == 8994) ADVANCE(164);
      if (lookahead == 9015) ADVANCE(56);
      if (lookahead == 9021) ADVANCE(157);
      if (lookahead == 9032) ADVANCE(123);
      if (lookahead == 9033) ADVANCE(42);
      if (lookahead == 9052) ADVANCE(41);
      if (lookahead == 9061) ADVANCE(65);
      if (lookahead == 9072) ADVANCE(124);
      if (lookahead == 9114) ADVANCE(73);
      if (lookahead == 9128) ADVANCE(122);
      if (lookahead == 9132) ADVANCE(126);
      if (lookahead == 9154) ADVANCE(111);
      if (lookahead == 9178) ADVANCE(43);
      if (lookahead == 9186) ADVANCE(120);
      if (lookahead == 9200) ADVANCE(153);
      if (lookahead == 9282) ADVANCE(211);
      if (lookahead == 9312) ADVANCE(175);
      if (lookahead == 9372) ADVANCE(185);
      if (lookahead == 9376) ADVANCE(37);
      if (lookahead == 9377) ADVANCE(186);
      if (lookahead == 9380) ADVANCE(38);
      if (lookahead == 9386) ADVANCE(59);
      if (lookahead == 9391) ADVANCE(201);
      if (lookahead == 9428) ADVANCE(174);
      if (lookahead == 9431) ADVANCE(176);
      if (lookahead == 9436) ADVANCE(145);
      if (lookahead == 9447) ADVANCE(214);
      if (lookahead == 9581) ADVANCE(162);
      if (lookahead == 9584) ADVANCE(163);
      if (lookahead == 9632) ADVANCE(244);
      if (lookahead == 9648) ADVANCE(53);
      if (lookahead == 9655) ADVANCE(212);
      if (lookahead == 9656) ADVANCE(119);
      if (lookahead == 9671) ADVANCE(242);
      if (lookahead == 9675) ADVANCE(63);
      if (lookahead == 9677) ADVANCE(161);
      if (lookahead == 9696) ADVANCE(49);
      if (lookahead == 9722) ADVANCE(98);
      if (lookahead == 9727) ADVANCE(97);
      if (lookahead == 9739) ADVANCE(54);
      if (lookahead == 9761) ADVANCE(243);
      if (lookahead == 9776) ADVANCE(75);
      if (lookahead == 10003) ADVANCE(240);
      if (lookahead == 10007) ADVANCE(241);
      if (lookahead == 10023) ADVANCE(190);
      if (lookahead == 10073) ADVANCE(84);
      if (lookahead == 10074) ADVANCE(87);
      if (lookahead == 10096) ADVANCE(129);
      if (lookahead == 10097) ADVANCE(130);
      if (lookahead == 10182) ADVANCE(110);
      if (lookahead == 10203) ADVANCE(210);
      if (lookahead == 10214) ADVANCE(127);
      if (lookahead == 10215) ADVANCE(128);
      if (lookahead == 10226) ADVANCE(101);
      if (lookahead == 10227) ADVANCE(100);
      if (lookahead == 10238) ADVANCE(112);
      if (lookahead == 10503) ADVANCE(105);
      if (lookahead == 10511) ADVANCE(107);
      if (lookahead == 10540) ADVANCE(109);
      if (lookahead == 10541) ADVANCE(102);
      if (lookahead == 10547) ADVANCE(91);
      if (lookahead == 10548) ADVANCE(92);
      if (lookahead == 10549) ADVANCE(93);
      if (lookahead == 10608) ADVANCE(103);
      if (lookahead == 10687) ADVANCE(165);
      if (lookahead == 10709) ADVANCE(170);
      if (lookahead == 10773) ADVANCE(160);
      if (lookahead == 10798) ADVANCE(181);
      if (lookahead == 10804) ADVANCE(180);
      if (lookahead == 10969) ADVANCE(198);
      if (lookahead == 10986) ADVANCE(209);
      if (lookahead == 10987) ADVANCE(182);
      if (lookahead == 11152) ADVANCE(90);
      if (lookahead == 11373) ADVANCE(219);
      if (lookahead == 11816) ADVANCE(131);
      if (lookahead == 11817) ADVANCE(132);
      if (lookahead == 12091) ADVANCE(44);
      if (lookahead == 12290) ADVANCE(125);
      if (lookahead == 12336) ADVANCE(95);
      if (lookahead == 12689) ADVANCE(108);
      if (lookahead == 65074) ADVANCE(51);
      if (lookahead == 65374) ADVANCE(104);
      if (lookahead == 66242) ADVANCE(66);
      if (lookahead == 66246) ADVANCE(64);
      if (lookahead == 119818) ADVANCE(137);
      if (lookahead == 119865) ADVANCE(150);
      if (lookahead == 119904) ADVANCE(16);
      if (lookahead == 119993) ADVANCE(167);
      if (lookahead == 120002) ADVANCE(168);
      if (lookahead == 120011) ADVANCE(173);
      if (lookahead == 120061) ADVANCE(172);
      if (lookahead == 120124) ADVANCE(192);
      if (lookahead == 120130) ADVANCE(191);
      if (lookahead == 120131) ADVANCE(194);
      if (lookahead == 120132) ADVANCE(187);
      if (lookahead == 120138) ADVANCE(188);
      if (lookahead == 120244) ADVANCE(138);
      if (lookahead == 120434) ADVANCE(141);
      if (lookahead == 120450) ADVANCE(140);
      if (lookahead == 120458) ADVANCE(166);
      if (lookahead == 120473) ADVANCE(179);
      if (lookahead == 120475) ADVANCE(178);
      if (lookahead == 120476) ADVANCE(177);
      if (lookahead == 120529) ADVANCE(197);
      if (lookahead == 120575) ADVANCE(21);
      if (lookahead == 120591) ADVANCE(171);
      if (lookahead == 120647) ADVANCE(169);
      if (lookahead == 120830) ADVANCE(213);
      if (lookahead == 127024) ADVANCE(60);
      if (lookahead == 127025) ADVANCE(61);
      if (lookahead == 127793) ADVANCE(215);
      if (lookahead == 127812) ADVANCE(216);
      if (lookahead == 128274) ADVANCE(58);
      if (lookahead == 128377) ADVANCE(200);
      if (lookahead == 128864) ADVANCE(72);
      if (lookahead == 129419) ADVANCE(217);
      if (lookahead == 129513) ADVANCE(199);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(236);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('!' <= lookahead && lookahead <= '?')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 9132) ADVANCE(239);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(226);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(27);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(246);
      END_STATE();
    case 11:
      if (lookahead == 176) ADVANCE(204);
      if (lookahead == 691) ADVANCE(203);
      END_STATE();
    case 12:
      if (lookahead == 176) ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 176) ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 176) ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 729) ADVANCE(4);
      END_STATE();
    case 16:
      if (lookahead == 817) ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == 1121) ADVANCE(13);
      if (lookahead == 9633) ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 9583) ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == 9663) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 11799) ADVANCE(115);
      END_STATE();
    case 21:
      if (lookahead == 120477) ADVANCE(202);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(253);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_9);
      if (lookahead == 805) ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_13);
      if (lookahead == 805) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == 785) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_15);
      if (lookahead == 785) ADVANCE(47);
      if (lookahead == 805) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_17);
      if (lookahead == 805) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_33);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_34);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_35);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_36);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_37);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_38);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_39);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_40);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_41);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_42);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_43);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_44);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_45);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_46);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_47);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_48);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_49);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_51);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_52);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_53);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_54);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_57);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_58);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_60);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_62);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_63);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_65);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_66);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_68);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_69);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_70);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_71);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_72);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_73);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_74);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_75);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_76);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_77);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_78);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_80);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_81);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_82);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_83);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_84);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_85);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN3);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_86);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_87);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_88);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_89);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_90);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_91);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 9132) ADVANCE(239);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_92);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_93);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_95);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_96);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_97);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_98);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_99);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_102);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_103);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_104);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_105);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_106);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_107);
      if (lookahead == 7497) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_108);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_109);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_110);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_111);
      if (lookahead == 805) ADVANCE(136);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_112);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_113);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_114);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_115);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_116);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_117);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_118);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_119);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_121);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_124);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_125);
      if (lookahead == 702) ADVANCE(148);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_126);
      if (lookahead == 702) ADVANCE(149);
      if (lookahead == 703) ADVANCE(146);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_127);
      if (lookahead == 703) ADVANCE(147);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_128);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_129);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_130);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_131);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_132);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_133);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_134);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_135);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_136);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_137);
      if (lookahead == 817) ADVANCE(143);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_138);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_139);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_140);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_141);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_142);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_143);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_144);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_145);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_146);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_147);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_148);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_149);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_150);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_159);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_160);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_162);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_171);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_172);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_173);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_174);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_175);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_176);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_177);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_178);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_179);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_180);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_181);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_182);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_183);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_184);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_185);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_187);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_188);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_189);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_199);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_200);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_203);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_204);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_205);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_207);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_208);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_209);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_210);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_211);
      if (lookahead == 817) ADVANCE(159);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_212);
      if (lookahead == 817) ADVANCE(158);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_213);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_215);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'L') ADVANCE(222);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 8467) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(227);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(252);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(252);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == 729) ADVANCE(19);
      if (lookahead == 9583) ADVANCE(12);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(224);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 9132) ADVANCE(239);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_217);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_218);
      if (lookahead == 800) ADVANCE(154);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_219);
      if (lookahead == 817) ADVANCE(155);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_220);
      if (lookahead == 800) ADVANCE(156);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_221);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'j') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(20);
      if (lookahead == 422) ADVANCE(21);
      if (lookahead == 702) ADVANCE(22);
      if (lookahead == 703) ADVANCE(23);
      if (lookahead == 738) ADVANCE(24);
      if (lookahead == 750) ADVANCE(25);
      if (lookahead == 4260) ADVANCE(26);
      if (lookahead == 4267) ADVANCE(27);
      if (lookahead == 4268) ADVANCE(28);
      if (lookahead == 4276) ADVANCE(29);
      if (lookahead == 4365) ADVANCE(30);
      if (lookahead == 4461) ADVANCE(31);
      if (lookahead == 4462) ADVANCE(32);
      if (lookahead == 4510) ADVANCE(33);
      if (lookahead == 4520) ADVANCE(34);
      if (lookahead == 4521) ADVANCE(35);
      if (lookahead == 4549) ADVANCE(36);
      if (lookahead == 5125) ADVANCE(37);
      if (lookahead == 5159) ADVANCE(38);
      if (lookahead == 5197) ADVANCE(39);
      if (lookahead == 5200) ADVANCE(40);
      if (lookahead == 5204) ADVANCE(41);
      if (lookahead == 5566) ADVANCE(42);
      if (lookahead == 7480) ADVANCE(43);
      if (lookahead == 7484) ADVANCE(44);
      if (lookahead == 7486) ADVANCE(45);
      if (lookahead == 7515) ADVANCE(46);
      if (lookahead == 12415) ADVANCE(47);
      if (lookahead == 12456) ADVANCE(48);
      if (lookahead == 12471) ADVANCE(49);
      if (lookahead == 12479) ADVANCE(50);
      if (lookahead == 12488) ADVANCE(51);
      if (lookahead == 12501) ADVANCE(52);
      if (lookahead == 12513) ADVANCE(53);
      if (lookahead == 12525) ADVANCE(54);
      if (lookahead == 12601) ADVANCE(55);
      if (lookahead == 12613) ADVANCE(56);
      if (lookahead == 12614) ADVANCE(57);
      if (lookahead == 12615) ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'q') ADVANCE(76);
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_197);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_151);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_152);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_122);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_59);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_158);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_156);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_157);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_198);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_170);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_167);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_166);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_154);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_164);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_165);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_190);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_153);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_123);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_161);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_192);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_193);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_194);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_191);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_195);
      if (lookahead == 770) ADVANCE(125);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_186);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_155);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_168);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_169);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_163);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 95:
      if (lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 97:
      if (lookahead == 'j') ADVANCE(171);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 105:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 110:
      if (lookahead == 'z') ADVANCE(189);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_196);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 166:
      if (lookahead == 'k') ADVANCE(250);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(251);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 177:
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(282);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 217:
      if (lookahead == 'k') ADVANCE(296);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 220:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 222:
      if (lookahead == 'k') ADVANCE(298);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(304);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 258:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 264:
      if (lookahead == 'v') ADVANCE(331);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 271:
      if (lookahead == 'k') ADVANCE(338);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 274:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 275:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 277:
      if (lookahead == 'w') ADVANCE(343);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 281:
      if (lookahead == 'g') ADVANCE(345);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 283:
      if (lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 285:
      if (lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 293:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 319:
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 320:
      if (lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 323:
      if (lookahead == 'b') ADVANCE(378);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(390);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 340:
      if (lookahead == 'g') ADVANCE(393);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 342:
      if (lookahead == 'h') ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(396);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 359:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(409);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 369:
      if (lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 370:
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_nameof);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 378:
      if (lookahead == 'y') ADVANCE(418);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 397:
      if (lookahead == 'k') ADVANCE(425);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 415:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 423:
      if (lookahead == 'y') ADVANCE(440);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 429:
      if (lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_explicit);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 439:
      if (lookahead == 'd') ADVANCE(447);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 441:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 442:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_ascending);
      END_STATE();
    case 445:
      if (lookahead == 'g') ADVANCE(450);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 448:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_unchecked);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_stackalloc);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_explicit] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_23] = ACTIONS(1),
    [anon_sym_24] = ACTIONS(1),
    [anon_sym_25] = ACTIONS(1),
    [anon_sym_26] = ACTIONS(1),
    [anon_sym_27] = ACTIONS(1),
    [anon_sym_28] = ACTIONS(1),
    [anon_sym_29] = ACTIONS(1),
    [anon_sym_30] = ACTIONS(1),
    [anon_sym_31] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_33] = ACTIONS(1),
    [anon_sym_34] = ACTIONS(1),
    [anon_sym_35] = ACTIONS(1),
    [anon_sym_36] = ACTIONS(1),
    [anon_sym_37] = ACTIONS(1),
    [anon_sym_38] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_39] = ACTIONS(1),
    [anon_sym_40] = ACTIONS(1),
    [anon_sym_41] = ACTIONS(1),
    [anon_sym_42] = ACTIONS(1),
    [anon_sym_43] = ACTIONS(1),
    [anon_sym_44] = ACTIONS(1),
    [anon_sym_45] = ACTIONS(1),
    [anon_sym_46] = ACTIONS(1),
    [anon_sym_47] = ACTIONS(1),
    [anon_sym_48] = ACTIONS(1),
    [anon_sym_49] = ACTIONS(1),
    [anon_sym_50] = ACTIONS(1),
    [anon_sym_51] = ACTIONS(1),
    [anon_sym_52] = ACTIONS(1),
    [anon_sym_53] = ACTIONS(1),
    [anon_sym_54] = ACTIONS(1),
    [anon_sym_55] = ACTIONS(1),
    [anon_sym_56] = ACTIONS(1),
    [anon_sym_57] = ACTIONS(1),
    [anon_sym_58] = ACTIONS(1),
    [anon_sym_59] = ACTIONS(1),
    [anon_sym_60] = ACTIONS(1),
    [anon_sym_61] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_62] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_orderby] = ACTIONS(1),
    [anon_sym_63] = ACTIONS(1),
    [anon_sym_64] = ACTIONS(1),
    [anon_sym_65] = ACTIONS(1),
    [anon_sym_66] = ACTIONS(1),
    [anon_sym_67] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_68] = ACTIONS(1),
    [anon_sym_69] = ACTIONS(1),
    [anon_sym_70] = ACTIONS(1),
    [anon_sym_71] = ACTIONS(1),
    [anon_sym_72] = ACTIONS(1),
    [anon_sym_73] = ACTIONS(1),
    [anon_sym_74] = ACTIONS(1),
    [anon_sym_75] = ACTIONS(1),
    [anon_sym_76] = ACTIONS(1),
    [anon_sym_77] = ACTIONS(1),
    [anon_sym_78] = ACTIONS(1),
    [anon_sym_79] = ACTIONS(1),
    [anon_sym_80] = ACTIONS(1),
    [anon_sym_81] = ACTIONS(1),
    [anon_sym_82] = ACTIONS(1),
    [anon_sym_83] = ACTIONS(1),
    [anon_sym_84] = ACTIONS(1),
    [anon_sym_85] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(1),
    [anon_sym_86] = ACTIONS(1),
    [anon_sym_87] = ACTIONS(1),
    [anon_sym_88] = ACTIONS(1),
    [anon_sym_89] = ACTIONS(1),
    [anon_sym_90] = ACTIONS(1),
    [anon_sym_91] = ACTIONS(1),
    [anon_sym_92] = ACTIONS(1),
    [anon_sym_93] = ACTIONS(1),
    [anon_sym_94] = ACTIONS(1),
    [anon_sym_95] = ACTIONS(1),
    [anon_sym_96] = ACTIONS(1),
    [anon_sym_97] = ACTIONS(1),
    [anon_sym_98] = ACTIONS(1),
    [anon_sym_99] = ACTIONS(1),
    [anon_sym_100] = ACTIONS(1),
    [anon_sym_101] = ACTIONS(1),
    [anon_sym_102] = ACTIONS(1),
    [anon_sym_103] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_checked] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_nameof] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_operator] = ACTIONS(1),
    [anon_sym_params] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [anon_sym_descending] = ACTIONS(1),
    [anon_sym_ascending] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_remove] = ACTIONS(1),
    [anon_sym_stackalloc] = ACTIONS(1),
    [anon_sym_unchecked] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_104] = ACTIONS(1),
    [anon_sym_105] = ACTIONS(1),
    [anon_sym_106] = ACTIONS(1),
    [anon_sym_107] = ACTIONS(1),
    [anon_sym_108] = ACTIONS(1),
    [anon_sym_109] = ACTIONS(1),
    [anon_sym_110] = ACTIONS(1),
    [anon_sym_111] = ACTIONS(1),
    [anon_sym_112] = ACTIONS(1),
    [anon_sym_113] = ACTIONS(1),
    [anon_sym_114] = ACTIONS(1),
    [anon_sym_115] = ACTIONS(1),
    [anon_sym_116] = ACTIONS(1),
    [anon_sym_117] = ACTIONS(1),
    [anon_sym_118] = ACTIONS(1),
    [anon_sym_119] = ACTIONS(1),
    [anon_sym_120] = ACTIONS(1),
    [anon_sym_121] = ACTIONS(1),
    [anon_sym_122] = ACTIONS(1),
    [anon_sym_123] = ACTIONS(1),
    [anon_sym_124] = ACTIONS(1),
    [anon_sym_125] = ACTIONS(1),
    [anon_sym_126] = ACTIONS(1),
    [anon_sym_127] = ACTIONS(1),
    [anon_sym_128] = ACTIONS(1),
    [anon_sym_129] = ACTIONS(1),
    [anon_sym_130] = ACTIONS(1),
    [anon_sym_131] = ACTIONS(1),
    [anon_sym_132] = ACTIONS(1),
    [anon_sym_133] = ACTIONS(1),
    [anon_sym_134] = ACTIONS(1),
    [anon_sym_135] = ACTIONS(1),
    [anon_sym_136] = ACTIONS(1),
    [anon_sym_137] = ACTIONS(1),
    [anon_sym_138] = ACTIONS(1),
    [anon_sym_139] = ACTIONS(1),
    [anon_sym_140] = ACTIONS(1),
    [anon_sym_141] = ACTIONS(1),
    [anon_sym_142] = ACTIONS(1),
    [anon_sym_143] = ACTIONS(1),
    [anon_sym_144] = ACTIONS(1),
    [anon_sym_145] = ACTIONS(1),
    [anon_sym_146] = ACTIONS(1),
    [anon_sym_147] = ACTIONS(1),
    [anon_sym_148] = ACTIONS(1),
    [anon_sym_149] = ACTIONS(1),
    [anon_sym_150] = ACTIONS(1),
    [anon_sym_151] = ACTIONS(1),
    [anon_sym_152] = ACTIONS(1),
    [anon_sym_153] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_sbyte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_154] = ACTIONS(1),
    [anon_sym_155] = ACTIONS(1),
    [anon_sym_156] = ACTIONS(1),
    [anon_sym_157] = ACTIONS(1),
    [anon_sym_158] = ACTIONS(1),
    [anon_sym_159] = ACTIONS(1),
    [anon_sym_160] = ACTIONS(1),
    [anon_sym_161] = ACTIONS(1),
    [anon_sym_162] = ACTIONS(1),
    [anon_sym_163] = ACTIONS(1),
    [anon_sym_164] = ACTIONS(1),
    [anon_sym_165] = ACTIONS(1),
    [anon_sym_166] = ACTIONS(1),
    [anon_sym_167] = ACTIONS(1),
    [anon_sym_168] = ACTIONS(1),
    [anon_sym_169] = ACTIONS(1),
    [anon_sym_170] = ACTIONS(1),
    [anon_sym_171] = ACTIONS(1),
    [anon_sym_172] = ACTIONS(1),
    [anon_sym_173] = ACTIONS(1),
    [anon_sym_174] = ACTIONS(1),
    [anon_sym_175] = ACTIONS(1),
    [anon_sym_176] = ACTIONS(1),
    [anon_sym_177] = ACTIONS(1),
    [anon_sym_178] = ACTIONS(1),
    [anon_sym_179] = ACTIONS(1),
    [anon_sym_180] = ACTIONS(1),
    [anon_sym_181] = ACTIONS(1),
    [anon_sym_182] = ACTIONS(1),
    [anon_sym_183] = ACTIONS(1),
    [anon_sym_184] = ACTIONS(1),
    [anon_sym_185] = ACTIONS(1),
    [anon_sym_186] = ACTIONS(1),
    [anon_sym_187] = ACTIONS(1),
    [anon_sym_188] = ACTIONS(1),
    [anon_sym_189] = ACTIONS(1),
    [anon_sym_190] = ACTIONS(1),
    [anon_sym_191] = ACTIONS(1),
    [anon_sym_192] = ACTIONS(1),
    [anon_sym_193] = ACTIONS(1),
    [anon_sym_194] = ACTIONS(1),
    [anon_sym_195] = ACTIONS(1),
    [anon_sym_196] = ACTIONS(1),
    [anon_sym_197] = ACTIONS(1),
    [anon_sym_198] = ACTIONS(1),
    [anon_sym_199] = ACTIONS(1),
    [anon_sym_200] = ACTIONS(1),
    [anon_sym_201] = ACTIONS(1),
    [anon_sym_202] = ACTIONS(1),
    [anon_sym_203] = ACTIONS(1),
    [anon_sym_204] = ACTIONS(1),
    [anon_sym_205] = ACTIONS(1),
    [anon_sym_206] = ACTIONS(1),
    [anon_sym_207] = ACTIONS(1),
    [anon_sym_208] = ACTIONS(1),
    [anon_sym_209] = ACTIONS(1),
    [anon_sym_210] = ACTIONS(1),
    [anon_sym_211] = ACTIONS(1),
    [anon_sym_212] = ACTIONS(1),
    [anon_sym_213] = ACTIONS(1),
    [anon_sym_214] = ACTIONS(1),
    [anon_sym_215] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_216] = ACTIONS(1),
    [anon_sym_217] = ACTIONS(1),
    [anon_sym_218] = ACTIONS(1),
    [anon_sym_219] = ACTIONS(1),
    [anon_sym_220] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_221] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(19),
    [sym__e] = STATE(2),
    [sym__lit] = STATE(2),
    [sym_modifiers] = STATE(2),
    [sym_mod] = STATE(5),
    [sym_cat] = STATE(2),
    [sym_op] = STATE(2),
    [sym_return] = STATE(2),
    [sym_flow] = STATE(2),
    [sym_key] = STATE(2),
    [sym_prim] = STATE(2),
    [sym_z] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_bt] = STATE(2),
    [sym_char] = STATE(2),
    [sym_null] = STATE(2),
    [aux_sym__repeat1] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(7),
    [anon_sym_sealed] = ACTIONS(7),
    [anon_sym_unsafe] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_explicit] = ACTIONS(7),
    [anon_sym_implicit] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(7),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(9),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(7),
    [anon_sym_9] = ACTIONS(7),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(9),
    [anon_sym_13] = ACTIONS(7),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(7),
    [anon_sym_16] = ACTIONS(9),
    [anon_sym_17] = ACTIONS(7),
    [anon_sym_18] = ACTIONS(9),
    [anon_sym_19] = ACTIONS(7),
    [anon_sym_20] = ACTIONS(9),
    [anon_sym_21] = ACTIONS(7),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(9),
    [anon_sym_24] = ACTIONS(7),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_26] = ACTIONS(9),
    [anon_sym_27] = ACTIONS(7),
    [anon_sym_28] = ACTIONS(7),
    [anon_sym_29] = ACTIONS(7),
    [anon_sym_30] = ACTIONS(7),
    [anon_sym_31] = ACTIONS(9),
    [anon_sym_32] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_33] = ACTIONS(13),
    [anon_sym_34] = ACTIONS(13),
    [anon_sym_35] = ACTIONS(13),
    [anon_sym_36] = ACTIONS(13),
    [anon_sym_37] = ACTIONS(13),
    [anon_sym_38] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(15),
    [anon_sym_42] = ACTIONS(15),
    [anon_sym_43] = ACTIONS(15),
    [anon_sym_44] = ACTIONS(15),
    [anon_sym_45] = ACTIONS(15),
    [anon_sym_46] = ACTIONS(15),
    [anon_sym_47] = ACTIONS(15),
    [anon_sym_48] = ACTIONS(15),
    [anon_sym_49] = ACTIONS(15),
    [anon_sym_50] = ACTIONS(17),
    [anon_sym_51] = ACTIONS(15),
    [anon_sym_52] = ACTIONS(15),
    [anon_sym_53] = ACTIONS(15),
    [anon_sym_54] = ACTIONS(15),
    [anon_sym_55] = ACTIONS(17),
    [anon_sym_56] = ACTIONS(17),
    [anon_sym_57] = ACTIONS(15),
    [anon_sym_58] = ACTIONS(15),
    [anon_sym_59] = ACTIONS(17),
    [anon_sym_60] = ACTIONS(15),
    [anon_sym_61] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_62] = ACTIONS(21),
    [anon_sym_async] = ACTIONS(23),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_by] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(23),
    [anon_sym_switch] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(23),
    [anon_sym_try] = ACTIONS(23),
    [anon_sym_catch] = ACTIONS(23),
    [anon_sym_finally] = ACTIONS(23),
    [anon_sym_continue] = ACTIONS(23),
    [anon_sym_from] = ACTIONS(23),
    [anon_sym_where] = ACTIONS(23),
    [anon_sym_select] = ACTIONS(23),
    [anon_sym_throw] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_orderby] = ACTIONS(23),
    [anon_sym_63] = ACTIONS(25),
    [anon_sym_64] = ACTIONS(25),
    [anon_sym_65] = ACTIONS(25),
    [anon_sym_66] = ACTIONS(25),
    [anon_sym_67] = ACTIONS(23),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(25),
    [anon_sym_68] = ACTIONS(25),
    [anon_sym_69] = ACTIONS(25),
    [anon_sym_70] = ACTIONS(25),
    [anon_sym_71] = ACTIONS(25),
    [anon_sym_72] = ACTIONS(25),
    [anon_sym_73] = ACTIONS(25),
    [anon_sym_74] = ACTIONS(25),
    [anon_sym_75] = ACTIONS(25),
    [anon_sym_76] = ACTIONS(25),
    [anon_sym_77] = ACTIONS(25),
    [anon_sym_78] = ACTIONS(25),
    [anon_sym_79] = ACTIONS(23),
    [anon_sym_80] = ACTIONS(25),
    [anon_sym_81] = ACTIONS(25),
    [anon_sym_82] = ACTIONS(25),
    [anon_sym_83] = ACTIONS(25),
    [anon_sym_84] = ACTIONS(25),
    [anon_sym_85] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(25),
    [anon_sym_86] = ACTIONS(25),
    [anon_sym_87] = ACTIONS(25),
    [anon_sym_88] = ACTIONS(25),
    [anon_sym_89] = ACTIONS(25),
    [anon_sym_90] = ACTIONS(25),
    [anon_sym_91] = ACTIONS(23),
    [anon_sym_92] = ACTIONS(25),
    [anon_sym_93] = ACTIONS(25),
    [anon_sym_94] = ACTIONS(23),
    [anon_sym_95] = ACTIONS(25),
    [anon_sym_96] = ACTIONS(25),
    [anon_sym_97] = ACTIONS(25),
    [anon_sym_98] = ACTIONS(25),
    [anon_sym_99] = ACTIONS(25),
    [anon_sym_100] = ACTIONS(23),
    [anon_sym_101] = ACTIONS(23),
    [anon_sym_102] = ACTIONS(25),
    [anon_sym_103] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_checked] = ACTIONS(27),
    [anon_sym_into] = ACTIONS(27),
    [anon_sym_nameof] = ACTIONS(27),
    [anon_sym_new] = ACTIONS(27),
    [anon_sym_using] = ACTIONS(27),
    [anon_sym_value] = ACTIONS(27),
    [anon_sym_global] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_operator] = ACTIONS(27),
    [anon_sym_params] = ACTIONS(27),
    [anon_sym_this] = ACTIONS(27),
    [anon_sym_typeof] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_equals] = ACTIONS(27),
    [anon_sym_long] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(27),
    [anon_sym_sizeof] = ACTIONS(27),
    [anon_sym_descending] = ACTIONS(27),
    [anon_sym_ascending] = ACTIONS(27),
    [anon_sym_dynamic] = ACTIONS(27),
    [anon_sym_fixed] = ACTIONS(27),
    [anon_sym_group] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(27),
    [anon_sym_get] = ACTIONS(27),
    [anon_sym_set] = ACTIONS(27),
    [anon_sym_on] = ACTIONS(27),
    [anon_sym_remove] = ACTIONS(27),
    [anon_sym_stackalloc] = ACTIONS(27),
    [anon_sym_unchecked] = ACTIONS(27),
    [anon_sym_as] = ACTIONS(27),
    [anon_sym_base] = ACTIONS(27),
    [anon_sym_104] = ACTIONS(29),
    [anon_sym_105] = ACTIONS(29),
    [anon_sym_106] = ACTIONS(29),
    [anon_sym_107] = ACTIONS(27),
    [anon_sym_108] = ACTIONS(29),
    [anon_sym_109] = ACTIONS(29),
    [anon_sym_110] = ACTIONS(29),
    [anon_sym_111] = ACTIONS(27),
    [anon_sym_112] = ACTIONS(29),
    [anon_sym_113] = ACTIONS(29),
    [anon_sym_114] = ACTIONS(29),
    [anon_sym_115] = ACTIONS(29),
    [anon_sym_116] = ACTIONS(29),
    [anon_sym_117] = ACTIONS(29),
    [anon_sym_118] = ACTIONS(29),
    [anon_sym_119] = ACTIONS(29),
    [anon_sym_120] = ACTIONS(27),
    [anon_sym_121] = ACTIONS(29),
    [anon_sym_122] = ACTIONS(27),
    [anon_sym_123] = ACTIONS(27),
    [anon_sym_124] = ACTIONS(29),
    [anon_sym_125] = ACTIONS(27),
    [anon_sym_126] = ACTIONS(27),
    [anon_sym_127] = ACTIONS(27),
    [anon_sym_128] = ACTIONS(29),
    [anon_sym_129] = ACTIONS(29),
    [anon_sym_130] = ACTIONS(29),
    [anon_sym_131] = ACTIONS(29),
    [anon_sym_132] = ACTIONS(29),
    [anon_sym_133] = ACTIONS(29),
    [anon_sym_134] = ACTIONS(29),
    [anon_sym_135] = ACTIONS(29),
    [anon_sym_136] = ACTIONS(29),
    [anon_sym_137] = ACTIONS(27),
    [anon_sym_138] = ACTIONS(29),
    [anon_sym_139] = ACTIONS(29),
    [anon_sym_140] = ACTIONS(29),
    [anon_sym_141] = ACTIONS(29),
    [anon_sym_142] = ACTIONS(29),
    [anon_sym_143] = ACTIONS(29),
    [anon_sym_144] = ACTIONS(29),
    [anon_sym_145] = ACTIONS(29),
    [anon_sym_146] = ACTIONS(29),
    [anon_sym_147] = ACTIONS(29),
    [anon_sym_148] = ACTIONS(29),
    [anon_sym_149] = ACTIONS(29),
    [anon_sym_150] = ACTIONS(29),
    [anon_sym_151] = ACTIONS(27),
    [anon_sym_152] = ACTIONS(27),
    [anon_sym_153] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_decimal] = ACTIONS(31),
    [anon_sym_sbyte] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_154] = ACTIONS(31),
    [anon_sym_155] = ACTIONS(31),
    [anon_sym_156] = ACTIONS(31),
    [anon_sym_157] = ACTIONS(31),
    [anon_sym_158] = ACTIONS(31),
    [anon_sym_159] = ACTIONS(33),
    [anon_sym_160] = ACTIONS(33),
    [anon_sym_161] = ACTIONS(31),
    [anon_sym_162] = ACTIONS(33),
    [anon_sym_163] = ACTIONS(31),
    [anon_sym_164] = ACTIONS(31),
    [anon_sym_165] = ACTIONS(31),
    [anon_sym_166] = ACTIONS(31),
    [anon_sym_167] = ACTIONS(31),
    [anon_sym_168] = ACTIONS(31),
    [anon_sym_169] = ACTIONS(31),
    [anon_sym_170] = ACTIONS(31),
    [anon_sym_171] = ACTIONS(33),
    [anon_sym_172] = ACTIONS(33),
    [anon_sym_173] = ACTIONS(33),
    [anon_sym_174] = ACTIONS(33),
    [anon_sym_175] = ACTIONS(33),
    [anon_sym_176] = ACTIONS(33),
    [anon_sym_177] = ACTIONS(33),
    [anon_sym_178] = ACTIONS(33),
    [anon_sym_179] = ACTIONS(33),
    [anon_sym_180] = ACTIONS(33),
    [anon_sym_181] = ACTIONS(33),
    [anon_sym_182] = ACTIONS(33),
    [anon_sym_183] = ACTIONS(33),
    [anon_sym_184] = ACTIONS(33),
    [anon_sym_185] = ACTIONS(33),
    [anon_sym_186] = ACTIONS(31),
    [anon_sym_187] = ACTIONS(33),
    [anon_sym_188] = ACTIONS(33),
    [anon_sym_189] = ACTIONS(33),
    [anon_sym_190] = ACTIONS(31),
    [anon_sym_191] = ACTIONS(31),
    [anon_sym_192] = ACTIONS(31),
    [anon_sym_193] = ACTIONS(31),
    [anon_sym_194] = ACTIONS(31),
    [anon_sym_195] = ACTIONS(31),
    [anon_sym_196] = ACTIONS(31),
    [anon_sym_197] = ACTIONS(31),
    [anon_sym_198] = ACTIONS(31),
    [anon_sym_199] = ACTIONS(33),
    [anon_sym_200] = ACTIONS(33),
    [anon_sym_201] = ACTIONS(33),
    [anon_sym_202] = ACTIONS(33),
    [anon_sym_203] = ACTIONS(33),
    [anon_sym_204] = ACTIONS(33),
    [anon_sym_205] = ACTIONS(33),
    [anon_sym_206] = ACTIONS(33),
    [anon_sym_207] = ACTIONS(33),
    [anon_sym_208] = ACTIONS(33),
    [anon_sym_209] = ACTIONS(33),
    [anon_sym_210] = ACTIONS(33),
    [anon_sym_211] = ACTIONS(31),
    [anon_sym_212] = ACTIONS(31),
    [anon_sym_213] = ACTIONS(33),
    [anon_sym_214] = ACTIONS(33),
    [anon_sym_215] = ACTIONS(33),
    [sym_type] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [aux_sym_z_token1] = ACTIONS(37),
    [aux_sym_z_token2] = ACTIONS(37),
    [aux_sym_z_token3] = ACTIONS(39),
    [sym_str] = ACTIONS(35),
    [sym_note] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_216] = ACTIONS(43),
    [anon_sym_217] = ACTIONS(43),
    [anon_sym_218] = ACTIONS(45),
    [anon_sym_219] = ACTIONS(45),
    [anon_sym_220] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_int] = ACTIONS(5),
    [anon_sym_null] = ACTIONS(49),
    [anon_sym_221] = ACTIONS(51),
    [sym_real] = ACTIONS(5),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_modifiers] = STATE(3),
    [sym_mod] = STATE(5),
    [sym_cat] = STATE(3),
    [sym_op] = STATE(3),
    [sym_return] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_prim] = STATE(3),
    [sym_z] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_bt] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_id] = ACTIONS(55),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(7),
    [anon_sym_sealed] = ACTIONS(7),
    [anon_sym_unsafe] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_explicit] = ACTIONS(7),
    [anon_sym_implicit] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(7),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(9),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(7),
    [anon_sym_9] = ACTIONS(7),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(9),
    [anon_sym_13] = ACTIONS(7),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(7),
    [anon_sym_16] = ACTIONS(9),
    [anon_sym_17] = ACTIONS(7),
    [anon_sym_18] = ACTIONS(9),
    [anon_sym_19] = ACTIONS(7),
    [anon_sym_20] = ACTIONS(9),
    [anon_sym_21] = ACTIONS(7),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(9),
    [anon_sym_24] = ACTIONS(7),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_26] = ACTIONS(9),
    [anon_sym_27] = ACTIONS(7),
    [anon_sym_28] = ACTIONS(7),
    [anon_sym_29] = ACTIONS(7),
    [anon_sym_30] = ACTIONS(7),
    [anon_sym_31] = ACTIONS(9),
    [anon_sym_32] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_33] = ACTIONS(13),
    [anon_sym_34] = ACTIONS(13),
    [anon_sym_35] = ACTIONS(13),
    [anon_sym_36] = ACTIONS(13),
    [anon_sym_37] = ACTIONS(13),
    [anon_sym_38] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(15),
    [anon_sym_42] = ACTIONS(15),
    [anon_sym_43] = ACTIONS(15),
    [anon_sym_44] = ACTIONS(15),
    [anon_sym_45] = ACTIONS(15),
    [anon_sym_46] = ACTIONS(15),
    [anon_sym_47] = ACTIONS(15),
    [anon_sym_48] = ACTIONS(15),
    [anon_sym_49] = ACTIONS(15),
    [anon_sym_50] = ACTIONS(17),
    [anon_sym_51] = ACTIONS(15),
    [anon_sym_52] = ACTIONS(15),
    [anon_sym_53] = ACTIONS(15),
    [anon_sym_54] = ACTIONS(15),
    [anon_sym_55] = ACTIONS(17),
    [anon_sym_56] = ACTIONS(17),
    [anon_sym_57] = ACTIONS(15),
    [anon_sym_58] = ACTIONS(15),
    [anon_sym_59] = ACTIONS(17),
    [anon_sym_60] = ACTIONS(15),
    [anon_sym_61] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_62] = ACTIONS(21),
    [anon_sym_async] = ACTIONS(23),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_by] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(23),
    [anon_sym_switch] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(23),
    [anon_sym_try] = ACTIONS(23),
    [anon_sym_catch] = ACTIONS(23),
    [anon_sym_finally] = ACTIONS(23),
    [anon_sym_continue] = ACTIONS(23),
    [anon_sym_from] = ACTIONS(23),
    [anon_sym_where] = ACTIONS(23),
    [anon_sym_select] = ACTIONS(23),
    [anon_sym_throw] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_orderby] = ACTIONS(23),
    [anon_sym_63] = ACTIONS(25),
    [anon_sym_64] = ACTIONS(25),
    [anon_sym_65] = ACTIONS(25),
    [anon_sym_66] = ACTIONS(25),
    [anon_sym_67] = ACTIONS(23),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(25),
    [anon_sym_68] = ACTIONS(25),
    [anon_sym_69] = ACTIONS(25),
    [anon_sym_70] = ACTIONS(25),
    [anon_sym_71] = ACTIONS(25),
    [anon_sym_72] = ACTIONS(25),
    [anon_sym_73] = ACTIONS(25),
    [anon_sym_74] = ACTIONS(25),
    [anon_sym_75] = ACTIONS(25),
    [anon_sym_76] = ACTIONS(25),
    [anon_sym_77] = ACTIONS(25),
    [anon_sym_78] = ACTIONS(25),
    [anon_sym_79] = ACTIONS(23),
    [anon_sym_80] = ACTIONS(25),
    [anon_sym_81] = ACTIONS(25),
    [anon_sym_82] = ACTIONS(25),
    [anon_sym_83] = ACTIONS(25),
    [anon_sym_84] = ACTIONS(25),
    [anon_sym_85] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(25),
    [anon_sym_86] = ACTIONS(25),
    [anon_sym_87] = ACTIONS(25),
    [anon_sym_88] = ACTIONS(25),
    [anon_sym_89] = ACTIONS(25),
    [anon_sym_90] = ACTIONS(25),
    [anon_sym_91] = ACTIONS(23),
    [anon_sym_92] = ACTIONS(25),
    [anon_sym_93] = ACTIONS(25),
    [anon_sym_94] = ACTIONS(23),
    [anon_sym_95] = ACTIONS(25),
    [anon_sym_96] = ACTIONS(25),
    [anon_sym_97] = ACTIONS(25),
    [anon_sym_98] = ACTIONS(25),
    [anon_sym_99] = ACTIONS(25),
    [anon_sym_100] = ACTIONS(23),
    [anon_sym_101] = ACTIONS(23),
    [anon_sym_102] = ACTIONS(25),
    [anon_sym_103] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_checked] = ACTIONS(27),
    [anon_sym_into] = ACTIONS(27),
    [anon_sym_nameof] = ACTIONS(27),
    [anon_sym_new] = ACTIONS(27),
    [anon_sym_using] = ACTIONS(27),
    [anon_sym_value] = ACTIONS(27),
    [anon_sym_global] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_operator] = ACTIONS(27),
    [anon_sym_params] = ACTIONS(27),
    [anon_sym_this] = ACTIONS(27),
    [anon_sym_typeof] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_equals] = ACTIONS(27),
    [anon_sym_long] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(27),
    [anon_sym_sizeof] = ACTIONS(27),
    [anon_sym_descending] = ACTIONS(27),
    [anon_sym_ascending] = ACTIONS(27),
    [anon_sym_dynamic] = ACTIONS(27),
    [anon_sym_fixed] = ACTIONS(27),
    [anon_sym_group] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(27),
    [anon_sym_get] = ACTIONS(27),
    [anon_sym_set] = ACTIONS(27),
    [anon_sym_on] = ACTIONS(27),
    [anon_sym_remove] = ACTIONS(27),
    [anon_sym_stackalloc] = ACTIONS(27),
    [anon_sym_unchecked] = ACTIONS(27),
    [anon_sym_as] = ACTIONS(27),
    [anon_sym_base] = ACTIONS(27),
    [anon_sym_104] = ACTIONS(29),
    [anon_sym_105] = ACTIONS(29),
    [anon_sym_106] = ACTIONS(29),
    [anon_sym_107] = ACTIONS(27),
    [anon_sym_108] = ACTIONS(29),
    [anon_sym_109] = ACTIONS(29),
    [anon_sym_110] = ACTIONS(29),
    [anon_sym_111] = ACTIONS(27),
    [anon_sym_112] = ACTIONS(29),
    [anon_sym_113] = ACTIONS(29),
    [anon_sym_114] = ACTIONS(29),
    [anon_sym_115] = ACTIONS(29),
    [anon_sym_116] = ACTIONS(29),
    [anon_sym_117] = ACTIONS(29),
    [anon_sym_118] = ACTIONS(29),
    [anon_sym_119] = ACTIONS(29),
    [anon_sym_120] = ACTIONS(27),
    [anon_sym_121] = ACTIONS(29),
    [anon_sym_122] = ACTIONS(27),
    [anon_sym_123] = ACTIONS(27),
    [anon_sym_124] = ACTIONS(29),
    [anon_sym_125] = ACTIONS(27),
    [anon_sym_126] = ACTIONS(27),
    [anon_sym_127] = ACTIONS(27),
    [anon_sym_128] = ACTIONS(29),
    [anon_sym_129] = ACTIONS(29),
    [anon_sym_130] = ACTIONS(29),
    [anon_sym_131] = ACTIONS(29),
    [anon_sym_132] = ACTIONS(29),
    [anon_sym_133] = ACTIONS(29),
    [anon_sym_134] = ACTIONS(29),
    [anon_sym_135] = ACTIONS(29),
    [anon_sym_136] = ACTIONS(29),
    [anon_sym_137] = ACTIONS(27),
    [anon_sym_138] = ACTIONS(29),
    [anon_sym_139] = ACTIONS(29),
    [anon_sym_140] = ACTIONS(29),
    [anon_sym_141] = ACTIONS(29),
    [anon_sym_142] = ACTIONS(29),
    [anon_sym_143] = ACTIONS(29),
    [anon_sym_144] = ACTIONS(29),
    [anon_sym_145] = ACTIONS(29),
    [anon_sym_146] = ACTIONS(29),
    [anon_sym_147] = ACTIONS(29),
    [anon_sym_148] = ACTIONS(29),
    [anon_sym_149] = ACTIONS(29),
    [anon_sym_150] = ACTIONS(29),
    [anon_sym_151] = ACTIONS(27),
    [anon_sym_152] = ACTIONS(27),
    [anon_sym_153] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_decimal] = ACTIONS(31),
    [anon_sym_sbyte] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_154] = ACTIONS(31),
    [anon_sym_155] = ACTIONS(31),
    [anon_sym_156] = ACTIONS(31),
    [anon_sym_157] = ACTIONS(31),
    [anon_sym_158] = ACTIONS(31),
    [anon_sym_159] = ACTIONS(33),
    [anon_sym_160] = ACTIONS(33),
    [anon_sym_161] = ACTIONS(31),
    [anon_sym_162] = ACTIONS(33),
    [anon_sym_163] = ACTIONS(31),
    [anon_sym_164] = ACTIONS(31),
    [anon_sym_165] = ACTIONS(31),
    [anon_sym_166] = ACTIONS(31),
    [anon_sym_167] = ACTIONS(31),
    [anon_sym_168] = ACTIONS(31),
    [anon_sym_169] = ACTIONS(31),
    [anon_sym_170] = ACTIONS(31),
    [anon_sym_171] = ACTIONS(33),
    [anon_sym_172] = ACTIONS(33),
    [anon_sym_173] = ACTIONS(33),
    [anon_sym_174] = ACTIONS(33),
    [anon_sym_175] = ACTIONS(33),
    [anon_sym_176] = ACTIONS(33),
    [anon_sym_177] = ACTIONS(33),
    [anon_sym_178] = ACTIONS(33),
    [anon_sym_179] = ACTIONS(33),
    [anon_sym_180] = ACTIONS(33),
    [anon_sym_181] = ACTIONS(33),
    [anon_sym_182] = ACTIONS(33),
    [anon_sym_183] = ACTIONS(33),
    [anon_sym_184] = ACTIONS(33),
    [anon_sym_185] = ACTIONS(33),
    [anon_sym_186] = ACTIONS(31),
    [anon_sym_187] = ACTIONS(33),
    [anon_sym_188] = ACTIONS(33),
    [anon_sym_189] = ACTIONS(33),
    [anon_sym_190] = ACTIONS(31),
    [anon_sym_191] = ACTIONS(31),
    [anon_sym_192] = ACTIONS(31),
    [anon_sym_193] = ACTIONS(31),
    [anon_sym_194] = ACTIONS(31),
    [anon_sym_195] = ACTIONS(31),
    [anon_sym_196] = ACTIONS(31),
    [anon_sym_197] = ACTIONS(31),
    [anon_sym_198] = ACTIONS(31),
    [anon_sym_199] = ACTIONS(33),
    [anon_sym_200] = ACTIONS(33),
    [anon_sym_201] = ACTIONS(33),
    [anon_sym_202] = ACTIONS(33),
    [anon_sym_203] = ACTIONS(33),
    [anon_sym_204] = ACTIONS(33),
    [anon_sym_205] = ACTIONS(33),
    [anon_sym_206] = ACTIONS(33),
    [anon_sym_207] = ACTIONS(33),
    [anon_sym_208] = ACTIONS(33),
    [anon_sym_209] = ACTIONS(33),
    [anon_sym_210] = ACTIONS(33),
    [anon_sym_211] = ACTIONS(31),
    [anon_sym_212] = ACTIONS(31),
    [anon_sym_213] = ACTIONS(33),
    [anon_sym_214] = ACTIONS(33),
    [anon_sym_215] = ACTIONS(33),
    [sym_type] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
    [aux_sym_z_token1] = ACTIONS(37),
    [aux_sym_z_token2] = ACTIONS(37),
    [aux_sym_z_token3] = ACTIONS(39),
    [sym_str] = ACTIONS(57),
    [sym_note] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_216] = ACTIONS(43),
    [anon_sym_217] = ACTIONS(43),
    [anon_sym_218] = ACTIONS(45),
    [anon_sym_219] = ACTIONS(45),
    [anon_sym_220] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_int] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(49),
    [anon_sym_221] = ACTIONS(51),
    [sym_real] = ACTIONS(55),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_modifiers] = STATE(3),
    [sym_mod] = STATE(5),
    [sym_cat] = STATE(3),
    [sym_op] = STATE(3),
    [sym_return] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_prim] = STATE(3),
    [sym_z] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_bt] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_id] = ACTIONS(61),
    [anon_sym_public] = ACTIONS(64),
    [anon_sym_internal] = ACTIONS(64),
    [anon_sym_protected] = ACTIONS(64),
    [anon_sym_private] = ACTIONS(64),
    [anon_sym_static] = ACTIONS(64),
    [anon_sym_abstract] = ACTIONS(64),
    [anon_sym_const] = ACTIONS(64),
    [anon_sym_extern] = ACTIONS(64),
    [anon_sym_override] = ACTIONS(64),
    [anon_sym_partial] = ACTIONS(64),
    [anon_sym_readonly] = ACTIONS(64),
    [anon_sym_sealed] = ACTIONS(64),
    [anon_sym_unsafe] = ACTIONS(64),
    [anon_sym_virtual] = ACTIONS(64),
    [anon_sym_volatile] = ACTIONS(64),
    [anon_sym_explicit] = ACTIONS(64),
    [anon_sym_implicit] = ACTIONS(64),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_2] = ACTIONS(67),
    [anon_sym_3] = ACTIONS(67),
    [anon_sym_4] = ACTIONS(64),
    [anon_sym_5] = ACTIONS(67),
    [anon_sym_6] = ACTIONS(67),
    [anon_sym_7] = ACTIONS(67),
    [anon_sym_8] = ACTIONS(64),
    [anon_sym_9] = ACTIONS(64),
    [anon_sym_10] = ACTIONS(67),
    [anon_sym_11] = ACTIONS(67),
    [anon_sym_12] = ACTIONS(67),
    [anon_sym_13] = ACTIONS(64),
    [anon_sym_14] = ACTIONS(64),
    [anon_sym_15] = ACTIONS(64),
    [anon_sym_16] = ACTIONS(67),
    [anon_sym_17] = ACTIONS(64),
    [anon_sym_18] = ACTIONS(67),
    [anon_sym_19] = ACTIONS(64),
    [anon_sym_20] = ACTIONS(67),
    [anon_sym_21] = ACTIONS(64),
    [anon_sym_22] = ACTIONS(67),
    [anon_sym_23] = ACTIONS(67),
    [anon_sym_24] = ACTIONS(64),
    [anon_sym_25] = ACTIONS(67),
    [anon_sym_26] = ACTIONS(67),
    [anon_sym_27] = ACTIONS(64),
    [anon_sym_28] = ACTIONS(64),
    [anon_sym_29] = ACTIONS(64),
    [anon_sym_30] = ACTIONS(64),
    [anon_sym_31] = ACTIONS(67),
    [anon_sym_32] = ACTIONS(67),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_interface] = ACTIONS(70),
    [anon_sym_struct] = ACTIONS(70),
    [anon_sym_enum] = ACTIONS(70),
    [anon_sym_var] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(70),
    [anon_sym_33] = ACTIONS(73),
    [anon_sym_34] = ACTIONS(73),
    [anon_sym_35] = ACTIONS(73),
    [anon_sym_36] = ACTIONS(73),
    [anon_sym_37] = ACTIONS(73),
    [anon_sym_38] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_39] = ACTIONS(76),
    [anon_sym_40] = ACTIONS(76),
    [anon_sym_41] = ACTIONS(76),
    [anon_sym_42] = ACTIONS(76),
    [anon_sym_43] = ACTIONS(76),
    [anon_sym_44] = ACTIONS(76),
    [anon_sym_45] = ACTIONS(76),
    [anon_sym_46] = ACTIONS(76),
    [anon_sym_47] = ACTIONS(76),
    [anon_sym_48] = ACTIONS(76),
    [anon_sym_49] = ACTIONS(76),
    [anon_sym_50] = ACTIONS(79),
    [anon_sym_51] = ACTIONS(76),
    [anon_sym_52] = ACTIONS(76),
    [anon_sym_53] = ACTIONS(76),
    [anon_sym_54] = ACTIONS(76),
    [anon_sym_55] = ACTIONS(79),
    [anon_sym_56] = ACTIONS(79),
    [anon_sym_57] = ACTIONS(76),
    [anon_sym_58] = ACTIONS(76),
    [anon_sym_59] = ACTIONS(79),
    [anon_sym_60] = ACTIONS(76),
    [anon_sym_61] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(82),
    [anon_sym_62] = ACTIONS(85),
    [anon_sym_async] = ACTIONS(88),
    [anon_sym_await] = ACTIONS(88),
    [anon_sym_by] = ACTIONS(88),
    [anon_sym_if] = ACTIONS(88),
    [anon_sym_else] = ACTIONS(88),
    [anon_sym_foreach] = ACTIONS(88),
    [anon_sym_in] = ACTIONS(88),
    [anon_sym_for] = ACTIONS(88),
    [anon_sym_do] = ACTIONS(88),
    [anon_sym_while] = ACTIONS(88),
    [anon_sym_switch] = ACTIONS(88),
    [anon_sym_case] = ACTIONS(88),
    [anon_sym_break] = ACTIONS(88),
    [anon_sym_yield] = ACTIONS(88),
    [anon_sym_try] = ACTIONS(88),
    [anon_sym_catch] = ACTIONS(88),
    [anon_sym_finally] = ACTIONS(88),
    [anon_sym_continue] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_where] = ACTIONS(88),
    [anon_sym_select] = ACTIONS(88),
    [anon_sym_throw] = ACTIONS(88),
    [anon_sym_join] = ACTIONS(88),
    [anon_sym_goto] = ACTIONS(88),
    [anon_sym_lock] = ACTIONS(88),
    [anon_sym_orderby] = ACTIONS(88),
    [anon_sym_63] = ACTIONS(91),
    [anon_sym_64] = ACTIONS(91),
    [anon_sym_65] = ACTIONS(91),
    [anon_sym_66] = ACTIONS(91),
    [anon_sym_67] = ACTIONS(88),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(91),
    [anon_sym_68] = ACTIONS(91),
    [anon_sym_69] = ACTIONS(91),
    [anon_sym_70] = ACTIONS(91),
    [anon_sym_71] = ACTIONS(91),
    [anon_sym_72] = ACTIONS(91),
    [anon_sym_73] = ACTIONS(91),
    [anon_sym_74] = ACTIONS(91),
    [anon_sym_75] = ACTIONS(91),
    [anon_sym_76] = ACTIONS(91),
    [anon_sym_77] = ACTIONS(91),
    [anon_sym_78] = ACTIONS(91),
    [anon_sym_79] = ACTIONS(88),
    [anon_sym_80] = ACTIONS(91),
    [anon_sym_81] = ACTIONS(91),
    [anon_sym_82] = ACTIONS(91),
    [anon_sym_83] = ACTIONS(91),
    [anon_sym_84] = ACTIONS(91),
    [anon_sym_85] = ACTIONS(91),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(91),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(91),
    [anon_sym_86] = ACTIONS(91),
    [anon_sym_87] = ACTIONS(91),
    [anon_sym_88] = ACTIONS(91),
    [anon_sym_89] = ACTIONS(91),
    [anon_sym_90] = ACTIONS(91),
    [anon_sym_91] = ACTIONS(88),
    [anon_sym_92] = ACTIONS(91),
    [anon_sym_93] = ACTIONS(91),
    [anon_sym_94] = ACTIONS(88),
    [anon_sym_95] = ACTIONS(91),
    [anon_sym_96] = ACTIONS(91),
    [anon_sym_97] = ACTIONS(91),
    [anon_sym_98] = ACTIONS(91),
    [anon_sym_99] = ACTIONS(91),
    [anon_sym_100] = ACTIONS(88),
    [anon_sym_101] = ACTIONS(88),
    [anon_sym_102] = ACTIONS(91),
    [anon_sym_103] = ACTIONS(91),
    [anon_sym_add] = ACTIONS(94),
    [anon_sym_checked] = ACTIONS(94),
    [anon_sym_into] = ACTIONS(94),
    [anon_sym_nameof] = ACTIONS(94),
    [anon_sym_new] = ACTIONS(94),
    [anon_sym_using] = ACTIONS(94),
    [anon_sym_value] = ACTIONS(94),
    [anon_sym_global] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(94),
    [anon_sym_operator] = ACTIONS(94),
    [anon_sym_params] = ACTIONS(94),
    [anon_sym_this] = ACTIONS(94),
    [anon_sym_typeof] = ACTIONS(94),
    [anon_sym_default] = ACTIONS(94),
    [anon_sym_equals] = ACTIONS(94),
    [anon_sym_long] = ACTIONS(94),
    [anon_sym_out] = ACTIONS(94),
    [anon_sym_ref] = ACTIONS(94),
    [anon_sym_sizeof] = ACTIONS(94),
    [anon_sym_descending] = ACTIONS(94),
    [anon_sym_ascending] = ACTIONS(94),
    [anon_sym_dynamic] = ACTIONS(94),
    [anon_sym_fixed] = ACTIONS(94),
    [anon_sym_group] = ACTIONS(94),
    [anon_sym_is] = ACTIONS(94),
    [anon_sym_get] = ACTIONS(94),
    [anon_sym_set] = ACTIONS(94),
    [anon_sym_on] = ACTIONS(94),
    [anon_sym_remove] = ACTIONS(94),
    [anon_sym_stackalloc] = ACTIONS(94),
    [anon_sym_unchecked] = ACTIONS(94),
    [anon_sym_as] = ACTIONS(94),
    [anon_sym_base] = ACTIONS(94),
    [anon_sym_104] = ACTIONS(97),
    [anon_sym_105] = ACTIONS(97),
    [anon_sym_106] = ACTIONS(97),
    [anon_sym_107] = ACTIONS(94),
    [anon_sym_108] = ACTIONS(97),
    [anon_sym_109] = ACTIONS(97),
    [anon_sym_110] = ACTIONS(97),
    [anon_sym_111] = ACTIONS(94),
    [anon_sym_112] = ACTIONS(97),
    [anon_sym_113] = ACTIONS(97),
    [anon_sym_114] = ACTIONS(97),
    [anon_sym_115] = ACTIONS(97),
    [anon_sym_116] = ACTIONS(97),
    [anon_sym_117] = ACTIONS(97),
    [anon_sym_118] = ACTIONS(97),
    [anon_sym_119] = ACTIONS(97),
    [anon_sym_120] = ACTIONS(94),
    [anon_sym_121] = ACTIONS(97),
    [anon_sym_122] = ACTIONS(94),
    [anon_sym_123] = ACTIONS(94),
    [anon_sym_124] = ACTIONS(97),
    [anon_sym_125] = ACTIONS(94),
    [anon_sym_126] = ACTIONS(94),
    [anon_sym_127] = ACTIONS(94),
    [anon_sym_128] = ACTIONS(97),
    [anon_sym_129] = ACTIONS(97),
    [anon_sym_130] = ACTIONS(97),
    [anon_sym_131] = ACTIONS(97),
    [anon_sym_132] = ACTIONS(97),
    [anon_sym_133] = ACTIONS(97),
    [anon_sym_134] = ACTIONS(97),
    [anon_sym_135] = ACTIONS(97),
    [anon_sym_136] = ACTIONS(97),
    [anon_sym_137] = ACTIONS(94),
    [anon_sym_138] = ACTIONS(97),
    [anon_sym_139] = ACTIONS(97),
    [anon_sym_140] = ACTIONS(97),
    [anon_sym_141] = ACTIONS(97),
    [anon_sym_142] = ACTIONS(97),
    [anon_sym_143] = ACTIONS(97),
    [anon_sym_144] = ACTIONS(97),
    [anon_sym_145] = ACTIONS(97),
    [anon_sym_146] = ACTIONS(97),
    [anon_sym_147] = ACTIONS(97),
    [anon_sym_148] = ACTIONS(97),
    [anon_sym_149] = ACTIONS(97),
    [anon_sym_150] = ACTIONS(97),
    [anon_sym_151] = ACTIONS(94),
    [anon_sym_152] = ACTIONS(94),
    [anon_sym_153] = ACTIONS(94),
    [anon_sym_int] = ACTIONS(100),
    [anon_sym_bool] = ACTIONS(100),
    [anon_sym_string] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_char] = ACTIONS(100),
    [anon_sym_double] = ACTIONS(100),
    [anon_sym_byte] = ACTIONS(100),
    [anon_sym_decimal] = ACTIONS(100),
    [anon_sym_sbyte] = ACTIONS(100),
    [anon_sym_short] = ACTIONS(100),
    [anon_sym_uint] = ACTIONS(100),
    [anon_sym_ushort] = ACTIONS(100),
    [anon_sym_object] = ACTIONS(100),
    [anon_sym_ulong] = ACTIONS(100),
    [anon_sym_154] = ACTIONS(100),
    [anon_sym_155] = ACTIONS(100),
    [anon_sym_156] = ACTIONS(100),
    [anon_sym_157] = ACTIONS(100),
    [anon_sym_158] = ACTIONS(100),
    [anon_sym_159] = ACTIONS(103),
    [anon_sym_160] = ACTIONS(103),
    [anon_sym_161] = ACTIONS(100),
    [anon_sym_162] = ACTIONS(103),
    [anon_sym_163] = ACTIONS(100),
    [anon_sym_164] = ACTIONS(100),
    [anon_sym_165] = ACTIONS(100),
    [anon_sym_166] = ACTIONS(100),
    [anon_sym_167] = ACTIONS(100),
    [anon_sym_168] = ACTIONS(100),
    [anon_sym_169] = ACTIONS(100),
    [anon_sym_170] = ACTIONS(100),
    [anon_sym_171] = ACTIONS(103),
    [anon_sym_172] = ACTIONS(103),
    [anon_sym_173] = ACTIONS(103),
    [anon_sym_174] = ACTIONS(103),
    [anon_sym_175] = ACTIONS(103),
    [anon_sym_176] = ACTIONS(103),
    [anon_sym_177] = ACTIONS(103),
    [anon_sym_178] = ACTIONS(103),
    [anon_sym_179] = ACTIONS(103),
    [anon_sym_180] = ACTIONS(103),
    [anon_sym_181] = ACTIONS(103),
    [anon_sym_182] = ACTIONS(103),
    [anon_sym_183] = ACTIONS(103),
    [anon_sym_184] = ACTIONS(103),
    [anon_sym_185] = ACTIONS(103),
    [anon_sym_186] = ACTIONS(100),
    [anon_sym_187] = ACTIONS(103),
    [anon_sym_188] = ACTIONS(103),
    [anon_sym_189] = ACTIONS(103),
    [anon_sym_190] = ACTIONS(100),
    [anon_sym_191] = ACTIONS(100),
    [anon_sym_192] = ACTIONS(100),
    [anon_sym_193] = ACTIONS(100),
    [anon_sym_194] = ACTIONS(100),
    [anon_sym_195] = ACTIONS(100),
    [anon_sym_196] = ACTIONS(100),
    [anon_sym_197] = ACTIONS(100),
    [anon_sym_198] = ACTIONS(100),
    [anon_sym_199] = ACTIONS(103),
    [anon_sym_200] = ACTIONS(103),
    [anon_sym_201] = ACTIONS(103),
    [anon_sym_202] = ACTIONS(103),
    [anon_sym_203] = ACTIONS(103),
    [anon_sym_204] = ACTIONS(103),
    [anon_sym_205] = ACTIONS(103),
    [anon_sym_206] = ACTIONS(103),
    [anon_sym_207] = ACTIONS(103),
    [anon_sym_208] = ACTIONS(103),
    [anon_sym_209] = ACTIONS(103),
    [anon_sym_210] = ACTIONS(103),
    [anon_sym_211] = ACTIONS(100),
    [anon_sym_212] = ACTIONS(100),
    [anon_sym_213] = ACTIONS(103),
    [anon_sym_214] = ACTIONS(103),
    [anon_sym_215] = ACTIONS(103),
    [sym_type] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [aux_sym_z_token1] = ACTIONS(109),
    [aux_sym_z_token2] = ACTIONS(109),
    [aux_sym_z_token3] = ACTIONS(112),
    [sym_str] = ACTIONS(106),
    [sym_note] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_216] = ACTIONS(118),
    [anon_sym_217] = ACTIONS(118),
    [anon_sym_218] = ACTIONS(121),
    [anon_sym_219] = ACTIONS(121),
    [anon_sym_220] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_int] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(127),
    [anon_sym_221] = ACTIONS(130),
    [sym_real] = ACTIONS(61),
  },
  [4] = {
    [sym_mod] = STATE(4),
    [aux_sym_modifiers_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_id] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_internal] = ACTIONS(137),
    [anon_sym_protected] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_static] = ACTIONS(137),
    [anon_sym_abstract] = ACTIONS(137),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_extern] = ACTIONS(137),
    [anon_sym_override] = ACTIONS(137),
    [anon_sym_partial] = ACTIONS(137),
    [anon_sym_readonly] = ACTIONS(137),
    [anon_sym_sealed] = ACTIONS(137),
    [anon_sym_unsafe] = ACTIONS(137),
    [anon_sym_virtual] = ACTIONS(137),
    [anon_sym_volatile] = ACTIONS(137),
    [anon_sym_explicit] = ACTIONS(137),
    [anon_sym_implicit] = ACTIONS(137),
    [anon_sym_] = ACTIONS(140),
    [anon_sym_2] = ACTIONS(140),
    [anon_sym_3] = ACTIONS(140),
    [anon_sym_4] = ACTIONS(137),
    [anon_sym_5] = ACTIONS(140),
    [anon_sym_6] = ACTIONS(140),
    [anon_sym_7] = ACTIONS(140),
    [anon_sym_8] = ACTIONS(137),
    [anon_sym_9] = ACTIONS(137),
    [anon_sym_10] = ACTIONS(140),
    [anon_sym_11] = ACTIONS(140),
    [anon_sym_12] = ACTIONS(140),
    [anon_sym_13] = ACTIONS(137),
    [anon_sym_14] = ACTIONS(137),
    [anon_sym_15] = ACTIONS(137),
    [anon_sym_16] = ACTIONS(140),
    [anon_sym_17] = ACTIONS(137),
    [anon_sym_18] = ACTIONS(140),
    [anon_sym_19] = ACTIONS(137),
    [anon_sym_20] = ACTIONS(140),
    [anon_sym_21] = ACTIONS(137),
    [anon_sym_22] = ACTIONS(140),
    [anon_sym_23] = ACTIONS(140),
    [anon_sym_24] = ACTIONS(137),
    [anon_sym_25] = ACTIONS(140),
    [anon_sym_26] = ACTIONS(140),
    [anon_sym_27] = ACTIONS(137),
    [anon_sym_28] = ACTIONS(137),
    [anon_sym_29] = ACTIONS(137),
    [anon_sym_30] = ACTIONS(137),
    [anon_sym_31] = ACTIONS(140),
    [anon_sym_32] = ACTIONS(140),
    [anon_sym_class] = ACTIONS(135),
    [anon_sym_interface] = ACTIONS(135),
    [anon_sym_struct] = ACTIONS(135),
    [anon_sym_enum] = ACTIONS(135),
    [anon_sym_var] = ACTIONS(135),
    [anon_sym_delegate] = ACTIONS(135),
    [anon_sym_33] = ACTIONS(133),
    [anon_sym_34] = ACTIONS(133),
    [anon_sym_35] = ACTIONS(133),
    [anon_sym_36] = ACTIONS(133),
    [anon_sym_37] = ACTIONS(133),
    [anon_sym_38] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_39] = ACTIONS(133),
    [anon_sym_40] = ACTIONS(133),
    [anon_sym_41] = ACTIONS(133),
    [anon_sym_42] = ACTIONS(133),
    [anon_sym_43] = ACTIONS(133),
    [anon_sym_44] = ACTIONS(133),
    [anon_sym_45] = ACTIONS(133),
    [anon_sym_46] = ACTIONS(133),
    [anon_sym_47] = ACTIONS(133),
    [anon_sym_48] = ACTIONS(133),
    [anon_sym_49] = ACTIONS(133),
    [anon_sym_50] = ACTIONS(135),
    [anon_sym_51] = ACTIONS(133),
    [anon_sym_52] = ACTIONS(133),
    [anon_sym_53] = ACTIONS(133),
    [anon_sym_54] = ACTIONS(133),
    [anon_sym_55] = ACTIONS(135),
    [anon_sym_56] = ACTIONS(135),
    [anon_sym_57] = ACTIONS(133),
    [anon_sym_58] = ACTIONS(133),
    [anon_sym_59] = ACTIONS(135),
    [anon_sym_60] = ACTIONS(133),
    [anon_sym_61] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(135),
    [anon_sym_62] = ACTIONS(133),
    [anon_sym_async] = ACTIONS(135),
    [anon_sym_await] = ACTIONS(135),
    [anon_sym_by] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_else] = ACTIONS(135),
    [anon_sym_foreach] = ACTIONS(135),
    [anon_sym_in] = ACTIONS(135),
    [anon_sym_for] = ACTIONS(135),
    [anon_sym_do] = ACTIONS(135),
    [anon_sym_while] = ACTIONS(135),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_case] = ACTIONS(135),
    [anon_sym_break] = ACTIONS(135),
    [anon_sym_yield] = ACTIONS(135),
    [anon_sym_try] = ACTIONS(135),
    [anon_sym_catch] = ACTIONS(135),
    [anon_sym_finally] = ACTIONS(135),
    [anon_sym_continue] = ACTIONS(135),
    [anon_sym_from] = ACTIONS(135),
    [anon_sym_where] = ACTIONS(135),
    [anon_sym_select] = ACTIONS(135),
    [anon_sym_throw] = ACTIONS(135),
    [anon_sym_join] = ACTIONS(135),
    [anon_sym_goto] = ACTIONS(135),
    [anon_sym_lock] = ACTIONS(135),
    [anon_sym_orderby] = ACTIONS(135),
    [anon_sym_63] = ACTIONS(133),
    [anon_sym_64] = ACTIONS(133),
    [anon_sym_65] = ACTIONS(133),
    [anon_sym_66] = ACTIONS(133),
    [anon_sym_67] = ACTIONS(135),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(133),
    [anon_sym_68] = ACTIONS(133),
    [anon_sym_69] = ACTIONS(133),
    [anon_sym_70] = ACTIONS(133),
    [anon_sym_71] = ACTIONS(133),
    [anon_sym_72] = ACTIONS(133),
    [anon_sym_73] = ACTIONS(133),
    [anon_sym_74] = ACTIONS(133),
    [anon_sym_75] = ACTIONS(133),
    [anon_sym_76] = ACTIONS(133),
    [anon_sym_77] = ACTIONS(133),
    [anon_sym_78] = ACTIONS(133),
    [anon_sym_79] = ACTIONS(135),
    [anon_sym_80] = ACTIONS(133),
    [anon_sym_81] = ACTIONS(133),
    [anon_sym_82] = ACTIONS(133),
    [anon_sym_83] = ACTIONS(133),
    [anon_sym_84] = ACTIONS(133),
    [anon_sym_85] = ACTIONS(133),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(133),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(133),
    [anon_sym_86] = ACTIONS(133),
    [anon_sym_87] = ACTIONS(133),
    [anon_sym_88] = ACTIONS(133),
    [anon_sym_89] = ACTIONS(133),
    [anon_sym_90] = ACTIONS(133),
    [anon_sym_91] = ACTIONS(135),
    [anon_sym_92] = ACTIONS(133),
    [anon_sym_93] = ACTIONS(133),
    [anon_sym_94] = ACTIONS(135),
    [anon_sym_95] = ACTIONS(133),
    [anon_sym_96] = ACTIONS(133),
    [anon_sym_97] = ACTIONS(133),
    [anon_sym_98] = ACTIONS(133),
    [anon_sym_99] = ACTIONS(133),
    [anon_sym_100] = ACTIONS(135),
    [anon_sym_101] = ACTIONS(135),
    [anon_sym_102] = ACTIONS(133),
    [anon_sym_103] = ACTIONS(133),
    [anon_sym_add] = ACTIONS(135),
    [anon_sym_checked] = ACTIONS(135),
    [anon_sym_into] = ACTIONS(135),
    [anon_sym_nameof] = ACTIONS(135),
    [anon_sym_new] = ACTIONS(135),
    [anon_sym_using] = ACTIONS(135),
    [anon_sym_value] = ACTIONS(135),
    [anon_sym_global] = ACTIONS(135),
    [anon_sym_let] = ACTIONS(135),
    [anon_sym_operator] = ACTIONS(135),
    [anon_sym_params] = ACTIONS(135),
    [anon_sym_this] = ACTIONS(135),
    [anon_sym_typeof] = ACTIONS(135),
    [anon_sym_default] = ACTIONS(135),
    [anon_sym_equals] = ACTIONS(135),
    [anon_sym_long] = ACTIONS(135),
    [anon_sym_out] = ACTIONS(135),
    [anon_sym_ref] = ACTIONS(135),
    [anon_sym_sizeof] = ACTIONS(135),
    [anon_sym_descending] = ACTIONS(135),
    [anon_sym_ascending] = ACTIONS(135),
    [anon_sym_dynamic] = ACTIONS(135),
    [anon_sym_fixed] = ACTIONS(135),
    [anon_sym_group] = ACTIONS(135),
    [anon_sym_is] = ACTIONS(135),
    [anon_sym_get] = ACTIONS(135),
    [anon_sym_set] = ACTIONS(135),
    [anon_sym_on] = ACTIONS(135),
    [anon_sym_remove] = ACTIONS(135),
    [anon_sym_stackalloc] = ACTIONS(135),
    [anon_sym_unchecked] = ACTIONS(135),
    [anon_sym_as] = ACTIONS(135),
    [anon_sym_base] = ACTIONS(135),
    [anon_sym_104] = ACTIONS(133),
    [anon_sym_105] = ACTIONS(133),
    [anon_sym_106] = ACTIONS(133),
    [anon_sym_107] = ACTIONS(135),
    [anon_sym_108] = ACTIONS(133),
    [anon_sym_109] = ACTIONS(133),
    [anon_sym_110] = ACTIONS(133),
    [anon_sym_111] = ACTIONS(135),
    [anon_sym_112] = ACTIONS(133),
    [anon_sym_113] = ACTIONS(133),
    [anon_sym_114] = ACTIONS(133),
    [anon_sym_115] = ACTIONS(133),
    [anon_sym_116] = ACTIONS(133),
    [anon_sym_117] = ACTIONS(133),
    [anon_sym_118] = ACTIONS(133),
    [anon_sym_119] = ACTIONS(133),
    [anon_sym_120] = ACTIONS(135),
    [anon_sym_121] = ACTIONS(133),
    [anon_sym_122] = ACTIONS(135),
    [anon_sym_123] = ACTIONS(135),
    [anon_sym_124] = ACTIONS(133),
    [anon_sym_125] = ACTIONS(135),
    [anon_sym_126] = ACTIONS(135),
    [anon_sym_127] = ACTIONS(135),
    [anon_sym_128] = ACTIONS(133),
    [anon_sym_129] = ACTIONS(133),
    [anon_sym_130] = ACTIONS(133),
    [anon_sym_131] = ACTIONS(133),
    [anon_sym_132] = ACTIONS(133),
    [anon_sym_133] = ACTIONS(133),
    [anon_sym_134] = ACTIONS(133),
    [anon_sym_135] = ACTIONS(133),
    [anon_sym_136] = ACTIONS(133),
    [anon_sym_137] = ACTIONS(135),
    [anon_sym_138] = ACTIONS(133),
    [anon_sym_139] = ACTIONS(133),
    [anon_sym_140] = ACTIONS(133),
    [anon_sym_141] = ACTIONS(133),
    [anon_sym_142] = ACTIONS(133),
    [anon_sym_143] = ACTIONS(133),
    [anon_sym_144] = ACTIONS(133),
    [anon_sym_145] = ACTIONS(133),
    [anon_sym_146] = ACTIONS(133),
    [anon_sym_147] = ACTIONS(133),
    [anon_sym_148] = ACTIONS(133),
    [anon_sym_149] = ACTIONS(133),
    [anon_sym_150] = ACTIONS(133),
    [anon_sym_151] = ACTIONS(135),
    [anon_sym_152] = ACTIONS(135),
    [anon_sym_153] = ACTIONS(135),
    [anon_sym_int] = ACTIONS(135),
    [anon_sym_bool] = ACTIONS(135),
    [anon_sym_string] = ACTIONS(135),
    [anon_sym_float] = ACTIONS(135),
    [anon_sym_char] = ACTIONS(135),
    [anon_sym_double] = ACTIONS(135),
    [anon_sym_byte] = ACTIONS(135),
    [anon_sym_decimal] = ACTIONS(135),
    [anon_sym_sbyte] = ACTIONS(135),
    [anon_sym_short] = ACTIONS(135),
    [anon_sym_uint] = ACTIONS(135),
    [anon_sym_ushort] = ACTIONS(135),
    [anon_sym_object] = ACTIONS(135),
    [anon_sym_ulong] = ACTIONS(135),
    [anon_sym_154] = ACTIONS(135),
    [anon_sym_155] = ACTIONS(135),
    [anon_sym_156] = ACTIONS(135),
    [anon_sym_157] = ACTIONS(135),
    [anon_sym_158] = ACTIONS(135),
    [anon_sym_159] = ACTIONS(133),
    [anon_sym_160] = ACTIONS(133),
    [anon_sym_161] = ACTIONS(135),
    [anon_sym_162] = ACTIONS(133),
    [anon_sym_163] = ACTIONS(135),
    [anon_sym_164] = ACTIONS(135),
    [anon_sym_165] = ACTIONS(135),
    [anon_sym_166] = ACTIONS(135),
    [anon_sym_167] = ACTIONS(135),
    [anon_sym_168] = ACTIONS(135),
    [anon_sym_169] = ACTIONS(135),
    [anon_sym_170] = ACTIONS(135),
    [anon_sym_171] = ACTIONS(133),
    [anon_sym_172] = ACTIONS(133),
    [anon_sym_173] = ACTIONS(133),
    [anon_sym_174] = ACTIONS(133),
    [anon_sym_175] = ACTIONS(133),
    [anon_sym_176] = ACTIONS(133),
    [anon_sym_177] = ACTIONS(133),
    [anon_sym_178] = ACTIONS(133),
    [anon_sym_179] = ACTIONS(133),
    [anon_sym_180] = ACTIONS(133),
    [anon_sym_181] = ACTIONS(133),
    [anon_sym_182] = ACTIONS(133),
    [anon_sym_183] = ACTIONS(133),
    [anon_sym_184] = ACTIONS(133),
    [anon_sym_185] = ACTIONS(133),
    [anon_sym_186] = ACTIONS(135),
    [anon_sym_187] = ACTIONS(133),
    [anon_sym_188] = ACTIONS(133),
    [anon_sym_189] = ACTIONS(133),
    [anon_sym_190] = ACTIONS(135),
    [anon_sym_191] = ACTIONS(135),
    [anon_sym_192] = ACTIONS(135),
    [anon_sym_193] = ACTIONS(135),
    [anon_sym_194] = ACTIONS(135),
    [anon_sym_195] = ACTIONS(135),
    [anon_sym_196] = ACTIONS(135),
    [anon_sym_197] = ACTIONS(135),
    [anon_sym_198] = ACTIONS(135),
    [anon_sym_199] = ACTIONS(133),
    [anon_sym_200] = ACTIONS(133),
    [anon_sym_201] = ACTIONS(133),
    [anon_sym_202] = ACTIONS(133),
    [anon_sym_203] = ACTIONS(133),
    [anon_sym_204] = ACTIONS(133),
    [anon_sym_205] = ACTIONS(133),
    [anon_sym_206] = ACTIONS(133),
    [anon_sym_207] = ACTIONS(133),
    [anon_sym_208] = ACTIONS(133),
    [anon_sym_209] = ACTIONS(133),
    [anon_sym_210] = ACTIONS(133),
    [anon_sym_211] = ACTIONS(135),
    [anon_sym_212] = ACTIONS(135),
    [anon_sym_213] = ACTIONS(133),
    [anon_sym_214] = ACTIONS(133),
    [anon_sym_215] = ACTIONS(133),
    [sym_type] = ACTIONS(133),
    [sym_comment] = ACTIONS(133),
    [aux_sym_z_token1] = ACTIONS(135),
    [aux_sym_z_token2] = ACTIONS(135),
    [aux_sym_z_token3] = ACTIONS(133),
    [sym_str] = ACTIONS(133),
    [sym_note] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_216] = ACTIONS(133),
    [anon_sym_217] = ACTIONS(133),
    [anon_sym_218] = ACTIONS(135),
    [anon_sym_219] = ACTIONS(135),
    [anon_sym_220] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_int] = ACTIONS(135),
    [anon_sym_null] = ACTIONS(135),
    [anon_sym_221] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
  },
  [5] = {
    [sym_mod] = STATE(4),
    [aux_sym_modifiers_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_id] = ACTIONS(145),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(7),
    [anon_sym_sealed] = ACTIONS(7),
    [anon_sym_unsafe] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_explicit] = ACTIONS(7),
    [anon_sym_implicit] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(7),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(9),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(7),
    [anon_sym_9] = ACTIONS(7),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(9),
    [anon_sym_13] = ACTIONS(7),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(7),
    [anon_sym_16] = ACTIONS(9),
    [anon_sym_17] = ACTIONS(7),
    [anon_sym_18] = ACTIONS(9),
    [anon_sym_19] = ACTIONS(7),
    [anon_sym_20] = ACTIONS(9),
    [anon_sym_21] = ACTIONS(7),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(9),
    [anon_sym_24] = ACTIONS(7),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_26] = ACTIONS(9),
    [anon_sym_27] = ACTIONS(7),
    [anon_sym_28] = ACTIONS(7),
    [anon_sym_29] = ACTIONS(7),
    [anon_sym_30] = ACTIONS(7),
    [anon_sym_31] = ACTIONS(9),
    [anon_sym_32] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(145),
    [anon_sym_interface] = ACTIONS(145),
    [anon_sym_struct] = ACTIONS(145),
    [anon_sym_enum] = ACTIONS(145),
    [anon_sym_var] = ACTIONS(145),
    [anon_sym_delegate] = ACTIONS(145),
    [anon_sym_33] = ACTIONS(143),
    [anon_sym_34] = ACTIONS(143),
    [anon_sym_35] = ACTIONS(143),
    [anon_sym_36] = ACTIONS(143),
    [anon_sym_37] = ACTIONS(143),
    [anon_sym_38] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_39] = ACTIONS(143),
    [anon_sym_40] = ACTIONS(143),
    [anon_sym_41] = ACTIONS(143),
    [anon_sym_42] = ACTIONS(143),
    [anon_sym_43] = ACTIONS(143),
    [anon_sym_44] = ACTIONS(143),
    [anon_sym_45] = ACTIONS(143),
    [anon_sym_46] = ACTIONS(143),
    [anon_sym_47] = ACTIONS(143),
    [anon_sym_48] = ACTIONS(143),
    [anon_sym_49] = ACTIONS(143),
    [anon_sym_50] = ACTIONS(145),
    [anon_sym_51] = ACTIONS(143),
    [anon_sym_52] = ACTIONS(143),
    [anon_sym_53] = ACTIONS(143),
    [anon_sym_54] = ACTIONS(143),
    [anon_sym_55] = ACTIONS(145),
    [anon_sym_56] = ACTIONS(145),
    [anon_sym_57] = ACTIONS(143),
    [anon_sym_58] = ACTIONS(143),
    [anon_sym_59] = ACTIONS(145),
    [anon_sym_60] = ACTIONS(143),
    [anon_sym_61] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_62] = ACTIONS(143),
    [anon_sym_async] = ACTIONS(145),
    [anon_sym_await] = ACTIONS(145),
    [anon_sym_by] = ACTIONS(145),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_else] = ACTIONS(145),
    [anon_sym_foreach] = ACTIONS(145),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_for] = ACTIONS(145),
    [anon_sym_do] = ACTIONS(145),
    [anon_sym_while] = ACTIONS(145),
    [anon_sym_switch] = ACTIONS(145),
    [anon_sym_case] = ACTIONS(145),
    [anon_sym_break] = ACTIONS(145),
    [anon_sym_yield] = ACTIONS(145),
    [anon_sym_try] = ACTIONS(145),
    [anon_sym_catch] = ACTIONS(145),
    [anon_sym_finally] = ACTIONS(145),
    [anon_sym_continue] = ACTIONS(145),
    [anon_sym_from] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
    [anon_sym_select] = ACTIONS(145),
    [anon_sym_throw] = ACTIONS(145),
    [anon_sym_join] = ACTIONS(145),
    [anon_sym_goto] = ACTIONS(145),
    [anon_sym_lock] = ACTIONS(145),
    [anon_sym_orderby] = ACTIONS(145),
    [anon_sym_63] = ACTIONS(143),
    [anon_sym_64] = ACTIONS(143),
    [anon_sym_65] = ACTIONS(143),
    [anon_sym_66] = ACTIONS(143),
    [anon_sym_67] = ACTIONS(145),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(143),
    [anon_sym_68] = ACTIONS(143),
    [anon_sym_69] = ACTIONS(143),
    [anon_sym_70] = ACTIONS(143),
    [anon_sym_71] = ACTIONS(143),
    [anon_sym_72] = ACTIONS(143),
    [anon_sym_73] = ACTIONS(143),
    [anon_sym_74] = ACTIONS(143),
    [anon_sym_75] = ACTIONS(143),
    [anon_sym_76] = ACTIONS(143),
    [anon_sym_77] = ACTIONS(143),
    [anon_sym_78] = ACTIONS(143),
    [anon_sym_79] = ACTIONS(145),
    [anon_sym_80] = ACTIONS(143),
    [anon_sym_81] = ACTIONS(143),
    [anon_sym_82] = ACTIONS(143),
    [anon_sym_83] = ACTIONS(143),
    [anon_sym_84] = ACTIONS(143),
    [anon_sym_85] = ACTIONS(143),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(143),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(143),
    [anon_sym_86] = ACTIONS(143),
    [anon_sym_87] = ACTIONS(143),
    [anon_sym_88] = ACTIONS(143),
    [anon_sym_89] = ACTIONS(143),
    [anon_sym_90] = ACTIONS(143),
    [anon_sym_91] = ACTIONS(145),
    [anon_sym_92] = ACTIONS(143),
    [anon_sym_93] = ACTIONS(143),
    [anon_sym_94] = ACTIONS(145),
    [anon_sym_95] = ACTIONS(143),
    [anon_sym_96] = ACTIONS(143),
    [anon_sym_97] = ACTIONS(143),
    [anon_sym_98] = ACTIONS(143),
    [anon_sym_99] = ACTIONS(143),
    [anon_sym_100] = ACTIONS(145),
    [anon_sym_101] = ACTIONS(145),
    [anon_sym_102] = ACTIONS(143),
    [anon_sym_103] = ACTIONS(143),
    [anon_sym_add] = ACTIONS(145),
    [anon_sym_checked] = ACTIONS(145),
    [anon_sym_into] = ACTIONS(145),
    [anon_sym_nameof] = ACTIONS(145),
    [anon_sym_new] = ACTIONS(145),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_value] = ACTIONS(145),
    [anon_sym_global] = ACTIONS(145),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_operator] = ACTIONS(145),
    [anon_sym_params] = ACTIONS(145),
    [anon_sym_this] = ACTIONS(145),
    [anon_sym_typeof] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
    [anon_sym_equals] = ACTIONS(145),
    [anon_sym_long] = ACTIONS(145),
    [anon_sym_out] = ACTIONS(145),
    [anon_sym_ref] = ACTIONS(145),
    [anon_sym_sizeof] = ACTIONS(145),
    [anon_sym_descending] = ACTIONS(145),
    [anon_sym_ascending] = ACTIONS(145),
    [anon_sym_dynamic] = ACTIONS(145),
    [anon_sym_fixed] = ACTIONS(145),
    [anon_sym_group] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_get] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(145),
    [anon_sym_on] = ACTIONS(145),
    [anon_sym_remove] = ACTIONS(145),
    [anon_sym_stackalloc] = ACTIONS(145),
    [anon_sym_unchecked] = ACTIONS(145),
    [anon_sym_as] = ACTIONS(145),
    [anon_sym_base] = ACTIONS(145),
    [anon_sym_104] = ACTIONS(143),
    [anon_sym_105] = ACTIONS(143),
    [anon_sym_106] = ACTIONS(143),
    [anon_sym_107] = ACTIONS(145),
    [anon_sym_108] = ACTIONS(143),
    [anon_sym_109] = ACTIONS(143),
    [anon_sym_110] = ACTIONS(143),
    [anon_sym_111] = ACTIONS(145),
    [anon_sym_112] = ACTIONS(143),
    [anon_sym_113] = ACTIONS(143),
    [anon_sym_114] = ACTIONS(143),
    [anon_sym_115] = ACTIONS(143),
    [anon_sym_116] = ACTIONS(143),
    [anon_sym_117] = ACTIONS(143),
    [anon_sym_118] = ACTIONS(143),
    [anon_sym_119] = ACTIONS(143),
    [anon_sym_120] = ACTIONS(145),
    [anon_sym_121] = ACTIONS(143),
    [anon_sym_122] = ACTIONS(145),
    [anon_sym_123] = ACTIONS(145),
    [anon_sym_124] = ACTIONS(143),
    [anon_sym_125] = ACTIONS(145),
    [anon_sym_126] = ACTIONS(145),
    [anon_sym_127] = ACTIONS(145),
    [anon_sym_128] = ACTIONS(143),
    [anon_sym_129] = ACTIONS(143),
    [anon_sym_130] = ACTIONS(143),
    [anon_sym_131] = ACTIONS(143),
    [anon_sym_132] = ACTIONS(143),
    [anon_sym_133] = ACTIONS(143),
    [anon_sym_134] = ACTIONS(143),
    [anon_sym_135] = ACTIONS(143),
    [anon_sym_136] = ACTIONS(143),
    [anon_sym_137] = ACTIONS(145),
    [anon_sym_138] = ACTIONS(143),
    [anon_sym_139] = ACTIONS(143),
    [anon_sym_140] = ACTIONS(143),
    [anon_sym_141] = ACTIONS(143),
    [anon_sym_142] = ACTIONS(143),
    [anon_sym_143] = ACTIONS(143),
    [anon_sym_144] = ACTIONS(143),
    [anon_sym_145] = ACTIONS(143),
    [anon_sym_146] = ACTIONS(143),
    [anon_sym_147] = ACTIONS(143),
    [anon_sym_148] = ACTIONS(143),
    [anon_sym_149] = ACTIONS(143),
    [anon_sym_150] = ACTIONS(143),
    [anon_sym_151] = ACTIONS(145),
    [anon_sym_152] = ACTIONS(145),
    [anon_sym_153] = ACTIONS(145),
    [anon_sym_int] = ACTIONS(145),
    [anon_sym_bool] = ACTIONS(145),
    [anon_sym_string] = ACTIONS(145),
    [anon_sym_float] = ACTIONS(145),
    [anon_sym_char] = ACTIONS(145),
    [anon_sym_double] = ACTIONS(145),
    [anon_sym_byte] = ACTIONS(145),
    [anon_sym_decimal] = ACTIONS(145),
    [anon_sym_sbyte] = ACTIONS(145),
    [anon_sym_short] = ACTIONS(145),
    [anon_sym_uint] = ACTIONS(145),
    [anon_sym_ushort] = ACTIONS(145),
    [anon_sym_object] = ACTIONS(145),
    [anon_sym_ulong] = ACTIONS(145),
    [anon_sym_154] = ACTIONS(145),
    [anon_sym_155] = ACTIONS(145),
    [anon_sym_156] = ACTIONS(145),
    [anon_sym_157] = ACTIONS(145),
    [anon_sym_158] = ACTIONS(145),
    [anon_sym_159] = ACTIONS(143),
    [anon_sym_160] = ACTIONS(143),
    [anon_sym_161] = ACTIONS(145),
    [anon_sym_162] = ACTIONS(143),
    [anon_sym_163] = ACTIONS(145),
    [anon_sym_164] = ACTIONS(145),
    [anon_sym_165] = ACTIONS(145),
    [anon_sym_166] = ACTIONS(145),
    [anon_sym_167] = ACTIONS(145),
    [anon_sym_168] = ACTIONS(145),
    [anon_sym_169] = ACTIONS(145),
    [anon_sym_170] = ACTIONS(145),
    [anon_sym_171] = ACTIONS(143),
    [anon_sym_172] = ACTIONS(143),
    [anon_sym_173] = ACTIONS(143),
    [anon_sym_174] = ACTIONS(143),
    [anon_sym_175] = ACTIONS(143),
    [anon_sym_176] = ACTIONS(143),
    [anon_sym_177] = ACTIONS(143),
    [anon_sym_178] = ACTIONS(143),
    [anon_sym_179] = ACTIONS(143),
    [anon_sym_180] = ACTIONS(143),
    [anon_sym_181] = ACTIONS(143),
    [anon_sym_182] = ACTIONS(143),
    [anon_sym_183] = ACTIONS(143),
    [anon_sym_184] = ACTIONS(143),
    [anon_sym_185] = ACTIONS(143),
    [anon_sym_186] = ACTIONS(145),
    [anon_sym_187] = ACTIONS(143),
    [anon_sym_188] = ACTIONS(143),
    [anon_sym_189] = ACTIONS(143),
    [anon_sym_190] = ACTIONS(145),
    [anon_sym_191] = ACTIONS(145),
    [anon_sym_192] = ACTIONS(145),
    [anon_sym_193] = ACTIONS(145),
    [anon_sym_194] = ACTIONS(145),
    [anon_sym_195] = ACTIONS(145),
    [anon_sym_196] = ACTIONS(145),
    [anon_sym_197] = ACTIONS(145),
    [anon_sym_198] = ACTIONS(145),
    [anon_sym_199] = ACTIONS(143),
    [anon_sym_200] = ACTIONS(143),
    [anon_sym_201] = ACTIONS(143),
    [anon_sym_202] = ACTIONS(143),
    [anon_sym_203] = ACTIONS(143),
    [anon_sym_204] = ACTIONS(143),
    [anon_sym_205] = ACTIONS(143),
    [anon_sym_206] = ACTIONS(143),
    [anon_sym_207] = ACTIONS(143),
    [anon_sym_208] = ACTIONS(143),
    [anon_sym_209] = ACTIONS(143),
    [anon_sym_210] = ACTIONS(143),
    [anon_sym_211] = ACTIONS(145),
    [anon_sym_212] = ACTIONS(145),
    [anon_sym_213] = ACTIONS(143),
    [anon_sym_214] = ACTIONS(143),
    [anon_sym_215] = ACTIONS(143),
    [sym_type] = ACTIONS(143),
    [sym_comment] = ACTIONS(143),
    [aux_sym_z_token1] = ACTIONS(145),
    [aux_sym_z_token2] = ACTIONS(145),
    [aux_sym_z_token3] = ACTIONS(143),
    [sym_str] = ACTIONS(143),
    [sym_note] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_216] = ACTIONS(143),
    [anon_sym_217] = ACTIONS(143),
    [anon_sym_218] = ACTIONS(145),
    [anon_sym_219] = ACTIONS(145),
    [anon_sym_220] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_int] = ACTIONS(145),
    [anon_sym_null] = ACTIONS(145),
    [anon_sym_221] = ACTIONS(143),
    [sym_real] = ACTIONS(145),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_id] = ACTIONS(149),
    [anon_sym_public] = ACTIONS(149),
    [anon_sym_internal] = ACTIONS(149),
    [anon_sym_protected] = ACTIONS(149),
    [anon_sym_private] = ACTIONS(149),
    [anon_sym_static] = ACTIONS(149),
    [anon_sym_abstract] = ACTIONS(149),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_extern] = ACTIONS(149),
    [anon_sym_override] = ACTIONS(149),
    [anon_sym_partial] = ACTIONS(149),
    [anon_sym_readonly] = ACTIONS(149),
    [anon_sym_sealed] = ACTIONS(149),
    [anon_sym_unsafe] = ACTIONS(149),
    [anon_sym_virtual] = ACTIONS(149),
    [anon_sym_volatile] = ACTIONS(149),
    [anon_sym_explicit] = ACTIONS(149),
    [anon_sym_implicit] = ACTIONS(149),
    [anon_sym_] = ACTIONS(147),
    [anon_sym_2] = ACTIONS(147),
    [anon_sym_3] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(147),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_8] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(147),
    [anon_sym_11] = ACTIONS(147),
    [anon_sym_12] = ACTIONS(147),
    [anon_sym_13] = ACTIONS(149),
    [anon_sym_14] = ACTIONS(149),
    [anon_sym_15] = ACTIONS(149),
    [anon_sym_16] = ACTIONS(147),
    [anon_sym_17] = ACTIONS(149),
    [anon_sym_18] = ACTIONS(147),
    [anon_sym_19] = ACTIONS(149),
    [anon_sym_20] = ACTIONS(147),
    [anon_sym_21] = ACTIONS(149),
    [anon_sym_22] = ACTIONS(147),
    [anon_sym_23] = ACTIONS(147),
    [anon_sym_24] = ACTIONS(149),
    [anon_sym_25] = ACTIONS(147),
    [anon_sym_26] = ACTIONS(147),
    [anon_sym_27] = ACTIONS(149),
    [anon_sym_28] = ACTIONS(149),
    [anon_sym_29] = ACTIONS(149),
    [anon_sym_30] = ACTIONS(149),
    [anon_sym_31] = ACTIONS(147),
    [anon_sym_32] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(149),
    [anon_sym_interface] = ACTIONS(149),
    [anon_sym_struct] = ACTIONS(149),
    [anon_sym_enum] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(149),
    [anon_sym_delegate] = ACTIONS(149),
    [anon_sym_33] = ACTIONS(147),
    [anon_sym_34] = ACTIONS(147),
    [anon_sym_35] = ACTIONS(147),
    [anon_sym_36] = ACTIONS(147),
    [anon_sym_37] = ACTIONS(147),
    [anon_sym_38] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_39] = ACTIONS(147),
    [anon_sym_40] = ACTIONS(147),
    [anon_sym_41] = ACTIONS(147),
    [anon_sym_42] = ACTIONS(147),
    [anon_sym_43] = ACTIONS(147),
    [anon_sym_44] = ACTIONS(147),
    [anon_sym_45] = ACTIONS(147),
    [anon_sym_46] = ACTIONS(147),
    [anon_sym_47] = ACTIONS(147),
    [anon_sym_48] = ACTIONS(147),
    [anon_sym_49] = ACTIONS(147),
    [anon_sym_50] = ACTIONS(149),
    [anon_sym_51] = ACTIONS(147),
    [anon_sym_52] = ACTIONS(147),
    [anon_sym_53] = ACTIONS(147),
    [anon_sym_54] = ACTIONS(147),
    [anon_sym_55] = ACTIONS(149),
    [anon_sym_56] = ACTIONS(149),
    [anon_sym_57] = ACTIONS(147),
    [anon_sym_58] = ACTIONS(147),
    [anon_sym_59] = ACTIONS(149),
    [anon_sym_60] = ACTIONS(147),
    [anon_sym_61] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_62] = ACTIONS(147),
    [anon_sym_async] = ACTIONS(149),
    [anon_sym_await] = ACTIONS(149),
    [anon_sym_by] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_else] = ACTIONS(149),
    [anon_sym_foreach] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(149),
    [anon_sym_for] = ACTIONS(149),
    [anon_sym_do] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(149),
    [anon_sym_switch] = ACTIONS(149),
    [anon_sym_case] = ACTIONS(149),
    [anon_sym_break] = ACTIONS(149),
    [anon_sym_yield] = ACTIONS(149),
    [anon_sym_try] = ACTIONS(149),
    [anon_sym_catch] = ACTIONS(149),
    [anon_sym_finally] = ACTIONS(149),
    [anon_sym_continue] = ACTIONS(149),
    [anon_sym_from] = ACTIONS(149),
    [anon_sym_where] = ACTIONS(149),
    [anon_sym_select] = ACTIONS(149),
    [anon_sym_throw] = ACTIONS(149),
    [anon_sym_join] = ACTIONS(149),
    [anon_sym_goto] = ACTIONS(149),
    [anon_sym_lock] = ACTIONS(149),
    [anon_sym_orderby] = ACTIONS(149),
    [anon_sym_63] = ACTIONS(147),
    [anon_sym_64] = ACTIONS(147),
    [anon_sym_65] = ACTIONS(147),
    [anon_sym_66] = ACTIONS(147),
    [anon_sym_67] = ACTIONS(149),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(147),
    [anon_sym_68] = ACTIONS(147),
    [anon_sym_69] = ACTIONS(147),
    [anon_sym_70] = ACTIONS(147),
    [anon_sym_71] = ACTIONS(147),
    [anon_sym_72] = ACTIONS(147),
    [anon_sym_73] = ACTIONS(147),
    [anon_sym_74] = ACTIONS(147),
    [anon_sym_75] = ACTIONS(147),
    [anon_sym_76] = ACTIONS(147),
    [anon_sym_77] = ACTIONS(147),
    [anon_sym_78] = ACTIONS(147),
    [anon_sym_79] = ACTIONS(149),
    [anon_sym_80] = ACTIONS(147),
    [anon_sym_81] = ACTIONS(147),
    [anon_sym_82] = ACTIONS(147),
    [anon_sym_83] = ACTIONS(147),
    [anon_sym_84] = ACTIONS(147),
    [anon_sym_85] = ACTIONS(147),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(147),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(147),
    [anon_sym_86] = ACTIONS(147),
    [anon_sym_87] = ACTIONS(147),
    [anon_sym_88] = ACTIONS(147),
    [anon_sym_89] = ACTIONS(147),
    [anon_sym_90] = ACTIONS(147),
    [anon_sym_91] = ACTIONS(149),
    [anon_sym_92] = ACTIONS(147),
    [anon_sym_93] = ACTIONS(147),
    [anon_sym_94] = ACTIONS(149),
    [anon_sym_95] = ACTIONS(147),
    [anon_sym_96] = ACTIONS(147),
    [anon_sym_97] = ACTIONS(147),
    [anon_sym_98] = ACTIONS(147),
    [anon_sym_99] = ACTIONS(147),
    [anon_sym_100] = ACTIONS(149),
    [anon_sym_101] = ACTIONS(149),
    [anon_sym_102] = ACTIONS(147),
    [anon_sym_103] = ACTIONS(147),
    [anon_sym_add] = ACTIONS(149),
    [anon_sym_checked] = ACTIONS(149),
    [anon_sym_into] = ACTIONS(149),
    [anon_sym_nameof] = ACTIONS(149),
    [anon_sym_new] = ACTIONS(149),
    [anon_sym_using] = ACTIONS(149),
    [anon_sym_value] = ACTIONS(149),
    [anon_sym_global] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(149),
    [anon_sym_operator] = ACTIONS(149),
    [anon_sym_params] = ACTIONS(149),
    [anon_sym_this] = ACTIONS(149),
    [anon_sym_typeof] = ACTIONS(149),
    [anon_sym_default] = ACTIONS(149),
    [anon_sym_equals] = ACTIONS(149),
    [anon_sym_long] = ACTIONS(149),
    [anon_sym_out] = ACTIONS(149),
    [anon_sym_ref] = ACTIONS(149),
    [anon_sym_sizeof] = ACTIONS(149),
    [anon_sym_descending] = ACTIONS(149),
    [anon_sym_ascending] = ACTIONS(149),
    [anon_sym_dynamic] = ACTIONS(149),
    [anon_sym_fixed] = ACTIONS(149),
    [anon_sym_group] = ACTIONS(149),
    [anon_sym_is] = ACTIONS(149),
    [anon_sym_get] = ACTIONS(149),
    [anon_sym_set] = ACTIONS(149),
    [anon_sym_on] = ACTIONS(149),
    [anon_sym_remove] = ACTIONS(149),
    [anon_sym_stackalloc] = ACTIONS(149),
    [anon_sym_unchecked] = ACTIONS(149),
    [anon_sym_as] = ACTIONS(149),
    [anon_sym_base] = ACTIONS(149),
    [anon_sym_104] = ACTIONS(147),
    [anon_sym_105] = ACTIONS(147),
    [anon_sym_106] = ACTIONS(147),
    [anon_sym_107] = ACTIONS(149),
    [anon_sym_108] = ACTIONS(147),
    [anon_sym_109] = ACTIONS(147),
    [anon_sym_110] = ACTIONS(147),
    [anon_sym_111] = ACTIONS(149),
    [anon_sym_112] = ACTIONS(147),
    [anon_sym_113] = ACTIONS(147),
    [anon_sym_114] = ACTIONS(147),
    [anon_sym_115] = ACTIONS(147),
    [anon_sym_116] = ACTIONS(147),
    [anon_sym_117] = ACTIONS(147),
    [anon_sym_118] = ACTIONS(147),
    [anon_sym_119] = ACTIONS(147),
    [anon_sym_120] = ACTIONS(149),
    [anon_sym_121] = ACTIONS(147),
    [anon_sym_122] = ACTIONS(149),
    [anon_sym_123] = ACTIONS(149),
    [anon_sym_124] = ACTIONS(147),
    [anon_sym_125] = ACTIONS(149),
    [anon_sym_126] = ACTIONS(149),
    [anon_sym_127] = ACTIONS(149),
    [anon_sym_128] = ACTIONS(147),
    [anon_sym_129] = ACTIONS(147),
    [anon_sym_130] = ACTIONS(147),
    [anon_sym_131] = ACTIONS(147),
    [anon_sym_132] = ACTIONS(147),
    [anon_sym_133] = ACTIONS(147),
    [anon_sym_134] = ACTIONS(147),
    [anon_sym_135] = ACTIONS(147),
    [anon_sym_136] = ACTIONS(147),
    [anon_sym_137] = ACTIONS(149),
    [anon_sym_138] = ACTIONS(147),
    [anon_sym_139] = ACTIONS(147),
    [anon_sym_140] = ACTIONS(147),
    [anon_sym_141] = ACTIONS(147),
    [anon_sym_142] = ACTIONS(147),
    [anon_sym_143] = ACTIONS(147),
    [anon_sym_144] = ACTIONS(147),
    [anon_sym_145] = ACTIONS(147),
    [anon_sym_146] = ACTIONS(147),
    [anon_sym_147] = ACTIONS(147),
    [anon_sym_148] = ACTIONS(147),
    [anon_sym_149] = ACTIONS(147),
    [anon_sym_150] = ACTIONS(147),
    [anon_sym_151] = ACTIONS(149),
    [anon_sym_152] = ACTIONS(149),
    [anon_sym_153] = ACTIONS(149),
    [anon_sym_int] = ACTIONS(149),
    [anon_sym_bool] = ACTIONS(149),
    [anon_sym_string] = ACTIONS(149),
    [anon_sym_float] = ACTIONS(149),
    [anon_sym_char] = ACTIONS(149),
    [anon_sym_double] = ACTIONS(149),
    [anon_sym_byte] = ACTIONS(149),
    [anon_sym_decimal] = ACTIONS(149),
    [anon_sym_sbyte] = ACTIONS(149),
    [anon_sym_short] = ACTIONS(149),
    [anon_sym_uint] = ACTIONS(149),
    [anon_sym_ushort] = ACTIONS(149),
    [anon_sym_object] = ACTIONS(149),
    [anon_sym_ulong] = ACTIONS(149),
    [anon_sym_154] = ACTIONS(149),
    [anon_sym_155] = ACTIONS(149),
    [anon_sym_156] = ACTIONS(149),
    [anon_sym_157] = ACTIONS(149),
    [anon_sym_158] = ACTIONS(149),
    [anon_sym_159] = ACTIONS(147),
    [anon_sym_160] = ACTIONS(147),
    [anon_sym_161] = ACTIONS(149),
    [anon_sym_162] = ACTIONS(147),
    [anon_sym_163] = ACTIONS(149),
    [anon_sym_164] = ACTIONS(149),
    [anon_sym_165] = ACTIONS(149),
    [anon_sym_166] = ACTIONS(149),
    [anon_sym_167] = ACTIONS(149),
    [anon_sym_168] = ACTIONS(149),
    [anon_sym_169] = ACTIONS(149),
    [anon_sym_170] = ACTIONS(149),
    [anon_sym_171] = ACTIONS(147),
    [anon_sym_172] = ACTIONS(147),
    [anon_sym_173] = ACTIONS(147),
    [anon_sym_174] = ACTIONS(147),
    [anon_sym_175] = ACTIONS(147),
    [anon_sym_176] = ACTIONS(147),
    [anon_sym_177] = ACTIONS(147),
    [anon_sym_178] = ACTIONS(147),
    [anon_sym_179] = ACTIONS(147),
    [anon_sym_180] = ACTIONS(147),
    [anon_sym_181] = ACTIONS(147),
    [anon_sym_182] = ACTIONS(147),
    [anon_sym_183] = ACTIONS(147),
    [anon_sym_184] = ACTIONS(147),
    [anon_sym_185] = ACTIONS(147),
    [anon_sym_186] = ACTIONS(149),
    [anon_sym_187] = ACTIONS(147),
    [anon_sym_188] = ACTIONS(147),
    [anon_sym_189] = ACTIONS(147),
    [anon_sym_190] = ACTIONS(149),
    [anon_sym_191] = ACTIONS(149),
    [anon_sym_192] = ACTIONS(149),
    [anon_sym_193] = ACTIONS(149),
    [anon_sym_194] = ACTIONS(149),
    [anon_sym_195] = ACTIONS(149),
    [anon_sym_196] = ACTIONS(149),
    [anon_sym_197] = ACTIONS(149),
    [anon_sym_198] = ACTIONS(149),
    [anon_sym_199] = ACTIONS(147),
    [anon_sym_200] = ACTIONS(147),
    [anon_sym_201] = ACTIONS(147),
    [anon_sym_202] = ACTIONS(147),
    [anon_sym_203] = ACTIONS(147),
    [anon_sym_204] = ACTIONS(147),
    [anon_sym_205] = ACTIONS(147),
    [anon_sym_206] = ACTIONS(147),
    [anon_sym_207] = ACTIONS(147),
    [anon_sym_208] = ACTIONS(147),
    [anon_sym_209] = ACTIONS(147),
    [anon_sym_210] = ACTIONS(147),
    [anon_sym_211] = ACTIONS(149),
    [anon_sym_212] = ACTIONS(149),
    [anon_sym_213] = ACTIONS(147),
    [anon_sym_214] = ACTIONS(147),
    [anon_sym_215] = ACTIONS(147),
    [sym_type] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
    [aux_sym_z_token1] = ACTIONS(149),
    [aux_sym_z_token2] = ACTIONS(149),
    [aux_sym_z_token3] = ACTIONS(147),
    [sym_str] = ACTIONS(147),
    [sym_note] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_216] = ACTIONS(147),
    [anon_sym_217] = ACTIONS(147),
    [anon_sym_218] = ACTIONS(149),
    [anon_sym_219] = ACTIONS(149),
    [anon_sym_220] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_int] = ACTIONS(149),
    [anon_sym_null] = ACTIONS(149),
    [anon_sym_221] = ACTIONS(147),
    [sym_real] = ACTIONS(149),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_id] = ACTIONS(153),
    [anon_sym_public] = ACTIONS(153),
    [anon_sym_internal] = ACTIONS(153),
    [anon_sym_protected] = ACTIONS(153),
    [anon_sym_private] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(153),
    [anon_sym_abstract] = ACTIONS(153),
    [anon_sym_const] = ACTIONS(153),
    [anon_sym_extern] = ACTIONS(153),
    [anon_sym_override] = ACTIONS(153),
    [anon_sym_partial] = ACTIONS(153),
    [anon_sym_readonly] = ACTIONS(153),
    [anon_sym_sealed] = ACTIONS(153),
    [anon_sym_unsafe] = ACTIONS(153),
    [anon_sym_virtual] = ACTIONS(153),
    [anon_sym_volatile] = ACTIONS(153),
    [anon_sym_explicit] = ACTIONS(153),
    [anon_sym_implicit] = ACTIONS(153),
    [anon_sym_] = ACTIONS(151),
    [anon_sym_2] = ACTIONS(151),
    [anon_sym_3] = ACTIONS(151),
    [anon_sym_4] = ACTIONS(153),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(151),
    [anon_sym_11] = ACTIONS(151),
    [anon_sym_12] = ACTIONS(151),
    [anon_sym_13] = ACTIONS(153),
    [anon_sym_14] = ACTIONS(153),
    [anon_sym_15] = ACTIONS(153),
    [anon_sym_16] = ACTIONS(151),
    [anon_sym_17] = ACTIONS(153),
    [anon_sym_18] = ACTIONS(151),
    [anon_sym_19] = ACTIONS(153),
    [anon_sym_20] = ACTIONS(151),
    [anon_sym_21] = ACTIONS(153),
    [anon_sym_22] = ACTIONS(151),
    [anon_sym_23] = ACTIONS(151),
    [anon_sym_24] = ACTIONS(153),
    [anon_sym_25] = ACTIONS(151),
    [anon_sym_26] = ACTIONS(151),
    [anon_sym_27] = ACTIONS(153),
    [anon_sym_28] = ACTIONS(153),
    [anon_sym_29] = ACTIONS(153),
    [anon_sym_30] = ACTIONS(153),
    [anon_sym_31] = ACTIONS(151),
    [anon_sym_32] = ACTIONS(151),
    [anon_sym_class] = ACTIONS(153),
    [anon_sym_interface] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(153),
    [anon_sym_enum] = ACTIONS(153),
    [anon_sym_var] = ACTIONS(153),
    [anon_sym_delegate] = ACTIONS(153),
    [anon_sym_33] = ACTIONS(151),
    [anon_sym_34] = ACTIONS(151),
    [anon_sym_35] = ACTIONS(151),
    [anon_sym_36] = ACTIONS(151),
    [anon_sym_37] = ACTIONS(151),
    [anon_sym_38] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_39] = ACTIONS(151),
    [anon_sym_40] = ACTIONS(151),
    [anon_sym_41] = ACTIONS(151),
    [anon_sym_42] = ACTIONS(151),
    [anon_sym_43] = ACTIONS(151),
    [anon_sym_44] = ACTIONS(151),
    [anon_sym_45] = ACTIONS(151),
    [anon_sym_46] = ACTIONS(151),
    [anon_sym_47] = ACTIONS(151),
    [anon_sym_48] = ACTIONS(151),
    [anon_sym_49] = ACTIONS(151),
    [anon_sym_50] = ACTIONS(153),
    [anon_sym_51] = ACTIONS(151),
    [anon_sym_52] = ACTIONS(151),
    [anon_sym_53] = ACTIONS(151),
    [anon_sym_54] = ACTIONS(151),
    [anon_sym_55] = ACTIONS(153),
    [anon_sym_56] = ACTIONS(153),
    [anon_sym_57] = ACTIONS(151),
    [anon_sym_58] = ACTIONS(151),
    [anon_sym_59] = ACTIONS(153),
    [anon_sym_60] = ACTIONS(151),
    [anon_sym_61] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(153),
    [anon_sym_62] = ACTIONS(151),
    [anon_sym_async] = ACTIONS(153),
    [anon_sym_await] = ACTIONS(153),
    [anon_sym_by] = ACTIONS(153),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_else] = ACTIONS(153),
    [anon_sym_foreach] = ACTIONS(153),
    [anon_sym_in] = ACTIONS(153),
    [anon_sym_for] = ACTIONS(153),
    [anon_sym_do] = ACTIONS(153),
    [anon_sym_while] = ACTIONS(153),
    [anon_sym_switch] = ACTIONS(153),
    [anon_sym_case] = ACTIONS(153),
    [anon_sym_break] = ACTIONS(153),
    [anon_sym_yield] = ACTIONS(153),
    [anon_sym_try] = ACTIONS(153),
    [anon_sym_catch] = ACTIONS(153),
    [anon_sym_finally] = ACTIONS(153),
    [anon_sym_continue] = ACTIONS(153),
    [anon_sym_from] = ACTIONS(153),
    [anon_sym_where] = ACTIONS(153),
    [anon_sym_select] = ACTIONS(153),
    [anon_sym_throw] = ACTIONS(153),
    [anon_sym_join] = ACTIONS(153),
    [anon_sym_goto] = ACTIONS(153),
    [anon_sym_lock] = ACTIONS(153),
    [anon_sym_orderby] = ACTIONS(153),
    [anon_sym_63] = ACTIONS(151),
    [anon_sym_64] = ACTIONS(151),
    [anon_sym_65] = ACTIONS(151),
    [anon_sym_66] = ACTIONS(151),
    [anon_sym_67] = ACTIONS(153),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(151),
    [anon_sym_68] = ACTIONS(151),
    [anon_sym_69] = ACTIONS(151),
    [anon_sym_70] = ACTIONS(151),
    [anon_sym_71] = ACTIONS(151),
    [anon_sym_72] = ACTIONS(151),
    [anon_sym_73] = ACTIONS(151),
    [anon_sym_74] = ACTIONS(151),
    [anon_sym_75] = ACTIONS(151),
    [anon_sym_76] = ACTIONS(151),
    [anon_sym_77] = ACTIONS(151),
    [anon_sym_78] = ACTIONS(151),
    [anon_sym_79] = ACTIONS(153),
    [anon_sym_80] = ACTIONS(151),
    [anon_sym_81] = ACTIONS(151),
    [anon_sym_82] = ACTIONS(151),
    [anon_sym_83] = ACTIONS(151),
    [anon_sym_84] = ACTIONS(151),
    [anon_sym_85] = ACTIONS(151),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(151),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(151),
    [anon_sym_86] = ACTIONS(151),
    [anon_sym_87] = ACTIONS(151),
    [anon_sym_88] = ACTIONS(151),
    [anon_sym_89] = ACTIONS(151),
    [anon_sym_90] = ACTIONS(151),
    [anon_sym_91] = ACTIONS(153),
    [anon_sym_92] = ACTIONS(151),
    [anon_sym_93] = ACTIONS(151),
    [anon_sym_94] = ACTIONS(153),
    [anon_sym_95] = ACTIONS(151),
    [anon_sym_96] = ACTIONS(151),
    [anon_sym_97] = ACTIONS(151),
    [anon_sym_98] = ACTIONS(151),
    [anon_sym_99] = ACTIONS(151),
    [anon_sym_100] = ACTIONS(153),
    [anon_sym_101] = ACTIONS(153),
    [anon_sym_102] = ACTIONS(151),
    [anon_sym_103] = ACTIONS(151),
    [anon_sym_add] = ACTIONS(153),
    [anon_sym_checked] = ACTIONS(153),
    [anon_sym_into] = ACTIONS(153),
    [anon_sym_nameof] = ACTIONS(153),
    [anon_sym_new] = ACTIONS(153),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_value] = ACTIONS(153),
    [anon_sym_global] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_operator] = ACTIONS(153),
    [anon_sym_params] = ACTIONS(153),
    [anon_sym_this] = ACTIONS(153),
    [anon_sym_typeof] = ACTIONS(153),
    [anon_sym_default] = ACTIONS(153),
    [anon_sym_equals] = ACTIONS(153),
    [anon_sym_long] = ACTIONS(153),
    [anon_sym_out] = ACTIONS(153),
    [anon_sym_ref] = ACTIONS(153),
    [anon_sym_sizeof] = ACTIONS(153),
    [anon_sym_descending] = ACTIONS(153),
    [anon_sym_ascending] = ACTIONS(153),
    [anon_sym_dynamic] = ACTIONS(153),
    [anon_sym_fixed] = ACTIONS(153),
    [anon_sym_group] = ACTIONS(153),
    [anon_sym_is] = ACTIONS(153),
    [anon_sym_get] = ACTIONS(153),
    [anon_sym_set] = ACTIONS(153),
    [anon_sym_on] = ACTIONS(153),
    [anon_sym_remove] = ACTIONS(153),
    [anon_sym_stackalloc] = ACTIONS(153),
    [anon_sym_unchecked] = ACTIONS(153),
    [anon_sym_as] = ACTIONS(153),
    [anon_sym_base] = ACTIONS(153),
    [anon_sym_104] = ACTIONS(151),
    [anon_sym_105] = ACTIONS(151),
    [anon_sym_106] = ACTIONS(151),
    [anon_sym_107] = ACTIONS(153),
    [anon_sym_108] = ACTIONS(151),
    [anon_sym_109] = ACTIONS(151),
    [anon_sym_110] = ACTIONS(151),
    [anon_sym_111] = ACTIONS(153),
    [anon_sym_112] = ACTIONS(151),
    [anon_sym_113] = ACTIONS(151),
    [anon_sym_114] = ACTIONS(151),
    [anon_sym_115] = ACTIONS(151),
    [anon_sym_116] = ACTIONS(151),
    [anon_sym_117] = ACTIONS(151),
    [anon_sym_118] = ACTIONS(151),
    [anon_sym_119] = ACTIONS(151),
    [anon_sym_120] = ACTIONS(153),
    [anon_sym_121] = ACTIONS(151),
    [anon_sym_122] = ACTIONS(153),
    [anon_sym_123] = ACTIONS(153),
    [anon_sym_124] = ACTIONS(151),
    [anon_sym_125] = ACTIONS(153),
    [anon_sym_126] = ACTIONS(153),
    [anon_sym_127] = ACTIONS(153),
    [anon_sym_128] = ACTIONS(151),
    [anon_sym_129] = ACTIONS(151),
    [anon_sym_130] = ACTIONS(151),
    [anon_sym_131] = ACTIONS(151),
    [anon_sym_132] = ACTIONS(151),
    [anon_sym_133] = ACTIONS(151),
    [anon_sym_134] = ACTIONS(151),
    [anon_sym_135] = ACTIONS(151),
    [anon_sym_136] = ACTIONS(151),
    [anon_sym_137] = ACTIONS(153),
    [anon_sym_138] = ACTIONS(151),
    [anon_sym_139] = ACTIONS(151),
    [anon_sym_140] = ACTIONS(151),
    [anon_sym_141] = ACTIONS(151),
    [anon_sym_142] = ACTIONS(151),
    [anon_sym_143] = ACTIONS(151),
    [anon_sym_144] = ACTIONS(151),
    [anon_sym_145] = ACTIONS(151),
    [anon_sym_146] = ACTIONS(151),
    [anon_sym_147] = ACTIONS(151),
    [anon_sym_148] = ACTIONS(151),
    [anon_sym_149] = ACTIONS(151),
    [anon_sym_150] = ACTIONS(151),
    [anon_sym_151] = ACTIONS(153),
    [anon_sym_152] = ACTIONS(153),
    [anon_sym_153] = ACTIONS(153),
    [anon_sym_int] = ACTIONS(153),
    [anon_sym_bool] = ACTIONS(153),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_float] = ACTIONS(153),
    [anon_sym_char] = ACTIONS(153),
    [anon_sym_double] = ACTIONS(153),
    [anon_sym_byte] = ACTIONS(153),
    [anon_sym_decimal] = ACTIONS(153),
    [anon_sym_sbyte] = ACTIONS(153),
    [anon_sym_short] = ACTIONS(153),
    [anon_sym_uint] = ACTIONS(153),
    [anon_sym_ushort] = ACTIONS(153),
    [anon_sym_object] = ACTIONS(153),
    [anon_sym_ulong] = ACTIONS(153),
    [anon_sym_154] = ACTIONS(153),
    [anon_sym_155] = ACTIONS(153),
    [anon_sym_156] = ACTIONS(153),
    [anon_sym_157] = ACTIONS(153),
    [anon_sym_158] = ACTIONS(153),
    [anon_sym_159] = ACTIONS(151),
    [anon_sym_160] = ACTIONS(151),
    [anon_sym_161] = ACTIONS(153),
    [anon_sym_162] = ACTIONS(151),
    [anon_sym_163] = ACTIONS(153),
    [anon_sym_164] = ACTIONS(153),
    [anon_sym_165] = ACTIONS(153),
    [anon_sym_166] = ACTIONS(153),
    [anon_sym_167] = ACTIONS(153),
    [anon_sym_168] = ACTIONS(153),
    [anon_sym_169] = ACTIONS(153),
    [anon_sym_170] = ACTIONS(153),
    [anon_sym_171] = ACTIONS(151),
    [anon_sym_172] = ACTIONS(151),
    [anon_sym_173] = ACTIONS(151),
    [anon_sym_174] = ACTIONS(151),
    [anon_sym_175] = ACTIONS(151),
    [anon_sym_176] = ACTIONS(151),
    [anon_sym_177] = ACTIONS(151),
    [anon_sym_178] = ACTIONS(151),
    [anon_sym_179] = ACTIONS(151),
    [anon_sym_180] = ACTIONS(151),
    [anon_sym_181] = ACTIONS(151),
    [anon_sym_182] = ACTIONS(151),
    [anon_sym_183] = ACTIONS(151),
    [anon_sym_184] = ACTIONS(151),
    [anon_sym_185] = ACTIONS(151),
    [anon_sym_186] = ACTIONS(153),
    [anon_sym_187] = ACTIONS(151),
    [anon_sym_188] = ACTIONS(151),
    [anon_sym_189] = ACTIONS(151),
    [anon_sym_190] = ACTIONS(153),
    [anon_sym_191] = ACTIONS(153),
    [anon_sym_192] = ACTIONS(153),
    [anon_sym_193] = ACTIONS(153),
    [anon_sym_194] = ACTIONS(153),
    [anon_sym_195] = ACTIONS(153),
    [anon_sym_196] = ACTIONS(153),
    [anon_sym_197] = ACTIONS(153),
    [anon_sym_198] = ACTIONS(153),
    [anon_sym_199] = ACTIONS(151),
    [anon_sym_200] = ACTIONS(151),
    [anon_sym_201] = ACTIONS(151),
    [anon_sym_202] = ACTIONS(151),
    [anon_sym_203] = ACTIONS(151),
    [anon_sym_204] = ACTIONS(151),
    [anon_sym_205] = ACTIONS(151),
    [anon_sym_206] = ACTIONS(151),
    [anon_sym_207] = ACTIONS(151),
    [anon_sym_208] = ACTIONS(151),
    [anon_sym_209] = ACTIONS(151),
    [anon_sym_210] = ACTIONS(151),
    [anon_sym_211] = ACTIONS(153),
    [anon_sym_212] = ACTIONS(153),
    [anon_sym_213] = ACTIONS(151),
    [anon_sym_214] = ACTIONS(151),
    [anon_sym_215] = ACTIONS(151),
    [sym_type] = ACTIONS(151),
    [sym_comment] = ACTIONS(151),
    [aux_sym_z_token1] = ACTIONS(153),
    [aux_sym_z_token2] = ACTIONS(153),
    [aux_sym_z_token3] = ACTIONS(151),
    [sym_str] = ACTIONS(151),
    [sym_note] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [anon_sym_216] = ACTIONS(151),
    [anon_sym_217] = ACTIONS(151),
    [anon_sym_218] = ACTIONS(153),
    [anon_sym_219] = ACTIONS(153),
    [anon_sym_220] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_int] = ACTIONS(153),
    [anon_sym_null] = ACTIONS(153),
    [anon_sym_221] = ACTIONS(151),
    [sym_real] = ACTIONS(153),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_id] = ACTIONS(157),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_internal] = ACTIONS(157),
    [anon_sym_protected] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_static] = ACTIONS(157),
    [anon_sym_abstract] = ACTIONS(157),
    [anon_sym_const] = ACTIONS(157),
    [anon_sym_extern] = ACTIONS(157),
    [anon_sym_override] = ACTIONS(157),
    [anon_sym_partial] = ACTIONS(157),
    [anon_sym_readonly] = ACTIONS(157),
    [anon_sym_sealed] = ACTIONS(157),
    [anon_sym_unsafe] = ACTIONS(157),
    [anon_sym_virtual] = ACTIONS(157),
    [anon_sym_volatile] = ACTIONS(157),
    [anon_sym_explicit] = ACTIONS(157),
    [anon_sym_implicit] = ACTIONS(157),
    [anon_sym_] = ACTIONS(155),
    [anon_sym_2] = ACTIONS(155),
    [anon_sym_3] = ACTIONS(155),
    [anon_sym_4] = ACTIONS(157),
    [anon_sym_5] = ACTIONS(155),
    [anon_sym_6] = ACTIONS(155),
    [anon_sym_7] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(157),
    [anon_sym_9] = ACTIONS(157),
    [anon_sym_10] = ACTIONS(155),
    [anon_sym_11] = ACTIONS(155),
    [anon_sym_12] = ACTIONS(155),
    [anon_sym_13] = ACTIONS(157),
    [anon_sym_14] = ACTIONS(157),
    [anon_sym_15] = ACTIONS(157),
    [anon_sym_16] = ACTIONS(155),
    [anon_sym_17] = ACTIONS(157),
    [anon_sym_18] = ACTIONS(155),
    [anon_sym_19] = ACTIONS(157),
    [anon_sym_20] = ACTIONS(155),
    [anon_sym_21] = ACTIONS(157),
    [anon_sym_22] = ACTIONS(155),
    [anon_sym_23] = ACTIONS(155),
    [anon_sym_24] = ACTIONS(157),
    [anon_sym_25] = ACTIONS(155),
    [anon_sym_26] = ACTIONS(155),
    [anon_sym_27] = ACTIONS(157),
    [anon_sym_28] = ACTIONS(157),
    [anon_sym_29] = ACTIONS(157),
    [anon_sym_30] = ACTIONS(157),
    [anon_sym_31] = ACTIONS(155),
    [anon_sym_32] = ACTIONS(155),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_interface] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(157),
    [anon_sym_enum] = ACTIONS(157),
    [anon_sym_var] = ACTIONS(157),
    [anon_sym_delegate] = ACTIONS(157),
    [anon_sym_33] = ACTIONS(155),
    [anon_sym_34] = ACTIONS(155),
    [anon_sym_35] = ACTIONS(155),
    [anon_sym_36] = ACTIONS(155),
    [anon_sym_37] = ACTIONS(155),
    [anon_sym_38] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_39] = ACTIONS(155),
    [anon_sym_40] = ACTIONS(155),
    [anon_sym_41] = ACTIONS(155),
    [anon_sym_42] = ACTIONS(155),
    [anon_sym_43] = ACTIONS(155),
    [anon_sym_44] = ACTIONS(155),
    [anon_sym_45] = ACTIONS(155),
    [anon_sym_46] = ACTIONS(155),
    [anon_sym_47] = ACTIONS(155),
    [anon_sym_48] = ACTIONS(155),
    [anon_sym_49] = ACTIONS(155),
    [anon_sym_50] = ACTIONS(157),
    [anon_sym_51] = ACTIONS(155),
    [anon_sym_52] = ACTIONS(155),
    [anon_sym_53] = ACTIONS(155),
    [anon_sym_54] = ACTIONS(155),
    [anon_sym_55] = ACTIONS(157),
    [anon_sym_56] = ACTIONS(157),
    [anon_sym_57] = ACTIONS(155),
    [anon_sym_58] = ACTIONS(155),
    [anon_sym_59] = ACTIONS(157),
    [anon_sym_60] = ACTIONS(155),
    [anon_sym_61] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_62] = ACTIONS(155),
    [anon_sym_async] = ACTIONS(157),
    [anon_sym_await] = ACTIONS(157),
    [anon_sym_by] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_else] = ACTIONS(157),
    [anon_sym_foreach] = ACTIONS(157),
    [anon_sym_in] = ACTIONS(157),
    [anon_sym_for] = ACTIONS(157),
    [anon_sym_do] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(157),
    [anon_sym_switch] = ACTIONS(157),
    [anon_sym_case] = ACTIONS(157),
    [anon_sym_break] = ACTIONS(157),
    [anon_sym_yield] = ACTIONS(157),
    [anon_sym_try] = ACTIONS(157),
    [anon_sym_catch] = ACTIONS(157),
    [anon_sym_finally] = ACTIONS(157),
    [anon_sym_continue] = ACTIONS(157),
    [anon_sym_from] = ACTIONS(157),
    [anon_sym_where] = ACTIONS(157),
    [anon_sym_select] = ACTIONS(157),
    [anon_sym_throw] = ACTIONS(157),
    [anon_sym_join] = ACTIONS(157),
    [anon_sym_goto] = ACTIONS(157),
    [anon_sym_lock] = ACTIONS(157),
    [anon_sym_orderby] = ACTIONS(157),
    [anon_sym_63] = ACTIONS(155),
    [anon_sym_64] = ACTIONS(155),
    [anon_sym_65] = ACTIONS(155),
    [anon_sym_66] = ACTIONS(155),
    [anon_sym_67] = ACTIONS(157),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(155),
    [anon_sym_68] = ACTIONS(155),
    [anon_sym_69] = ACTIONS(155),
    [anon_sym_70] = ACTIONS(155),
    [anon_sym_71] = ACTIONS(155),
    [anon_sym_72] = ACTIONS(155),
    [anon_sym_73] = ACTIONS(155),
    [anon_sym_74] = ACTIONS(155),
    [anon_sym_75] = ACTIONS(155),
    [anon_sym_76] = ACTIONS(155),
    [anon_sym_77] = ACTIONS(155),
    [anon_sym_78] = ACTIONS(155),
    [anon_sym_79] = ACTIONS(157),
    [anon_sym_80] = ACTIONS(155),
    [anon_sym_81] = ACTIONS(155),
    [anon_sym_82] = ACTIONS(155),
    [anon_sym_83] = ACTIONS(155),
    [anon_sym_84] = ACTIONS(155),
    [anon_sym_85] = ACTIONS(155),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(155),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(155),
    [anon_sym_86] = ACTIONS(155),
    [anon_sym_87] = ACTIONS(155),
    [anon_sym_88] = ACTIONS(155),
    [anon_sym_89] = ACTIONS(155),
    [anon_sym_90] = ACTIONS(155),
    [anon_sym_91] = ACTIONS(157),
    [anon_sym_92] = ACTIONS(155),
    [anon_sym_93] = ACTIONS(155),
    [anon_sym_94] = ACTIONS(157),
    [anon_sym_95] = ACTIONS(155),
    [anon_sym_96] = ACTIONS(155),
    [anon_sym_97] = ACTIONS(155),
    [anon_sym_98] = ACTIONS(155),
    [anon_sym_99] = ACTIONS(155),
    [anon_sym_100] = ACTIONS(157),
    [anon_sym_101] = ACTIONS(157),
    [anon_sym_102] = ACTIONS(155),
    [anon_sym_103] = ACTIONS(155),
    [anon_sym_add] = ACTIONS(157),
    [anon_sym_checked] = ACTIONS(157),
    [anon_sym_into] = ACTIONS(157),
    [anon_sym_nameof] = ACTIONS(157),
    [anon_sym_new] = ACTIONS(157),
    [anon_sym_using] = ACTIONS(157),
    [anon_sym_value] = ACTIONS(157),
    [anon_sym_global] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(157),
    [anon_sym_operator] = ACTIONS(157),
    [anon_sym_params] = ACTIONS(157),
    [anon_sym_this] = ACTIONS(157),
    [anon_sym_typeof] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
    [anon_sym_equals] = ACTIONS(157),
    [anon_sym_long] = ACTIONS(157),
    [anon_sym_out] = ACTIONS(157),
    [anon_sym_ref] = ACTIONS(157),
    [anon_sym_sizeof] = ACTIONS(157),
    [anon_sym_descending] = ACTIONS(157),
    [anon_sym_ascending] = ACTIONS(157),
    [anon_sym_dynamic] = ACTIONS(157),
    [anon_sym_fixed] = ACTIONS(157),
    [anon_sym_group] = ACTIONS(157),
    [anon_sym_is] = ACTIONS(157),
    [anon_sym_get] = ACTIONS(157),
    [anon_sym_set] = ACTIONS(157),
    [anon_sym_on] = ACTIONS(157),
    [anon_sym_remove] = ACTIONS(157),
    [anon_sym_stackalloc] = ACTIONS(157),
    [anon_sym_unchecked] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(157),
    [anon_sym_base] = ACTIONS(157),
    [anon_sym_104] = ACTIONS(155),
    [anon_sym_105] = ACTIONS(155),
    [anon_sym_106] = ACTIONS(155),
    [anon_sym_107] = ACTIONS(157),
    [anon_sym_108] = ACTIONS(155),
    [anon_sym_109] = ACTIONS(155),
    [anon_sym_110] = ACTIONS(155),
    [anon_sym_111] = ACTIONS(157),
    [anon_sym_112] = ACTIONS(155),
    [anon_sym_113] = ACTIONS(155),
    [anon_sym_114] = ACTIONS(155),
    [anon_sym_115] = ACTIONS(155),
    [anon_sym_116] = ACTIONS(155),
    [anon_sym_117] = ACTIONS(155),
    [anon_sym_118] = ACTIONS(155),
    [anon_sym_119] = ACTIONS(155),
    [anon_sym_120] = ACTIONS(157),
    [anon_sym_121] = ACTIONS(155),
    [anon_sym_122] = ACTIONS(157),
    [anon_sym_123] = ACTIONS(157),
    [anon_sym_124] = ACTIONS(155),
    [anon_sym_125] = ACTIONS(157),
    [anon_sym_126] = ACTIONS(157),
    [anon_sym_127] = ACTIONS(157),
    [anon_sym_128] = ACTIONS(155),
    [anon_sym_129] = ACTIONS(155),
    [anon_sym_130] = ACTIONS(155),
    [anon_sym_131] = ACTIONS(155),
    [anon_sym_132] = ACTIONS(155),
    [anon_sym_133] = ACTIONS(155),
    [anon_sym_134] = ACTIONS(155),
    [anon_sym_135] = ACTIONS(155),
    [anon_sym_136] = ACTIONS(155),
    [anon_sym_137] = ACTIONS(157),
    [anon_sym_138] = ACTIONS(155),
    [anon_sym_139] = ACTIONS(155),
    [anon_sym_140] = ACTIONS(155),
    [anon_sym_141] = ACTIONS(155),
    [anon_sym_142] = ACTIONS(155),
    [anon_sym_143] = ACTIONS(155),
    [anon_sym_144] = ACTIONS(155),
    [anon_sym_145] = ACTIONS(155),
    [anon_sym_146] = ACTIONS(155),
    [anon_sym_147] = ACTIONS(155),
    [anon_sym_148] = ACTIONS(155),
    [anon_sym_149] = ACTIONS(155),
    [anon_sym_150] = ACTIONS(155),
    [anon_sym_151] = ACTIONS(157),
    [anon_sym_152] = ACTIONS(157),
    [anon_sym_153] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(157),
    [anon_sym_bool] = ACTIONS(157),
    [anon_sym_string] = ACTIONS(157),
    [anon_sym_float] = ACTIONS(157),
    [anon_sym_char] = ACTIONS(157),
    [anon_sym_double] = ACTIONS(157),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_decimal] = ACTIONS(157),
    [anon_sym_sbyte] = ACTIONS(157),
    [anon_sym_short] = ACTIONS(157),
    [anon_sym_uint] = ACTIONS(157),
    [anon_sym_ushort] = ACTIONS(157),
    [anon_sym_object] = ACTIONS(157),
    [anon_sym_ulong] = ACTIONS(157),
    [anon_sym_154] = ACTIONS(157),
    [anon_sym_155] = ACTIONS(157),
    [anon_sym_156] = ACTIONS(157),
    [anon_sym_157] = ACTIONS(157),
    [anon_sym_158] = ACTIONS(157),
    [anon_sym_159] = ACTIONS(155),
    [anon_sym_160] = ACTIONS(155),
    [anon_sym_161] = ACTIONS(157),
    [anon_sym_162] = ACTIONS(155),
    [anon_sym_163] = ACTIONS(157),
    [anon_sym_164] = ACTIONS(157),
    [anon_sym_165] = ACTIONS(157),
    [anon_sym_166] = ACTIONS(157),
    [anon_sym_167] = ACTIONS(157),
    [anon_sym_168] = ACTIONS(157),
    [anon_sym_169] = ACTIONS(157),
    [anon_sym_170] = ACTIONS(157),
    [anon_sym_171] = ACTIONS(155),
    [anon_sym_172] = ACTIONS(155),
    [anon_sym_173] = ACTIONS(155),
    [anon_sym_174] = ACTIONS(155),
    [anon_sym_175] = ACTIONS(155),
    [anon_sym_176] = ACTIONS(155),
    [anon_sym_177] = ACTIONS(155),
    [anon_sym_178] = ACTIONS(155),
    [anon_sym_179] = ACTIONS(155),
    [anon_sym_180] = ACTIONS(155),
    [anon_sym_181] = ACTIONS(155),
    [anon_sym_182] = ACTIONS(155),
    [anon_sym_183] = ACTIONS(155),
    [anon_sym_184] = ACTIONS(155),
    [anon_sym_185] = ACTIONS(155),
    [anon_sym_186] = ACTIONS(157),
    [anon_sym_187] = ACTIONS(155),
    [anon_sym_188] = ACTIONS(155),
    [anon_sym_189] = ACTIONS(155),
    [anon_sym_190] = ACTIONS(157),
    [anon_sym_191] = ACTIONS(157),
    [anon_sym_192] = ACTIONS(157),
    [anon_sym_193] = ACTIONS(157),
    [anon_sym_194] = ACTIONS(157),
    [anon_sym_195] = ACTIONS(157),
    [anon_sym_196] = ACTIONS(157),
    [anon_sym_197] = ACTIONS(157),
    [anon_sym_198] = ACTIONS(157),
    [anon_sym_199] = ACTIONS(155),
    [anon_sym_200] = ACTIONS(155),
    [anon_sym_201] = ACTIONS(155),
    [anon_sym_202] = ACTIONS(155),
    [anon_sym_203] = ACTIONS(155),
    [anon_sym_204] = ACTIONS(155),
    [anon_sym_205] = ACTIONS(155),
    [anon_sym_206] = ACTIONS(155),
    [anon_sym_207] = ACTIONS(155),
    [anon_sym_208] = ACTIONS(155),
    [anon_sym_209] = ACTIONS(155),
    [anon_sym_210] = ACTIONS(155),
    [anon_sym_211] = ACTIONS(157),
    [anon_sym_212] = ACTIONS(157),
    [anon_sym_213] = ACTIONS(155),
    [anon_sym_214] = ACTIONS(155),
    [anon_sym_215] = ACTIONS(155),
    [sym_type] = ACTIONS(155),
    [sym_comment] = ACTIONS(155),
    [aux_sym_z_token1] = ACTIONS(157),
    [aux_sym_z_token2] = ACTIONS(157),
    [aux_sym_z_token3] = ACTIONS(155),
    [sym_str] = ACTIONS(155),
    [sym_note] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_216] = ACTIONS(155),
    [anon_sym_217] = ACTIONS(155),
    [anon_sym_218] = ACTIONS(157),
    [anon_sym_219] = ACTIONS(157),
    [anon_sym_220] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [anon_sym_null] = ACTIONS(157),
    [anon_sym_221] = ACTIONS(155),
    [sym_real] = ACTIONS(157),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_id] = ACTIONS(161),
    [anon_sym_public] = ACTIONS(161),
    [anon_sym_internal] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(161),
    [anon_sym_abstract] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(161),
    [anon_sym_extern] = ACTIONS(161),
    [anon_sym_override] = ACTIONS(161),
    [anon_sym_partial] = ACTIONS(161),
    [anon_sym_readonly] = ACTIONS(161),
    [anon_sym_sealed] = ACTIONS(161),
    [anon_sym_unsafe] = ACTIONS(161),
    [anon_sym_virtual] = ACTIONS(161),
    [anon_sym_volatile] = ACTIONS(161),
    [anon_sym_explicit] = ACTIONS(161),
    [anon_sym_implicit] = ACTIONS(161),
    [anon_sym_] = ACTIONS(159),
    [anon_sym_2] = ACTIONS(159),
    [anon_sym_3] = ACTIONS(159),
    [anon_sym_4] = ACTIONS(161),
    [anon_sym_5] = ACTIONS(159),
    [anon_sym_6] = ACTIONS(159),
    [anon_sym_7] = ACTIONS(159),
    [anon_sym_8] = ACTIONS(161),
    [anon_sym_9] = ACTIONS(161),
    [anon_sym_10] = ACTIONS(159),
    [anon_sym_11] = ACTIONS(159),
    [anon_sym_12] = ACTIONS(159),
    [anon_sym_13] = ACTIONS(161),
    [anon_sym_14] = ACTIONS(161),
    [anon_sym_15] = ACTIONS(161),
    [anon_sym_16] = ACTIONS(159),
    [anon_sym_17] = ACTIONS(161),
    [anon_sym_18] = ACTIONS(159),
    [anon_sym_19] = ACTIONS(161),
    [anon_sym_20] = ACTIONS(159),
    [anon_sym_21] = ACTIONS(161),
    [anon_sym_22] = ACTIONS(159),
    [anon_sym_23] = ACTIONS(159),
    [anon_sym_24] = ACTIONS(161),
    [anon_sym_25] = ACTIONS(159),
    [anon_sym_26] = ACTIONS(159),
    [anon_sym_27] = ACTIONS(161),
    [anon_sym_28] = ACTIONS(161),
    [anon_sym_29] = ACTIONS(161),
    [anon_sym_30] = ACTIONS(161),
    [anon_sym_31] = ACTIONS(159),
    [anon_sym_32] = ACTIONS(159),
    [anon_sym_class] = ACTIONS(161),
    [anon_sym_interface] = ACTIONS(161),
    [anon_sym_struct] = ACTIONS(161),
    [anon_sym_enum] = ACTIONS(161),
    [anon_sym_var] = ACTIONS(161),
    [anon_sym_delegate] = ACTIONS(161),
    [anon_sym_33] = ACTIONS(159),
    [anon_sym_34] = ACTIONS(159),
    [anon_sym_35] = ACTIONS(159),
    [anon_sym_36] = ACTIONS(159),
    [anon_sym_37] = ACTIONS(159),
    [anon_sym_38] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_39] = ACTIONS(159),
    [anon_sym_40] = ACTIONS(159),
    [anon_sym_41] = ACTIONS(159),
    [anon_sym_42] = ACTIONS(159),
    [anon_sym_43] = ACTIONS(159),
    [anon_sym_44] = ACTIONS(159),
    [anon_sym_45] = ACTIONS(159),
    [anon_sym_46] = ACTIONS(159),
    [anon_sym_47] = ACTIONS(159),
    [anon_sym_48] = ACTIONS(159),
    [anon_sym_49] = ACTIONS(159),
    [anon_sym_50] = ACTIONS(161),
    [anon_sym_51] = ACTIONS(159),
    [anon_sym_52] = ACTIONS(159),
    [anon_sym_53] = ACTIONS(159),
    [anon_sym_54] = ACTIONS(159),
    [anon_sym_55] = ACTIONS(161),
    [anon_sym_56] = ACTIONS(161),
    [anon_sym_57] = ACTIONS(159),
    [anon_sym_58] = ACTIONS(159),
    [anon_sym_59] = ACTIONS(161),
    [anon_sym_60] = ACTIONS(159),
    [anon_sym_61] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(161),
    [anon_sym_62] = ACTIONS(159),
    [anon_sym_async] = ACTIONS(161),
    [anon_sym_await] = ACTIONS(161),
    [anon_sym_by] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(161),
    [anon_sym_foreach] = ACTIONS(161),
    [anon_sym_in] = ACTIONS(161),
    [anon_sym_for] = ACTIONS(161),
    [anon_sym_do] = ACTIONS(161),
    [anon_sym_while] = ACTIONS(161),
    [anon_sym_switch] = ACTIONS(161),
    [anon_sym_case] = ACTIONS(161),
    [anon_sym_break] = ACTIONS(161),
    [anon_sym_yield] = ACTIONS(161),
    [anon_sym_try] = ACTIONS(161),
    [anon_sym_catch] = ACTIONS(161),
    [anon_sym_finally] = ACTIONS(161),
    [anon_sym_continue] = ACTIONS(161),
    [anon_sym_from] = ACTIONS(161),
    [anon_sym_where] = ACTIONS(161),
    [anon_sym_select] = ACTIONS(161),
    [anon_sym_throw] = ACTIONS(161),
    [anon_sym_join] = ACTIONS(161),
    [anon_sym_goto] = ACTIONS(161),
    [anon_sym_lock] = ACTIONS(161),
    [anon_sym_orderby] = ACTIONS(161),
    [anon_sym_63] = ACTIONS(159),
    [anon_sym_64] = ACTIONS(159),
    [anon_sym_65] = ACTIONS(159),
    [anon_sym_66] = ACTIONS(159),
    [anon_sym_67] = ACTIONS(161),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(159),
    [anon_sym_68] = ACTIONS(159),
    [anon_sym_69] = ACTIONS(159),
    [anon_sym_70] = ACTIONS(159),
    [anon_sym_71] = ACTIONS(159),
    [anon_sym_72] = ACTIONS(159),
    [anon_sym_73] = ACTIONS(159),
    [anon_sym_74] = ACTIONS(159),
    [anon_sym_75] = ACTIONS(159),
    [anon_sym_76] = ACTIONS(159),
    [anon_sym_77] = ACTIONS(159),
    [anon_sym_78] = ACTIONS(159),
    [anon_sym_79] = ACTIONS(161),
    [anon_sym_80] = ACTIONS(159),
    [anon_sym_81] = ACTIONS(159),
    [anon_sym_82] = ACTIONS(159),
    [anon_sym_83] = ACTIONS(159),
    [anon_sym_84] = ACTIONS(159),
    [anon_sym_85] = ACTIONS(159),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(159),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(159),
    [anon_sym_86] = ACTIONS(159),
    [anon_sym_87] = ACTIONS(159),
    [anon_sym_88] = ACTIONS(159),
    [anon_sym_89] = ACTIONS(159),
    [anon_sym_90] = ACTIONS(159),
    [anon_sym_91] = ACTIONS(161),
    [anon_sym_92] = ACTIONS(159),
    [anon_sym_93] = ACTIONS(159),
    [anon_sym_94] = ACTIONS(161),
    [anon_sym_95] = ACTIONS(159),
    [anon_sym_96] = ACTIONS(159),
    [anon_sym_97] = ACTIONS(159),
    [anon_sym_98] = ACTIONS(159),
    [anon_sym_99] = ACTIONS(159),
    [anon_sym_100] = ACTIONS(161),
    [anon_sym_101] = ACTIONS(161),
    [anon_sym_102] = ACTIONS(159),
    [anon_sym_103] = ACTIONS(159),
    [anon_sym_add] = ACTIONS(161),
    [anon_sym_checked] = ACTIONS(161),
    [anon_sym_into] = ACTIONS(161),
    [anon_sym_nameof] = ACTIONS(161),
    [anon_sym_new] = ACTIONS(161),
    [anon_sym_using] = ACTIONS(161),
    [anon_sym_value] = ACTIONS(161),
    [anon_sym_global] = ACTIONS(161),
    [anon_sym_let] = ACTIONS(161),
    [anon_sym_operator] = ACTIONS(161),
    [anon_sym_params] = ACTIONS(161),
    [anon_sym_this] = ACTIONS(161),
    [anon_sym_typeof] = ACTIONS(161),
    [anon_sym_default] = ACTIONS(161),
    [anon_sym_equals] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(161),
    [anon_sym_out] = ACTIONS(161),
    [anon_sym_ref] = ACTIONS(161),
    [anon_sym_sizeof] = ACTIONS(161),
    [anon_sym_descending] = ACTIONS(161),
    [anon_sym_ascending] = ACTIONS(161),
    [anon_sym_dynamic] = ACTIONS(161),
    [anon_sym_fixed] = ACTIONS(161),
    [anon_sym_group] = ACTIONS(161),
    [anon_sym_is] = ACTIONS(161),
    [anon_sym_get] = ACTIONS(161),
    [anon_sym_set] = ACTIONS(161),
    [anon_sym_on] = ACTIONS(161),
    [anon_sym_remove] = ACTIONS(161),
    [anon_sym_stackalloc] = ACTIONS(161),
    [anon_sym_unchecked] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(161),
    [anon_sym_base] = ACTIONS(161),
    [anon_sym_104] = ACTIONS(159),
    [anon_sym_105] = ACTIONS(159),
    [anon_sym_106] = ACTIONS(159),
    [anon_sym_107] = ACTIONS(161),
    [anon_sym_108] = ACTIONS(159),
    [anon_sym_109] = ACTIONS(159),
    [anon_sym_110] = ACTIONS(159),
    [anon_sym_111] = ACTIONS(161),
    [anon_sym_112] = ACTIONS(159),
    [anon_sym_113] = ACTIONS(159),
    [anon_sym_114] = ACTIONS(159),
    [anon_sym_115] = ACTIONS(159),
    [anon_sym_116] = ACTIONS(159),
    [anon_sym_117] = ACTIONS(159),
    [anon_sym_118] = ACTIONS(159),
    [anon_sym_119] = ACTIONS(159),
    [anon_sym_120] = ACTIONS(161),
    [anon_sym_121] = ACTIONS(159),
    [anon_sym_122] = ACTIONS(161),
    [anon_sym_123] = ACTIONS(161),
    [anon_sym_124] = ACTIONS(159),
    [anon_sym_125] = ACTIONS(161),
    [anon_sym_126] = ACTIONS(161),
    [anon_sym_127] = ACTIONS(161),
    [anon_sym_128] = ACTIONS(159),
    [anon_sym_129] = ACTIONS(159),
    [anon_sym_130] = ACTIONS(159),
    [anon_sym_131] = ACTIONS(159),
    [anon_sym_132] = ACTIONS(159),
    [anon_sym_133] = ACTIONS(159),
    [anon_sym_134] = ACTIONS(159),
    [anon_sym_135] = ACTIONS(159),
    [anon_sym_136] = ACTIONS(159),
    [anon_sym_137] = ACTIONS(161),
    [anon_sym_138] = ACTIONS(159),
    [anon_sym_139] = ACTIONS(159),
    [anon_sym_140] = ACTIONS(159),
    [anon_sym_141] = ACTIONS(159),
    [anon_sym_142] = ACTIONS(159),
    [anon_sym_143] = ACTIONS(159),
    [anon_sym_144] = ACTIONS(159),
    [anon_sym_145] = ACTIONS(159),
    [anon_sym_146] = ACTIONS(159),
    [anon_sym_147] = ACTIONS(159),
    [anon_sym_148] = ACTIONS(159),
    [anon_sym_149] = ACTIONS(159),
    [anon_sym_150] = ACTIONS(159),
    [anon_sym_151] = ACTIONS(161),
    [anon_sym_152] = ACTIONS(161),
    [anon_sym_153] = ACTIONS(161),
    [anon_sym_int] = ACTIONS(161),
    [anon_sym_bool] = ACTIONS(161),
    [anon_sym_string] = ACTIONS(161),
    [anon_sym_float] = ACTIONS(161),
    [anon_sym_char] = ACTIONS(161),
    [anon_sym_double] = ACTIONS(161),
    [anon_sym_byte] = ACTIONS(161),
    [anon_sym_decimal] = ACTIONS(161),
    [anon_sym_sbyte] = ACTIONS(161),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_uint] = ACTIONS(161),
    [anon_sym_ushort] = ACTIONS(161),
    [anon_sym_object] = ACTIONS(161),
    [anon_sym_ulong] = ACTIONS(161),
    [anon_sym_154] = ACTIONS(161),
    [anon_sym_155] = ACTIONS(161),
    [anon_sym_156] = ACTIONS(161),
    [anon_sym_157] = ACTIONS(161),
    [anon_sym_158] = ACTIONS(161),
    [anon_sym_159] = ACTIONS(159),
    [anon_sym_160] = ACTIONS(159),
    [anon_sym_161] = ACTIONS(161),
    [anon_sym_162] = ACTIONS(159),
    [anon_sym_163] = ACTIONS(161),
    [anon_sym_164] = ACTIONS(161),
    [anon_sym_165] = ACTIONS(161),
    [anon_sym_166] = ACTIONS(161),
    [anon_sym_167] = ACTIONS(161),
    [anon_sym_168] = ACTIONS(161),
    [anon_sym_169] = ACTIONS(161),
    [anon_sym_170] = ACTIONS(161),
    [anon_sym_171] = ACTIONS(159),
    [anon_sym_172] = ACTIONS(159),
    [anon_sym_173] = ACTIONS(159),
    [anon_sym_174] = ACTIONS(159),
    [anon_sym_175] = ACTIONS(159),
    [anon_sym_176] = ACTIONS(159),
    [anon_sym_177] = ACTIONS(159),
    [anon_sym_178] = ACTIONS(159),
    [anon_sym_179] = ACTIONS(159),
    [anon_sym_180] = ACTIONS(159),
    [anon_sym_181] = ACTIONS(159),
    [anon_sym_182] = ACTIONS(159),
    [anon_sym_183] = ACTIONS(159),
    [anon_sym_184] = ACTIONS(159),
    [anon_sym_185] = ACTIONS(159),
    [anon_sym_186] = ACTIONS(161),
    [anon_sym_187] = ACTIONS(159),
    [anon_sym_188] = ACTIONS(159),
    [anon_sym_189] = ACTIONS(159),
    [anon_sym_190] = ACTIONS(161),
    [anon_sym_191] = ACTIONS(161),
    [anon_sym_192] = ACTIONS(161),
    [anon_sym_193] = ACTIONS(161),
    [anon_sym_194] = ACTIONS(161),
    [anon_sym_195] = ACTIONS(161),
    [anon_sym_196] = ACTIONS(161),
    [anon_sym_197] = ACTIONS(161),
    [anon_sym_198] = ACTIONS(161),
    [anon_sym_199] = ACTIONS(159),
    [anon_sym_200] = ACTIONS(159),
    [anon_sym_201] = ACTIONS(159),
    [anon_sym_202] = ACTIONS(159),
    [anon_sym_203] = ACTIONS(159),
    [anon_sym_204] = ACTIONS(159),
    [anon_sym_205] = ACTIONS(159),
    [anon_sym_206] = ACTIONS(159),
    [anon_sym_207] = ACTIONS(159),
    [anon_sym_208] = ACTIONS(159),
    [anon_sym_209] = ACTIONS(159),
    [anon_sym_210] = ACTIONS(159),
    [anon_sym_211] = ACTIONS(161),
    [anon_sym_212] = ACTIONS(161),
    [anon_sym_213] = ACTIONS(159),
    [anon_sym_214] = ACTIONS(159),
    [anon_sym_215] = ACTIONS(159),
    [sym_type] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [aux_sym_z_token1] = ACTIONS(161),
    [aux_sym_z_token2] = ACTIONS(161),
    [aux_sym_z_token3] = ACTIONS(159),
    [sym_str] = ACTIONS(159),
    [sym_note] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_216] = ACTIONS(159),
    [anon_sym_217] = ACTIONS(159),
    [anon_sym_218] = ACTIONS(161),
    [anon_sym_219] = ACTIONS(161),
    [anon_sym_220] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [sym_int] = ACTIONS(161),
    [anon_sym_null] = ACTIONS(161),
    [anon_sym_221] = ACTIONS(159),
    [sym_real] = ACTIONS(161),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_id] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_internal] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_const] = ACTIONS(165),
    [anon_sym_extern] = ACTIONS(165),
    [anon_sym_override] = ACTIONS(165),
    [anon_sym_partial] = ACTIONS(165),
    [anon_sym_readonly] = ACTIONS(165),
    [anon_sym_sealed] = ACTIONS(165),
    [anon_sym_unsafe] = ACTIONS(165),
    [anon_sym_virtual] = ACTIONS(165),
    [anon_sym_volatile] = ACTIONS(165),
    [anon_sym_explicit] = ACTIONS(165),
    [anon_sym_implicit] = ACTIONS(165),
    [anon_sym_] = ACTIONS(163),
    [anon_sym_2] = ACTIONS(163),
    [anon_sym_3] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(165),
    [anon_sym_5] = ACTIONS(163),
    [anon_sym_6] = ACTIONS(163),
    [anon_sym_7] = ACTIONS(163),
    [anon_sym_8] = ACTIONS(165),
    [anon_sym_9] = ACTIONS(165),
    [anon_sym_10] = ACTIONS(163),
    [anon_sym_11] = ACTIONS(163),
    [anon_sym_12] = ACTIONS(163),
    [anon_sym_13] = ACTIONS(165),
    [anon_sym_14] = ACTIONS(165),
    [anon_sym_15] = ACTIONS(165),
    [anon_sym_16] = ACTIONS(163),
    [anon_sym_17] = ACTIONS(165),
    [anon_sym_18] = ACTIONS(163),
    [anon_sym_19] = ACTIONS(165),
    [anon_sym_20] = ACTIONS(163),
    [anon_sym_21] = ACTIONS(165),
    [anon_sym_22] = ACTIONS(163),
    [anon_sym_23] = ACTIONS(163),
    [anon_sym_24] = ACTIONS(165),
    [anon_sym_25] = ACTIONS(163),
    [anon_sym_26] = ACTIONS(163),
    [anon_sym_27] = ACTIONS(165),
    [anon_sym_28] = ACTIONS(165),
    [anon_sym_29] = ACTIONS(165),
    [anon_sym_30] = ACTIONS(165),
    [anon_sym_31] = ACTIONS(163),
    [anon_sym_32] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [anon_sym_struct] = ACTIONS(165),
    [anon_sym_enum] = ACTIONS(165),
    [anon_sym_var] = ACTIONS(165),
    [anon_sym_delegate] = ACTIONS(165),
    [anon_sym_33] = ACTIONS(163),
    [anon_sym_34] = ACTIONS(163),
    [anon_sym_35] = ACTIONS(163),
    [anon_sym_36] = ACTIONS(163),
    [anon_sym_37] = ACTIONS(163),
    [anon_sym_38] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_39] = ACTIONS(163),
    [anon_sym_40] = ACTIONS(163),
    [anon_sym_41] = ACTIONS(163),
    [anon_sym_42] = ACTIONS(163),
    [anon_sym_43] = ACTIONS(163),
    [anon_sym_44] = ACTIONS(163),
    [anon_sym_45] = ACTIONS(163),
    [anon_sym_46] = ACTIONS(163),
    [anon_sym_47] = ACTIONS(163),
    [anon_sym_48] = ACTIONS(163),
    [anon_sym_49] = ACTIONS(163),
    [anon_sym_50] = ACTIONS(165),
    [anon_sym_51] = ACTIONS(163),
    [anon_sym_52] = ACTIONS(163),
    [anon_sym_53] = ACTIONS(163),
    [anon_sym_54] = ACTIONS(163),
    [anon_sym_55] = ACTIONS(165),
    [anon_sym_56] = ACTIONS(165),
    [anon_sym_57] = ACTIONS(163),
    [anon_sym_58] = ACTIONS(163),
    [anon_sym_59] = ACTIONS(165),
    [anon_sym_60] = ACTIONS(163),
    [anon_sym_61] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_62] = ACTIONS(163),
    [anon_sym_async] = ACTIONS(165),
    [anon_sym_await] = ACTIONS(165),
    [anon_sym_by] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_else] = ACTIONS(165),
    [anon_sym_foreach] = ACTIONS(165),
    [anon_sym_in] = ACTIONS(165),
    [anon_sym_for] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(165),
    [anon_sym_while] = ACTIONS(165),
    [anon_sym_switch] = ACTIONS(165),
    [anon_sym_case] = ACTIONS(165),
    [anon_sym_break] = ACTIONS(165),
    [anon_sym_yield] = ACTIONS(165),
    [anon_sym_try] = ACTIONS(165),
    [anon_sym_catch] = ACTIONS(165),
    [anon_sym_finally] = ACTIONS(165),
    [anon_sym_continue] = ACTIONS(165),
    [anon_sym_from] = ACTIONS(165),
    [anon_sym_where] = ACTIONS(165),
    [anon_sym_select] = ACTIONS(165),
    [anon_sym_throw] = ACTIONS(165),
    [anon_sym_join] = ACTIONS(165),
    [anon_sym_goto] = ACTIONS(165),
    [anon_sym_lock] = ACTIONS(165),
    [anon_sym_orderby] = ACTIONS(165),
    [anon_sym_63] = ACTIONS(163),
    [anon_sym_64] = ACTIONS(163),
    [anon_sym_65] = ACTIONS(163),
    [anon_sym_66] = ACTIONS(163),
    [anon_sym_67] = ACTIONS(165),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(163),
    [anon_sym_68] = ACTIONS(163),
    [anon_sym_69] = ACTIONS(163),
    [anon_sym_70] = ACTIONS(163),
    [anon_sym_71] = ACTIONS(163),
    [anon_sym_72] = ACTIONS(163),
    [anon_sym_73] = ACTIONS(163),
    [anon_sym_74] = ACTIONS(163),
    [anon_sym_75] = ACTIONS(163),
    [anon_sym_76] = ACTIONS(163),
    [anon_sym_77] = ACTIONS(163),
    [anon_sym_78] = ACTIONS(163),
    [anon_sym_79] = ACTIONS(165),
    [anon_sym_80] = ACTIONS(163),
    [anon_sym_81] = ACTIONS(163),
    [anon_sym_82] = ACTIONS(163),
    [anon_sym_83] = ACTIONS(163),
    [anon_sym_84] = ACTIONS(163),
    [anon_sym_85] = ACTIONS(163),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(163),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(163),
    [anon_sym_86] = ACTIONS(163),
    [anon_sym_87] = ACTIONS(163),
    [anon_sym_88] = ACTIONS(163),
    [anon_sym_89] = ACTIONS(163),
    [anon_sym_90] = ACTIONS(163),
    [anon_sym_91] = ACTIONS(165),
    [anon_sym_92] = ACTIONS(163),
    [anon_sym_93] = ACTIONS(163),
    [anon_sym_94] = ACTIONS(165),
    [anon_sym_95] = ACTIONS(163),
    [anon_sym_96] = ACTIONS(163),
    [anon_sym_97] = ACTIONS(163),
    [anon_sym_98] = ACTIONS(163),
    [anon_sym_99] = ACTIONS(163),
    [anon_sym_100] = ACTIONS(165),
    [anon_sym_101] = ACTIONS(165),
    [anon_sym_102] = ACTIONS(163),
    [anon_sym_103] = ACTIONS(163),
    [anon_sym_add] = ACTIONS(165),
    [anon_sym_checked] = ACTIONS(165),
    [anon_sym_into] = ACTIONS(165),
    [anon_sym_nameof] = ACTIONS(165),
    [anon_sym_new] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(165),
    [anon_sym_value] = ACTIONS(165),
    [anon_sym_global] = ACTIONS(165),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_operator] = ACTIONS(165),
    [anon_sym_params] = ACTIONS(165),
    [anon_sym_this] = ACTIONS(165),
    [anon_sym_typeof] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_equals] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_out] = ACTIONS(165),
    [anon_sym_ref] = ACTIONS(165),
    [anon_sym_sizeof] = ACTIONS(165),
    [anon_sym_descending] = ACTIONS(165),
    [anon_sym_ascending] = ACTIONS(165),
    [anon_sym_dynamic] = ACTIONS(165),
    [anon_sym_fixed] = ACTIONS(165),
    [anon_sym_group] = ACTIONS(165),
    [anon_sym_is] = ACTIONS(165),
    [anon_sym_get] = ACTIONS(165),
    [anon_sym_set] = ACTIONS(165),
    [anon_sym_on] = ACTIONS(165),
    [anon_sym_remove] = ACTIONS(165),
    [anon_sym_stackalloc] = ACTIONS(165),
    [anon_sym_unchecked] = ACTIONS(165),
    [anon_sym_as] = ACTIONS(165),
    [anon_sym_base] = ACTIONS(165),
    [anon_sym_104] = ACTIONS(163),
    [anon_sym_105] = ACTIONS(163),
    [anon_sym_106] = ACTIONS(163),
    [anon_sym_107] = ACTIONS(165),
    [anon_sym_108] = ACTIONS(163),
    [anon_sym_109] = ACTIONS(163),
    [anon_sym_110] = ACTIONS(163),
    [anon_sym_111] = ACTIONS(165),
    [anon_sym_112] = ACTIONS(163),
    [anon_sym_113] = ACTIONS(163),
    [anon_sym_114] = ACTIONS(163),
    [anon_sym_115] = ACTIONS(163),
    [anon_sym_116] = ACTIONS(163),
    [anon_sym_117] = ACTIONS(163),
    [anon_sym_118] = ACTIONS(163),
    [anon_sym_119] = ACTIONS(163),
    [anon_sym_120] = ACTIONS(165),
    [anon_sym_121] = ACTIONS(163),
    [anon_sym_122] = ACTIONS(165),
    [anon_sym_123] = ACTIONS(165),
    [anon_sym_124] = ACTIONS(163),
    [anon_sym_125] = ACTIONS(165),
    [anon_sym_126] = ACTIONS(165),
    [anon_sym_127] = ACTIONS(165),
    [anon_sym_128] = ACTIONS(163),
    [anon_sym_129] = ACTIONS(163),
    [anon_sym_130] = ACTIONS(163),
    [anon_sym_131] = ACTIONS(163),
    [anon_sym_132] = ACTIONS(163),
    [anon_sym_133] = ACTIONS(163),
    [anon_sym_134] = ACTIONS(163),
    [anon_sym_135] = ACTIONS(163),
    [anon_sym_136] = ACTIONS(163),
    [anon_sym_137] = ACTIONS(165),
    [anon_sym_138] = ACTIONS(163),
    [anon_sym_139] = ACTIONS(163),
    [anon_sym_140] = ACTIONS(163),
    [anon_sym_141] = ACTIONS(163),
    [anon_sym_142] = ACTIONS(163),
    [anon_sym_143] = ACTIONS(163),
    [anon_sym_144] = ACTIONS(163),
    [anon_sym_145] = ACTIONS(163),
    [anon_sym_146] = ACTIONS(163),
    [anon_sym_147] = ACTIONS(163),
    [anon_sym_148] = ACTIONS(163),
    [anon_sym_149] = ACTIONS(163),
    [anon_sym_150] = ACTIONS(163),
    [anon_sym_151] = ACTIONS(165),
    [anon_sym_152] = ACTIONS(165),
    [anon_sym_153] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_bool] = ACTIONS(165),
    [anon_sym_string] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_byte] = ACTIONS(165),
    [anon_sym_decimal] = ACTIONS(165),
    [anon_sym_sbyte] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_uint] = ACTIONS(165),
    [anon_sym_ushort] = ACTIONS(165),
    [anon_sym_object] = ACTIONS(165),
    [anon_sym_ulong] = ACTIONS(165),
    [anon_sym_154] = ACTIONS(165),
    [anon_sym_155] = ACTIONS(165),
    [anon_sym_156] = ACTIONS(165),
    [anon_sym_157] = ACTIONS(165),
    [anon_sym_158] = ACTIONS(165),
    [anon_sym_159] = ACTIONS(163),
    [anon_sym_160] = ACTIONS(163),
    [anon_sym_161] = ACTIONS(165),
    [anon_sym_162] = ACTIONS(163),
    [anon_sym_163] = ACTIONS(165),
    [anon_sym_164] = ACTIONS(165),
    [anon_sym_165] = ACTIONS(165),
    [anon_sym_166] = ACTIONS(165),
    [anon_sym_167] = ACTIONS(165),
    [anon_sym_168] = ACTIONS(165),
    [anon_sym_169] = ACTIONS(165),
    [anon_sym_170] = ACTIONS(165),
    [anon_sym_171] = ACTIONS(163),
    [anon_sym_172] = ACTIONS(163),
    [anon_sym_173] = ACTIONS(163),
    [anon_sym_174] = ACTIONS(163),
    [anon_sym_175] = ACTIONS(163),
    [anon_sym_176] = ACTIONS(163),
    [anon_sym_177] = ACTIONS(163),
    [anon_sym_178] = ACTIONS(163),
    [anon_sym_179] = ACTIONS(163),
    [anon_sym_180] = ACTIONS(163),
    [anon_sym_181] = ACTIONS(163),
    [anon_sym_182] = ACTIONS(163),
    [anon_sym_183] = ACTIONS(163),
    [anon_sym_184] = ACTIONS(163),
    [anon_sym_185] = ACTIONS(163),
    [anon_sym_186] = ACTIONS(165),
    [anon_sym_187] = ACTIONS(163),
    [anon_sym_188] = ACTIONS(163),
    [anon_sym_189] = ACTIONS(163),
    [anon_sym_190] = ACTIONS(165),
    [anon_sym_191] = ACTIONS(165),
    [anon_sym_192] = ACTIONS(165),
    [anon_sym_193] = ACTIONS(165),
    [anon_sym_194] = ACTIONS(165),
    [anon_sym_195] = ACTIONS(165),
    [anon_sym_196] = ACTIONS(165),
    [anon_sym_197] = ACTIONS(165),
    [anon_sym_198] = ACTIONS(165),
    [anon_sym_199] = ACTIONS(163),
    [anon_sym_200] = ACTIONS(163),
    [anon_sym_201] = ACTIONS(163),
    [anon_sym_202] = ACTIONS(163),
    [anon_sym_203] = ACTIONS(163),
    [anon_sym_204] = ACTIONS(163),
    [anon_sym_205] = ACTIONS(163),
    [anon_sym_206] = ACTIONS(163),
    [anon_sym_207] = ACTIONS(163),
    [anon_sym_208] = ACTIONS(163),
    [anon_sym_209] = ACTIONS(163),
    [anon_sym_210] = ACTIONS(163),
    [anon_sym_211] = ACTIONS(165),
    [anon_sym_212] = ACTIONS(165),
    [anon_sym_213] = ACTIONS(163),
    [anon_sym_214] = ACTIONS(163),
    [anon_sym_215] = ACTIONS(163),
    [sym_type] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [aux_sym_z_token1] = ACTIONS(165),
    [aux_sym_z_token2] = ACTIONS(165),
    [aux_sym_z_token3] = ACTIONS(163),
    [sym_str] = ACTIONS(163),
    [sym_note] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_216] = ACTIONS(163),
    [anon_sym_217] = ACTIONS(163),
    [anon_sym_218] = ACTIONS(165),
    [anon_sym_219] = ACTIONS(165),
    [anon_sym_220] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_int] = ACTIONS(165),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_221] = ACTIONS(163),
    [sym_real] = ACTIONS(165),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_id] = ACTIONS(169),
    [anon_sym_public] = ACTIONS(169),
    [anon_sym_internal] = ACTIONS(169),
    [anon_sym_protected] = ACTIONS(169),
    [anon_sym_private] = ACTIONS(169),
    [anon_sym_static] = ACTIONS(169),
    [anon_sym_abstract] = ACTIONS(169),
    [anon_sym_const] = ACTIONS(169),
    [anon_sym_extern] = ACTIONS(169),
    [anon_sym_override] = ACTIONS(169),
    [anon_sym_partial] = ACTIONS(169),
    [anon_sym_readonly] = ACTIONS(169),
    [anon_sym_sealed] = ACTIONS(169),
    [anon_sym_unsafe] = ACTIONS(169),
    [anon_sym_virtual] = ACTIONS(169),
    [anon_sym_volatile] = ACTIONS(169),
    [anon_sym_explicit] = ACTIONS(169),
    [anon_sym_implicit] = ACTIONS(169),
    [anon_sym_] = ACTIONS(167),
    [anon_sym_2] = ACTIONS(167),
    [anon_sym_3] = ACTIONS(167),
    [anon_sym_4] = ACTIONS(169),
    [anon_sym_5] = ACTIONS(167),
    [anon_sym_6] = ACTIONS(167),
    [anon_sym_7] = ACTIONS(167),
    [anon_sym_8] = ACTIONS(169),
    [anon_sym_9] = ACTIONS(169),
    [anon_sym_10] = ACTIONS(167),
    [anon_sym_11] = ACTIONS(167),
    [anon_sym_12] = ACTIONS(167),
    [anon_sym_13] = ACTIONS(169),
    [anon_sym_14] = ACTIONS(169),
    [anon_sym_15] = ACTIONS(169),
    [anon_sym_16] = ACTIONS(167),
    [anon_sym_17] = ACTIONS(169),
    [anon_sym_18] = ACTIONS(167),
    [anon_sym_19] = ACTIONS(169),
    [anon_sym_20] = ACTIONS(167),
    [anon_sym_21] = ACTIONS(169),
    [anon_sym_22] = ACTIONS(167),
    [anon_sym_23] = ACTIONS(167),
    [anon_sym_24] = ACTIONS(169),
    [anon_sym_25] = ACTIONS(167),
    [anon_sym_26] = ACTIONS(167),
    [anon_sym_27] = ACTIONS(169),
    [anon_sym_28] = ACTIONS(169),
    [anon_sym_29] = ACTIONS(169),
    [anon_sym_30] = ACTIONS(169),
    [anon_sym_31] = ACTIONS(167),
    [anon_sym_32] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(169),
    [anon_sym_interface] = ACTIONS(169),
    [anon_sym_struct] = ACTIONS(169),
    [anon_sym_enum] = ACTIONS(169),
    [anon_sym_var] = ACTIONS(169),
    [anon_sym_delegate] = ACTIONS(169),
    [anon_sym_33] = ACTIONS(167),
    [anon_sym_34] = ACTIONS(167),
    [anon_sym_35] = ACTIONS(167),
    [anon_sym_36] = ACTIONS(167),
    [anon_sym_37] = ACTIONS(167),
    [anon_sym_38] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_39] = ACTIONS(167),
    [anon_sym_40] = ACTIONS(167),
    [anon_sym_41] = ACTIONS(167),
    [anon_sym_42] = ACTIONS(167),
    [anon_sym_43] = ACTIONS(167),
    [anon_sym_44] = ACTIONS(167),
    [anon_sym_45] = ACTIONS(167),
    [anon_sym_46] = ACTIONS(167),
    [anon_sym_47] = ACTIONS(167),
    [anon_sym_48] = ACTIONS(167),
    [anon_sym_49] = ACTIONS(167),
    [anon_sym_50] = ACTIONS(169),
    [anon_sym_51] = ACTIONS(167),
    [anon_sym_52] = ACTIONS(167),
    [anon_sym_53] = ACTIONS(167),
    [anon_sym_54] = ACTIONS(167),
    [anon_sym_55] = ACTIONS(169),
    [anon_sym_56] = ACTIONS(169),
    [anon_sym_57] = ACTIONS(167),
    [anon_sym_58] = ACTIONS(167),
    [anon_sym_59] = ACTIONS(169),
    [anon_sym_60] = ACTIONS(167),
    [anon_sym_61] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(169),
    [anon_sym_62] = ACTIONS(167),
    [anon_sym_async] = ACTIONS(169),
    [anon_sym_await] = ACTIONS(169),
    [anon_sym_by] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_else] = ACTIONS(169),
    [anon_sym_foreach] = ACTIONS(169),
    [anon_sym_in] = ACTIONS(169),
    [anon_sym_for] = ACTIONS(169),
    [anon_sym_do] = ACTIONS(169),
    [anon_sym_while] = ACTIONS(169),
    [anon_sym_switch] = ACTIONS(169),
    [anon_sym_case] = ACTIONS(169),
    [anon_sym_break] = ACTIONS(169),
    [anon_sym_yield] = ACTIONS(169),
    [anon_sym_try] = ACTIONS(169),
    [anon_sym_catch] = ACTIONS(169),
    [anon_sym_finally] = ACTIONS(169),
    [anon_sym_continue] = ACTIONS(169),
    [anon_sym_from] = ACTIONS(169),
    [anon_sym_where] = ACTIONS(169),
    [anon_sym_select] = ACTIONS(169),
    [anon_sym_throw] = ACTIONS(169),
    [anon_sym_join] = ACTIONS(169),
    [anon_sym_goto] = ACTIONS(169),
    [anon_sym_lock] = ACTIONS(169),
    [anon_sym_orderby] = ACTIONS(169),
    [anon_sym_63] = ACTIONS(167),
    [anon_sym_64] = ACTIONS(167),
    [anon_sym_65] = ACTIONS(167),
    [anon_sym_66] = ACTIONS(167),
    [anon_sym_67] = ACTIONS(169),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(167),
    [anon_sym_68] = ACTIONS(167),
    [anon_sym_69] = ACTIONS(167),
    [anon_sym_70] = ACTIONS(167),
    [anon_sym_71] = ACTIONS(167),
    [anon_sym_72] = ACTIONS(167),
    [anon_sym_73] = ACTIONS(167),
    [anon_sym_74] = ACTIONS(167),
    [anon_sym_75] = ACTIONS(167),
    [anon_sym_76] = ACTIONS(167),
    [anon_sym_77] = ACTIONS(167),
    [anon_sym_78] = ACTIONS(167),
    [anon_sym_79] = ACTIONS(169),
    [anon_sym_80] = ACTIONS(167),
    [anon_sym_81] = ACTIONS(167),
    [anon_sym_82] = ACTIONS(167),
    [anon_sym_83] = ACTIONS(167),
    [anon_sym_84] = ACTIONS(167),
    [anon_sym_85] = ACTIONS(167),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(167),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(167),
    [anon_sym_86] = ACTIONS(167),
    [anon_sym_87] = ACTIONS(167),
    [anon_sym_88] = ACTIONS(167),
    [anon_sym_89] = ACTIONS(167),
    [anon_sym_90] = ACTIONS(167),
    [anon_sym_91] = ACTIONS(169),
    [anon_sym_92] = ACTIONS(167),
    [anon_sym_93] = ACTIONS(167),
    [anon_sym_94] = ACTIONS(169),
    [anon_sym_95] = ACTIONS(167),
    [anon_sym_96] = ACTIONS(167),
    [anon_sym_97] = ACTIONS(167),
    [anon_sym_98] = ACTIONS(167),
    [anon_sym_99] = ACTIONS(167),
    [anon_sym_100] = ACTIONS(169),
    [anon_sym_101] = ACTIONS(169),
    [anon_sym_102] = ACTIONS(167),
    [anon_sym_103] = ACTIONS(167),
    [anon_sym_add] = ACTIONS(169),
    [anon_sym_checked] = ACTIONS(169),
    [anon_sym_into] = ACTIONS(169),
    [anon_sym_nameof] = ACTIONS(169),
    [anon_sym_new] = ACTIONS(169),
    [anon_sym_using] = ACTIONS(169),
    [anon_sym_value] = ACTIONS(169),
    [anon_sym_global] = ACTIONS(169),
    [anon_sym_let] = ACTIONS(169),
    [anon_sym_operator] = ACTIONS(169),
    [anon_sym_params] = ACTIONS(169),
    [anon_sym_this] = ACTIONS(169),
    [anon_sym_typeof] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(169),
    [anon_sym_equals] = ACTIONS(169),
    [anon_sym_long] = ACTIONS(169),
    [anon_sym_out] = ACTIONS(169),
    [anon_sym_ref] = ACTIONS(169),
    [anon_sym_sizeof] = ACTIONS(169),
    [anon_sym_descending] = ACTIONS(169),
    [anon_sym_ascending] = ACTIONS(169),
    [anon_sym_dynamic] = ACTIONS(169),
    [anon_sym_fixed] = ACTIONS(169),
    [anon_sym_group] = ACTIONS(169),
    [anon_sym_is] = ACTIONS(169),
    [anon_sym_get] = ACTIONS(169),
    [anon_sym_set] = ACTIONS(169),
    [anon_sym_on] = ACTIONS(169),
    [anon_sym_remove] = ACTIONS(169),
    [anon_sym_stackalloc] = ACTIONS(169),
    [anon_sym_unchecked] = ACTIONS(169),
    [anon_sym_as] = ACTIONS(169),
    [anon_sym_base] = ACTIONS(169),
    [anon_sym_104] = ACTIONS(167),
    [anon_sym_105] = ACTIONS(167),
    [anon_sym_106] = ACTIONS(167),
    [anon_sym_107] = ACTIONS(169),
    [anon_sym_108] = ACTIONS(167),
    [anon_sym_109] = ACTIONS(167),
    [anon_sym_110] = ACTIONS(167),
    [anon_sym_111] = ACTIONS(169),
    [anon_sym_112] = ACTIONS(167),
    [anon_sym_113] = ACTIONS(167),
    [anon_sym_114] = ACTIONS(167),
    [anon_sym_115] = ACTIONS(167),
    [anon_sym_116] = ACTIONS(167),
    [anon_sym_117] = ACTIONS(167),
    [anon_sym_118] = ACTIONS(167),
    [anon_sym_119] = ACTIONS(167),
    [anon_sym_120] = ACTIONS(169),
    [anon_sym_121] = ACTIONS(167),
    [anon_sym_122] = ACTIONS(169),
    [anon_sym_123] = ACTIONS(169),
    [anon_sym_124] = ACTIONS(167),
    [anon_sym_125] = ACTIONS(169),
    [anon_sym_126] = ACTIONS(169),
    [anon_sym_127] = ACTIONS(169),
    [anon_sym_128] = ACTIONS(167),
    [anon_sym_129] = ACTIONS(167),
    [anon_sym_130] = ACTIONS(167),
    [anon_sym_131] = ACTIONS(167),
    [anon_sym_132] = ACTIONS(167),
    [anon_sym_133] = ACTIONS(167),
    [anon_sym_134] = ACTIONS(167),
    [anon_sym_135] = ACTIONS(167),
    [anon_sym_136] = ACTIONS(167),
    [anon_sym_137] = ACTIONS(169),
    [anon_sym_138] = ACTIONS(167),
    [anon_sym_139] = ACTIONS(167),
    [anon_sym_140] = ACTIONS(167),
    [anon_sym_141] = ACTIONS(167),
    [anon_sym_142] = ACTIONS(167),
    [anon_sym_143] = ACTIONS(167),
    [anon_sym_144] = ACTIONS(167),
    [anon_sym_145] = ACTIONS(167),
    [anon_sym_146] = ACTIONS(167),
    [anon_sym_147] = ACTIONS(167),
    [anon_sym_148] = ACTIONS(167),
    [anon_sym_149] = ACTIONS(167),
    [anon_sym_150] = ACTIONS(167),
    [anon_sym_151] = ACTIONS(169),
    [anon_sym_152] = ACTIONS(169),
    [anon_sym_153] = ACTIONS(169),
    [anon_sym_int] = ACTIONS(169),
    [anon_sym_bool] = ACTIONS(169),
    [anon_sym_string] = ACTIONS(169),
    [anon_sym_float] = ACTIONS(169),
    [anon_sym_char] = ACTIONS(169),
    [anon_sym_double] = ACTIONS(169),
    [anon_sym_byte] = ACTIONS(169),
    [anon_sym_decimal] = ACTIONS(169),
    [anon_sym_sbyte] = ACTIONS(169),
    [anon_sym_short] = ACTIONS(169),
    [anon_sym_uint] = ACTIONS(169),
    [anon_sym_ushort] = ACTIONS(169),
    [anon_sym_object] = ACTIONS(169),
    [anon_sym_ulong] = ACTIONS(169),
    [anon_sym_154] = ACTIONS(169),
    [anon_sym_155] = ACTIONS(169),
    [anon_sym_156] = ACTIONS(169),
    [anon_sym_157] = ACTIONS(169),
    [anon_sym_158] = ACTIONS(169),
    [anon_sym_159] = ACTIONS(167),
    [anon_sym_160] = ACTIONS(167),
    [anon_sym_161] = ACTIONS(169),
    [anon_sym_162] = ACTIONS(167),
    [anon_sym_163] = ACTIONS(169),
    [anon_sym_164] = ACTIONS(169),
    [anon_sym_165] = ACTIONS(169),
    [anon_sym_166] = ACTIONS(169),
    [anon_sym_167] = ACTIONS(169),
    [anon_sym_168] = ACTIONS(169),
    [anon_sym_169] = ACTIONS(169),
    [anon_sym_170] = ACTIONS(169),
    [anon_sym_171] = ACTIONS(167),
    [anon_sym_172] = ACTIONS(167),
    [anon_sym_173] = ACTIONS(167),
    [anon_sym_174] = ACTIONS(167),
    [anon_sym_175] = ACTIONS(167),
    [anon_sym_176] = ACTIONS(167),
    [anon_sym_177] = ACTIONS(167),
    [anon_sym_178] = ACTIONS(167),
    [anon_sym_179] = ACTIONS(167),
    [anon_sym_180] = ACTIONS(167),
    [anon_sym_181] = ACTIONS(167),
    [anon_sym_182] = ACTIONS(167),
    [anon_sym_183] = ACTIONS(167),
    [anon_sym_184] = ACTIONS(167),
    [anon_sym_185] = ACTIONS(167),
    [anon_sym_186] = ACTIONS(169),
    [anon_sym_187] = ACTIONS(167),
    [anon_sym_188] = ACTIONS(167),
    [anon_sym_189] = ACTIONS(167),
    [anon_sym_190] = ACTIONS(169),
    [anon_sym_191] = ACTIONS(169),
    [anon_sym_192] = ACTIONS(169),
    [anon_sym_193] = ACTIONS(169),
    [anon_sym_194] = ACTIONS(169),
    [anon_sym_195] = ACTIONS(169),
    [anon_sym_196] = ACTIONS(169),
    [anon_sym_197] = ACTIONS(169),
    [anon_sym_198] = ACTIONS(169),
    [anon_sym_199] = ACTIONS(167),
    [anon_sym_200] = ACTIONS(167),
    [anon_sym_201] = ACTIONS(167),
    [anon_sym_202] = ACTIONS(167),
    [anon_sym_203] = ACTIONS(167),
    [anon_sym_204] = ACTIONS(167),
    [anon_sym_205] = ACTIONS(167),
    [anon_sym_206] = ACTIONS(167),
    [anon_sym_207] = ACTIONS(167),
    [anon_sym_208] = ACTIONS(167),
    [anon_sym_209] = ACTIONS(167),
    [anon_sym_210] = ACTIONS(167),
    [anon_sym_211] = ACTIONS(169),
    [anon_sym_212] = ACTIONS(169),
    [anon_sym_213] = ACTIONS(167),
    [anon_sym_214] = ACTIONS(167),
    [anon_sym_215] = ACTIONS(167),
    [sym_type] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [aux_sym_z_token1] = ACTIONS(169),
    [aux_sym_z_token2] = ACTIONS(169),
    [aux_sym_z_token3] = ACTIONS(167),
    [sym_str] = ACTIONS(167),
    [sym_note] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_216] = ACTIONS(167),
    [anon_sym_217] = ACTIONS(167),
    [anon_sym_218] = ACTIONS(169),
    [anon_sym_219] = ACTIONS(169),
    [anon_sym_220] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [sym_int] = ACTIONS(169),
    [anon_sym_null] = ACTIONS(169),
    [anon_sym_221] = ACTIONS(167),
    [sym_real] = ACTIONS(169),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_id] = ACTIONS(173),
    [anon_sym_public] = ACTIONS(173),
    [anon_sym_internal] = ACTIONS(173),
    [anon_sym_protected] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(173),
    [anon_sym_abstract] = ACTIONS(173),
    [anon_sym_const] = ACTIONS(173),
    [anon_sym_extern] = ACTIONS(173),
    [anon_sym_override] = ACTIONS(173),
    [anon_sym_partial] = ACTIONS(173),
    [anon_sym_readonly] = ACTIONS(173),
    [anon_sym_sealed] = ACTIONS(173),
    [anon_sym_unsafe] = ACTIONS(173),
    [anon_sym_virtual] = ACTIONS(173),
    [anon_sym_volatile] = ACTIONS(173),
    [anon_sym_explicit] = ACTIONS(173),
    [anon_sym_implicit] = ACTIONS(173),
    [anon_sym_] = ACTIONS(171),
    [anon_sym_2] = ACTIONS(171),
    [anon_sym_3] = ACTIONS(171),
    [anon_sym_4] = ACTIONS(173),
    [anon_sym_5] = ACTIONS(171),
    [anon_sym_6] = ACTIONS(171),
    [anon_sym_7] = ACTIONS(171),
    [anon_sym_8] = ACTIONS(173),
    [anon_sym_9] = ACTIONS(173),
    [anon_sym_10] = ACTIONS(171),
    [anon_sym_11] = ACTIONS(171),
    [anon_sym_12] = ACTIONS(171),
    [anon_sym_13] = ACTIONS(173),
    [anon_sym_14] = ACTIONS(173),
    [anon_sym_15] = ACTIONS(173),
    [anon_sym_16] = ACTIONS(171),
    [anon_sym_17] = ACTIONS(173),
    [anon_sym_18] = ACTIONS(171),
    [anon_sym_19] = ACTIONS(173),
    [anon_sym_20] = ACTIONS(171),
    [anon_sym_21] = ACTIONS(173),
    [anon_sym_22] = ACTIONS(171),
    [anon_sym_23] = ACTIONS(171),
    [anon_sym_24] = ACTIONS(173),
    [anon_sym_25] = ACTIONS(171),
    [anon_sym_26] = ACTIONS(171),
    [anon_sym_27] = ACTIONS(173),
    [anon_sym_28] = ACTIONS(173),
    [anon_sym_29] = ACTIONS(173),
    [anon_sym_30] = ACTIONS(173),
    [anon_sym_31] = ACTIONS(171),
    [anon_sym_32] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_interface] = ACTIONS(173),
    [anon_sym_struct] = ACTIONS(173),
    [anon_sym_enum] = ACTIONS(173),
    [anon_sym_var] = ACTIONS(173),
    [anon_sym_delegate] = ACTIONS(173),
    [anon_sym_33] = ACTIONS(171),
    [anon_sym_34] = ACTIONS(171),
    [anon_sym_35] = ACTIONS(171),
    [anon_sym_36] = ACTIONS(171),
    [anon_sym_37] = ACTIONS(171),
    [anon_sym_38] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_39] = ACTIONS(171),
    [anon_sym_40] = ACTIONS(171),
    [anon_sym_41] = ACTIONS(171),
    [anon_sym_42] = ACTIONS(171),
    [anon_sym_43] = ACTIONS(171),
    [anon_sym_44] = ACTIONS(171),
    [anon_sym_45] = ACTIONS(171),
    [anon_sym_46] = ACTIONS(171),
    [anon_sym_47] = ACTIONS(171),
    [anon_sym_48] = ACTIONS(171),
    [anon_sym_49] = ACTIONS(171),
    [anon_sym_50] = ACTIONS(173),
    [anon_sym_51] = ACTIONS(171),
    [anon_sym_52] = ACTIONS(171),
    [anon_sym_53] = ACTIONS(171),
    [anon_sym_54] = ACTIONS(171),
    [anon_sym_55] = ACTIONS(173),
    [anon_sym_56] = ACTIONS(173),
    [anon_sym_57] = ACTIONS(171),
    [anon_sym_58] = ACTIONS(171),
    [anon_sym_59] = ACTIONS(173),
    [anon_sym_60] = ACTIONS(171),
    [anon_sym_61] = ACTIONS(173),
    [anon_sym_return] = ACTIONS(173),
    [anon_sym_62] = ACTIONS(171),
    [anon_sym_async] = ACTIONS(173),
    [anon_sym_await] = ACTIONS(173),
    [anon_sym_by] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_else] = ACTIONS(173),
    [anon_sym_foreach] = ACTIONS(173),
    [anon_sym_in] = ACTIONS(173),
    [anon_sym_for] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_while] = ACTIONS(173),
    [anon_sym_switch] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(173),
    [anon_sym_break] = ACTIONS(173),
    [anon_sym_yield] = ACTIONS(173),
    [anon_sym_try] = ACTIONS(173),
    [anon_sym_catch] = ACTIONS(173),
    [anon_sym_finally] = ACTIONS(173),
    [anon_sym_continue] = ACTIONS(173),
    [anon_sym_from] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_select] = ACTIONS(173),
    [anon_sym_throw] = ACTIONS(173),
    [anon_sym_join] = ACTIONS(173),
    [anon_sym_goto] = ACTIONS(173),
    [anon_sym_lock] = ACTIONS(173),
    [anon_sym_orderby] = ACTIONS(173),
    [anon_sym_63] = ACTIONS(171),
    [anon_sym_64] = ACTIONS(171),
    [anon_sym_65] = ACTIONS(171),
    [anon_sym_66] = ACTIONS(171),
    [anon_sym_67] = ACTIONS(173),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(171),
    [anon_sym_68] = ACTIONS(171),
    [anon_sym_69] = ACTIONS(171),
    [anon_sym_70] = ACTIONS(171),
    [anon_sym_71] = ACTIONS(171),
    [anon_sym_72] = ACTIONS(171),
    [anon_sym_73] = ACTIONS(171),
    [anon_sym_74] = ACTIONS(171),
    [anon_sym_75] = ACTIONS(171),
    [anon_sym_76] = ACTIONS(171),
    [anon_sym_77] = ACTIONS(171),
    [anon_sym_78] = ACTIONS(171),
    [anon_sym_79] = ACTIONS(173),
    [anon_sym_80] = ACTIONS(171),
    [anon_sym_81] = ACTIONS(171),
    [anon_sym_82] = ACTIONS(171),
    [anon_sym_83] = ACTIONS(171),
    [anon_sym_84] = ACTIONS(171),
    [anon_sym_85] = ACTIONS(171),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(171),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(171),
    [anon_sym_86] = ACTIONS(171),
    [anon_sym_87] = ACTIONS(171),
    [anon_sym_88] = ACTIONS(171),
    [anon_sym_89] = ACTIONS(171),
    [anon_sym_90] = ACTIONS(171),
    [anon_sym_91] = ACTIONS(173),
    [anon_sym_92] = ACTIONS(171),
    [anon_sym_93] = ACTIONS(171),
    [anon_sym_94] = ACTIONS(173),
    [anon_sym_95] = ACTIONS(171),
    [anon_sym_96] = ACTIONS(171),
    [anon_sym_97] = ACTIONS(171),
    [anon_sym_98] = ACTIONS(171),
    [anon_sym_99] = ACTIONS(171),
    [anon_sym_100] = ACTIONS(173),
    [anon_sym_101] = ACTIONS(173),
    [anon_sym_102] = ACTIONS(171),
    [anon_sym_103] = ACTIONS(171),
    [anon_sym_add] = ACTIONS(173),
    [anon_sym_checked] = ACTIONS(173),
    [anon_sym_into] = ACTIONS(173),
    [anon_sym_nameof] = ACTIONS(173),
    [anon_sym_new] = ACTIONS(173),
    [anon_sym_using] = ACTIONS(173),
    [anon_sym_value] = ACTIONS(173),
    [anon_sym_global] = ACTIONS(173),
    [anon_sym_let] = ACTIONS(173),
    [anon_sym_operator] = ACTIONS(173),
    [anon_sym_params] = ACTIONS(173),
    [anon_sym_this] = ACTIONS(173),
    [anon_sym_typeof] = ACTIONS(173),
    [anon_sym_default] = ACTIONS(173),
    [anon_sym_equals] = ACTIONS(173),
    [anon_sym_long] = ACTIONS(173),
    [anon_sym_out] = ACTIONS(173),
    [anon_sym_ref] = ACTIONS(173),
    [anon_sym_sizeof] = ACTIONS(173),
    [anon_sym_descending] = ACTIONS(173),
    [anon_sym_ascending] = ACTIONS(173),
    [anon_sym_dynamic] = ACTIONS(173),
    [anon_sym_fixed] = ACTIONS(173),
    [anon_sym_group] = ACTIONS(173),
    [anon_sym_is] = ACTIONS(173),
    [anon_sym_get] = ACTIONS(173),
    [anon_sym_set] = ACTIONS(173),
    [anon_sym_on] = ACTIONS(173),
    [anon_sym_remove] = ACTIONS(173),
    [anon_sym_stackalloc] = ACTIONS(173),
    [anon_sym_unchecked] = ACTIONS(173),
    [anon_sym_as] = ACTIONS(173),
    [anon_sym_base] = ACTIONS(173),
    [anon_sym_104] = ACTIONS(171),
    [anon_sym_105] = ACTIONS(171),
    [anon_sym_106] = ACTIONS(171),
    [anon_sym_107] = ACTIONS(173),
    [anon_sym_108] = ACTIONS(171),
    [anon_sym_109] = ACTIONS(171),
    [anon_sym_110] = ACTIONS(171),
    [anon_sym_111] = ACTIONS(173),
    [anon_sym_112] = ACTIONS(171),
    [anon_sym_113] = ACTIONS(171),
    [anon_sym_114] = ACTIONS(171),
    [anon_sym_115] = ACTIONS(171),
    [anon_sym_116] = ACTIONS(171),
    [anon_sym_117] = ACTIONS(171),
    [anon_sym_118] = ACTIONS(171),
    [anon_sym_119] = ACTIONS(171),
    [anon_sym_120] = ACTIONS(173),
    [anon_sym_121] = ACTIONS(171),
    [anon_sym_122] = ACTIONS(173),
    [anon_sym_123] = ACTIONS(173),
    [anon_sym_124] = ACTIONS(171),
    [anon_sym_125] = ACTIONS(173),
    [anon_sym_126] = ACTIONS(173),
    [anon_sym_127] = ACTIONS(173),
    [anon_sym_128] = ACTIONS(171),
    [anon_sym_129] = ACTIONS(171),
    [anon_sym_130] = ACTIONS(171),
    [anon_sym_131] = ACTIONS(171),
    [anon_sym_132] = ACTIONS(171),
    [anon_sym_133] = ACTIONS(171),
    [anon_sym_134] = ACTIONS(171),
    [anon_sym_135] = ACTIONS(171),
    [anon_sym_136] = ACTIONS(171),
    [anon_sym_137] = ACTIONS(173),
    [anon_sym_138] = ACTIONS(171),
    [anon_sym_139] = ACTIONS(171),
    [anon_sym_140] = ACTIONS(171),
    [anon_sym_141] = ACTIONS(171),
    [anon_sym_142] = ACTIONS(171),
    [anon_sym_143] = ACTIONS(171),
    [anon_sym_144] = ACTIONS(171),
    [anon_sym_145] = ACTIONS(171),
    [anon_sym_146] = ACTIONS(171),
    [anon_sym_147] = ACTIONS(171),
    [anon_sym_148] = ACTIONS(171),
    [anon_sym_149] = ACTIONS(171),
    [anon_sym_150] = ACTIONS(171),
    [anon_sym_151] = ACTIONS(173),
    [anon_sym_152] = ACTIONS(173),
    [anon_sym_153] = ACTIONS(173),
    [anon_sym_int] = ACTIONS(173),
    [anon_sym_bool] = ACTIONS(173),
    [anon_sym_string] = ACTIONS(173),
    [anon_sym_float] = ACTIONS(173),
    [anon_sym_char] = ACTIONS(173),
    [anon_sym_double] = ACTIONS(173),
    [anon_sym_byte] = ACTIONS(173),
    [anon_sym_decimal] = ACTIONS(173),
    [anon_sym_sbyte] = ACTIONS(173),
    [anon_sym_short] = ACTIONS(173),
    [anon_sym_uint] = ACTIONS(173),
    [anon_sym_ushort] = ACTIONS(173),
    [anon_sym_object] = ACTIONS(173),
    [anon_sym_ulong] = ACTIONS(173),
    [anon_sym_154] = ACTIONS(173),
    [anon_sym_155] = ACTIONS(173),
    [anon_sym_156] = ACTIONS(173),
    [anon_sym_157] = ACTIONS(173),
    [anon_sym_158] = ACTIONS(173),
    [anon_sym_159] = ACTIONS(171),
    [anon_sym_160] = ACTIONS(171),
    [anon_sym_161] = ACTIONS(173),
    [anon_sym_162] = ACTIONS(171),
    [anon_sym_163] = ACTIONS(173),
    [anon_sym_164] = ACTIONS(173),
    [anon_sym_165] = ACTIONS(173),
    [anon_sym_166] = ACTIONS(173),
    [anon_sym_167] = ACTIONS(173),
    [anon_sym_168] = ACTIONS(173),
    [anon_sym_169] = ACTIONS(173),
    [anon_sym_170] = ACTIONS(173),
    [anon_sym_171] = ACTIONS(171),
    [anon_sym_172] = ACTIONS(171),
    [anon_sym_173] = ACTIONS(171),
    [anon_sym_174] = ACTIONS(171),
    [anon_sym_175] = ACTIONS(171),
    [anon_sym_176] = ACTIONS(171),
    [anon_sym_177] = ACTIONS(171),
    [anon_sym_178] = ACTIONS(171),
    [anon_sym_179] = ACTIONS(171),
    [anon_sym_180] = ACTIONS(171),
    [anon_sym_181] = ACTIONS(171),
    [anon_sym_182] = ACTIONS(171),
    [anon_sym_183] = ACTIONS(171),
    [anon_sym_184] = ACTIONS(171),
    [anon_sym_185] = ACTIONS(171),
    [anon_sym_186] = ACTIONS(173),
    [anon_sym_187] = ACTIONS(171),
    [anon_sym_188] = ACTIONS(171),
    [anon_sym_189] = ACTIONS(171),
    [anon_sym_190] = ACTIONS(173),
    [anon_sym_191] = ACTIONS(173),
    [anon_sym_192] = ACTIONS(173),
    [anon_sym_193] = ACTIONS(173),
    [anon_sym_194] = ACTIONS(173),
    [anon_sym_195] = ACTIONS(173),
    [anon_sym_196] = ACTIONS(173),
    [anon_sym_197] = ACTIONS(173),
    [anon_sym_198] = ACTIONS(173),
    [anon_sym_199] = ACTIONS(171),
    [anon_sym_200] = ACTIONS(171),
    [anon_sym_201] = ACTIONS(171),
    [anon_sym_202] = ACTIONS(171),
    [anon_sym_203] = ACTIONS(171),
    [anon_sym_204] = ACTIONS(171),
    [anon_sym_205] = ACTIONS(171),
    [anon_sym_206] = ACTIONS(171),
    [anon_sym_207] = ACTIONS(171),
    [anon_sym_208] = ACTIONS(171),
    [anon_sym_209] = ACTIONS(171),
    [anon_sym_210] = ACTIONS(171),
    [anon_sym_211] = ACTIONS(173),
    [anon_sym_212] = ACTIONS(173),
    [anon_sym_213] = ACTIONS(171),
    [anon_sym_214] = ACTIONS(171),
    [anon_sym_215] = ACTIONS(171),
    [sym_type] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
    [aux_sym_z_token1] = ACTIONS(173),
    [aux_sym_z_token2] = ACTIONS(173),
    [aux_sym_z_token3] = ACTIONS(171),
    [sym_str] = ACTIONS(171),
    [sym_note] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_216] = ACTIONS(171),
    [anon_sym_217] = ACTIONS(171),
    [anon_sym_218] = ACTIONS(173),
    [anon_sym_219] = ACTIONS(173),
    [anon_sym_220] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [sym_int] = ACTIONS(173),
    [anon_sym_null] = ACTIONS(173),
    [anon_sym_221] = ACTIONS(171),
    [sym_real] = ACTIONS(173),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_id] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(177),
    [anon_sym_internal] = ACTIONS(177),
    [anon_sym_protected] = ACTIONS(177),
    [anon_sym_private] = ACTIONS(177),
    [anon_sym_static] = ACTIONS(177),
    [anon_sym_abstract] = ACTIONS(177),
    [anon_sym_const] = ACTIONS(177),
    [anon_sym_extern] = ACTIONS(177),
    [anon_sym_override] = ACTIONS(177),
    [anon_sym_partial] = ACTIONS(177),
    [anon_sym_readonly] = ACTIONS(177),
    [anon_sym_sealed] = ACTIONS(177),
    [anon_sym_unsafe] = ACTIONS(177),
    [anon_sym_virtual] = ACTIONS(177),
    [anon_sym_volatile] = ACTIONS(177),
    [anon_sym_explicit] = ACTIONS(177),
    [anon_sym_implicit] = ACTIONS(177),
    [anon_sym_] = ACTIONS(175),
    [anon_sym_2] = ACTIONS(175),
    [anon_sym_3] = ACTIONS(175),
    [anon_sym_4] = ACTIONS(177),
    [anon_sym_5] = ACTIONS(175),
    [anon_sym_6] = ACTIONS(175),
    [anon_sym_7] = ACTIONS(175),
    [anon_sym_8] = ACTIONS(177),
    [anon_sym_9] = ACTIONS(177),
    [anon_sym_10] = ACTIONS(175),
    [anon_sym_11] = ACTIONS(175),
    [anon_sym_12] = ACTIONS(175),
    [anon_sym_13] = ACTIONS(177),
    [anon_sym_14] = ACTIONS(177),
    [anon_sym_15] = ACTIONS(177),
    [anon_sym_16] = ACTIONS(175),
    [anon_sym_17] = ACTIONS(177),
    [anon_sym_18] = ACTIONS(175),
    [anon_sym_19] = ACTIONS(177),
    [anon_sym_20] = ACTIONS(175),
    [anon_sym_21] = ACTIONS(177),
    [anon_sym_22] = ACTIONS(175),
    [anon_sym_23] = ACTIONS(175),
    [anon_sym_24] = ACTIONS(177),
    [anon_sym_25] = ACTIONS(175),
    [anon_sym_26] = ACTIONS(175),
    [anon_sym_27] = ACTIONS(177),
    [anon_sym_28] = ACTIONS(177),
    [anon_sym_29] = ACTIONS(177),
    [anon_sym_30] = ACTIONS(177),
    [anon_sym_31] = ACTIONS(175),
    [anon_sym_32] = ACTIONS(175),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_interface] = ACTIONS(177),
    [anon_sym_struct] = ACTIONS(177),
    [anon_sym_enum] = ACTIONS(177),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_delegate] = ACTIONS(177),
    [anon_sym_33] = ACTIONS(175),
    [anon_sym_34] = ACTIONS(175),
    [anon_sym_35] = ACTIONS(175),
    [anon_sym_36] = ACTIONS(175),
    [anon_sym_37] = ACTIONS(175),
    [anon_sym_38] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_39] = ACTIONS(175),
    [anon_sym_40] = ACTIONS(175),
    [anon_sym_41] = ACTIONS(175),
    [anon_sym_42] = ACTIONS(175),
    [anon_sym_43] = ACTIONS(175),
    [anon_sym_44] = ACTIONS(175),
    [anon_sym_45] = ACTIONS(175),
    [anon_sym_46] = ACTIONS(175),
    [anon_sym_47] = ACTIONS(175),
    [anon_sym_48] = ACTIONS(175),
    [anon_sym_49] = ACTIONS(175),
    [anon_sym_50] = ACTIONS(177),
    [anon_sym_51] = ACTIONS(175),
    [anon_sym_52] = ACTIONS(175),
    [anon_sym_53] = ACTIONS(175),
    [anon_sym_54] = ACTIONS(175),
    [anon_sym_55] = ACTIONS(177),
    [anon_sym_56] = ACTIONS(177),
    [anon_sym_57] = ACTIONS(175),
    [anon_sym_58] = ACTIONS(175),
    [anon_sym_59] = ACTIONS(177),
    [anon_sym_60] = ACTIONS(175),
    [anon_sym_61] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(177),
    [anon_sym_62] = ACTIONS(175),
    [anon_sym_async] = ACTIONS(177),
    [anon_sym_await] = ACTIONS(177),
    [anon_sym_by] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_else] = ACTIONS(177),
    [anon_sym_foreach] = ACTIONS(177),
    [anon_sym_in] = ACTIONS(177),
    [anon_sym_for] = ACTIONS(177),
    [anon_sym_do] = ACTIONS(177),
    [anon_sym_while] = ACTIONS(177),
    [anon_sym_switch] = ACTIONS(177),
    [anon_sym_case] = ACTIONS(177),
    [anon_sym_break] = ACTIONS(177),
    [anon_sym_yield] = ACTIONS(177),
    [anon_sym_try] = ACTIONS(177),
    [anon_sym_catch] = ACTIONS(177),
    [anon_sym_finally] = ACTIONS(177),
    [anon_sym_continue] = ACTIONS(177),
    [anon_sym_from] = ACTIONS(177),
    [anon_sym_where] = ACTIONS(177),
    [anon_sym_select] = ACTIONS(177),
    [anon_sym_throw] = ACTIONS(177),
    [anon_sym_join] = ACTIONS(177),
    [anon_sym_goto] = ACTIONS(177),
    [anon_sym_lock] = ACTIONS(177),
    [anon_sym_orderby] = ACTIONS(177),
    [anon_sym_63] = ACTIONS(175),
    [anon_sym_64] = ACTIONS(175),
    [anon_sym_65] = ACTIONS(175),
    [anon_sym_66] = ACTIONS(175),
    [anon_sym_67] = ACTIONS(177),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(175),
    [anon_sym_68] = ACTIONS(175),
    [anon_sym_69] = ACTIONS(175),
    [anon_sym_70] = ACTIONS(175),
    [anon_sym_71] = ACTIONS(175),
    [anon_sym_72] = ACTIONS(175),
    [anon_sym_73] = ACTIONS(175),
    [anon_sym_74] = ACTIONS(175),
    [anon_sym_75] = ACTIONS(175),
    [anon_sym_76] = ACTIONS(175),
    [anon_sym_77] = ACTIONS(175),
    [anon_sym_78] = ACTIONS(175),
    [anon_sym_79] = ACTIONS(177),
    [anon_sym_80] = ACTIONS(175),
    [anon_sym_81] = ACTIONS(175),
    [anon_sym_82] = ACTIONS(175),
    [anon_sym_83] = ACTIONS(175),
    [anon_sym_84] = ACTIONS(175),
    [anon_sym_85] = ACTIONS(175),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(175),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(175),
    [anon_sym_86] = ACTIONS(175),
    [anon_sym_87] = ACTIONS(175),
    [anon_sym_88] = ACTIONS(175),
    [anon_sym_89] = ACTIONS(175),
    [anon_sym_90] = ACTIONS(175),
    [anon_sym_91] = ACTIONS(177),
    [anon_sym_92] = ACTIONS(175),
    [anon_sym_93] = ACTIONS(175),
    [anon_sym_94] = ACTIONS(177),
    [anon_sym_95] = ACTIONS(175),
    [anon_sym_96] = ACTIONS(175),
    [anon_sym_97] = ACTIONS(175),
    [anon_sym_98] = ACTIONS(175),
    [anon_sym_99] = ACTIONS(175),
    [anon_sym_100] = ACTIONS(177),
    [anon_sym_101] = ACTIONS(177),
    [anon_sym_102] = ACTIONS(175),
    [anon_sym_103] = ACTIONS(175),
    [anon_sym_add] = ACTIONS(177),
    [anon_sym_checked] = ACTIONS(177),
    [anon_sym_into] = ACTIONS(177),
    [anon_sym_nameof] = ACTIONS(177),
    [anon_sym_new] = ACTIONS(177),
    [anon_sym_using] = ACTIONS(177),
    [anon_sym_value] = ACTIONS(177),
    [anon_sym_global] = ACTIONS(177),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_operator] = ACTIONS(177),
    [anon_sym_params] = ACTIONS(177),
    [anon_sym_this] = ACTIONS(177),
    [anon_sym_typeof] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(177),
    [anon_sym_equals] = ACTIONS(177),
    [anon_sym_long] = ACTIONS(177),
    [anon_sym_out] = ACTIONS(177),
    [anon_sym_ref] = ACTIONS(177),
    [anon_sym_sizeof] = ACTIONS(177),
    [anon_sym_descending] = ACTIONS(177),
    [anon_sym_ascending] = ACTIONS(177),
    [anon_sym_dynamic] = ACTIONS(177),
    [anon_sym_fixed] = ACTIONS(177),
    [anon_sym_group] = ACTIONS(177),
    [anon_sym_is] = ACTIONS(177),
    [anon_sym_get] = ACTIONS(177),
    [anon_sym_set] = ACTIONS(177),
    [anon_sym_on] = ACTIONS(177),
    [anon_sym_remove] = ACTIONS(177),
    [anon_sym_stackalloc] = ACTIONS(177),
    [anon_sym_unchecked] = ACTIONS(177),
    [anon_sym_as] = ACTIONS(177),
    [anon_sym_base] = ACTIONS(177),
    [anon_sym_104] = ACTIONS(175),
    [anon_sym_105] = ACTIONS(175),
    [anon_sym_106] = ACTIONS(175),
    [anon_sym_107] = ACTIONS(177),
    [anon_sym_108] = ACTIONS(175),
    [anon_sym_109] = ACTIONS(175),
    [anon_sym_110] = ACTIONS(175),
    [anon_sym_111] = ACTIONS(177),
    [anon_sym_112] = ACTIONS(175),
    [anon_sym_113] = ACTIONS(175),
    [anon_sym_114] = ACTIONS(175),
    [anon_sym_115] = ACTIONS(175),
    [anon_sym_116] = ACTIONS(175),
    [anon_sym_117] = ACTIONS(175),
    [anon_sym_118] = ACTIONS(175),
    [anon_sym_119] = ACTIONS(175),
    [anon_sym_120] = ACTIONS(177),
    [anon_sym_121] = ACTIONS(175),
    [anon_sym_122] = ACTIONS(177),
    [anon_sym_123] = ACTIONS(177),
    [anon_sym_124] = ACTIONS(175),
    [anon_sym_125] = ACTIONS(177),
    [anon_sym_126] = ACTIONS(177),
    [anon_sym_127] = ACTIONS(177),
    [anon_sym_128] = ACTIONS(175),
    [anon_sym_129] = ACTIONS(175),
    [anon_sym_130] = ACTIONS(175),
    [anon_sym_131] = ACTIONS(175),
    [anon_sym_132] = ACTIONS(175),
    [anon_sym_133] = ACTIONS(175),
    [anon_sym_134] = ACTIONS(175),
    [anon_sym_135] = ACTIONS(175),
    [anon_sym_136] = ACTIONS(175),
    [anon_sym_137] = ACTIONS(177),
    [anon_sym_138] = ACTIONS(175),
    [anon_sym_139] = ACTIONS(175),
    [anon_sym_140] = ACTIONS(175),
    [anon_sym_141] = ACTIONS(175),
    [anon_sym_142] = ACTIONS(175),
    [anon_sym_143] = ACTIONS(175),
    [anon_sym_144] = ACTIONS(175),
    [anon_sym_145] = ACTIONS(175),
    [anon_sym_146] = ACTIONS(175),
    [anon_sym_147] = ACTIONS(175),
    [anon_sym_148] = ACTIONS(175),
    [anon_sym_149] = ACTIONS(175),
    [anon_sym_150] = ACTIONS(175),
    [anon_sym_151] = ACTIONS(177),
    [anon_sym_152] = ACTIONS(177),
    [anon_sym_153] = ACTIONS(177),
    [anon_sym_int] = ACTIONS(177),
    [anon_sym_bool] = ACTIONS(177),
    [anon_sym_string] = ACTIONS(177),
    [anon_sym_float] = ACTIONS(177),
    [anon_sym_char] = ACTIONS(177),
    [anon_sym_double] = ACTIONS(177),
    [anon_sym_byte] = ACTIONS(177),
    [anon_sym_decimal] = ACTIONS(177),
    [anon_sym_sbyte] = ACTIONS(177),
    [anon_sym_short] = ACTIONS(177),
    [anon_sym_uint] = ACTIONS(177),
    [anon_sym_ushort] = ACTIONS(177),
    [anon_sym_object] = ACTIONS(177),
    [anon_sym_ulong] = ACTIONS(177),
    [anon_sym_154] = ACTIONS(177),
    [anon_sym_155] = ACTIONS(177),
    [anon_sym_156] = ACTIONS(177),
    [anon_sym_157] = ACTIONS(177),
    [anon_sym_158] = ACTIONS(177),
    [anon_sym_159] = ACTIONS(175),
    [anon_sym_160] = ACTIONS(175),
    [anon_sym_161] = ACTIONS(177),
    [anon_sym_162] = ACTIONS(175),
    [anon_sym_163] = ACTIONS(177),
    [anon_sym_164] = ACTIONS(177),
    [anon_sym_165] = ACTIONS(177),
    [anon_sym_166] = ACTIONS(177),
    [anon_sym_167] = ACTIONS(177),
    [anon_sym_168] = ACTIONS(177),
    [anon_sym_169] = ACTIONS(177),
    [anon_sym_170] = ACTIONS(177),
    [anon_sym_171] = ACTIONS(175),
    [anon_sym_172] = ACTIONS(175),
    [anon_sym_173] = ACTIONS(175),
    [anon_sym_174] = ACTIONS(175),
    [anon_sym_175] = ACTIONS(175),
    [anon_sym_176] = ACTIONS(175),
    [anon_sym_177] = ACTIONS(175),
    [anon_sym_178] = ACTIONS(175),
    [anon_sym_179] = ACTIONS(175),
    [anon_sym_180] = ACTIONS(175),
    [anon_sym_181] = ACTIONS(175),
    [anon_sym_182] = ACTIONS(175),
    [anon_sym_183] = ACTIONS(175),
    [anon_sym_184] = ACTIONS(175),
    [anon_sym_185] = ACTIONS(175),
    [anon_sym_186] = ACTIONS(177),
    [anon_sym_187] = ACTIONS(175),
    [anon_sym_188] = ACTIONS(175),
    [anon_sym_189] = ACTIONS(175),
    [anon_sym_190] = ACTIONS(177),
    [anon_sym_191] = ACTIONS(177),
    [anon_sym_192] = ACTIONS(177),
    [anon_sym_193] = ACTIONS(177),
    [anon_sym_194] = ACTIONS(177),
    [anon_sym_195] = ACTIONS(177),
    [anon_sym_196] = ACTIONS(177),
    [anon_sym_197] = ACTIONS(177),
    [anon_sym_198] = ACTIONS(177),
    [anon_sym_199] = ACTIONS(175),
    [anon_sym_200] = ACTIONS(175),
    [anon_sym_201] = ACTIONS(175),
    [anon_sym_202] = ACTIONS(175),
    [anon_sym_203] = ACTIONS(175),
    [anon_sym_204] = ACTIONS(175),
    [anon_sym_205] = ACTIONS(175),
    [anon_sym_206] = ACTIONS(175),
    [anon_sym_207] = ACTIONS(175),
    [anon_sym_208] = ACTIONS(175),
    [anon_sym_209] = ACTIONS(175),
    [anon_sym_210] = ACTIONS(175),
    [anon_sym_211] = ACTIONS(177),
    [anon_sym_212] = ACTIONS(177),
    [anon_sym_213] = ACTIONS(175),
    [anon_sym_214] = ACTIONS(175),
    [anon_sym_215] = ACTIONS(175),
    [sym_type] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [aux_sym_z_token1] = ACTIONS(177),
    [aux_sym_z_token2] = ACTIONS(177),
    [aux_sym_z_token3] = ACTIONS(175),
    [sym_str] = ACTIONS(175),
    [sym_note] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [anon_sym_216] = ACTIONS(175),
    [anon_sym_217] = ACTIONS(175),
    [anon_sym_218] = ACTIONS(177),
    [anon_sym_219] = ACTIONS(177),
    [anon_sym_220] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [sym_int] = ACTIONS(177),
    [anon_sym_null] = ACTIONS(177),
    [anon_sym_221] = ACTIONS(175),
    [sym_real] = ACTIONS(177),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_id] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_internal] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_abstract] = ACTIONS(181),
    [anon_sym_const] = ACTIONS(181),
    [anon_sym_extern] = ACTIONS(181),
    [anon_sym_override] = ACTIONS(181),
    [anon_sym_partial] = ACTIONS(181),
    [anon_sym_readonly] = ACTIONS(181),
    [anon_sym_sealed] = ACTIONS(181),
    [anon_sym_unsafe] = ACTIONS(181),
    [anon_sym_virtual] = ACTIONS(181),
    [anon_sym_volatile] = ACTIONS(181),
    [anon_sym_explicit] = ACTIONS(181),
    [anon_sym_implicit] = ACTIONS(181),
    [anon_sym_] = ACTIONS(179),
    [anon_sym_2] = ACTIONS(179),
    [anon_sym_3] = ACTIONS(179),
    [anon_sym_4] = ACTIONS(181),
    [anon_sym_5] = ACTIONS(179),
    [anon_sym_6] = ACTIONS(179),
    [anon_sym_7] = ACTIONS(179),
    [anon_sym_8] = ACTIONS(181),
    [anon_sym_9] = ACTIONS(181),
    [anon_sym_10] = ACTIONS(179),
    [anon_sym_11] = ACTIONS(179),
    [anon_sym_12] = ACTIONS(179),
    [anon_sym_13] = ACTIONS(181),
    [anon_sym_14] = ACTIONS(181),
    [anon_sym_15] = ACTIONS(181),
    [anon_sym_16] = ACTIONS(179),
    [anon_sym_17] = ACTIONS(181),
    [anon_sym_18] = ACTIONS(179),
    [anon_sym_19] = ACTIONS(181),
    [anon_sym_20] = ACTIONS(179),
    [anon_sym_21] = ACTIONS(181),
    [anon_sym_22] = ACTIONS(179),
    [anon_sym_23] = ACTIONS(179),
    [anon_sym_24] = ACTIONS(181),
    [anon_sym_25] = ACTIONS(179),
    [anon_sym_26] = ACTIONS(179),
    [anon_sym_27] = ACTIONS(181),
    [anon_sym_28] = ACTIONS(181),
    [anon_sym_29] = ACTIONS(181),
    [anon_sym_30] = ACTIONS(181),
    [anon_sym_31] = ACTIONS(179),
    [anon_sym_32] = ACTIONS(179),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(181),
    [anon_sym_struct] = ACTIONS(181),
    [anon_sym_enum] = ACTIONS(181),
    [anon_sym_var] = ACTIONS(181),
    [anon_sym_delegate] = ACTIONS(181),
    [anon_sym_33] = ACTIONS(179),
    [anon_sym_34] = ACTIONS(179),
    [anon_sym_35] = ACTIONS(179),
    [anon_sym_36] = ACTIONS(179),
    [anon_sym_37] = ACTIONS(179),
    [anon_sym_38] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_39] = ACTIONS(179),
    [anon_sym_40] = ACTIONS(179),
    [anon_sym_41] = ACTIONS(179),
    [anon_sym_42] = ACTIONS(179),
    [anon_sym_43] = ACTIONS(179),
    [anon_sym_44] = ACTIONS(179),
    [anon_sym_45] = ACTIONS(179),
    [anon_sym_46] = ACTIONS(179),
    [anon_sym_47] = ACTIONS(179),
    [anon_sym_48] = ACTIONS(179),
    [anon_sym_49] = ACTIONS(179),
    [anon_sym_50] = ACTIONS(181),
    [anon_sym_51] = ACTIONS(179),
    [anon_sym_52] = ACTIONS(179),
    [anon_sym_53] = ACTIONS(179),
    [anon_sym_54] = ACTIONS(179),
    [anon_sym_55] = ACTIONS(181),
    [anon_sym_56] = ACTIONS(181),
    [anon_sym_57] = ACTIONS(179),
    [anon_sym_58] = ACTIONS(179),
    [anon_sym_59] = ACTIONS(181),
    [anon_sym_60] = ACTIONS(179),
    [anon_sym_61] = ACTIONS(181),
    [anon_sym_return] = ACTIONS(181),
    [anon_sym_62] = ACTIONS(179),
    [anon_sym_async] = ACTIONS(181),
    [anon_sym_await] = ACTIONS(181),
    [anon_sym_by] = ACTIONS(181),
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_else] = ACTIONS(181),
    [anon_sym_foreach] = ACTIONS(181),
    [anon_sym_in] = ACTIONS(181),
    [anon_sym_for] = ACTIONS(181),
    [anon_sym_do] = ACTIONS(181),
    [anon_sym_while] = ACTIONS(181),
    [anon_sym_switch] = ACTIONS(181),
    [anon_sym_case] = ACTIONS(181),
    [anon_sym_break] = ACTIONS(181),
    [anon_sym_yield] = ACTIONS(181),
    [anon_sym_try] = ACTIONS(181),
    [anon_sym_catch] = ACTIONS(181),
    [anon_sym_finally] = ACTIONS(181),
    [anon_sym_continue] = ACTIONS(181),
    [anon_sym_from] = ACTIONS(181),
    [anon_sym_where] = ACTIONS(181),
    [anon_sym_select] = ACTIONS(181),
    [anon_sym_throw] = ACTIONS(181),
    [anon_sym_join] = ACTIONS(181),
    [anon_sym_goto] = ACTIONS(181),
    [anon_sym_lock] = ACTIONS(181),
    [anon_sym_orderby] = ACTIONS(181),
    [anon_sym_63] = ACTIONS(179),
    [anon_sym_64] = ACTIONS(179),
    [anon_sym_65] = ACTIONS(179),
    [anon_sym_66] = ACTIONS(179),
    [anon_sym_67] = ACTIONS(181),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(179),
    [anon_sym_68] = ACTIONS(179),
    [anon_sym_69] = ACTIONS(179),
    [anon_sym_70] = ACTIONS(179),
    [anon_sym_71] = ACTIONS(179),
    [anon_sym_72] = ACTIONS(179),
    [anon_sym_73] = ACTIONS(179),
    [anon_sym_74] = ACTIONS(179),
    [anon_sym_75] = ACTIONS(179),
    [anon_sym_76] = ACTIONS(179),
    [anon_sym_77] = ACTIONS(179),
    [anon_sym_78] = ACTIONS(179),
    [anon_sym_79] = ACTIONS(181),
    [anon_sym_80] = ACTIONS(179),
    [anon_sym_81] = ACTIONS(179),
    [anon_sym_82] = ACTIONS(179),
    [anon_sym_83] = ACTIONS(179),
    [anon_sym_84] = ACTIONS(179),
    [anon_sym_85] = ACTIONS(179),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(179),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(179),
    [anon_sym_86] = ACTIONS(179),
    [anon_sym_87] = ACTIONS(179),
    [anon_sym_88] = ACTIONS(179),
    [anon_sym_89] = ACTIONS(179),
    [anon_sym_90] = ACTIONS(179),
    [anon_sym_91] = ACTIONS(181),
    [anon_sym_92] = ACTIONS(179),
    [anon_sym_93] = ACTIONS(179),
    [anon_sym_94] = ACTIONS(181),
    [anon_sym_95] = ACTIONS(179),
    [anon_sym_96] = ACTIONS(179),
    [anon_sym_97] = ACTIONS(179),
    [anon_sym_98] = ACTIONS(179),
    [anon_sym_99] = ACTIONS(179),
    [anon_sym_100] = ACTIONS(181),
    [anon_sym_101] = ACTIONS(181),
    [anon_sym_102] = ACTIONS(179),
    [anon_sym_103] = ACTIONS(179),
    [anon_sym_add] = ACTIONS(181),
    [anon_sym_checked] = ACTIONS(181),
    [anon_sym_into] = ACTIONS(181),
    [anon_sym_nameof] = ACTIONS(181),
    [anon_sym_new] = ACTIONS(181),
    [anon_sym_using] = ACTIONS(181),
    [anon_sym_value] = ACTIONS(181),
    [anon_sym_global] = ACTIONS(181),
    [anon_sym_let] = ACTIONS(181),
    [anon_sym_operator] = ACTIONS(181),
    [anon_sym_params] = ACTIONS(181),
    [anon_sym_this] = ACTIONS(181),
    [anon_sym_typeof] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
    [anon_sym_equals] = ACTIONS(181),
    [anon_sym_long] = ACTIONS(181),
    [anon_sym_out] = ACTIONS(181),
    [anon_sym_ref] = ACTIONS(181),
    [anon_sym_sizeof] = ACTIONS(181),
    [anon_sym_descending] = ACTIONS(181),
    [anon_sym_ascending] = ACTIONS(181),
    [anon_sym_dynamic] = ACTIONS(181),
    [anon_sym_fixed] = ACTIONS(181),
    [anon_sym_group] = ACTIONS(181),
    [anon_sym_is] = ACTIONS(181),
    [anon_sym_get] = ACTIONS(181),
    [anon_sym_set] = ACTIONS(181),
    [anon_sym_on] = ACTIONS(181),
    [anon_sym_remove] = ACTIONS(181),
    [anon_sym_stackalloc] = ACTIONS(181),
    [anon_sym_unchecked] = ACTIONS(181),
    [anon_sym_as] = ACTIONS(181),
    [anon_sym_base] = ACTIONS(181),
    [anon_sym_104] = ACTIONS(179),
    [anon_sym_105] = ACTIONS(179),
    [anon_sym_106] = ACTIONS(179),
    [anon_sym_107] = ACTIONS(181),
    [anon_sym_108] = ACTIONS(179),
    [anon_sym_109] = ACTIONS(179),
    [anon_sym_110] = ACTIONS(179),
    [anon_sym_111] = ACTIONS(181),
    [anon_sym_112] = ACTIONS(179),
    [anon_sym_113] = ACTIONS(179),
    [anon_sym_114] = ACTIONS(179),
    [anon_sym_115] = ACTIONS(179),
    [anon_sym_116] = ACTIONS(179),
    [anon_sym_117] = ACTIONS(179),
    [anon_sym_118] = ACTIONS(179),
    [anon_sym_119] = ACTIONS(179),
    [anon_sym_120] = ACTIONS(181),
    [anon_sym_121] = ACTIONS(179),
    [anon_sym_122] = ACTIONS(181),
    [anon_sym_123] = ACTIONS(181),
    [anon_sym_124] = ACTIONS(179),
    [anon_sym_125] = ACTIONS(181),
    [anon_sym_126] = ACTIONS(181),
    [anon_sym_127] = ACTIONS(181),
    [anon_sym_128] = ACTIONS(179),
    [anon_sym_129] = ACTIONS(179),
    [anon_sym_130] = ACTIONS(179),
    [anon_sym_131] = ACTIONS(179),
    [anon_sym_132] = ACTIONS(179),
    [anon_sym_133] = ACTIONS(179),
    [anon_sym_134] = ACTIONS(179),
    [anon_sym_135] = ACTIONS(179),
    [anon_sym_136] = ACTIONS(179),
    [anon_sym_137] = ACTIONS(181),
    [anon_sym_138] = ACTIONS(179),
    [anon_sym_139] = ACTIONS(179),
    [anon_sym_140] = ACTIONS(179),
    [anon_sym_141] = ACTIONS(179),
    [anon_sym_142] = ACTIONS(179),
    [anon_sym_143] = ACTIONS(179),
    [anon_sym_144] = ACTIONS(179),
    [anon_sym_145] = ACTIONS(179),
    [anon_sym_146] = ACTIONS(179),
    [anon_sym_147] = ACTIONS(179),
    [anon_sym_148] = ACTIONS(179),
    [anon_sym_149] = ACTIONS(179),
    [anon_sym_150] = ACTIONS(179),
    [anon_sym_151] = ACTIONS(181),
    [anon_sym_152] = ACTIONS(181),
    [anon_sym_153] = ACTIONS(181),
    [anon_sym_int] = ACTIONS(181),
    [anon_sym_bool] = ACTIONS(181),
    [anon_sym_string] = ACTIONS(181),
    [anon_sym_float] = ACTIONS(181),
    [anon_sym_char] = ACTIONS(181),
    [anon_sym_double] = ACTIONS(181),
    [anon_sym_byte] = ACTIONS(181),
    [anon_sym_decimal] = ACTIONS(181),
    [anon_sym_sbyte] = ACTIONS(181),
    [anon_sym_short] = ACTIONS(181),
    [anon_sym_uint] = ACTIONS(181),
    [anon_sym_ushort] = ACTIONS(181),
    [anon_sym_object] = ACTIONS(181),
    [anon_sym_ulong] = ACTIONS(181),
    [anon_sym_154] = ACTIONS(181),
    [anon_sym_155] = ACTIONS(181),
    [anon_sym_156] = ACTIONS(181),
    [anon_sym_157] = ACTIONS(181),
    [anon_sym_158] = ACTIONS(181),
    [anon_sym_159] = ACTIONS(179),
    [anon_sym_160] = ACTIONS(179),
    [anon_sym_161] = ACTIONS(181),
    [anon_sym_162] = ACTIONS(179),
    [anon_sym_163] = ACTIONS(181),
    [anon_sym_164] = ACTIONS(181),
    [anon_sym_165] = ACTIONS(181),
    [anon_sym_166] = ACTIONS(181),
    [anon_sym_167] = ACTIONS(181),
    [anon_sym_168] = ACTIONS(181),
    [anon_sym_169] = ACTIONS(181),
    [anon_sym_170] = ACTIONS(181),
    [anon_sym_171] = ACTIONS(179),
    [anon_sym_172] = ACTIONS(179),
    [anon_sym_173] = ACTIONS(179),
    [anon_sym_174] = ACTIONS(179),
    [anon_sym_175] = ACTIONS(179),
    [anon_sym_176] = ACTIONS(179),
    [anon_sym_177] = ACTIONS(179),
    [anon_sym_178] = ACTIONS(179),
    [anon_sym_179] = ACTIONS(179),
    [anon_sym_180] = ACTIONS(179),
    [anon_sym_181] = ACTIONS(179),
    [anon_sym_182] = ACTIONS(179),
    [anon_sym_183] = ACTIONS(179),
    [anon_sym_184] = ACTIONS(179),
    [anon_sym_185] = ACTIONS(179),
    [anon_sym_186] = ACTIONS(181),
    [anon_sym_187] = ACTIONS(179),
    [anon_sym_188] = ACTIONS(179),
    [anon_sym_189] = ACTIONS(179),
    [anon_sym_190] = ACTIONS(181),
    [anon_sym_191] = ACTIONS(181),
    [anon_sym_192] = ACTIONS(181),
    [anon_sym_193] = ACTIONS(181),
    [anon_sym_194] = ACTIONS(181),
    [anon_sym_195] = ACTIONS(181),
    [anon_sym_196] = ACTIONS(181),
    [anon_sym_197] = ACTIONS(181),
    [anon_sym_198] = ACTIONS(181),
    [anon_sym_199] = ACTIONS(179),
    [anon_sym_200] = ACTIONS(179),
    [anon_sym_201] = ACTIONS(179),
    [anon_sym_202] = ACTIONS(179),
    [anon_sym_203] = ACTIONS(179),
    [anon_sym_204] = ACTIONS(179),
    [anon_sym_205] = ACTIONS(179),
    [anon_sym_206] = ACTIONS(179),
    [anon_sym_207] = ACTIONS(179),
    [anon_sym_208] = ACTIONS(179),
    [anon_sym_209] = ACTIONS(179),
    [anon_sym_210] = ACTIONS(179),
    [anon_sym_211] = ACTIONS(181),
    [anon_sym_212] = ACTIONS(181),
    [anon_sym_213] = ACTIONS(179),
    [anon_sym_214] = ACTIONS(179),
    [anon_sym_215] = ACTIONS(179),
    [sym_type] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
    [aux_sym_z_token1] = ACTIONS(181),
    [aux_sym_z_token2] = ACTIONS(181),
    [aux_sym_z_token3] = ACTIONS(179),
    [sym_str] = ACTIONS(179),
    [sym_note] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_216] = ACTIONS(179),
    [anon_sym_217] = ACTIONS(179),
    [anon_sym_218] = ACTIONS(181),
    [anon_sym_219] = ACTIONS(181),
    [anon_sym_220] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [sym_int] = ACTIONS(181),
    [anon_sym_null] = ACTIONS(181),
    [anon_sym_221] = ACTIONS(179),
    [sym_real] = ACTIONS(181),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_id] = ACTIONS(185),
    [anon_sym_public] = ACTIONS(185),
    [anon_sym_internal] = ACTIONS(185),
    [anon_sym_protected] = ACTIONS(185),
    [anon_sym_private] = ACTIONS(185),
    [anon_sym_static] = ACTIONS(185),
    [anon_sym_abstract] = ACTIONS(185),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_extern] = ACTIONS(185),
    [anon_sym_override] = ACTIONS(185),
    [anon_sym_partial] = ACTIONS(185),
    [anon_sym_readonly] = ACTIONS(185),
    [anon_sym_sealed] = ACTIONS(185),
    [anon_sym_unsafe] = ACTIONS(185),
    [anon_sym_virtual] = ACTIONS(185),
    [anon_sym_volatile] = ACTIONS(185),
    [anon_sym_explicit] = ACTIONS(185),
    [anon_sym_implicit] = ACTIONS(185),
    [anon_sym_] = ACTIONS(183),
    [anon_sym_2] = ACTIONS(183),
    [anon_sym_3] = ACTIONS(183),
    [anon_sym_4] = ACTIONS(185),
    [anon_sym_5] = ACTIONS(183),
    [anon_sym_6] = ACTIONS(183),
    [anon_sym_7] = ACTIONS(183),
    [anon_sym_8] = ACTIONS(185),
    [anon_sym_9] = ACTIONS(185),
    [anon_sym_10] = ACTIONS(183),
    [anon_sym_11] = ACTIONS(183),
    [anon_sym_12] = ACTIONS(183),
    [anon_sym_13] = ACTIONS(185),
    [anon_sym_14] = ACTIONS(185),
    [anon_sym_15] = ACTIONS(185),
    [anon_sym_16] = ACTIONS(183),
    [anon_sym_17] = ACTIONS(185),
    [anon_sym_18] = ACTIONS(183),
    [anon_sym_19] = ACTIONS(185),
    [anon_sym_20] = ACTIONS(183),
    [anon_sym_21] = ACTIONS(185),
    [anon_sym_22] = ACTIONS(183),
    [anon_sym_23] = ACTIONS(183),
    [anon_sym_24] = ACTIONS(185),
    [anon_sym_25] = ACTIONS(183),
    [anon_sym_26] = ACTIONS(183),
    [anon_sym_27] = ACTIONS(185),
    [anon_sym_28] = ACTIONS(185),
    [anon_sym_29] = ACTIONS(185),
    [anon_sym_30] = ACTIONS(185),
    [anon_sym_31] = ACTIONS(183),
    [anon_sym_32] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [anon_sym_struct] = ACTIONS(185),
    [anon_sym_enum] = ACTIONS(185),
    [anon_sym_var] = ACTIONS(185),
    [anon_sym_delegate] = ACTIONS(185),
    [anon_sym_33] = ACTIONS(183),
    [anon_sym_34] = ACTIONS(183),
    [anon_sym_35] = ACTIONS(183),
    [anon_sym_36] = ACTIONS(183),
    [anon_sym_37] = ACTIONS(183),
    [anon_sym_38] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_39] = ACTIONS(183),
    [anon_sym_40] = ACTIONS(183),
    [anon_sym_41] = ACTIONS(183),
    [anon_sym_42] = ACTIONS(183),
    [anon_sym_43] = ACTIONS(183),
    [anon_sym_44] = ACTIONS(183),
    [anon_sym_45] = ACTIONS(183),
    [anon_sym_46] = ACTIONS(183),
    [anon_sym_47] = ACTIONS(183),
    [anon_sym_48] = ACTIONS(183),
    [anon_sym_49] = ACTIONS(183),
    [anon_sym_50] = ACTIONS(185),
    [anon_sym_51] = ACTIONS(183),
    [anon_sym_52] = ACTIONS(183),
    [anon_sym_53] = ACTIONS(183),
    [anon_sym_54] = ACTIONS(183),
    [anon_sym_55] = ACTIONS(185),
    [anon_sym_56] = ACTIONS(185),
    [anon_sym_57] = ACTIONS(183),
    [anon_sym_58] = ACTIONS(183),
    [anon_sym_59] = ACTIONS(185),
    [anon_sym_60] = ACTIONS(183),
    [anon_sym_61] = ACTIONS(185),
    [anon_sym_return] = ACTIONS(185),
    [anon_sym_62] = ACTIONS(183),
    [anon_sym_async] = ACTIONS(185),
    [anon_sym_await] = ACTIONS(185),
    [anon_sym_by] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_else] = ACTIONS(185),
    [anon_sym_foreach] = ACTIONS(185),
    [anon_sym_in] = ACTIONS(185),
    [anon_sym_for] = ACTIONS(185),
    [anon_sym_do] = ACTIONS(185),
    [anon_sym_while] = ACTIONS(185),
    [anon_sym_switch] = ACTIONS(185),
    [anon_sym_case] = ACTIONS(185),
    [anon_sym_break] = ACTIONS(185),
    [anon_sym_yield] = ACTIONS(185),
    [anon_sym_try] = ACTIONS(185),
    [anon_sym_catch] = ACTIONS(185),
    [anon_sym_finally] = ACTIONS(185),
    [anon_sym_continue] = ACTIONS(185),
    [anon_sym_from] = ACTIONS(185),
    [anon_sym_where] = ACTIONS(185),
    [anon_sym_select] = ACTIONS(185),
    [anon_sym_throw] = ACTIONS(185),
    [anon_sym_join] = ACTIONS(185),
    [anon_sym_goto] = ACTIONS(185),
    [anon_sym_lock] = ACTIONS(185),
    [anon_sym_orderby] = ACTIONS(185),
    [anon_sym_63] = ACTIONS(183),
    [anon_sym_64] = ACTIONS(183),
    [anon_sym_65] = ACTIONS(183),
    [anon_sym_66] = ACTIONS(183),
    [anon_sym_67] = ACTIONS(185),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(183),
    [anon_sym_68] = ACTIONS(183),
    [anon_sym_69] = ACTIONS(183),
    [anon_sym_70] = ACTIONS(183),
    [anon_sym_71] = ACTIONS(183),
    [anon_sym_72] = ACTIONS(183),
    [anon_sym_73] = ACTIONS(183),
    [anon_sym_74] = ACTIONS(183),
    [anon_sym_75] = ACTIONS(183),
    [anon_sym_76] = ACTIONS(183),
    [anon_sym_77] = ACTIONS(183),
    [anon_sym_78] = ACTIONS(183),
    [anon_sym_79] = ACTIONS(185),
    [anon_sym_80] = ACTIONS(183),
    [anon_sym_81] = ACTIONS(183),
    [anon_sym_82] = ACTIONS(183),
    [anon_sym_83] = ACTIONS(183),
    [anon_sym_84] = ACTIONS(183),
    [anon_sym_85] = ACTIONS(183),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(183),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(183),
    [anon_sym_86] = ACTIONS(183),
    [anon_sym_87] = ACTIONS(183),
    [anon_sym_88] = ACTIONS(183),
    [anon_sym_89] = ACTIONS(183),
    [anon_sym_90] = ACTIONS(183),
    [anon_sym_91] = ACTIONS(185),
    [anon_sym_92] = ACTIONS(183),
    [anon_sym_93] = ACTIONS(183),
    [anon_sym_94] = ACTIONS(185),
    [anon_sym_95] = ACTIONS(183),
    [anon_sym_96] = ACTIONS(183),
    [anon_sym_97] = ACTIONS(183),
    [anon_sym_98] = ACTIONS(183),
    [anon_sym_99] = ACTIONS(183),
    [anon_sym_100] = ACTIONS(185),
    [anon_sym_101] = ACTIONS(185),
    [anon_sym_102] = ACTIONS(183),
    [anon_sym_103] = ACTIONS(183),
    [anon_sym_add] = ACTIONS(185),
    [anon_sym_checked] = ACTIONS(185),
    [anon_sym_into] = ACTIONS(185),
    [anon_sym_nameof] = ACTIONS(185),
    [anon_sym_new] = ACTIONS(185),
    [anon_sym_using] = ACTIONS(185),
    [anon_sym_value] = ACTIONS(185),
    [anon_sym_global] = ACTIONS(185),
    [anon_sym_let] = ACTIONS(185),
    [anon_sym_operator] = ACTIONS(185),
    [anon_sym_params] = ACTIONS(185),
    [anon_sym_this] = ACTIONS(185),
    [anon_sym_typeof] = ACTIONS(185),
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_equals] = ACTIONS(185),
    [anon_sym_long] = ACTIONS(185),
    [anon_sym_out] = ACTIONS(185),
    [anon_sym_ref] = ACTIONS(185),
    [anon_sym_sizeof] = ACTIONS(185),
    [anon_sym_descending] = ACTIONS(185),
    [anon_sym_ascending] = ACTIONS(185),
    [anon_sym_dynamic] = ACTIONS(185),
    [anon_sym_fixed] = ACTIONS(185),
    [anon_sym_group] = ACTIONS(185),
    [anon_sym_is] = ACTIONS(185),
    [anon_sym_get] = ACTIONS(185),
    [anon_sym_set] = ACTIONS(185),
    [anon_sym_on] = ACTIONS(185),
    [anon_sym_remove] = ACTIONS(185),
    [anon_sym_stackalloc] = ACTIONS(185),
    [anon_sym_unchecked] = ACTIONS(185),
    [anon_sym_as] = ACTIONS(185),
    [anon_sym_base] = ACTIONS(185),
    [anon_sym_104] = ACTIONS(183),
    [anon_sym_105] = ACTIONS(183),
    [anon_sym_106] = ACTIONS(183),
    [anon_sym_107] = ACTIONS(185),
    [anon_sym_108] = ACTIONS(183),
    [anon_sym_109] = ACTIONS(183),
    [anon_sym_110] = ACTIONS(183),
    [anon_sym_111] = ACTIONS(185),
    [anon_sym_112] = ACTIONS(183),
    [anon_sym_113] = ACTIONS(183),
    [anon_sym_114] = ACTIONS(183),
    [anon_sym_115] = ACTIONS(183),
    [anon_sym_116] = ACTIONS(183),
    [anon_sym_117] = ACTIONS(183),
    [anon_sym_118] = ACTIONS(183),
    [anon_sym_119] = ACTIONS(183),
    [anon_sym_120] = ACTIONS(185),
    [anon_sym_121] = ACTIONS(183),
    [anon_sym_122] = ACTIONS(185),
    [anon_sym_123] = ACTIONS(185),
    [anon_sym_124] = ACTIONS(183),
    [anon_sym_125] = ACTIONS(185),
    [anon_sym_126] = ACTIONS(185),
    [anon_sym_127] = ACTIONS(185),
    [anon_sym_128] = ACTIONS(183),
    [anon_sym_129] = ACTIONS(183),
    [anon_sym_130] = ACTIONS(183),
    [anon_sym_131] = ACTIONS(183),
    [anon_sym_132] = ACTIONS(183),
    [anon_sym_133] = ACTIONS(183),
    [anon_sym_134] = ACTIONS(183),
    [anon_sym_135] = ACTIONS(183),
    [anon_sym_136] = ACTIONS(183),
    [anon_sym_137] = ACTIONS(185),
    [anon_sym_138] = ACTIONS(183),
    [anon_sym_139] = ACTIONS(183),
    [anon_sym_140] = ACTIONS(183),
    [anon_sym_141] = ACTIONS(183),
    [anon_sym_142] = ACTIONS(183),
    [anon_sym_143] = ACTIONS(183),
    [anon_sym_144] = ACTIONS(183),
    [anon_sym_145] = ACTIONS(183),
    [anon_sym_146] = ACTIONS(183),
    [anon_sym_147] = ACTIONS(183),
    [anon_sym_148] = ACTIONS(183),
    [anon_sym_149] = ACTIONS(183),
    [anon_sym_150] = ACTIONS(183),
    [anon_sym_151] = ACTIONS(185),
    [anon_sym_152] = ACTIONS(185),
    [anon_sym_153] = ACTIONS(185),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_bool] = ACTIONS(185),
    [anon_sym_string] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(185),
    [anon_sym_char] = ACTIONS(185),
    [anon_sym_double] = ACTIONS(185),
    [anon_sym_byte] = ACTIONS(185),
    [anon_sym_decimal] = ACTIONS(185),
    [anon_sym_sbyte] = ACTIONS(185),
    [anon_sym_short] = ACTIONS(185),
    [anon_sym_uint] = ACTIONS(185),
    [anon_sym_ushort] = ACTIONS(185),
    [anon_sym_object] = ACTIONS(185),
    [anon_sym_ulong] = ACTIONS(185),
    [anon_sym_154] = ACTIONS(185),
    [anon_sym_155] = ACTIONS(185),
    [anon_sym_156] = ACTIONS(185),
    [anon_sym_157] = ACTIONS(185),
    [anon_sym_158] = ACTIONS(185),
    [anon_sym_159] = ACTIONS(183),
    [anon_sym_160] = ACTIONS(183),
    [anon_sym_161] = ACTIONS(185),
    [anon_sym_162] = ACTIONS(183),
    [anon_sym_163] = ACTIONS(185),
    [anon_sym_164] = ACTIONS(185),
    [anon_sym_165] = ACTIONS(185),
    [anon_sym_166] = ACTIONS(185),
    [anon_sym_167] = ACTIONS(185),
    [anon_sym_168] = ACTIONS(185),
    [anon_sym_169] = ACTIONS(185),
    [anon_sym_170] = ACTIONS(185),
    [anon_sym_171] = ACTIONS(183),
    [anon_sym_172] = ACTIONS(183),
    [anon_sym_173] = ACTIONS(183),
    [anon_sym_174] = ACTIONS(183),
    [anon_sym_175] = ACTIONS(183),
    [anon_sym_176] = ACTIONS(183),
    [anon_sym_177] = ACTIONS(183),
    [anon_sym_178] = ACTIONS(183),
    [anon_sym_179] = ACTIONS(183),
    [anon_sym_180] = ACTIONS(183),
    [anon_sym_181] = ACTIONS(183),
    [anon_sym_182] = ACTIONS(183),
    [anon_sym_183] = ACTIONS(183),
    [anon_sym_184] = ACTIONS(183),
    [anon_sym_185] = ACTIONS(183),
    [anon_sym_186] = ACTIONS(185),
    [anon_sym_187] = ACTIONS(183),
    [anon_sym_188] = ACTIONS(183),
    [anon_sym_189] = ACTIONS(183),
    [anon_sym_190] = ACTIONS(185),
    [anon_sym_191] = ACTIONS(185),
    [anon_sym_192] = ACTIONS(185),
    [anon_sym_193] = ACTIONS(185),
    [anon_sym_194] = ACTIONS(185),
    [anon_sym_195] = ACTIONS(185),
    [anon_sym_196] = ACTIONS(185),
    [anon_sym_197] = ACTIONS(185),
    [anon_sym_198] = ACTIONS(185),
    [anon_sym_199] = ACTIONS(183),
    [anon_sym_200] = ACTIONS(183),
    [anon_sym_201] = ACTIONS(183),
    [anon_sym_202] = ACTIONS(183),
    [anon_sym_203] = ACTIONS(183),
    [anon_sym_204] = ACTIONS(183),
    [anon_sym_205] = ACTIONS(183),
    [anon_sym_206] = ACTIONS(183),
    [anon_sym_207] = ACTIONS(183),
    [anon_sym_208] = ACTIONS(183),
    [anon_sym_209] = ACTIONS(183),
    [anon_sym_210] = ACTIONS(183),
    [anon_sym_211] = ACTIONS(185),
    [anon_sym_212] = ACTIONS(185),
    [anon_sym_213] = ACTIONS(183),
    [anon_sym_214] = ACTIONS(183),
    [anon_sym_215] = ACTIONS(183),
    [sym_type] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [aux_sym_z_token1] = ACTIONS(185),
    [aux_sym_z_token2] = ACTIONS(185),
    [aux_sym_z_token3] = ACTIONS(183),
    [sym_str] = ACTIONS(183),
    [sym_note] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_216] = ACTIONS(183),
    [anon_sym_217] = ACTIONS(183),
    [anon_sym_218] = ACTIONS(185),
    [anon_sym_219] = ACTIONS(185),
    [anon_sym_220] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [sym_int] = ACTIONS(185),
    [anon_sym_null] = ACTIONS(185),
    [anon_sym_221] = ACTIONS(183),
    [sym_real] = ACTIONS(185),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_id] = ACTIONS(189),
    [anon_sym_public] = ACTIONS(189),
    [anon_sym_internal] = ACTIONS(189),
    [anon_sym_protected] = ACTIONS(189),
    [anon_sym_private] = ACTIONS(189),
    [anon_sym_static] = ACTIONS(189),
    [anon_sym_abstract] = ACTIONS(189),
    [anon_sym_const] = ACTIONS(189),
    [anon_sym_extern] = ACTIONS(189),
    [anon_sym_override] = ACTIONS(189),
    [anon_sym_partial] = ACTIONS(189),
    [anon_sym_readonly] = ACTIONS(189),
    [anon_sym_sealed] = ACTIONS(189),
    [anon_sym_unsafe] = ACTIONS(189),
    [anon_sym_virtual] = ACTIONS(189),
    [anon_sym_volatile] = ACTIONS(189),
    [anon_sym_explicit] = ACTIONS(189),
    [anon_sym_implicit] = ACTIONS(189),
    [anon_sym_] = ACTIONS(187),
    [anon_sym_2] = ACTIONS(187),
    [anon_sym_3] = ACTIONS(187),
    [anon_sym_4] = ACTIONS(189),
    [anon_sym_5] = ACTIONS(187),
    [anon_sym_6] = ACTIONS(187),
    [anon_sym_7] = ACTIONS(187),
    [anon_sym_8] = ACTIONS(189),
    [anon_sym_9] = ACTIONS(189),
    [anon_sym_10] = ACTIONS(187),
    [anon_sym_11] = ACTIONS(187),
    [anon_sym_12] = ACTIONS(187),
    [anon_sym_13] = ACTIONS(189),
    [anon_sym_14] = ACTIONS(189),
    [anon_sym_15] = ACTIONS(189),
    [anon_sym_16] = ACTIONS(187),
    [anon_sym_17] = ACTIONS(189),
    [anon_sym_18] = ACTIONS(187),
    [anon_sym_19] = ACTIONS(189),
    [anon_sym_20] = ACTIONS(187),
    [anon_sym_21] = ACTIONS(189),
    [anon_sym_22] = ACTIONS(187),
    [anon_sym_23] = ACTIONS(187),
    [anon_sym_24] = ACTIONS(189),
    [anon_sym_25] = ACTIONS(187),
    [anon_sym_26] = ACTIONS(187),
    [anon_sym_27] = ACTIONS(189),
    [anon_sym_28] = ACTIONS(189),
    [anon_sym_29] = ACTIONS(189),
    [anon_sym_30] = ACTIONS(189),
    [anon_sym_31] = ACTIONS(187),
    [anon_sym_32] = ACTIONS(187),
    [anon_sym_class] = ACTIONS(189),
    [anon_sym_interface] = ACTIONS(189),
    [anon_sym_struct] = ACTIONS(189),
    [anon_sym_enum] = ACTIONS(189),
    [anon_sym_var] = ACTIONS(189),
    [anon_sym_delegate] = ACTIONS(189),
    [anon_sym_33] = ACTIONS(187),
    [anon_sym_34] = ACTIONS(187),
    [anon_sym_35] = ACTIONS(187),
    [anon_sym_36] = ACTIONS(187),
    [anon_sym_37] = ACTIONS(187),
    [anon_sym_38] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_39] = ACTIONS(187),
    [anon_sym_40] = ACTIONS(187),
    [anon_sym_41] = ACTIONS(187),
    [anon_sym_42] = ACTIONS(187),
    [anon_sym_43] = ACTIONS(187),
    [anon_sym_44] = ACTIONS(187),
    [anon_sym_45] = ACTIONS(187),
    [anon_sym_46] = ACTIONS(187),
    [anon_sym_47] = ACTIONS(187),
    [anon_sym_48] = ACTIONS(187),
    [anon_sym_49] = ACTIONS(187),
    [anon_sym_50] = ACTIONS(189),
    [anon_sym_51] = ACTIONS(187),
    [anon_sym_52] = ACTIONS(187),
    [anon_sym_53] = ACTIONS(187),
    [anon_sym_54] = ACTIONS(187),
    [anon_sym_55] = ACTIONS(189),
    [anon_sym_56] = ACTIONS(189),
    [anon_sym_57] = ACTIONS(187),
    [anon_sym_58] = ACTIONS(187),
    [anon_sym_59] = ACTIONS(189),
    [anon_sym_60] = ACTIONS(187),
    [anon_sym_61] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(189),
    [anon_sym_62] = ACTIONS(187),
    [anon_sym_async] = ACTIONS(189),
    [anon_sym_await] = ACTIONS(189),
    [anon_sym_by] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_else] = ACTIONS(189),
    [anon_sym_foreach] = ACTIONS(189),
    [anon_sym_in] = ACTIONS(189),
    [anon_sym_for] = ACTIONS(189),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_while] = ACTIONS(189),
    [anon_sym_switch] = ACTIONS(189),
    [anon_sym_case] = ACTIONS(189),
    [anon_sym_break] = ACTIONS(189),
    [anon_sym_yield] = ACTIONS(189),
    [anon_sym_try] = ACTIONS(189),
    [anon_sym_catch] = ACTIONS(189),
    [anon_sym_finally] = ACTIONS(189),
    [anon_sym_continue] = ACTIONS(189),
    [anon_sym_from] = ACTIONS(189),
    [anon_sym_where] = ACTIONS(189),
    [anon_sym_select] = ACTIONS(189),
    [anon_sym_throw] = ACTIONS(189),
    [anon_sym_join] = ACTIONS(189),
    [anon_sym_goto] = ACTIONS(189),
    [anon_sym_lock] = ACTIONS(189),
    [anon_sym_orderby] = ACTIONS(189),
    [anon_sym_63] = ACTIONS(187),
    [anon_sym_64] = ACTIONS(187),
    [anon_sym_65] = ACTIONS(187),
    [anon_sym_66] = ACTIONS(187),
    [anon_sym_67] = ACTIONS(189),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(187),
    [anon_sym_68] = ACTIONS(187),
    [anon_sym_69] = ACTIONS(187),
    [anon_sym_70] = ACTIONS(187),
    [anon_sym_71] = ACTIONS(187),
    [anon_sym_72] = ACTIONS(187),
    [anon_sym_73] = ACTIONS(187),
    [anon_sym_74] = ACTIONS(187),
    [anon_sym_75] = ACTIONS(187),
    [anon_sym_76] = ACTIONS(187),
    [anon_sym_77] = ACTIONS(187),
    [anon_sym_78] = ACTIONS(187),
    [anon_sym_79] = ACTIONS(189),
    [anon_sym_80] = ACTIONS(187),
    [anon_sym_81] = ACTIONS(187),
    [anon_sym_82] = ACTIONS(187),
    [anon_sym_83] = ACTIONS(187),
    [anon_sym_84] = ACTIONS(187),
    [anon_sym_85] = ACTIONS(187),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(187),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(187),
    [anon_sym_86] = ACTIONS(187),
    [anon_sym_87] = ACTIONS(187),
    [anon_sym_88] = ACTIONS(187),
    [anon_sym_89] = ACTIONS(187),
    [anon_sym_90] = ACTIONS(187),
    [anon_sym_91] = ACTIONS(189),
    [anon_sym_92] = ACTIONS(187),
    [anon_sym_93] = ACTIONS(187),
    [anon_sym_94] = ACTIONS(189),
    [anon_sym_95] = ACTIONS(187),
    [anon_sym_96] = ACTIONS(187),
    [anon_sym_97] = ACTIONS(187),
    [anon_sym_98] = ACTIONS(187),
    [anon_sym_99] = ACTIONS(187),
    [anon_sym_100] = ACTIONS(189),
    [anon_sym_101] = ACTIONS(189),
    [anon_sym_102] = ACTIONS(187),
    [anon_sym_103] = ACTIONS(187),
    [anon_sym_add] = ACTIONS(189),
    [anon_sym_checked] = ACTIONS(189),
    [anon_sym_into] = ACTIONS(189),
    [anon_sym_nameof] = ACTIONS(189),
    [anon_sym_new] = ACTIONS(189),
    [anon_sym_using] = ACTIONS(189),
    [anon_sym_value] = ACTIONS(189),
    [anon_sym_global] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_operator] = ACTIONS(189),
    [anon_sym_params] = ACTIONS(189),
    [anon_sym_this] = ACTIONS(189),
    [anon_sym_typeof] = ACTIONS(189),
    [anon_sym_default] = ACTIONS(189),
    [anon_sym_equals] = ACTIONS(189),
    [anon_sym_long] = ACTIONS(189),
    [anon_sym_out] = ACTIONS(189),
    [anon_sym_ref] = ACTIONS(189),
    [anon_sym_sizeof] = ACTIONS(189),
    [anon_sym_descending] = ACTIONS(189),
    [anon_sym_ascending] = ACTIONS(189),
    [anon_sym_dynamic] = ACTIONS(189),
    [anon_sym_fixed] = ACTIONS(189),
    [anon_sym_group] = ACTIONS(189),
    [anon_sym_is] = ACTIONS(189),
    [anon_sym_get] = ACTIONS(189),
    [anon_sym_set] = ACTIONS(189),
    [anon_sym_on] = ACTIONS(189),
    [anon_sym_remove] = ACTIONS(189),
    [anon_sym_stackalloc] = ACTIONS(189),
    [anon_sym_unchecked] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(189),
    [anon_sym_base] = ACTIONS(189),
    [anon_sym_104] = ACTIONS(187),
    [anon_sym_105] = ACTIONS(187),
    [anon_sym_106] = ACTIONS(187),
    [anon_sym_107] = ACTIONS(189),
    [anon_sym_108] = ACTIONS(187),
    [anon_sym_109] = ACTIONS(187),
    [anon_sym_110] = ACTIONS(187),
    [anon_sym_111] = ACTIONS(189),
    [anon_sym_112] = ACTIONS(187),
    [anon_sym_113] = ACTIONS(187),
    [anon_sym_114] = ACTIONS(187),
    [anon_sym_115] = ACTIONS(187),
    [anon_sym_116] = ACTIONS(187),
    [anon_sym_117] = ACTIONS(187),
    [anon_sym_118] = ACTIONS(187),
    [anon_sym_119] = ACTIONS(187),
    [anon_sym_120] = ACTIONS(189),
    [anon_sym_121] = ACTIONS(187),
    [anon_sym_122] = ACTIONS(189),
    [anon_sym_123] = ACTIONS(189),
    [anon_sym_124] = ACTIONS(187),
    [anon_sym_125] = ACTIONS(189),
    [anon_sym_126] = ACTIONS(189),
    [anon_sym_127] = ACTIONS(189),
    [anon_sym_128] = ACTIONS(187),
    [anon_sym_129] = ACTIONS(187),
    [anon_sym_130] = ACTIONS(187),
    [anon_sym_131] = ACTIONS(187),
    [anon_sym_132] = ACTIONS(187),
    [anon_sym_133] = ACTIONS(187),
    [anon_sym_134] = ACTIONS(187),
    [anon_sym_135] = ACTIONS(187),
    [anon_sym_136] = ACTIONS(187),
    [anon_sym_137] = ACTIONS(189),
    [anon_sym_138] = ACTIONS(187),
    [anon_sym_139] = ACTIONS(187),
    [anon_sym_140] = ACTIONS(187),
    [anon_sym_141] = ACTIONS(187),
    [anon_sym_142] = ACTIONS(187),
    [anon_sym_143] = ACTIONS(187),
    [anon_sym_144] = ACTIONS(187),
    [anon_sym_145] = ACTIONS(187),
    [anon_sym_146] = ACTIONS(187),
    [anon_sym_147] = ACTIONS(187),
    [anon_sym_148] = ACTIONS(187),
    [anon_sym_149] = ACTIONS(187),
    [anon_sym_150] = ACTIONS(187),
    [anon_sym_151] = ACTIONS(189),
    [anon_sym_152] = ACTIONS(189),
    [anon_sym_153] = ACTIONS(189),
    [anon_sym_int] = ACTIONS(189),
    [anon_sym_bool] = ACTIONS(189),
    [anon_sym_string] = ACTIONS(189),
    [anon_sym_float] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(189),
    [anon_sym_double] = ACTIONS(189),
    [anon_sym_byte] = ACTIONS(189),
    [anon_sym_decimal] = ACTIONS(189),
    [anon_sym_sbyte] = ACTIONS(189),
    [anon_sym_short] = ACTIONS(189),
    [anon_sym_uint] = ACTIONS(189),
    [anon_sym_ushort] = ACTIONS(189),
    [anon_sym_object] = ACTIONS(189),
    [anon_sym_ulong] = ACTIONS(189),
    [anon_sym_154] = ACTIONS(189),
    [anon_sym_155] = ACTIONS(189),
    [anon_sym_156] = ACTIONS(189),
    [anon_sym_157] = ACTIONS(189),
    [anon_sym_158] = ACTIONS(189),
    [anon_sym_159] = ACTIONS(187),
    [anon_sym_160] = ACTIONS(187),
    [anon_sym_161] = ACTIONS(189),
    [anon_sym_162] = ACTIONS(187),
    [anon_sym_163] = ACTIONS(189),
    [anon_sym_164] = ACTIONS(189),
    [anon_sym_165] = ACTIONS(189),
    [anon_sym_166] = ACTIONS(189),
    [anon_sym_167] = ACTIONS(189),
    [anon_sym_168] = ACTIONS(189),
    [anon_sym_169] = ACTIONS(189),
    [anon_sym_170] = ACTIONS(189),
    [anon_sym_171] = ACTIONS(187),
    [anon_sym_172] = ACTIONS(187),
    [anon_sym_173] = ACTIONS(187),
    [anon_sym_174] = ACTIONS(187),
    [anon_sym_175] = ACTIONS(187),
    [anon_sym_176] = ACTIONS(187),
    [anon_sym_177] = ACTIONS(187),
    [anon_sym_178] = ACTIONS(187),
    [anon_sym_179] = ACTIONS(187),
    [anon_sym_180] = ACTIONS(187),
    [anon_sym_181] = ACTIONS(187),
    [anon_sym_182] = ACTIONS(187),
    [anon_sym_183] = ACTIONS(187),
    [anon_sym_184] = ACTIONS(187),
    [anon_sym_185] = ACTIONS(187),
    [anon_sym_186] = ACTIONS(189),
    [anon_sym_187] = ACTIONS(187),
    [anon_sym_188] = ACTIONS(187),
    [anon_sym_189] = ACTIONS(187),
    [anon_sym_190] = ACTIONS(189),
    [anon_sym_191] = ACTIONS(189),
    [anon_sym_192] = ACTIONS(189),
    [anon_sym_193] = ACTIONS(189),
    [anon_sym_194] = ACTIONS(189),
    [anon_sym_195] = ACTIONS(189),
    [anon_sym_196] = ACTIONS(189),
    [anon_sym_197] = ACTIONS(189),
    [anon_sym_198] = ACTIONS(189),
    [anon_sym_199] = ACTIONS(187),
    [anon_sym_200] = ACTIONS(187),
    [anon_sym_201] = ACTIONS(187),
    [anon_sym_202] = ACTIONS(187),
    [anon_sym_203] = ACTIONS(187),
    [anon_sym_204] = ACTIONS(187),
    [anon_sym_205] = ACTIONS(187),
    [anon_sym_206] = ACTIONS(187),
    [anon_sym_207] = ACTIONS(187),
    [anon_sym_208] = ACTIONS(187),
    [anon_sym_209] = ACTIONS(187),
    [anon_sym_210] = ACTIONS(187),
    [anon_sym_211] = ACTIONS(189),
    [anon_sym_212] = ACTIONS(189),
    [anon_sym_213] = ACTIONS(187),
    [anon_sym_214] = ACTIONS(187),
    [anon_sym_215] = ACTIONS(187),
    [sym_type] = ACTIONS(187),
    [sym_comment] = ACTIONS(187),
    [aux_sym_z_token1] = ACTIONS(189),
    [aux_sym_z_token2] = ACTIONS(189),
    [aux_sym_z_token3] = ACTIONS(187),
    [sym_str] = ACTIONS(187),
    [sym_note] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_216] = ACTIONS(187),
    [anon_sym_217] = ACTIONS(187),
    [anon_sym_218] = ACTIONS(189),
    [anon_sym_219] = ACTIONS(189),
    [anon_sym_220] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [sym_int] = ACTIONS(189),
    [anon_sym_null] = ACTIONS(189),
    [anon_sym_221] = ACTIONS(187),
    [sym_real] = ACTIONS(189),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_id] = ACTIONS(193),
    [anon_sym_public] = ACTIONS(193),
    [anon_sym_internal] = ACTIONS(193),
    [anon_sym_protected] = ACTIONS(193),
    [anon_sym_private] = ACTIONS(193),
    [anon_sym_static] = ACTIONS(193),
    [anon_sym_abstract] = ACTIONS(193),
    [anon_sym_const] = ACTIONS(193),
    [anon_sym_extern] = ACTIONS(193),
    [anon_sym_override] = ACTIONS(193),
    [anon_sym_partial] = ACTIONS(193),
    [anon_sym_readonly] = ACTIONS(193),
    [anon_sym_sealed] = ACTIONS(193),
    [anon_sym_unsafe] = ACTIONS(193),
    [anon_sym_virtual] = ACTIONS(193),
    [anon_sym_volatile] = ACTIONS(193),
    [anon_sym_explicit] = ACTIONS(193),
    [anon_sym_implicit] = ACTIONS(193),
    [anon_sym_] = ACTIONS(191),
    [anon_sym_2] = ACTIONS(191),
    [anon_sym_3] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(191),
    [anon_sym_6] = ACTIONS(191),
    [anon_sym_7] = ACTIONS(191),
    [anon_sym_8] = ACTIONS(193),
    [anon_sym_9] = ACTIONS(193),
    [anon_sym_10] = ACTIONS(191),
    [anon_sym_11] = ACTIONS(191),
    [anon_sym_12] = ACTIONS(191),
    [anon_sym_13] = ACTIONS(193),
    [anon_sym_14] = ACTIONS(193),
    [anon_sym_15] = ACTIONS(193),
    [anon_sym_16] = ACTIONS(191),
    [anon_sym_17] = ACTIONS(193),
    [anon_sym_18] = ACTIONS(191),
    [anon_sym_19] = ACTIONS(193),
    [anon_sym_20] = ACTIONS(191),
    [anon_sym_21] = ACTIONS(193),
    [anon_sym_22] = ACTIONS(191),
    [anon_sym_23] = ACTIONS(191),
    [anon_sym_24] = ACTIONS(193),
    [anon_sym_25] = ACTIONS(191),
    [anon_sym_26] = ACTIONS(191),
    [anon_sym_27] = ACTIONS(193),
    [anon_sym_28] = ACTIONS(193),
    [anon_sym_29] = ACTIONS(193),
    [anon_sym_30] = ACTIONS(193),
    [anon_sym_31] = ACTIONS(191),
    [anon_sym_32] = ACTIONS(191),
    [anon_sym_class] = ACTIONS(193),
    [anon_sym_interface] = ACTIONS(193),
    [anon_sym_struct] = ACTIONS(193),
    [anon_sym_enum] = ACTIONS(193),
    [anon_sym_var] = ACTIONS(193),
    [anon_sym_delegate] = ACTIONS(193),
    [anon_sym_33] = ACTIONS(191),
    [anon_sym_34] = ACTIONS(191),
    [anon_sym_35] = ACTIONS(191),
    [anon_sym_36] = ACTIONS(191),
    [anon_sym_37] = ACTIONS(191),
    [anon_sym_38] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_39] = ACTIONS(191),
    [anon_sym_40] = ACTIONS(191),
    [anon_sym_41] = ACTIONS(191),
    [anon_sym_42] = ACTIONS(191),
    [anon_sym_43] = ACTIONS(191),
    [anon_sym_44] = ACTIONS(191),
    [anon_sym_45] = ACTIONS(191),
    [anon_sym_46] = ACTIONS(191),
    [anon_sym_47] = ACTIONS(191),
    [anon_sym_48] = ACTIONS(191),
    [anon_sym_49] = ACTIONS(191),
    [anon_sym_50] = ACTIONS(193),
    [anon_sym_51] = ACTIONS(191),
    [anon_sym_52] = ACTIONS(191),
    [anon_sym_53] = ACTIONS(191),
    [anon_sym_54] = ACTIONS(191),
    [anon_sym_55] = ACTIONS(193),
    [anon_sym_56] = ACTIONS(193),
    [anon_sym_57] = ACTIONS(191),
    [anon_sym_58] = ACTIONS(191),
    [anon_sym_59] = ACTIONS(193),
    [anon_sym_60] = ACTIONS(191),
    [anon_sym_61] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(193),
    [anon_sym_62] = ACTIONS(191),
    [anon_sym_async] = ACTIONS(193),
    [anon_sym_await] = ACTIONS(193),
    [anon_sym_by] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_else] = ACTIONS(193),
    [anon_sym_foreach] = ACTIONS(193),
    [anon_sym_in] = ACTIONS(193),
    [anon_sym_for] = ACTIONS(193),
    [anon_sym_do] = ACTIONS(193),
    [anon_sym_while] = ACTIONS(193),
    [anon_sym_switch] = ACTIONS(193),
    [anon_sym_case] = ACTIONS(193),
    [anon_sym_break] = ACTIONS(193),
    [anon_sym_yield] = ACTIONS(193),
    [anon_sym_try] = ACTIONS(193),
    [anon_sym_catch] = ACTIONS(193),
    [anon_sym_finally] = ACTIONS(193),
    [anon_sym_continue] = ACTIONS(193),
    [anon_sym_from] = ACTIONS(193),
    [anon_sym_where] = ACTIONS(193),
    [anon_sym_select] = ACTIONS(193),
    [anon_sym_throw] = ACTIONS(193),
    [anon_sym_join] = ACTIONS(193),
    [anon_sym_goto] = ACTIONS(193),
    [anon_sym_lock] = ACTIONS(193),
    [anon_sym_orderby] = ACTIONS(193),
    [anon_sym_63] = ACTIONS(191),
    [anon_sym_64] = ACTIONS(191),
    [anon_sym_65] = ACTIONS(191),
    [anon_sym_66] = ACTIONS(191),
    [anon_sym_67] = ACTIONS(193),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(191),
    [anon_sym_68] = ACTIONS(191),
    [anon_sym_69] = ACTIONS(191),
    [anon_sym_70] = ACTIONS(191),
    [anon_sym_71] = ACTIONS(191),
    [anon_sym_72] = ACTIONS(191),
    [anon_sym_73] = ACTIONS(191),
    [anon_sym_74] = ACTIONS(191),
    [anon_sym_75] = ACTIONS(191),
    [anon_sym_76] = ACTIONS(191),
    [anon_sym_77] = ACTIONS(191),
    [anon_sym_78] = ACTIONS(191),
    [anon_sym_79] = ACTIONS(193),
    [anon_sym_80] = ACTIONS(191),
    [anon_sym_81] = ACTIONS(191),
    [anon_sym_82] = ACTIONS(191),
    [anon_sym_83] = ACTIONS(191),
    [anon_sym_84] = ACTIONS(191),
    [anon_sym_85] = ACTIONS(191),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(191),
    [anon_sym_LPAREN_RPAREN3] = ACTIONS(191),
    [anon_sym_86] = ACTIONS(191),
    [anon_sym_87] = ACTIONS(191),
    [anon_sym_88] = ACTIONS(191),
    [anon_sym_89] = ACTIONS(191),
    [anon_sym_90] = ACTIONS(191),
    [anon_sym_91] = ACTIONS(193),
    [anon_sym_92] = ACTIONS(191),
    [anon_sym_93] = ACTIONS(191),
    [anon_sym_94] = ACTIONS(193),
    [anon_sym_95] = ACTIONS(191),
    [anon_sym_96] = ACTIONS(191),
    [anon_sym_97] = ACTIONS(191),
    [anon_sym_98] = ACTIONS(191),
    [anon_sym_99] = ACTIONS(191),
    [anon_sym_100] = ACTIONS(193),
    [anon_sym_101] = ACTIONS(193),
    [anon_sym_102] = ACTIONS(191),
    [anon_sym_103] = ACTIONS(191),
    [anon_sym_add] = ACTIONS(193),
    [anon_sym_checked] = ACTIONS(193),
    [anon_sym_into] = ACTIONS(193),
    [anon_sym_nameof] = ACTIONS(193),
    [anon_sym_new] = ACTIONS(193),
    [anon_sym_using] = ACTIONS(193),
    [anon_sym_value] = ACTIONS(193),
    [anon_sym_global] = ACTIONS(193),
    [anon_sym_let] = ACTIONS(193),
    [anon_sym_operator] = ACTIONS(193),
    [anon_sym_params] = ACTIONS(193),
    [anon_sym_this] = ACTIONS(193),
    [anon_sym_typeof] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(193),
    [anon_sym_equals] = ACTIONS(193),
    [anon_sym_long] = ACTIONS(193),
    [anon_sym_out] = ACTIONS(193),
    [anon_sym_ref] = ACTIONS(193),
    [anon_sym_sizeof] = ACTIONS(193),
    [anon_sym_descending] = ACTIONS(193),
    [anon_sym_ascending] = ACTIONS(193),
    [anon_sym_dynamic] = ACTIONS(193),
    [anon_sym_fixed] = ACTIONS(193),
    [anon_sym_group] = ACTIONS(193),
    [anon_sym_is] = ACTIONS(193),
    [anon_sym_get] = ACTIONS(193),
    [anon_sym_set] = ACTIONS(193),
    [anon_sym_on] = ACTIONS(193),
    [anon_sym_remove] = ACTIONS(193),
    [anon_sym_stackalloc] = ACTIONS(193),
    [anon_sym_unchecked] = ACTIONS(193),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_base] = ACTIONS(193),
    [anon_sym_104] = ACTIONS(191),
    [anon_sym_105] = ACTIONS(191),
    [anon_sym_106] = ACTIONS(191),
    [anon_sym_107] = ACTIONS(193),
    [anon_sym_108] = ACTIONS(191),
    [anon_sym_109] = ACTIONS(191),
    [anon_sym_110] = ACTIONS(191),
    [anon_sym_111] = ACTIONS(193),
    [anon_sym_112] = ACTIONS(191),
    [anon_sym_113] = ACTIONS(191),
    [anon_sym_114] = ACTIONS(191),
    [anon_sym_115] = ACTIONS(191),
    [anon_sym_116] = ACTIONS(191),
    [anon_sym_117] = ACTIONS(191),
    [anon_sym_118] = ACTIONS(191),
    [anon_sym_119] = ACTIONS(191),
    [anon_sym_120] = ACTIONS(193),
    [anon_sym_121] = ACTIONS(191),
    [anon_sym_122] = ACTIONS(193),
    [anon_sym_123] = ACTIONS(193),
    [anon_sym_124] = ACTIONS(191),
    [anon_sym_125] = ACTIONS(193),
    [anon_sym_126] = ACTIONS(193),
    [anon_sym_127] = ACTIONS(193),
    [anon_sym_128] = ACTIONS(191),
    [anon_sym_129] = ACTIONS(191),
    [anon_sym_130] = ACTIONS(191),
    [anon_sym_131] = ACTIONS(191),
    [anon_sym_132] = ACTIONS(191),
    [anon_sym_133] = ACTIONS(191),
    [anon_sym_134] = ACTIONS(191),
    [anon_sym_135] = ACTIONS(191),
    [anon_sym_136] = ACTIONS(191),
    [anon_sym_137] = ACTIONS(193),
    [anon_sym_138] = ACTIONS(191),
    [anon_sym_139] = ACTIONS(191),
    [anon_sym_140] = ACTIONS(191),
    [anon_sym_141] = ACTIONS(191),
    [anon_sym_142] = ACTIONS(191),
    [anon_sym_143] = ACTIONS(191),
    [anon_sym_144] = ACTIONS(191),
    [anon_sym_145] = ACTIONS(191),
    [anon_sym_146] = ACTIONS(191),
    [anon_sym_147] = ACTIONS(191),
    [anon_sym_148] = ACTIONS(191),
    [anon_sym_149] = ACTIONS(191),
    [anon_sym_150] = ACTIONS(191),
    [anon_sym_151] = ACTIONS(193),
    [anon_sym_152] = ACTIONS(193),
    [anon_sym_153] = ACTIONS(193),
    [anon_sym_int] = ACTIONS(193),
    [anon_sym_bool] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(193),
    [anon_sym_float] = ACTIONS(193),
    [anon_sym_char] = ACTIONS(193),
    [anon_sym_double] = ACTIONS(193),
    [anon_sym_byte] = ACTIONS(193),
    [anon_sym_decimal] = ACTIONS(193),
    [anon_sym_sbyte] = ACTIONS(193),
    [anon_sym_short] = ACTIONS(193),
    [anon_sym_uint] = ACTIONS(193),
    [anon_sym_ushort] = ACTIONS(193),
    [anon_sym_object] = ACTIONS(193),
    [anon_sym_ulong] = ACTIONS(193),
    [anon_sym_154] = ACTIONS(193),
    [anon_sym_155] = ACTIONS(193),
    [anon_sym_156] = ACTIONS(193),
    [anon_sym_157] = ACTIONS(193),
    [anon_sym_158] = ACTIONS(193),
    [anon_sym_159] = ACTIONS(191),
    [anon_sym_160] = ACTIONS(191),
    [anon_sym_161] = ACTIONS(193),
    [anon_sym_162] = ACTIONS(191),
    [anon_sym_163] = ACTIONS(193),
    [anon_sym_164] = ACTIONS(193),
    [anon_sym_165] = ACTIONS(193),
    [anon_sym_166] = ACTIONS(193),
    [anon_sym_167] = ACTIONS(193),
    [anon_sym_168] = ACTIONS(193),
    [anon_sym_169] = ACTIONS(193),
    [anon_sym_170] = ACTIONS(193),
    [anon_sym_171] = ACTIONS(191),
    [anon_sym_172] = ACTIONS(191),
    [anon_sym_173] = ACTIONS(191),
    [anon_sym_174] = ACTIONS(191),
    [anon_sym_175] = ACTIONS(191),
    [anon_sym_176] = ACTIONS(191),
    [anon_sym_177] = ACTIONS(191),
    [anon_sym_178] = ACTIONS(191),
    [anon_sym_179] = ACTIONS(191),
    [anon_sym_180] = ACTIONS(191),
    [anon_sym_181] = ACTIONS(191),
    [anon_sym_182] = ACTIONS(191),
    [anon_sym_183] = ACTIONS(191),
    [anon_sym_184] = ACTIONS(191),
    [anon_sym_185] = ACTIONS(191),
    [anon_sym_186] = ACTIONS(193),
    [anon_sym_187] = ACTIONS(191),
    [anon_sym_188] = ACTIONS(191),
    [anon_sym_189] = ACTIONS(191),
    [anon_sym_190] = ACTIONS(193),
    [anon_sym_191] = ACTIONS(193),
    [anon_sym_192] = ACTIONS(193),
    [anon_sym_193] = ACTIONS(193),
    [anon_sym_194] = ACTIONS(193),
    [anon_sym_195] = ACTIONS(193),
    [anon_sym_196] = ACTIONS(193),
    [anon_sym_197] = ACTIONS(193),
    [anon_sym_198] = ACTIONS(193),
    [anon_sym_199] = ACTIONS(191),
    [anon_sym_200] = ACTIONS(191),
    [anon_sym_201] = ACTIONS(191),
    [anon_sym_202] = ACTIONS(191),
    [anon_sym_203] = ACTIONS(191),
    [anon_sym_204] = ACTIONS(191),
    [anon_sym_205] = ACTIONS(191),
    [anon_sym_206] = ACTIONS(191),
    [anon_sym_207] = ACTIONS(191),
    [anon_sym_208] = ACTIONS(191),
    [anon_sym_209] = ACTIONS(191),
    [anon_sym_210] = ACTIONS(191),
    [anon_sym_211] = ACTIONS(193),
    [anon_sym_212] = ACTIONS(193),
    [anon_sym_213] = ACTIONS(191),
    [anon_sym_214] = ACTIONS(191),
    [anon_sym_215] = ACTIONS(191),
    [sym_type] = ACTIONS(191),
    [sym_comment] = ACTIONS(191),
    [aux_sym_z_token1] = ACTIONS(193),
    [aux_sym_z_token2] = ACTIONS(193),
    [aux_sym_z_token3] = ACTIONS(191),
    [sym_str] = ACTIONS(191),
    [sym_note] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_216] = ACTIONS(191),
    [anon_sym_217] = ACTIONS(191),
    [anon_sym_218] = ACTIONS(193),
    [anon_sym_219] = ACTIONS(193),
    [anon_sym_220] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_int] = ACTIONS(193),
    [anon_sym_null] = ACTIONS(193),
    [anon_sym_221] = ACTIONS(191),
    [sym_real] = ACTIONS(193),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(195), 1,
      aux_sym_char_token1,
    ACTIONS(197), 1,
      sym_escape_sequence,
  [7] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 7,
  [SMALL_STATE(20)] = 11,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(13),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(13),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(16),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(16),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(15),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(11),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(18),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(12),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(13),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(13),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_z, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bt, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bt, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cat, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Howl(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_id,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
