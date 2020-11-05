#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 308
#define ALIAS_COUNT 0
#define TOKEN_COUNT 290
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
  anon_sym_class = 44,
  anon_sym_interface = 45,
  anon_sym_struct = 46,
  anon_sym_enum = 47,
  anon_sym_var = 48,
  anon_sym_delegate = 49,
  anon_sym_26 = 50,
  anon_sym_27 = 51,
  anon_sym_28 = 52,
  anon_sym_29 = 53,
  anon_sym_30 = 54,
  anon_sym_31 = 55,
  anon_sym_PLUS = 56,
  anon_sym_DASH = 57,
  anon_sym_32 = 58,
  anon_sym_33 = 59,
  anon_sym_34 = 60,
  anon_sym_35 = 61,
  anon_sym_36 = 62,
  anon_sym_37 = 63,
  anon_sym_38 = 64,
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
  anon_sym_return = 77,
  anon_sym_51 = 78,
  anon_sym_async = 79,
  anon_sym_await = 80,
  anon_sym_by = 81,
  anon_sym_if = 82,
  anon_sym_else = 83,
  anon_sym_foreach = 84,
  anon_sym_in = 85,
  anon_sym_for = 86,
  anon_sym_do = 87,
  anon_sym_while = 88,
  anon_sym_switch = 89,
  anon_sym_case = 90,
  anon_sym_break = 91,
  anon_sym_yield = 92,
  anon_sym_try = 93,
  anon_sym_catch = 94,
  anon_sym_finally = 95,
  anon_sym_continue = 96,
  anon_sym_from = 97,
  anon_sym_where = 98,
  anon_sym_select = 99,
  anon_sym_throw = 100,
  anon_sym_join = 101,
  anon_sym_goto = 102,
  anon_sym_lock = 103,
  anon_sym_orderby = 104,
  anon_sym_52 = 105,
  anon_sym_53 = 106,
  anon_sym_54 = 107,
  anon_sym_55 = 108,
  anon_sym_56 = 109,
  anon_sym_LPAREN_RPAREN = 110,
  anon_sym_57 = 111,
  anon_sym_58 = 112,
  anon_sym_59 = 113,
  anon_sym_60 = 114,
  anon_sym_61 = 115,
  anon_sym_62 = 116,
  anon_sym_63 = 117,
  anon_sym_64 = 118,
  anon_sym_65 = 119,
  anon_sym_66 = 120,
  anon_sym_67 = 121,
  anon_sym_68 = 122,
  anon_sym_69 = 123,
  anon_sym_70 = 124,
  anon_sym_71 = 125,
  anon_sym_72 = 126,
  anon_sym_73 = 127,
  anon_sym_74 = 128,
  anon_sym_LPAREN_RPAREN2 = 129,
  anon_sym_75 = 130,
  anon_sym_76 = 131,
  anon_sym_77 = 132,
  anon_sym_78 = 133,
  anon_sym_79 = 134,
  anon_sym_80 = 135,
  anon_sym_81 = 136,
  anon_sym_82 = 137,
  anon_sym_83 = 138,
  anon_sym_84 = 139,
  anon_sym_85 = 140,
  anon_sym_86 = 141,
  anon_sym_87 = 142,
  anon_sym_add = 143,
  anon_sym_checked = 144,
  anon_sym_into = 145,
  anon_sym_nameof = 146,
  anon_sym_new = 147,
  anon_sym_using = 148,
  anon_sym_value = 149,
  anon_sym_global = 150,
  anon_sym_let = 151,
  anon_sym_operator = 152,
  anon_sym_params = 153,
  anon_sym_this = 154,
  anon_sym_typeof = 155,
  anon_sym_default = 156,
  anon_sym_equals = 157,
  anon_sym_long = 158,
  anon_sym_out = 159,
  anon_sym_ref = 160,
  anon_sym_sizeof = 161,
  anon_sym_descending = 162,
  anon_sym_ascending = 163,
  anon_sym_dynamic = 164,
  anon_sym_fixed = 165,
  anon_sym_group = 166,
  anon_sym_is = 167,
  anon_sym_get = 168,
  anon_sym_set = 169,
  anon_sym_on = 170,
  anon_sym_remove = 171,
  anon_sym_stackalloc = 172,
  anon_sym_unchecked = 173,
  anon_sym_as = 174,
  anon_sym_base = 175,
  anon_sym_88 = 176,
  anon_sym_89 = 177,
  anon_sym_90 = 178,
  anon_sym_91 = 179,
  anon_sym_92 = 180,
  anon_sym_93 = 181,
  anon_sym_94 = 182,
  anon_sym_95 = 183,
  anon_sym_96 = 184,
  anon_sym_97 = 185,
  anon_sym_98 = 186,
  anon_sym_99 = 187,
  anon_sym_100 = 188,
  anon_sym_101 = 189,
  anon_sym_102 = 190,
  anon_sym_103 = 191,
  anon_sym_104 = 192,
  anon_sym_105 = 193,
  anon_sym_106 = 194,
  anon_sym_107 = 195,
  anon_sym_108 = 196,
  anon_sym_109 = 197,
  anon_sym_110 = 198,
  anon_sym_111 = 199,
  anon_sym_112 = 200,
  anon_sym_113 = 201,
  anon_sym_114 = 202,
  anon_sym_115 = 203,
  anon_sym_116 = 204,
  anon_sym_int = 205,
  anon_sym_bool = 206,
  anon_sym_string = 207,
  anon_sym_float = 208,
  anon_sym_char = 209,
  anon_sym_double = 210,
  anon_sym_byte = 211,
  anon_sym_decimal = 212,
  anon_sym_sbyte = 213,
  anon_sym_short = 214,
  anon_sym_uint = 215,
  anon_sym_ushort = 216,
  anon_sym_object = 217,
  anon_sym_ulong = 218,
  anon_sym_117 = 219,
  anon_sym_118 = 220,
  anon_sym_119 = 221,
  anon_sym_120 = 222,
  anon_sym_121 = 223,
  anon_sym_122 = 224,
  anon_sym_123 = 225,
  anon_sym_124 = 226,
  anon_sym_125 = 227,
  anon_sym_126 = 228,
  anon_sym_127 = 229,
  anon_sym_128 = 230,
  anon_sym_129 = 231,
  anon_sym_130 = 232,
  anon_sym_131 = 233,
  anon_sym_132 = 234,
  anon_sym_133 = 235,
  anon_sym_134 = 236,
  anon_sym_135 = 237,
  anon_sym_136 = 238,
  anon_sym_137 = 239,
  anon_sym_138 = 240,
  anon_sym_139 = 241,
  anon_sym_140 = 242,
  anon_sym_141 = 243,
  anon_sym_142 = 244,
  anon_sym_143 = 245,
  anon_sym_144 = 246,
  anon_sym_145 = 247,
  anon_sym_146 = 248,
  anon_sym_147 = 249,
  anon_sym_148 = 250,
  anon_sym_149 = 251,
  anon_sym_150 = 252,
  anon_sym_151 = 253,
  anon_sym_152 = 254,
  anon_sym_153 = 255,
  anon_sym_154 = 256,
  anon_sym_155 = 257,
  anon_sym_156 = 258,
  anon_sym_157 = 259,
  anon_sym_158 = 260,
  anon_sym_159 = 261,
  anon_sym_160 = 262,
  anon_sym_161 = 263,
  anon_sym_162 = 264,
  anon_sym_163 = 265,
  anon_sym_164 = 266,
  anon_sym_165 = 267,
  anon_sym_166 = 268,
  anon_sym_167 = 269,
  sym_type = 270,
  sym_comment = 271,
  aux_sym_z_token1 = 272,
  aux_sym_z_token2 = 273,
  aux_sym_z_token3 = 274,
  sym_str = 275,
  anon_sym_true = 276,
  anon_sym_false = 277,
  anon_sym_168 = 278,
  anon_sym_169 = 279,
  anon_sym_170 = 280,
  anon_sym_171 = 281,
  anon_sym_172 = 282,
  anon_sym_SQUOTE = 283,
  aux_sym_char_token1 = 284,
  sym_escape_sequence = 285,
  sym_int = 286,
  anon_sym_null = 287,
  anon_sym_173 = 288,
  sym_real = 289,
  sym_ = 290,
  sym__e = 291,
  sym__lit = 292,
  sym_modifiers = 293,
  sym_mod = 294,
  sym_cat = 295,
  sym_op = 296,
  sym_return = 297,
  sym_flow = 298,
  sym_key = 299,
  sym_prim = 300,
  sym_z = 301,
  sym_bool = 302,
  sym_bt = 303,
  sym_char = 304,
  sym_null = 305,
  aux_sym__repeat1 = 306,
  aux_sym_modifiers_repeat1 = 307,
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
  [anon_sym_8] = "‒",
  [anon_sym_9] = "︲̥̑",
  [anon_sym_10] = "︲̑",
  [anon_sym_11] = "◠̥",
  [anon_sym_12] = "◠",
  [anon_sym_13] = "︲̥",
  [anon_sym_14] = "︲",
  [anon_sym_15] = "▰̥",
  [anon_sym_16] = "▰",
  [anon_sym_17] = "☋",
  [anon_sym_18] = "ᴸ",
  [anon_sym_19] = "⁺",
  [anon_sym_20] = "ᴾ",
  [anon_sym_21] = "⌷",
  [anon_sym_22] = "∘",
  [anon_sym_23] = "ᵛ",
  [anon_sym_24] = "🔒",
  [anon_sym_25] = "⒪",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_var] = "var",
  [anon_sym_delegate] = "delegate",
  [anon_sym_26] = "⊓",
  [anon_sym_27] = "○",
  [anon_sym_28] = "𐋆",
  [anon_sym_29] = "⍥",
  [anon_sym_30] = "𐋂",
  [anon_sym_31] = "⊟",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_32] = "🝠",
  [anon_sym_33] = "⎚",
  [anon_sym_34] = "→",
  [anon_sym_35] = "☰",
  [anon_sym_36] = "≠",
  [anon_sym_37] = "≥",
  [anon_sym_38] = "≤",
  [anon_sym_39] = "∧",
  [anon_sym_40] = "∨",
  [anon_sym_41] = "ᐧ",
  [anon_sym_42] = "⁝",
  [anon_sym_43] = "❙",
  [anon_sym_44] = "৴",
  [anon_sym_45] = "ᖾ",
  [anon_sym_46] = "¹",
  [anon_sym_47] = "❚",
  [anon_sym_48] = "ˮ",
  [anon_sym_49] = "≫",
  [anon_sym_50] = "×",
  [anon_sym_return] = "return",
  [anon_sym_51] = "⮐",
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
  [anon_sym_52] = "⤳",
  [anon_sym_53] = "⤴",
  [anon_sym_54] = "⤵",
  [anon_sym_55] = "∀",
  [anon_sym_56] = "〰",
  [anon_sym_LPAREN_RPAREN] = "(˙▿˙)",
  [anon_sym_57] = "◿",
  [anon_sym_58] = "◺",
  [anon_sym_59] = "∈",
  [anon_sym_60] = "⟳",
  [anon_sym_61] = "⟲",
  [anon_sym_62] = "⤭",
  [anon_sym_63] = "⥰",
  [anon_sym_64] = "～",
  [anon_sym_65] = "⤇",
  [anon_sym_66] = "¦",
  [anon_sym_67] = "⤏",
  [anon_sym_68] = "㆑",
  [anon_sym_69] = "⤬",
  [anon_sym_70] = "⟆",
  [anon_sym_71] = "⏂",
  [anon_sym_72] = "⟾",
  [anon_sym_73] = "↯",
  [anon_sym_74] = "⇤",
  [anon_sym_LPAREN_RPAREN2] = "(╯°□°)╯",
  [anon_sym_75] = "‖",
  [anon_sym_76] = "¿",
  [anon_sym_77] = "▸",
  [anon_sym_78] = "⏢",
  [anon_sym_79] = "⍈",
  [anon_sym_80] = "⩓",
  [anon_sym_81] = "⍰",
  [anon_sym_82] = "❰",
  [anon_sym_83] = "❱",
  [anon_sym_84] = "⸨",
  [anon_sym_85] = "⸩",
  [anon_sym_86] = "⁅",
  [anon_sym_87] = "⁆",
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
  [anon_sym_88] = "⊐̥",
  [anon_sym_89] = "⊐",
  [anon_sym_90] = "☡̱ʿ",
  [anon_sym_91] = "■̠ʿ",
  [anon_sym_92] = "◇̠ʾ",
  [anon_sym_93] = "☡̱ʾ",
  [anon_sym_94] = "˙",
  [anon_sym_95] = "⁰",
  [anon_sym_96] = "ˢ",
  [anon_sym_97] = "み",
  [anon_sym_98] = "⏰",
  [anon_sym_99] = "◇̠",
  [anon_sym_100] = "☡̱",
  [anon_sym_101] = "■̠",
  [anon_sym_102] = "⌽",
  [anon_sym_103] = "ⓧ̱",
  [anon_sym_104] = "𝟾̱",
  [anon_sym_105] = "⨕",
  [anon_sym_106] = "╭",
  [anon_sym_107] = "╰",
  [anon_sym_108] = "⌢",
  [anon_sym_109] = "⦿",
  [anon_sym_110] = "𝚜",
  [anon_sym_111] = "𝚛",
  [anon_sym_112] = "𝚙",
  [anon_sym_113] = "ʾ",
  [anon_sym_114] = "ʿ",
  [anon_sym_115] = "ᴼ",
  [anon_sym_116] = "⩔",
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
  [anon_sym_117] = "ᆞ",
  [anon_sym_118] = "ㄹ",
  [anon_sym_119] = "⨴",
  [anon_sym_120] = "⨮",
  [anon_sym_121] = "エ",
  [anon_sym_122] = "⫫",
  [anon_sym_123] = "ㅇ",
  [anon_sym_124] = "ᆨ",
  [anon_sym_125] = "ᆩ",
  [anon_sym_126] = "ᅮ",
  [anon_sym_127] = "ᅭ",
  [anon_sym_128] = "ㅅ",
  [anon_sym_129] = "ㅆ",
  [anon_sym_130] = "ᄍ",
  [anon_sym_131] = "⊡",
  [anon_sym_132] = "∙",
  [anon_sym_133] = "⒜",
  [anon_sym_134] = "⒡",
  [anon_sym_135] = "𝕄",
  [anon_sym_136] = "𝕊",
  [anon_sym_137] = "ℚ",
  [anon_sym_138] = "𝕂",
  [anon_sym_139] = "𝔼",
  [anon_sym_140] = "‡",
  [anon_sym_141] = "𝕃",
  [anon_sym_142] = "√",
  [anon_sym_143] = "∑",
  [anon_sym_144] = "𝛑",
  [anon_sym_145] = "ロ",
  [anon_sym_146] = "⫙",
  [anon_sym_147] = "ᇅ",
  [anon_sym_148] = "フ",
  [anon_sym_149] = "シ",
  [anon_sym_150] = "タ",
  [anon_sym_151] = "ト",
  [anon_sym_152] = "メ",
  [anon_sym_153] = "メ̂",
  [anon_sym_154] = "⒯",
  [anon_sym_155] = "𝛿𝚝",
  [anon_sym_156] = "∠ʳ",
  [anon_sym_157] = "∠°",
  [anon_sym_158] = "⊣",
  [anon_sym_159] = "⊢",
  [anon_sym_160] = "⊥",
  [anon_sym_161] = "⊤",
  [anon_sym_162] = "⫪",
  [anon_sym_163] = "⟛",
  [anon_sym_164] = "⑂",
  [anon_sym_165] = "▷",
  [anon_sym_166] = "𝟾",
  [anon_sym_167] = "ⓧ",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [aux_sym_z_token1] = "z_token1",
  [aux_sym_z_token2] = "z_token2",
  [aux_sym_z_token3] = "z_token3",
  [sym_str] = "str",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_168] = "✓",
  [anon_sym_169] = "✗",
  [anon_sym_170] = "◇",
  [anon_sym_171] = "☡",
  [anon_sym_172] = "■",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_int] = "int",
  [anon_sym_null] = "null",
  [anon_sym_173] = "∅",
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
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_28] = anon_sym_28,
  [anon_sym_29] = anon_sym_29,
  [anon_sym_30] = anon_sym_30,
  [anon_sym_31] = anon_sym_31,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_33] = anon_sym_33,
  [anon_sym_34] = anon_sym_34,
  [anon_sym_35] = anon_sym_35,
  [anon_sym_36] = anon_sym_36,
  [anon_sym_37] = anon_sym_37,
  [anon_sym_38] = anon_sym_38,
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
  [anon_sym_return] = anon_sym_return,
  [anon_sym_51] = anon_sym_51,
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
  [anon_sym_52] = anon_sym_52,
  [anon_sym_53] = anon_sym_53,
  [anon_sym_54] = anon_sym_54,
  [anon_sym_55] = anon_sym_55,
  [anon_sym_56] = anon_sym_56,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_57] = anon_sym_57,
  [anon_sym_58] = anon_sym_58,
  [anon_sym_59] = anon_sym_59,
  [anon_sym_60] = anon_sym_60,
  [anon_sym_61] = anon_sym_61,
  [anon_sym_62] = anon_sym_62,
  [anon_sym_63] = anon_sym_63,
  [anon_sym_64] = anon_sym_64,
  [anon_sym_65] = anon_sym_65,
  [anon_sym_66] = anon_sym_66,
  [anon_sym_67] = anon_sym_67,
  [anon_sym_68] = anon_sym_68,
  [anon_sym_69] = anon_sym_69,
  [anon_sym_70] = anon_sym_70,
  [anon_sym_71] = anon_sym_71,
  [anon_sym_72] = anon_sym_72,
  [anon_sym_73] = anon_sym_73,
  [anon_sym_74] = anon_sym_74,
  [anon_sym_LPAREN_RPAREN2] = anon_sym_LPAREN_RPAREN2,
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
  [anon_sym_86] = anon_sym_86,
  [anon_sym_87] = anon_sym_87,
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
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [aux_sym_z_token1] = aux_sym_z_token1,
  [aux_sym_z_token2] = aux_sym_z_token2,
  [aux_sym_z_token3] = aux_sym_z_token3,
  [sym_str] = sym_str,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_168] = anon_sym_168,
  [anon_sym_169] = anon_sym_169,
  [anon_sym_170] = anon_sym_170,
  [anon_sym_171] = anon_sym_171,
  [anon_sym_172] = anon_sym_172,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_int] = sym_int,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_173] = anon_sym_173,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_32] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_51] = {
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
  [anon_sym_LPAREN_RPAREN] = {
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
  [anon_sym_62] = {
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
  [anon_sym_LPAREN_RPAREN2] = {
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
  [anon_sym_86] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_87] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [anon_sym_173] = {
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
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(186);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '0') ADVANCE(184);
      if (lookahead == '@') ADVANCE(188);
      if (lookahead == '_') ADVANCE(172);
      if (lookahead == 166) ADVANCE(93);
      if (lookahead == 185) ADVANCE(73);
      if (lookahead == 191) ADVANCE(104);
      if (lookahead == 215) ADVANCE(76);
      if (lookahead == 729) ADVANCE(122);
      if (lookahead == 1567) ADVANCE(34);
      if (lookahead == 2548) ADVANCE(72);
      if (lookahead == 8210) ADVANCE(38);
      if (lookahead == 8214) ADVANCE(103);
      if (lookahead == 8225) ADVANCE(152);
      if (lookahead == 8261) ADVANCE(114);
      if (lookahead == 8262) ADVANCE(115);
      if (lookahead == 8285) ADVANCE(70);
      if (lookahead == 8304) ADVANCE(123);
      if (lookahead == 8314) ADVANCE(48);
      if (lookahead == 8474) ADVANCE(149);
      if (lookahead == 8594) ADVANCE(63);
      if (lookahead == 8623) ADVANCE(100);
      if (lookahead == 8676) ADVANCE(101);
      if (lookahead == 8704) ADVANCE(81);
      if (lookahead == 8709) ADVANCE(209);
      if (lookahead == 8712) ADVANCE(86);
      if (lookahead == 8721) ADVANCE(155);
      if (lookahead == 8728) ADVANCE(50);
      if (lookahead == 8729) ADVANCE(144);
      if (lookahead == 8730) ADVANCE(154);
      if (lookahead == 8736) ADVANCE(8);
      if (lookahead == 8743) ADVANCE(68);
      if (lookahead == 8744) ADVANCE(69);
      if (lookahead == 8800) ADVANCE(65);
      if (lookahead == 8804) ADVANCE(67);
      if (lookahead == 8805) ADVANCE(66);
      if (lookahead == 8811) ADVANCE(75);
      if (lookahead == 8848) ADVANCE(117);
      if (lookahead == 8851) ADVANCE(53);
      if (lookahead == 8863) ADVANCE(58);
      if (lookahead == 8865) ADVANCE(143);
      if (lookahead == 8866) ADVANCE(163);
      if (lookahead == 8867) ADVANCE(162);
      if (lookahead == 8868) ADVANCE(165);
      if (lookahead == 8869) ADVANCE(164);
      if (lookahead == 8994) ADVANCE(134);
      if (lookahead == 9015) ADVANCE(49);
      if (lookahead == 9021) ADVANCE(128);
      if (lookahead == 9032) ADVANCE(107);
      if (lookahead == 9033) ADVANCE(36);
      if (lookahead == 9052) ADVANCE(35);
      if (lookahead == 9061) ADVANCE(56);
      if (lookahead == 9072) ADVANCE(109);
      if (lookahead == 9114) ADVANCE(62);
      if (lookahead == 9154) ADVANCE(98);
      if (lookahead == 9178) ADVANCE(37);
      if (lookahead == 9186) ADVANCE(106);
      if (lookahead == 9200) ADVANCE(124);
      if (lookahead == 9282) ADVANCE(168);
      if (lookahead == 9372) ADVANCE(145);
      if (lookahead == 9376) ADVANCE(31);
      if (lookahead == 9377) ADVANCE(146);
      if (lookahead == 9380) ADVANCE(32);
      if (lookahead == 9386) ADVANCE(52);
      if (lookahead == 9391) ADVANCE(158);
      if (lookahead == 9447) ADVANCE(171);
      if (lookahead == 9581) ADVANCE(132);
      if (lookahead == 9584) ADVANCE(133);
      if (lookahead == 9632) ADVANCE(196);
      if (lookahead == 9648) ADVANCE(46);
      if (lookahead == 9655) ADVANCE(169);
      if (lookahead == 9656) ADVANCE(105);
      if (lookahead == 9671) ADVANCE(194);
      if (lookahead == 9675) ADVANCE(54);
      if (lookahead == 9696) ADVANCE(42);
      if (lookahead == 9722) ADVANCE(85);
      if (lookahead == 9727) ADVANCE(84);
      if (lookahead == 9739) ADVANCE(47);
      if (lookahead == 9761) ADVANCE(195);
      if (lookahead == 9776) ADVANCE(64);
      if (lookahead == 10003) ADVANCE(192);
      if (lookahead == 10007) ADVANCE(193);
      if (lookahead == 10073) ADVANCE(71);
      if (lookahead == 10074) ADVANCE(74);
      if (lookahead == 10096) ADVANCE(110);
      if (lookahead == 10097) ADVANCE(111);
      if (lookahead == 10182) ADVANCE(97);
      if (lookahead == 10203) ADVANCE(167);
      if (lookahead == 10226) ADVANCE(88);
      if (lookahead == 10227) ADVANCE(87);
      if (lookahead == 10238) ADVANCE(99);
      if (lookahead == 10503) ADVANCE(92);
      if (lookahead == 10511) ADVANCE(94);
      if (lookahead == 10540) ADVANCE(96);
      if (lookahead == 10541) ADVANCE(89);
      if (lookahead == 10547) ADVANCE(78);
      if (lookahead == 10548) ADVANCE(79);
      if (lookahead == 10549) ADVANCE(80);
      if (lookahead == 10608) ADVANCE(90);
      if (lookahead == 10687) ADVANCE(135);
      if (lookahead == 10773) ADVANCE(131);
      if (lookahead == 10798) ADVANCE(141);
      if (lookahead == 10804) ADVANCE(140);
      if (lookahead == 10835) ADVANCE(108);
      if (lookahead == 10836) ADVANCE(139);
      if (lookahead == 10969) ADVANCE(157);
      if (lookahead == 10986) ADVANCE(166);
      if (lookahead == 10987) ADVANCE(142);
      if (lookahead == 11152) ADVANCE(77);
      if (lookahead == 11816) ADVANCE(112);
      if (lookahead == 11817) ADVANCE(113);
      if (lookahead == 12336) ADVANCE(82);
      if (lookahead == 12689) ADVANCE(95);
      if (lookahead == 65074) ADVANCE(44);
      if (lookahead == 65374) ADVANCE(91);
      if (lookahead == 66242) ADVANCE(57);
      if (lookahead == 66246) ADVANCE(55);
      if (lookahead == 120124) ADVANCE(151);
      if (lookahead == 120130) ADVANCE(150);
      if (lookahead == 120131) ADVANCE(153);
      if (lookahead == 120132) ADVANCE(147);
      if (lookahead == 120138) ADVANCE(148);
      if (lookahead == 120473) ADVANCE(138);
      if (lookahead == 120475) ADVANCE(137);
      if (lookahead == 120476) ADVANCE(136);
      if (lookahead == 120529) ADVANCE(156);
      if (lookahead == 120575) ADVANCE(15);
      if (lookahead == 120830) ADVANCE(170);
      if (lookahead == 128274) ADVANCE(51);
      if (lookahead == 128864) ADVANCE(61);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(189);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('!' <= lookahead && lookahead <= '?')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(179);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(21);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(198);
      END_STATE();
    case 8:
      if (lookahead == 176) ADVANCE(161);
      if (lookahead == 691) ADVANCE(160);
      END_STATE();
    case 9:
      if (lookahead == 176) ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 176) ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 729) ADVANCE(2);
      END_STATE();
    case 12:
      if (lookahead == 9583) ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == 9633) ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 9663) ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 120477) ADVANCE(159);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(205);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == 805) ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_12);
      if (lookahead == 805) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_13);
      if (lookahead == 785) ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == 785) ADVANCE(40);
      if (lookahead == 805) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_16);
      if (lookahead == 805) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
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
      ACCEPT_TOKEN(anon_sym_39);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_40);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_42);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_43);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_46);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_47);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_49);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_51);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_53);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_54);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_55);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_57);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_58);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_59);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_60);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_61);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_62);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_63);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_65);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_66);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_67);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_69);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_70);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_71);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_72);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_73);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_74);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_75);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_76);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_77);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_78);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_79);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_80);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_81);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_82);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_83);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_86);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_87);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_88);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_89);
      if (lookahead == 805) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_90);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_91);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_92);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_93);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_95);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_98);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_99);
      if (lookahead == 702) ADVANCE(120);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_100);
      if (lookahead == 702) ADVANCE(121);
      if (lookahead == 703) ADVANCE(118);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_101);
      if (lookahead == 703) ADVANCE(119);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_102);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_103);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_104);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_105);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_106);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_107);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_108);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_109);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_110);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_111);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_112);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_116);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_119);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_120);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_122);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_131);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_132);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_133);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_134);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_135);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_136);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_137);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_138);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_139);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_140);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_141);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_142);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_143);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_144);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_146);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_154);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_155);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_156);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_157);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_159);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_160);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_161);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_162);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_163);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_164);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_165);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_166);
      if (lookahead == 817) ADVANCE(130);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_167);
      if (lookahead == 817) ADVANCE(129);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'L') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(191);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(180);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(204);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(204);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == 729) ADVANCE(14);
      if (lookahead == 9583) ADVANCE(9);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(177);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_168);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_169);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_170);
      if (lookahead == 800) ADVANCE(125);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_171);
      if (lookahead == 817) ADVANCE(126);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_172);
      if (lookahead == 800) ADVANCE(127);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_173);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
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
      if (lookahead == 702) ADVANCE(21);
      if (lookahead == 703) ADVANCE(22);
      if (lookahead == 738) ADVANCE(23);
      if (lookahead == 750) ADVANCE(24);
      if (lookahead == 4365) ADVANCE(25);
      if (lookahead == 4461) ADVANCE(26);
      if (lookahead == 4462) ADVANCE(27);
      if (lookahead == 4510) ADVANCE(28);
      if (lookahead == 4520) ADVANCE(29);
      if (lookahead == 4521) ADVANCE(30);
      if (lookahead == 4549) ADVANCE(31);
      if (lookahead == 5159) ADVANCE(32);
      if (lookahead == 5566) ADVANCE(33);
      if (lookahead == 7480) ADVANCE(34);
      if (lookahead == 7484) ADVANCE(35);
      if (lookahead == 7486) ADVANCE(36);
      if (lookahead == 7515) ADVANCE(37);
      if (lookahead == 12415) ADVANCE(38);
      if (lookahead == 12456) ADVANCE(39);
      if (lookahead == 12471) ADVANCE(40);
      if (lookahead == 12479) ADVANCE(41);
      if (lookahead == 12488) ADVANCE(42);
      if (lookahead == 12501) ADVANCE(43);
      if (lookahead == 12513) ADVANCE(44);
      if (lookahead == 12525) ADVANCE(45);
      if (lookahead == 12601) ADVANCE(46);
      if (lookahead == 12613) ADVANCE(47);
      if (lookahead == 12614) ADVANCE(48);
      if (lookahead == 12615) ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'q') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_113);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_114);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_96);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_48);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_130);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_127);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_126);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_117);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_124);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_125);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_147);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_115);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_97);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_121);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_149);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_150);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_151);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_148);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_152);
      if (lookahead == 770) ADVANCE(116);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_145);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_118);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_128);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_129);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_123);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(145);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 88:
      if (lookahead == 'j') ADVANCE(162);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 98:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 101:
      if (lookahead == 'z') ADVANCE(180);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_153);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(234);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 157:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 168:
      if (lookahead == 'v') ADVANCE(251);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 208:
      if (lookahead == 'k') ADVANCE(287);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 213:
      if (lookahead == 'k') ADVANCE(289);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 255:
      if (lookahead == 'v') ADVANCE(322);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 262:
      if (lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 265:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 266:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 268:
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 272:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 274:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 276:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(342);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 310:
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 311:
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 314:
      if (lookahead == 'b') ADVANCE(369);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 316:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 328:
      if (lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 331:
      if (lookahead == 'g') ADVANCE(384);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 333:
      if (lookahead == 'h') ADVANCE(386);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(387);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 360:
      if (lookahead == 'y') ADVANCE(403);
      END_STATE();
    case 361:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_nameof);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 369:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 388:
      if (lookahead == 'k') ADVANCE(416);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 406:
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 414:
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 420:
      if (lookahead == 'g') ADVANCE(435);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_explicit);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 432:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_ascending);
      END_STATE();
    case 436:
      if (lookahead == 'g') ADVANCE(441);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 439:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_unchecked);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 442:
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
  [18] = {.lex_state = 7},
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
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_26] = ACTIONS(1),
    [anon_sym_27] = ACTIONS(1),
    [anon_sym_28] = ACTIONS(1),
    [anon_sym_29] = ACTIONS(1),
    [anon_sym_30] = ACTIONS(1),
    [anon_sym_31] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_33] = ACTIONS(1),
    [anon_sym_34] = ACTIONS(1),
    [anon_sym_35] = ACTIONS(1),
    [anon_sym_36] = ACTIONS(1),
    [anon_sym_37] = ACTIONS(1),
    [anon_sym_38] = ACTIONS(1),
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
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_51] = ACTIONS(1),
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
    [anon_sym_52] = ACTIONS(1),
    [anon_sym_53] = ACTIONS(1),
    [anon_sym_54] = ACTIONS(1),
    [anon_sym_55] = ACTIONS(1),
    [anon_sym_56] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_57] = ACTIONS(1),
    [anon_sym_58] = ACTIONS(1),
    [anon_sym_59] = ACTIONS(1),
    [anon_sym_60] = ACTIONS(1),
    [anon_sym_61] = ACTIONS(1),
    [anon_sym_62] = ACTIONS(1),
    [anon_sym_63] = ACTIONS(1),
    [anon_sym_64] = ACTIONS(1),
    [anon_sym_65] = ACTIONS(1),
    [anon_sym_66] = ACTIONS(1),
    [anon_sym_67] = ACTIONS(1),
    [anon_sym_68] = ACTIONS(1),
    [anon_sym_69] = ACTIONS(1),
    [anon_sym_70] = ACTIONS(1),
    [anon_sym_71] = ACTIONS(1),
    [anon_sym_72] = ACTIONS(1),
    [anon_sym_73] = ACTIONS(1),
    [anon_sym_74] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(1),
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
    [anon_sym_86] = ACTIONS(1),
    [anon_sym_87] = ACTIONS(1),
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
    [sym_type] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_168] = ACTIONS(1),
    [anon_sym_169] = ACTIONS(1),
    [anon_sym_170] = ACTIONS(1),
    [anon_sym_171] = ACTIONS(1),
    [anon_sym_172] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_173] = ACTIONS(1),
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
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(7),
    [anon_sym_13] = ACTIONS(7),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(9),
    [anon_sym_16] = ACTIONS(7),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(7),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(7),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(7),
    [anon_sym_24] = ACTIONS(9),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_26] = ACTIONS(13),
    [anon_sym_27] = ACTIONS(13),
    [anon_sym_28] = ACTIONS(13),
    [anon_sym_29] = ACTIONS(13),
    [anon_sym_30] = ACTIONS(13),
    [anon_sym_31] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(17),
    [anon_sym_42] = ACTIONS(15),
    [anon_sym_43] = ACTIONS(15),
    [anon_sym_44] = ACTIONS(17),
    [anon_sym_45] = ACTIONS(17),
    [anon_sym_46] = ACTIONS(15),
    [anon_sym_47] = ACTIONS(15),
    [anon_sym_48] = ACTIONS(17),
    [anon_sym_49] = ACTIONS(15),
    [anon_sym_50] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_51] = ACTIONS(21),
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
    [anon_sym_52] = ACTIONS(25),
    [anon_sym_53] = ACTIONS(25),
    [anon_sym_54] = ACTIONS(25),
    [anon_sym_55] = ACTIONS(25),
    [anon_sym_56] = ACTIONS(23),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(25),
    [anon_sym_57] = ACTIONS(25),
    [anon_sym_58] = ACTIONS(25),
    [anon_sym_59] = ACTIONS(25),
    [anon_sym_60] = ACTIONS(25),
    [anon_sym_61] = ACTIONS(25),
    [anon_sym_62] = ACTIONS(25),
    [anon_sym_63] = ACTIONS(25),
    [anon_sym_64] = ACTIONS(25),
    [anon_sym_65] = ACTIONS(25),
    [anon_sym_66] = ACTIONS(25),
    [anon_sym_67] = ACTIONS(25),
    [anon_sym_68] = ACTIONS(23),
    [anon_sym_69] = ACTIONS(25),
    [anon_sym_70] = ACTIONS(25),
    [anon_sym_71] = ACTIONS(25),
    [anon_sym_72] = ACTIONS(25),
    [anon_sym_73] = ACTIONS(25),
    [anon_sym_74] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(25),
    [anon_sym_75] = ACTIONS(25),
    [anon_sym_76] = ACTIONS(25),
    [anon_sym_77] = ACTIONS(25),
    [anon_sym_78] = ACTIONS(25),
    [anon_sym_79] = ACTIONS(25),
    [anon_sym_80] = ACTIONS(25),
    [anon_sym_81] = ACTIONS(25),
    [anon_sym_82] = ACTIONS(25),
    [anon_sym_83] = ACTIONS(25),
    [anon_sym_84] = ACTIONS(23),
    [anon_sym_85] = ACTIONS(23),
    [anon_sym_86] = ACTIONS(25),
    [anon_sym_87] = ACTIONS(25),
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
    [anon_sym_88] = ACTIONS(29),
    [anon_sym_89] = ACTIONS(27),
    [anon_sym_90] = ACTIONS(29),
    [anon_sym_91] = ACTIONS(29),
    [anon_sym_92] = ACTIONS(29),
    [anon_sym_93] = ACTIONS(29),
    [anon_sym_94] = ACTIONS(27),
    [anon_sym_95] = ACTIONS(29),
    [anon_sym_96] = ACTIONS(27),
    [anon_sym_97] = ACTIONS(27),
    [anon_sym_98] = ACTIONS(29),
    [anon_sym_99] = ACTIONS(27),
    [anon_sym_100] = ACTIONS(27),
    [anon_sym_101] = ACTIONS(27),
    [anon_sym_102] = ACTIONS(29),
    [anon_sym_103] = ACTIONS(29),
    [anon_sym_104] = ACTIONS(29),
    [anon_sym_105] = ACTIONS(29),
    [anon_sym_106] = ACTIONS(29),
    [anon_sym_107] = ACTIONS(29),
    [anon_sym_108] = ACTIONS(29),
    [anon_sym_109] = ACTIONS(29),
    [anon_sym_110] = ACTIONS(29),
    [anon_sym_111] = ACTIONS(29),
    [anon_sym_112] = ACTIONS(29),
    [anon_sym_113] = ACTIONS(27),
    [anon_sym_114] = ACTIONS(27),
    [anon_sym_115] = ACTIONS(27),
    [anon_sym_116] = ACTIONS(29),
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
    [anon_sym_117] = ACTIONS(31),
    [anon_sym_118] = ACTIONS(31),
    [anon_sym_119] = ACTIONS(33),
    [anon_sym_120] = ACTIONS(33),
    [anon_sym_121] = ACTIONS(31),
    [anon_sym_122] = ACTIONS(33),
    [anon_sym_123] = ACTIONS(31),
    [anon_sym_124] = ACTIONS(31),
    [anon_sym_125] = ACTIONS(31),
    [anon_sym_126] = ACTIONS(31),
    [anon_sym_127] = ACTIONS(31),
    [anon_sym_128] = ACTIONS(31),
    [anon_sym_129] = ACTIONS(31),
    [anon_sym_130] = ACTIONS(31),
    [anon_sym_131] = ACTIONS(33),
    [anon_sym_132] = ACTIONS(33),
    [anon_sym_133] = ACTIONS(33),
    [anon_sym_134] = ACTIONS(33),
    [anon_sym_135] = ACTIONS(33),
    [anon_sym_136] = ACTIONS(33),
    [anon_sym_137] = ACTIONS(33),
    [anon_sym_138] = ACTIONS(33),
    [anon_sym_139] = ACTIONS(33),
    [anon_sym_140] = ACTIONS(33),
    [anon_sym_141] = ACTIONS(33),
    [anon_sym_142] = ACTIONS(33),
    [anon_sym_143] = ACTIONS(33),
    [anon_sym_144] = ACTIONS(33),
    [anon_sym_145] = ACTIONS(31),
    [anon_sym_146] = ACTIONS(33),
    [anon_sym_147] = ACTIONS(31),
    [anon_sym_148] = ACTIONS(31),
    [anon_sym_149] = ACTIONS(31),
    [anon_sym_150] = ACTIONS(31),
    [anon_sym_151] = ACTIONS(31),
    [anon_sym_152] = ACTIONS(31),
    [anon_sym_153] = ACTIONS(31),
    [anon_sym_154] = ACTIONS(33),
    [anon_sym_155] = ACTIONS(33),
    [anon_sym_156] = ACTIONS(33),
    [anon_sym_157] = ACTIONS(33),
    [anon_sym_158] = ACTIONS(33),
    [anon_sym_159] = ACTIONS(33),
    [anon_sym_160] = ACTIONS(33),
    [anon_sym_161] = ACTIONS(33),
    [anon_sym_162] = ACTIONS(33),
    [anon_sym_163] = ACTIONS(33),
    [anon_sym_164] = ACTIONS(33),
    [anon_sym_165] = ACTIONS(33),
    [anon_sym_166] = ACTIONS(31),
    [anon_sym_167] = ACTIONS(31),
    [sym_type] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [aux_sym_z_token1] = ACTIONS(37),
    [aux_sym_z_token2] = ACTIONS(37),
    [aux_sym_z_token3] = ACTIONS(39),
    [sym_str] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_168] = ACTIONS(43),
    [anon_sym_169] = ACTIONS(43),
    [anon_sym_170] = ACTIONS(45),
    [anon_sym_171] = ACTIONS(45),
    [anon_sym_172] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_int] = ACTIONS(5),
    [anon_sym_null] = ACTIONS(49),
    [anon_sym_173] = ACTIONS(51),
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
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(7),
    [anon_sym_13] = ACTIONS(7),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(9),
    [anon_sym_16] = ACTIONS(7),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(7),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(7),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(7),
    [anon_sym_24] = ACTIONS(9),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_26] = ACTIONS(13),
    [anon_sym_27] = ACTIONS(13),
    [anon_sym_28] = ACTIONS(13),
    [anon_sym_29] = ACTIONS(13),
    [anon_sym_30] = ACTIONS(13),
    [anon_sym_31] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(17),
    [anon_sym_42] = ACTIONS(15),
    [anon_sym_43] = ACTIONS(15),
    [anon_sym_44] = ACTIONS(17),
    [anon_sym_45] = ACTIONS(17),
    [anon_sym_46] = ACTIONS(15),
    [anon_sym_47] = ACTIONS(15),
    [anon_sym_48] = ACTIONS(17),
    [anon_sym_49] = ACTIONS(15),
    [anon_sym_50] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_51] = ACTIONS(21),
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
    [anon_sym_52] = ACTIONS(25),
    [anon_sym_53] = ACTIONS(25),
    [anon_sym_54] = ACTIONS(25),
    [anon_sym_55] = ACTIONS(25),
    [anon_sym_56] = ACTIONS(23),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(25),
    [anon_sym_57] = ACTIONS(25),
    [anon_sym_58] = ACTIONS(25),
    [anon_sym_59] = ACTIONS(25),
    [anon_sym_60] = ACTIONS(25),
    [anon_sym_61] = ACTIONS(25),
    [anon_sym_62] = ACTIONS(25),
    [anon_sym_63] = ACTIONS(25),
    [anon_sym_64] = ACTIONS(25),
    [anon_sym_65] = ACTIONS(25),
    [anon_sym_66] = ACTIONS(25),
    [anon_sym_67] = ACTIONS(25),
    [anon_sym_68] = ACTIONS(23),
    [anon_sym_69] = ACTIONS(25),
    [anon_sym_70] = ACTIONS(25),
    [anon_sym_71] = ACTIONS(25),
    [anon_sym_72] = ACTIONS(25),
    [anon_sym_73] = ACTIONS(25),
    [anon_sym_74] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(25),
    [anon_sym_75] = ACTIONS(25),
    [anon_sym_76] = ACTIONS(25),
    [anon_sym_77] = ACTIONS(25),
    [anon_sym_78] = ACTIONS(25),
    [anon_sym_79] = ACTIONS(25),
    [anon_sym_80] = ACTIONS(25),
    [anon_sym_81] = ACTIONS(25),
    [anon_sym_82] = ACTIONS(25),
    [anon_sym_83] = ACTIONS(25),
    [anon_sym_84] = ACTIONS(23),
    [anon_sym_85] = ACTIONS(23),
    [anon_sym_86] = ACTIONS(25),
    [anon_sym_87] = ACTIONS(25),
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
    [anon_sym_88] = ACTIONS(29),
    [anon_sym_89] = ACTIONS(27),
    [anon_sym_90] = ACTIONS(29),
    [anon_sym_91] = ACTIONS(29),
    [anon_sym_92] = ACTIONS(29),
    [anon_sym_93] = ACTIONS(29),
    [anon_sym_94] = ACTIONS(27),
    [anon_sym_95] = ACTIONS(29),
    [anon_sym_96] = ACTIONS(27),
    [anon_sym_97] = ACTIONS(27),
    [anon_sym_98] = ACTIONS(29),
    [anon_sym_99] = ACTIONS(27),
    [anon_sym_100] = ACTIONS(27),
    [anon_sym_101] = ACTIONS(27),
    [anon_sym_102] = ACTIONS(29),
    [anon_sym_103] = ACTIONS(29),
    [anon_sym_104] = ACTIONS(29),
    [anon_sym_105] = ACTIONS(29),
    [anon_sym_106] = ACTIONS(29),
    [anon_sym_107] = ACTIONS(29),
    [anon_sym_108] = ACTIONS(29),
    [anon_sym_109] = ACTIONS(29),
    [anon_sym_110] = ACTIONS(29),
    [anon_sym_111] = ACTIONS(29),
    [anon_sym_112] = ACTIONS(29),
    [anon_sym_113] = ACTIONS(27),
    [anon_sym_114] = ACTIONS(27),
    [anon_sym_115] = ACTIONS(27),
    [anon_sym_116] = ACTIONS(29),
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
    [anon_sym_117] = ACTIONS(31),
    [anon_sym_118] = ACTIONS(31),
    [anon_sym_119] = ACTIONS(33),
    [anon_sym_120] = ACTIONS(33),
    [anon_sym_121] = ACTIONS(31),
    [anon_sym_122] = ACTIONS(33),
    [anon_sym_123] = ACTIONS(31),
    [anon_sym_124] = ACTIONS(31),
    [anon_sym_125] = ACTIONS(31),
    [anon_sym_126] = ACTIONS(31),
    [anon_sym_127] = ACTIONS(31),
    [anon_sym_128] = ACTIONS(31),
    [anon_sym_129] = ACTIONS(31),
    [anon_sym_130] = ACTIONS(31),
    [anon_sym_131] = ACTIONS(33),
    [anon_sym_132] = ACTIONS(33),
    [anon_sym_133] = ACTIONS(33),
    [anon_sym_134] = ACTIONS(33),
    [anon_sym_135] = ACTIONS(33),
    [anon_sym_136] = ACTIONS(33),
    [anon_sym_137] = ACTIONS(33),
    [anon_sym_138] = ACTIONS(33),
    [anon_sym_139] = ACTIONS(33),
    [anon_sym_140] = ACTIONS(33),
    [anon_sym_141] = ACTIONS(33),
    [anon_sym_142] = ACTIONS(33),
    [anon_sym_143] = ACTIONS(33),
    [anon_sym_144] = ACTIONS(33),
    [anon_sym_145] = ACTIONS(31),
    [anon_sym_146] = ACTIONS(33),
    [anon_sym_147] = ACTIONS(31),
    [anon_sym_148] = ACTIONS(31),
    [anon_sym_149] = ACTIONS(31),
    [anon_sym_150] = ACTIONS(31),
    [anon_sym_151] = ACTIONS(31),
    [anon_sym_152] = ACTIONS(31),
    [anon_sym_153] = ACTIONS(31),
    [anon_sym_154] = ACTIONS(33),
    [anon_sym_155] = ACTIONS(33),
    [anon_sym_156] = ACTIONS(33),
    [anon_sym_157] = ACTIONS(33),
    [anon_sym_158] = ACTIONS(33),
    [anon_sym_159] = ACTIONS(33),
    [anon_sym_160] = ACTIONS(33),
    [anon_sym_161] = ACTIONS(33),
    [anon_sym_162] = ACTIONS(33),
    [anon_sym_163] = ACTIONS(33),
    [anon_sym_164] = ACTIONS(33),
    [anon_sym_165] = ACTIONS(33),
    [anon_sym_166] = ACTIONS(31),
    [anon_sym_167] = ACTIONS(31),
    [sym_type] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
    [aux_sym_z_token1] = ACTIONS(37),
    [aux_sym_z_token2] = ACTIONS(37),
    [aux_sym_z_token3] = ACTIONS(39),
    [sym_str] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_168] = ACTIONS(43),
    [anon_sym_169] = ACTIONS(43),
    [anon_sym_170] = ACTIONS(45),
    [anon_sym_171] = ACTIONS(45),
    [anon_sym_172] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_int] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(49),
    [anon_sym_173] = ACTIONS(51),
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
    [anon_sym_9] = ACTIONS(67),
    [anon_sym_10] = ACTIONS(67),
    [anon_sym_11] = ACTIONS(67),
    [anon_sym_12] = ACTIONS(64),
    [anon_sym_13] = ACTIONS(64),
    [anon_sym_14] = ACTIONS(64),
    [anon_sym_15] = ACTIONS(67),
    [anon_sym_16] = ACTIONS(64),
    [anon_sym_17] = ACTIONS(67),
    [anon_sym_18] = ACTIONS(64),
    [anon_sym_19] = ACTIONS(67),
    [anon_sym_20] = ACTIONS(64),
    [anon_sym_21] = ACTIONS(67),
    [anon_sym_22] = ACTIONS(67),
    [anon_sym_23] = ACTIONS(64),
    [anon_sym_24] = ACTIONS(67),
    [anon_sym_25] = ACTIONS(67),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_interface] = ACTIONS(70),
    [anon_sym_struct] = ACTIONS(70),
    [anon_sym_enum] = ACTIONS(70),
    [anon_sym_var] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(70),
    [anon_sym_26] = ACTIONS(73),
    [anon_sym_27] = ACTIONS(73),
    [anon_sym_28] = ACTIONS(73),
    [anon_sym_29] = ACTIONS(73),
    [anon_sym_30] = ACTIONS(73),
    [anon_sym_31] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_32] = ACTIONS(76),
    [anon_sym_33] = ACTIONS(76),
    [anon_sym_34] = ACTIONS(76),
    [anon_sym_35] = ACTIONS(76),
    [anon_sym_36] = ACTIONS(76),
    [anon_sym_37] = ACTIONS(76),
    [anon_sym_38] = ACTIONS(76),
    [anon_sym_39] = ACTIONS(76),
    [anon_sym_40] = ACTIONS(76),
    [anon_sym_41] = ACTIONS(79),
    [anon_sym_42] = ACTIONS(76),
    [anon_sym_43] = ACTIONS(76),
    [anon_sym_44] = ACTIONS(79),
    [anon_sym_45] = ACTIONS(79),
    [anon_sym_46] = ACTIONS(76),
    [anon_sym_47] = ACTIONS(76),
    [anon_sym_48] = ACTIONS(79),
    [anon_sym_49] = ACTIONS(76),
    [anon_sym_50] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(82),
    [anon_sym_51] = ACTIONS(85),
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
    [anon_sym_52] = ACTIONS(91),
    [anon_sym_53] = ACTIONS(91),
    [anon_sym_54] = ACTIONS(91),
    [anon_sym_55] = ACTIONS(91),
    [anon_sym_56] = ACTIONS(88),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(91),
    [anon_sym_57] = ACTIONS(91),
    [anon_sym_58] = ACTIONS(91),
    [anon_sym_59] = ACTIONS(91),
    [anon_sym_60] = ACTIONS(91),
    [anon_sym_61] = ACTIONS(91),
    [anon_sym_62] = ACTIONS(91),
    [anon_sym_63] = ACTIONS(91),
    [anon_sym_64] = ACTIONS(91),
    [anon_sym_65] = ACTIONS(91),
    [anon_sym_66] = ACTIONS(91),
    [anon_sym_67] = ACTIONS(91),
    [anon_sym_68] = ACTIONS(88),
    [anon_sym_69] = ACTIONS(91),
    [anon_sym_70] = ACTIONS(91),
    [anon_sym_71] = ACTIONS(91),
    [anon_sym_72] = ACTIONS(91),
    [anon_sym_73] = ACTIONS(91),
    [anon_sym_74] = ACTIONS(91),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(91),
    [anon_sym_75] = ACTIONS(91),
    [anon_sym_76] = ACTIONS(91),
    [anon_sym_77] = ACTIONS(91),
    [anon_sym_78] = ACTIONS(91),
    [anon_sym_79] = ACTIONS(91),
    [anon_sym_80] = ACTIONS(91),
    [anon_sym_81] = ACTIONS(91),
    [anon_sym_82] = ACTIONS(91),
    [anon_sym_83] = ACTIONS(91),
    [anon_sym_84] = ACTIONS(88),
    [anon_sym_85] = ACTIONS(88),
    [anon_sym_86] = ACTIONS(91),
    [anon_sym_87] = ACTIONS(91),
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
    [anon_sym_88] = ACTIONS(97),
    [anon_sym_89] = ACTIONS(94),
    [anon_sym_90] = ACTIONS(97),
    [anon_sym_91] = ACTIONS(97),
    [anon_sym_92] = ACTIONS(97),
    [anon_sym_93] = ACTIONS(97),
    [anon_sym_94] = ACTIONS(94),
    [anon_sym_95] = ACTIONS(97),
    [anon_sym_96] = ACTIONS(94),
    [anon_sym_97] = ACTIONS(94),
    [anon_sym_98] = ACTIONS(97),
    [anon_sym_99] = ACTIONS(94),
    [anon_sym_100] = ACTIONS(94),
    [anon_sym_101] = ACTIONS(94),
    [anon_sym_102] = ACTIONS(97),
    [anon_sym_103] = ACTIONS(97),
    [anon_sym_104] = ACTIONS(97),
    [anon_sym_105] = ACTIONS(97),
    [anon_sym_106] = ACTIONS(97),
    [anon_sym_107] = ACTIONS(97),
    [anon_sym_108] = ACTIONS(97),
    [anon_sym_109] = ACTIONS(97),
    [anon_sym_110] = ACTIONS(97),
    [anon_sym_111] = ACTIONS(97),
    [anon_sym_112] = ACTIONS(97),
    [anon_sym_113] = ACTIONS(94),
    [anon_sym_114] = ACTIONS(94),
    [anon_sym_115] = ACTIONS(94),
    [anon_sym_116] = ACTIONS(97),
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
    [anon_sym_117] = ACTIONS(100),
    [anon_sym_118] = ACTIONS(100),
    [anon_sym_119] = ACTIONS(103),
    [anon_sym_120] = ACTIONS(103),
    [anon_sym_121] = ACTIONS(100),
    [anon_sym_122] = ACTIONS(103),
    [anon_sym_123] = ACTIONS(100),
    [anon_sym_124] = ACTIONS(100),
    [anon_sym_125] = ACTIONS(100),
    [anon_sym_126] = ACTIONS(100),
    [anon_sym_127] = ACTIONS(100),
    [anon_sym_128] = ACTIONS(100),
    [anon_sym_129] = ACTIONS(100),
    [anon_sym_130] = ACTIONS(100),
    [anon_sym_131] = ACTIONS(103),
    [anon_sym_132] = ACTIONS(103),
    [anon_sym_133] = ACTIONS(103),
    [anon_sym_134] = ACTIONS(103),
    [anon_sym_135] = ACTIONS(103),
    [anon_sym_136] = ACTIONS(103),
    [anon_sym_137] = ACTIONS(103),
    [anon_sym_138] = ACTIONS(103),
    [anon_sym_139] = ACTIONS(103),
    [anon_sym_140] = ACTIONS(103),
    [anon_sym_141] = ACTIONS(103),
    [anon_sym_142] = ACTIONS(103),
    [anon_sym_143] = ACTIONS(103),
    [anon_sym_144] = ACTIONS(103),
    [anon_sym_145] = ACTIONS(100),
    [anon_sym_146] = ACTIONS(103),
    [anon_sym_147] = ACTIONS(100),
    [anon_sym_148] = ACTIONS(100),
    [anon_sym_149] = ACTIONS(100),
    [anon_sym_150] = ACTIONS(100),
    [anon_sym_151] = ACTIONS(100),
    [anon_sym_152] = ACTIONS(100),
    [anon_sym_153] = ACTIONS(100),
    [anon_sym_154] = ACTIONS(103),
    [anon_sym_155] = ACTIONS(103),
    [anon_sym_156] = ACTIONS(103),
    [anon_sym_157] = ACTIONS(103),
    [anon_sym_158] = ACTIONS(103),
    [anon_sym_159] = ACTIONS(103),
    [anon_sym_160] = ACTIONS(103),
    [anon_sym_161] = ACTIONS(103),
    [anon_sym_162] = ACTIONS(103),
    [anon_sym_163] = ACTIONS(103),
    [anon_sym_164] = ACTIONS(103),
    [anon_sym_165] = ACTIONS(103),
    [anon_sym_166] = ACTIONS(100),
    [anon_sym_167] = ACTIONS(100),
    [sym_type] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [aux_sym_z_token1] = ACTIONS(109),
    [aux_sym_z_token2] = ACTIONS(109),
    [aux_sym_z_token3] = ACTIONS(112),
    [sym_str] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_168] = ACTIONS(118),
    [anon_sym_169] = ACTIONS(118),
    [anon_sym_170] = ACTIONS(121),
    [anon_sym_171] = ACTIONS(121),
    [anon_sym_172] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_int] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(127),
    [anon_sym_173] = ACTIONS(130),
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
    [anon_sym_9] = ACTIONS(140),
    [anon_sym_10] = ACTIONS(140),
    [anon_sym_11] = ACTIONS(140),
    [anon_sym_12] = ACTIONS(137),
    [anon_sym_13] = ACTIONS(137),
    [anon_sym_14] = ACTIONS(137),
    [anon_sym_15] = ACTIONS(140),
    [anon_sym_16] = ACTIONS(137),
    [anon_sym_17] = ACTIONS(140),
    [anon_sym_18] = ACTIONS(137),
    [anon_sym_19] = ACTIONS(140),
    [anon_sym_20] = ACTIONS(137),
    [anon_sym_21] = ACTIONS(140),
    [anon_sym_22] = ACTIONS(140),
    [anon_sym_23] = ACTIONS(137),
    [anon_sym_24] = ACTIONS(140),
    [anon_sym_25] = ACTIONS(140),
    [anon_sym_class] = ACTIONS(135),
    [anon_sym_interface] = ACTIONS(135),
    [anon_sym_struct] = ACTIONS(135),
    [anon_sym_enum] = ACTIONS(135),
    [anon_sym_var] = ACTIONS(135),
    [anon_sym_delegate] = ACTIONS(135),
    [anon_sym_26] = ACTIONS(133),
    [anon_sym_27] = ACTIONS(133),
    [anon_sym_28] = ACTIONS(133),
    [anon_sym_29] = ACTIONS(133),
    [anon_sym_30] = ACTIONS(133),
    [anon_sym_31] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_32] = ACTIONS(133),
    [anon_sym_33] = ACTIONS(133),
    [anon_sym_34] = ACTIONS(133),
    [anon_sym_35] = ACTIONS(133),
    [anon_sym_36] = ACTIONS(133),
    [anon_sym_37] = ACTIONS(133),
    [anon_sym_38] = ACTIONS(133),
    [anon_sym_39] = ACTIONS(133),
    [anon_sym_40] = ACTIONS(133),
    [anon_sym_41] = ACTIONS(135),
    [anon_sym_42] = ACTIONS(133),
    [anon_sym_43] = ACTIONS(133),
    [anon_sym_44] = ACTIONS(135),
    [anon_sym_45] = ACTIONS(135),
    [anon_sym_46] = ACTIONS(133),
    [anon_sym_47] = ACTIONS(133),
    [anon_sym_48] = ACTIONS(135),
    [anon_sym_49] = ACTIONS(133),
    [anon_sym_50] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(135),
    [anon_sym_51] = ACTIONS(133),
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
    [anon_sym_52] = ACTIONS(133),
    [anon_sym_53] = ACTIONS(133),
    [anon_sym_54] = ACTIONS(133),
    [anon_sym_55] = ACTIONS(133),
    [anon_sym_56] = ACTIONS(135),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(133),
    [anon_sym_57] = ACTIONS(133),
    [anon_sym_58] = ACTIONS(133),
    [anon_sym_59] = ACTIONS(133),
    [anon_sym_60] = ACTIONS(133),
    [anon_sym_61] = ACTIONS(133),
    [anon_sym_62] = ACTIONS(133),
    [anon_sym_63] = ACTIONS(133),
    [anon_sym_64] = ACTIONS(133),
    [anon_sym_65] = ACTIONS(133),
    [anon_sym_66] = ACTIONS(133),
    [anon_sym_67] = ACTIONS(133),
    [anon_sym_68] = ACTIONS(135),
    [anon_sym_69] = ACTIONS(133),
    [anon_sym_70] = ACTIONS(133),
    [anon_sym_71] = ACTIONS(133),
    [anon_sym_72] = ACTIONS(133),
    [anon_sym_73] = ACTIONS(133),
    [anon_sym_74] = ACTIONS(133),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(133),
    [anon_sym_75] = ACTIONS(133),
    [anon_sym_76] = ACTIONS(133),
    [anon_sym_77] = ACTIONS(133),
    [anon_sym_78] = ACTIONS(133),
    [anon_sym_79] = ACTIONS(133),
    [anon_sym_80] = ACTIONS(133),
    [anon_sym_81] = ACTIONS(133),
    [anon_sym_82] = ACTIONS(133),
    [anon_sym_83] = ACTIONS(133),
    [anon_sym_84] = ACTIONS(135),
    [anon_sym_85] = ACTIONS(135),
    [anon_sym_86] = ACTIONS(133),
    [anon_sym_87] = ACTIONS(133),
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
    [anon_sym_88] = ACTIONS(133),
    [anon_sym_89] = ACTIONS(135),
    [anon_sym_90] = ACTIONS(133),
    [anon_sym_91] = ACTIONS(133),
    [anon_sym_92] = ACTIONS(133),
    [anon_sym_93] = ACTIONS(133),
    [anon_sym_94] = ACTIONS(135),
    [anon_sym_95] = ACTIONS(133),
    [anon_sym_96] = ACTIONS(135),
    [anon_sym_97] = ACTIONS(135),
    [anon_sym_98] = ACTIONS(133),
    [anon_sym_99] = ACTIONS(135),
    [anon_sym_100] = ACTIONS(135),
    [anon_sym_101] = ACTIONS(135),
    [anon_sym_102] = ACTIONS(133),
    [anon_sym_103] = ACTIONS(133),
    [anon_sym_104] = ACTIONS(133),
    [anon_sym_105] = ACTIONS(133),
    [anon_sym_106] = ACTIONS(133),
    [anon_sym_107] = ACTIONS(133),
    [anon_sym_108] = ACTIONS(133),
    [anon_sym_109] = ACTIONS(133),
    [anon_sym_110] = ACTIONS(133),
    [anon_sym_111] = ACTIONS(133),
    [anon_sym_112] = ACTIONS(133),
    [anon_sym_113] = ACTIONS(135),
    [anon_sym_114] = ACTIONS(135),
    [anon_sym_115] = ACTIONS(135),
    [anon_sym_116] = ACTIONS(133),
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
    [anon_sym_117] = ACTIONS(135),
    [anon_sym_118] = ACTIONS(135),
    [anon_sym_119] = ACTIONS(133),
    [anon_sym_120] = ACTIONS(133),
    [anon_sym_121] = ACTIONS(135),
    [anon_sym_122] = ACTIONS(133),
    [anon_sym_123] = ACTIONS(135),
    [anon_sym_124] = ACTIONS(135),
    [anon_sym_125] = ACTIONS(135),
    [anon_sym_126] = ACTIONS(135),
    [anon_sym_127] = ACTIONS(135),
    [anon_sym_128] = ACTIONS(135),
    [anon_sym_129] = ACTIONS(135),
    [anon_sym_130] = ACTIONS(135),
    [anon_sym_131] = ACTIONS(133),
    [anon_sym_132] = ACTIONS(133),
    [anon_sym_133] = ACTIONS(133),
    [anon_sym_134] = ACTIONS(133),
    [anon_sym_135] = ACTIONS(133),
    [anon_sym_136] = ACTIONS(133),
    [anon_sym_137] = ACTIONS(133),
    [anon_sym_138] = ACTIONS(133),
    [anon_sym_139] = ACTIONS(133),
    [anon_sym_140] = ACTIONS(133),
    [anon_sym_141] = ACTIONS(133),
    [anon_sym_142] = ACTIONS(133),
    [anon_sym_143] = ACTIONS(133),
    [anon_sym_144] = ACTIONS(133),
    [anon_sym_145] = ACTIONS(135),
    [anon_sym_146] = ACTIONS(133),
    [anon_sym_147] = ACTIONS(135),
    [anon_sym_148] = ACTIONS(135),
    [anon_sym_149] = ACTIONS(135),
    [anon_sym_150] = ACTIONS(135),
    [anon_sym_151] = ACTIONS(135),
    [anon_sym_152] = ACTIONS(135),
    [anon_sym_153] = ACTIONS(135),
    [anon_sym_154] = ACTIONS(133),
    [anon_sym_155] = ACTIONS(133),
    [anon_sym_156] = ACTIONS(133),
    [anon_sym_157] = ACTIONS(133),
    [anon_sym_158] = ACTIONS(133),
    [anon_sym_159] = ACTIONS(133),
    [anon_sym_160] = ACTIONS(133),
    [anon_sym_161] = ACTIONS(133),
    [anon_sym_162] = ACTIONS(133),
    [anon_sym_163] = ACTIONS(133),
    [anon_sym_164] = ACTIONS(133),
    [anon_sym_165] = ACTIONS(133),
    [anon_sym_166] = ACTIONS(135),
    [anon_sym_167] = ACTIONS(135),
    [sym_type] = ACTIONS(133),
    [sym_comment] = ACTIONS(133),
    [aux_sym_z_token1] = ACTIONS(135),
    [aux_sym_z_token2] = ACTIONS(135),
    [aux_sym_z_token3] = ACTIONS(133),
    [sym_str] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_168] = ACTIONS(133),
    [anon_sym_169] = ACTIONS(133),
    [anon_sym_170] = ACTIONS(135),
    [anon_sym_171] = ACTIONS(135),
    [anon_sym_172] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_int] = ACTIONS(135),
    [anon_sym_null] = ACTIONS(135),
    [anon_sym_173] = ACTIONS(133),
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
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(7),
    [anon_sym_13] = ACTIONS(7),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(9),
    [anon_sym_16] = ACTIONS(7),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(7),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(7),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(7),
    [anon_sym_24] = ACTIONS(9),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(145),
    [anon_sym_interface] = ACTIONS(145),
    [anon_sym_struct] = ACTIONS(145),
    [anon_sym_enum] = ACTIONS(145),
    [anon_sym_var] = ACTIONS(145),
    [anon_sym_delegate] = ACTIONS(145),
    [anon_sym_26] = ACTIONS(143),
    [anon_sym_27] = ACTIONS(143),
    [anon_sym_28] = ACTIONS(143),
    [anon_sym_29] = ACTIONS(143),
    [anon_sym_30] = ACTIONS(143),
    [anon_sym_31] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_32] = ACTIONS(143),
    [anon_sym_33] = ACTIONS(143),
    [anon_sym_34] = ACTIONS(143),
    [anon_sym_35] = ACTIONS(143),
    [anon_sym_36] = ACTIONS(143),
    [anon_sym_37] = ACTIONS(143),
    [anon_sym_38] = ACTIONS(143),
    [anon_sym_39] = ACTIONS(143),
    [anon_sym_40] = ACTIONS(143),
    [anon_sym_41] = ACTIONS(145),
    [anon_sym_42] = ACTIONS(143),
    [anon_sym_43] = ACTIONS(143),
    [anon_sym_44] = ACTIONS(145),
    [anon_sym_45] = ACTIONS(145),
    [anon_sym_46] = ACTIONS(143),
    [anon_sym_47] = ACTIONS(143),
    [anon_sym_48] = ACTIONS(145),
    [anon_sym_49] = ACTIONS(143),
    [anon_sym_50] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_51] = ACTIONS(143),
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
    [anon_sym_52] = ACTIONS(143),
    [anon_sym_53] = ACTIONS(143),
    [anon_sym_54] = ACTIONS(143),
    [anon_sym_55] = ACTIONS(143),
    [anon_sym_56] = ACTIONS(145),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(143),
    [anon_sym_57] = ACTIONS(143),
    [anon_sym_58] = ACTIONS(143),
    [anon_sym_59] = ACTIONS(143),
    [anon_sym_60] = ACTIONS(143),
    [anon_sym_61] = ACTIONS(143),
    [anon_sym_62] = ACTIONS(143),
    [anon_sym_63] = ACTIONS(143),
    [anon_sym_64] = ACTIONS(143),
    [anon_sym_65] = ACTIONS(143),
    [anon_sym_66] = ACTIONS(143),
    [anon_sym_67] = ACTIONS(143),
    [anon_sym_68] = ACTIONS(145),
    [anon_sym_69] = ACTIONS(143),
    [anon_sym_70] = ACTIONS(143),
    [anon_sym_71] = ACTIONS(143),
    [anon_sym_72] = ACTIONS(143),
    [anon_sym_73] = ACTIONS(143),
    [anon_sym_74] = ACTIONS(143),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(143),
    [anon_sym_75] = ACTIONS(143),
    [anon_sym_76] = ACTIONS(143),
    [anon_sym_77] = ACTIONS(143),
    [anon_sym_78] = ACTIONS(143),
    [anon_sym_79] = ACTIONS(143),
    [anon_sym_80] = ACTIONS(143),
    [anon_sym_81] = ACTIONS(143),
    [anon_sym_82] = ACTIONS(143),
    [anon_sym_83] = ACTIONS(143),
    [anon_sym_84] = ACTIONS(145),
    [anon_sym_85] = ACTIONS(145),
    [anon_sym_86] = ACTIONS(143),
    [anon_sym_87] = ACTIONS(143),
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
    [anon_sym_88] = ACTIONS(143),
    [anon_sym_89] = ACTIONS(145),
    [anon_sym_90] = ACTIONS(143),
    [anon_sym_91] = ACTIONS(143),
    [anon_sym_92] = ACTIONS(143),
    [anon_sym_93] = ACTIONS(143),
    [anon_sym_94] = ACTIONS(145),
    [anon_sym_95] = ACTIONS(143),
    [anon_sym_96] = ACTIONS(145),
    [anon_sym_97] = ACTIONS(145),
    [anon_sym_98] = ACTIONS(143),
    [anon_sym_99] = ACTIONS(145),
    [anon_sym_100] = ACTIONS(145),
    [anon_sym_101] = ACTIONS(145),
    [anon_sym_102] = ACTIONS(143),
    [anon_sym_103] = ACTIONS(143),
    [anon_sym_104] = ACTIONS(143),
    [anon_sym_105] = ACTIONS(143),
    [anon_sym_106] = ACTIONS(143),
    [anon_sym_107] = ACTIONS(143),
    [anon_sym_108] = ACTIONS(143),
    [anon_sym_109] = ACTIONS(143),
    [anon_sym_110] = ACTIONS(143),
    [anon_sym_111] = ACTIONS(143),
    [anon_sym_112] = ACTIONS(143),
    [anon_sym_113] = ACTIONS(145),
    [anon_sym_114] = ACTIONS(145),
    [anon_sym_115] = ACTIONS(145),
    [anon_sym_116] = ACTIONS(143),
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
    [anon_sym_117] = ACTIONS(145),
    [anon_sym_118] = ACTIONS(145),
    [anon_sym_119] = ACTIONS(143),
    [anon_sym_120] = ACTIONS(143),
    [anon_sym_121] = ACTIONS(145),
    [anon_sym_122] = ACTIONS(143),
    [anon_sym_123] = ACTIONS(145),
    [anon_sym_124] = ACTIONS(145),
    [anon_sym_125] = ACTIONS(145),
    [anon_sym_126] = ACTIONS(145),
    [anon_sym_127] = ACTIONS(145),
    [anon_sym_128] = ACTIONS(145),
    [anon_sym_129] = ACTIONS(145),
    [anon_sym_130] = ACTIONS(145),
    [anon_sym_131] = ACTIONS(143),
    [anon_sym_132] = ACTIONS(143),
    [anon_sym_133] = ACTIONS(143),
    [anon_sym_134] = ACTIONS(143),
    [anon_sym_135] = ACTIONS(143),
    [anon_sym_136] = ACTIONS(143),
    [anon_sym_137] = ACTIONS(143),
    [anon_sym_138] = ACTIONS(143),
    [anon_sym_139] = ACTIONS(143),
    [anon_sym_140] = ACTIONS(143),
    [anon_sym_141] = ACTIONS(143),
    [anon_sym_142] = ACTIONS(143),
    [anon_sym_143] = ACTIONS(143),
    [anon_sym_144] = ACTIONS(143),
    [anon_sym_145] = ACTIONS(145),
    [anon_sym_146] = ACTIONS(143),
    [anon_sym_147] = ACTIONS(145),
    [anon_sym_148] = ACTIONS(145),
    [anon_sym_149] = ACTIONS(145),
    [anon_sym_150] = ACTIONS(145),
    [anon_sym_151] = ACTIONS(145),
    [anon_sym_152] = ACTIONS(145),
    [anon_sym_153] = ACTIONS(145),
    [anon_sym_154] = ACTIONS(143),
    [anon_sym_155] = ACTIONS(143),
    [anon_sym_156] = ACTIONS(143),
    [anon_sym_157] = ACTIONS(143),
    [anon_sym_158] = ACTIONS(143),
    [anon_sym_159] = ACTIONS(143),
    [anon_sym_160] = ACTIONS(143),
    [anon_sym_161] = ACTIONS(143),
    [anon_sym_162] = ACTIONS(143),
    [anon_sym_163] = ACTIONS(143),
    [anon_sym_164] = ACTIONS(143),
    [anon_sym_165] = ACTIONS(143),
    [anon_sym_166] = ACTIONS(145),
    [anon_sym_167] = ACTIONS(145),
    [sym_type] = ACTIONS(143),
    [sym_comment] = ACTIONS(143),
    [aux_sym_z_token1] = ACTIONS(145),
    [aux_sym_z_token2] = ACTIONS(145),
    [aux_sym_z_token3] = ACTIONS(143),
    [sym_str] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_168] = ACTIONS(143),
    [anon_sym_169] = ACTIONS(143),
    [anon_sym_170] = ACTIONS(145),
    [anon_sym_171] = ACTIONS(145),
    [anon_sym_172] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_int] = ACTIONS(145),
    [anon_sym_null] = ACTIONS(145),
    [anon_sym_173] = ACTIONS(143),
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
    [anon_sym_9] = ACTIONS(147),
    [anon_sym_10] = ACTIONS(147),
    [anon_sym_11] = ACTIONS(147),
    [anon_sym_12] = ACTIONS(149),
    [anon_sym_13] = ACTIONS(149),
    [anon_sym_14] = ACTIONS(149),
    [anon_sym_15] = ACTIONS(147),
    [anon_sym_16] = ACTIONS(149),
    [anon_sym_17] = ACTIONS(147),
    [anon_sym_18] = ACTIONS(149),
    [anon_sym_19] = ACTIONS(147),
    [anon_sym_20] = ACTIONS(149),
    [anon_sym_21] = ACTIONS(147),
    [anon_sym_22] = ACTIONS(147),
    [anon_sym_23] = ACTIONS(149),
    [anon_sym_24] = ACTIONS(147),
    [anon_sym_25] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(149),
    [anon_sym_interface] = ACTIONS(149),
    [anon_sym_struct] = ACTIONS(149),
    [anon_sym_enum] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(149),
    [anon_sym_delegate] = ACTIONS(149),
    [anon_sym_26] = ACTIONS(147),
    [anon_sym_27] = ACTIONS(147),
    [anon_sym_28] = ACTIONS(147),
    [anon_sym_29] = ACTIONS(147),
    [anon_sym_30] = ACTIONS(147),
    [anon_sym_31] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_32] = ACTIONS(147),
    [anon_sym_33] = ACTIONS(147),
    [anon_sym_34] = ACTIONS(147),
    [anon_sym_35] = ACTIONS(147),
    [anon_sym_36] = ACTIONS(147),
    [anon_sym_37] = ACTIONS(147),
    [anon_sym_38] = ACTIONS(147),
    [anon_sym_39] = ACTIONS(147),
    [anon_sym_40] = ACTIONS(147),
    [anon_sym_41] = ACTIONS(149),
    [anon_sym_42] = ACTIONS(147),
    [anon_sym_43] = ACTIONS(147),
    [anon_sym_44] = ACTIONS(149),
    [anon_sym_45] = ACTIONS(149),
    [anon_sym_46] = ACTIONS(147),
    [anon_sym_47] = ACTIONS(147),
    [anon_sym_48] = ACTIONS(149),
    [anon_sym_49] = ACTIONS(147),
    [anon_sym_50] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_51] = ACTIONS(147),
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
    [anon_sym_52] = ACTIONS(147),
    [anon_sym_53] = ACTIONS(147),
    [anon_sym_54] = ACTIONS(147),
    [anon_sym_55] = ACTIONS(147),
    [anon_sym_56] = ACTIONS(149),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(147),
    [anon_sym_57] = ACTIONS(147),
    [anon_sym_58] = ACTIONS(147),
    [anon_sym_59] = ACTIONS(147),
    [anon_sym_60] = ACTIONS(147),
    [anon_sym_61] = ACTIONS(147),
    [anon_sym_62] = ACTIONS(147),
    [anon_sym_63] = ACTIONS(147),
    [anon_sym_64] = ACTIONS(147),
    [anon_sym_65] = ACTIONS(147),
    [anon_sym_66] = ACTIONS(147),
    [anon_sym_67] = ACTIONS(147),
    [anon_sym_68] = ACTIONS(149),
    [anon_sym_69] = ACTIONS(147),
    [anon_sym_70] = ACTIONS(147),
    [anon_sym_71] = ACTIONS(147),
    [anon_sym_72] = ACTIONS(147),
    [anon_sym_73] = ACTIONS(147),
    [anon_sym_74] = ACTIONS(147),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(147),
    [anon_sym_75] = ACTIONS(147),
    [anon_sym_76] = ACTIONS(147),
    [anon_sym_77] = ACTIONS(147),
    [anon_sym_78] = ACTIONS(147),
    [anon_sym_79] = ACTIONS(147),
    [anon_sym_80] = ACTIONS(147),
    [anon_sym_81] = ACTIONS(147),
    [anon_sym_82] = ACTIONS(147),
    [anon_sym_83] = ACTIONS(147),
    [anon_sym_84] = ACTIONS(149),
    [anon_sym_85] = ACTIONS(149),
    [anon_sym_86] = ACTIONS(147),
    [anon_sym_87] = ACTIONS(147),
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
    [anon_sym_88] = ACTIONS(147),
    [anon_sym_89] = ACTIONS(149),
    [anon_sym_90] = ACTIONS(147),
    [anon_sym_91] = ACTIONS(147),
    [anon_sym_92] = ACTIONS(147),
    [anon_sym_93] = ACTIONS(147),
    [anon_sym_94] = ACTIONS(149),
    [anon_sym_95] = ACTIONS(147),
    [anon_sym_96] = ACTIONS(149),
    [anon_sym_97] = ACTIONS(149),
    [anon_sym_98] = ACTIONS(147),
    [anon_sym_99] = ACTIONS(149),
    [anon_sym_100] = ACTIONS(149),
    [anon_sym_101] = ACTIONS(149),
    [anon_sym_102] = ACTIONS(147),
    [anon_sym_103] = ACTIONS(147),
    [anon_sym_104] = ACTIONS(147),
    [anon_sym_105] = ACTIONS(147),
    [anon_sym_106] = ACTIONS(147),
    [anon_sym_107] = ACTIONS(147),
    [anon_sym_108] = ACTIONS(147),
    [anon_sym_109] = ACTIONS(147),
    [anon_sym_110] = ACTIONS(147),
    [anon_sym_111] = ACTIONS(147),
    [anon_sym_112] = ACTIONS(147),
    [anon_sym_113] = ACTIONS(149),
    [anon_sym_114] = ACTIONS(149),
    [anon_sym_115] = ACTIONS(149),
    [anon_sym_116] = ACTIONS(147),
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
    [anon_sym_117] = ACTIONS(149),
    [anon_sym_118] = ACTIONS(149),
    [anon_sym_119] = ACTIONS(147),
    [anon_sym_120] = ACTIONS(147),
    [anon_sym_121] = ACTIONS(149),
    [anon_sym_122] = ACTIONS(147),
    [anon_sym_123] = ACTIONS(149),
    [anon_sym_124] = ACTIONS(149),
    [anon_sym_125] = ACTIONS(149),
    [anon_sym_126] = ACTIONS(149),
    [anon_sym_127] = ACTIONS(149),
    [anon_sym_128] = ACTIONS(149),
    [anon_sym_129] = ACTIONS(149),
    [anon_sym_130] = ACTIONS(149),
    [anon_sym_131] = ACTIONS(147),
    [anon_sym_132] = ACTIONS(147),
    [anon_sym_133] = ACTIONS(147),
    [anon_sym_134] = ACTIONS(147),
    [anon_sym_135] = ACTIONS(147),
    [anon_sym_136] = ACTIONS(147),
    [anon_sym_137] = ACTIONS(147),
    [anon_sym_138] = ACTIONS(147),
    [anon_sym_139] = ACTIONS(147),
    [anon_sym_140] = ACTIONS(147),
    [anon_sym_141] = ACTIONS(147),
    [anon_sym_142] = ACTIONS(147),
    [anon_sym_143] = ACTIONS(147),
    [anon_sym_144] = ACTIONS(147),
    [anon_sym_145] = ACTIONS(149),
    [anon_sym_146] = ACTIONS(147),
    [anon_sym_147] = ACTIONS(149),
    [anon_sym_148] = ACTIONS(149),
    [anon_sym_149] = ACTIONS(149),
    [anon_sym_150] = ACTIONS(149),
    [anon_sym_151] = ACTIONS(149),
    [anon_sym_152] = ACTIONS(149),
    [anon_sym_153] = ACTIONS(149),
    [anon_sym_154] = ACTIONS(147),
    [anon_sym_155] = ACTIONS(147),
    [anon_sym_156] = ACTIONS(147),
    [anon_sym_157] = ACTIONS(147),
    [anon_sym_158] = ACTIONS(147),
    [anon_sym_159] = ACTIONS(147),
    [anon_sym_160] = ACTIONS(147),
    [anon_sym_161] = ACTIONS(147),
    [anon_sym_162] = ACTIONS(147),
    [anon_sym_163] = ACTIONS(147),
    [anon_sym_164] = ACTIONS(147),
    [anon_sym_165] = ACTIONS(147),
    [anon_sym_166] = ACTIONS(149),
    [anon_sym_167] = ACTIONS(149),
    [sym_type] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
    [aux_sym_z_token1] = ACTIONS(149),
    [aux_sym_z_token2] = ACTIONS(149),
    [aux_sym_z_token3] = ACTIONS(147),
    [sym_str] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_168] = ACTIONS(147),
    [anon_sym_169] = ACTIONS(147),
    [anon_sym_170] = ACTIONS(149),
    [anon_sym_171] = ACTIONS(149),
    [anon_sym_172] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_int] = ACTIONS(149),
    [anon_sym_null] = ACTIONS(149),
    [anon_sym_173] = ACTIONS(147),
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
    [anon_sym_9] = ACTIONS(151),
    [anon_sym_10] = ACTIONS(151),
    [anon_sym_11] = ACTIONS(151),
    [anon_sym_12] = ACTIONS(153),
    [anon_sym_13] = ACTIONS(153),
    [anon_sym_14] = ACTIONS(153),
    [anon_sym_15] = ACTIONS(151),
    [anon_sym_16] = ACTIONS(153),
    [anon_sym_17] = ACTIONS(151),
    [anon_sym_18] = ACTIONS(153),
    [anon_sym_19] = ACTIONS(151),
    [anon_sym_20] = ACTIONS(153),
    [anon_sym_21] = ACTIONS(151),
    [anon_sym_22] = ACTIONS(151),
    [anon_sym_23] = ACTIONS(153),
    [anon_sym_24] = ACTIONS(151),
    [anon_sym_25] = ACTIONS(151),
    [anon_sym_class] = ACTIONS(153),
    [anon_sym_interface] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(153),
    [anon_sym_enum] = ACTIONS(153),
    [anon_sym_var] = ACTIONS(153),
    [anon_sym_delegate] = ACTIONS(153),
    [anon_sym_26] = ACTIONS(151),
    [anon_sym_27] = ACTIONS(151),
    [anon_sym_28] = ACTIONS(151),
    [anon_sym_29] = ACTIONS(151),
    [anon_sym_30] = ACTIONS(151),
    [anon_sym_31] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_32] = ACTIONS(151),
    [anon_sym_33] = ACTIONS(151),
    [anon_sym_34] = ACTIONS(151),
    [anon_sym_35] = ACTIONS(151),
    [anon_sym_36] = ACTIONS(151),
    [anon_sym_37] = ACTIONS(151),
    [anon_sym_38] = ACTIONS(151),
    [anon_sym_39] = ACTIONS(151),
    [anon_sym_40] = ACTIONS(151),
    [anon_sym_41] = ACTIONS(153),
    [anon_sym_42] = ACTIONS(151),
    [anon_sym_43] = ACTIONS(151),
    [anon_sym_44] = ACTIONS(153),
    [anon_sym_45] = ACTIONS(153),
    [anon_sym_46] = ACTIONS(151),
    [anon_sym_47] = ACTIONS(151),
    [anon_sym_48] = ACTIONS(153),
    [anon_sym_49] = ACTIONS(151),
    [anon_sym_50] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(153),
    [anon_sym_51] = ACTIONS(151),
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
    [anon_sym_52] = ACTIONS(151),
    [anon_sym_53] = ACTIONS(151),
    [anon_sym_54] = ACTIONS(151),
    [anon_sym_55] = ACTIONS(151),
    [anon_sym_56] = ACTIONS(153),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(151),
    [anon_sym_57] = ACTIONS(151),
    [anon_sym_58] = ACTIONS(151),
    [anon_sym_59] = ACTIONS(151),
    [anon_sym_60] = ACTIONS(151),
    [anon_sym_61] = ACTIONS(151),
    [anon_sym_62] = ACTIONS(151),
    [anon_sym_63] = ACTIONS(151),
    [anon_sym_64] = ACTIONS(151),
    [anon_sym_65] = ACTIONS(151),
    [anon_sym_66] = ACTIONS(151),
    [anon_sym_67] = ACTIONS(151),
    [anon_sym_68] = ACTIONS(153),
    [anon_sym_69] = ACTIONS(151),
    [anon_sym_70] = ACTIONS(151),
    [anon_sym_71] = ACTIONS(151),
    [anon_sym_72] = ACTIONS(151),
    [anon_sym_73] = ACTIONS(151),
    [anon_sym_74] = ACTIONS(151),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(151),
    [anon_sym_75] = ACTIONS(151),
    [anon_sym_76] = ACTIONS(151),
    [anon_sym_77] = ACTIONS(151),
    [anon_sym_78] = ACTIONS(151),
    [anon_sym_79] = ACTIONS(151),
    [anon_sym_80] = ACTIONS(151),
    [anon_sym_81] = ACTIONS(151),
    [anon_sym_82] = ACTIONS(151),
    [anon_sym_83] = ACTIONS(151),
    [anon_sym_84] = ACTIONS(153),
    [anon_sym_85] = ACTIONS(153),
    [anon_sym_86] = ACTIONS(151),
    [anon_sym_87] = ACTIONS(151),
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
    [anon_sym_88] = ACTIONS(151),
    [anon_sym_89] = ACTIONS(153),
    [anon_sym_90] = ACTIONS(151),
    [anon_sym_91] = ACTIONS(151),
    [anon_sym_92] = ACTIONS(151),
    [anon_sym_93] = ACTIONS(151),
    [anon_sym_94] = ACTIONS(153),
    [anon_sym_95] = ACTIONS(151),
    [anon_sym_96] = ACTIONS(153),
    [anon_sym_97] = ACTIONS(153),
    [anon_sym_98] = ACTIONS(151),
    [anon_sym_99] = ACTIONS(153),
    [anon_sym_100] = ACTIONS(153),
    [anon_sym_101] = ACTIONS(153),
    [anon_sym_102] = ACTIONS(151),
    [anon_sym_103] = ACTIONS(151),
    [anon_sym_104] = ACTIONS(151),
    [anon_sym_105] = ACTIONS(151),
    [anon_sym_106] = ACTIONS(151),
    [anon_sym_107] = ACTIONS(151),
    [anon_sym_108] = ACTIONS(151),
    [anon_sym_109] = ACTIONS(151),
    [anon_sym_110] = ACTIONS(151),
    [anon_sym_111] = ACTIONS(151),
    [anon_sym_112] = ACTIONS(151),
    [anon_sym_113] = ACTIONS(153),
    [anon_sym_114] = ACTIONS(153),
    [anon_sym_115] = ACTIONS(153),
    [anon_sym_116] = ACTIONS(151),
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
    [anon_sym_117] = ACTIONS(153),
    [anon_sym_118] = ACTIONS(153),
    [anon_sym_119] = ACTIONS(151),
    [anon_sym_120] = ACTIONS(151),
    [anon_sym_121] = ACTIONS(153),
    [anon_sym_122] = ACTIONS(151),
    [anon_sym_123] = ACTIONS(153),
    [anon_sym_124] = ACTIONS(153),
    [anon_sym_125] = ACTIONS(153),
    [anon_sym_126] = ACTIONS(153),
    [anon_sym_127] = ACTIONS(153),
    [anon_sym_128] = ACTIONS(153),
    [anon_sym_129] = ACTIONS(153),
    [anon_sym_130] = ACTIONS(153),
    [anon_sym_131] = ACTIONS(151),
    [anon_sym_132] = ACTIONS(151),
    [anon_sym_133] = ACTIONS(151),
    [anon_sym_134] = ACTIONS(151),
    [anon_sym_135] = ACTIONS(151),
    [anon_sym_136] = ACTIONS(151),
    [anon_sym_137] = ACTIONS(151),
    [anon_sym_138] = ACTIONS(151),
    [anon_sym_139] = ACTIONS(151),
    [anon_sym_140] = ACTIONS(151),
    [anon_sym_141] = ACTIONS(151),
    [anon_sym_142] = ACTIONS(151),
    [anon_sym_143] = ACTIONS(151),
    [anon_sym_144] = ACTIONS(151),
    [anon_sym_145] = ACTIONS(153),
    [anon_sym_146] = ACTIONS(151),
    [anon_sym_147] = ACTIONS(153),
    [anon_sym_148] = ACTIONS(153),
    [anon_sym_149] = ACTIONS(153),
    [anon_sym_150] = ACTIONS(153),
    [anon_sym_151] = ACTIONS(153),
    [anon_sym_152] = ACTIONS(153),
    [anon_sym_153] = ACTIONS(153),
    [anon_sym_154] = ACTIONS(151),
    [anon_sym_155] = ACTIONS(151),
    [anon_sym_156] = ACTIONS(151),
    [anon_sym_157] = ACTIONS(151),
    [anon_sym_158] = ACTIONS(151),
    [anon_sym_159] = ACTIONS(151),
    [anon_sym_160] = ACTIONS(151),
    [anon_sym_161] = ACTIONS(151),
    [anon_sym_162] = ACTIONS(151),
    [anon_sym_163] = ACTIONS(151),
    [anon_sym_164] = ACTIONS(151),
    [anon_sym_165] = ACTIONS(151),
    [anon_sym_166] = ACTIONS(153),
    [anon_sym_167] = ACTIONS(153),
    [sym_type] = ACTIONS(151),
    [sym_comment] = ACTIONS(151),
    [aux_sym_z_token1] = ACTIONS(153),
    [aux_sym_z_token2] = ACTIONS(153),
    [aux_sym_z_token3] = ACTIONS(151),
    [sym_str] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [anon_sym_168] = ACTIONS(151),
    [anon_sym_169] = ACTIONS(151),
    [anon_sym_170] = ACTIONS(153),
    [anon_sym_171] = ACTIONS(153),
    [anon_sym_172] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_int] = ACTIONS(153),
    [anon_sym_null] = ACTIONS(153),
    [anon_sym_173] = ACTIONS(151),
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
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
    [anon_sym_11] = ACTIONS(155),
    [anon_sym_12] = ACTIONS(157),
    [anon_sym_13] = ACTIONS(157),
    [anon_sym_14] = ACTIONS(157),
    [anon_sym_15] = ACTIONS(155),
    [anon_sym_16] = ACTIONS(157),
    [anon_sym_17] = ACTIONS(155),
    [anon_sym_18] = ACTIONS(157),
    [anon_sym_19] = ACTIONS(155),
    [anon_sym_20] = ACTIONS(157),
    [anon_sym_21] = ACTIONS(155),
    [anon_sym_22] = ACTIONS(155),
    [anon_sym_23] = ACTIONS(157),
    [anon_sym_24] = ACTIONS(155),
    [anon_sym_25] = ACTIONS(155),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_interface] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(157),
    [anon_sym_enum] = ACTIONS(157),
    [anon_sym_var] = ACTIONS(157),
    [anon_sym_delegate] = ACTIONS(157),
    [anon_sym_26] = ACTIONS(155),
    [anon_sym_27] = ACTIONS(155),
    [anon_sym_28] = ACTIONS(155),
    [anon_sym_29] = ACTIONS(155),
    [anon_sym_30] = ACTIONS(155),
    [anon_sym_31] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_32] = ACTIONS(155),
    [anon_sym_33] = ACTIONS(155),
    [anon_sym_34] = ACTIONS(155),
    [anon_sym_35] = ACTIONS(155),
    [anon_sym_36] = ACTIONS(155),
    [anon_sym_37] = ACTIONS(155),
    [anon_sym_38] = ACTIONS(155),
    [anon_sym_39] = ACTIONS(155),
    [anon_sym_40] = ACTIONS(155),
    [anon_sym_41] = ACTIONS(157),
    [anon_sym_42] = ACTIONS(155),
    [anon_sym_43] = ACTIONS(155),
    [anon_sym_44] = ACTIONS(157),
    [anon_sym_45] = ACTIONS(157),
    [anon_sym_46] = ACTIONS(155),
    [anon_sym_47] = ACTIONS(155),
    [anon_sym_48] = ACTIONS(157),
    [anon_sym_49] = ACTIONS(155),
    [anon_sym_50] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_51] = ACTIONS(155),
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
    [anon_sym_52] = ACTIONS(155),
    [anon_sym_53] = ACTIONS(155),
    [anon_sym_54] = ACTIONS(155),
    [anon_sym_55] = ACTIONS(155),
    [anon_sym_56] = ACTIONS(157),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(155),
    [anon_sym_57] = ACTIONS(155),
    [anon_sym_58] = ACTIONS(155),
    [anon_sym_59] = ACTIONS(155),
    [anon_sym_60] = ACTIONS(155),
    [anon_sym_61] = ACTIONS(155),
    [anon_sym_62] = ACTIONS(155),
    [anon_sym_63] = ACTIONS(155),
    [anon_sym_64] = ACTIONS(155),
    [anon_sym_65] = ACTIONS(155),
    [anon_sym_66] = ACTIONS(155),
    [anon_sym_67] = ACTIONS(155),
    [anon_sym_68] = ACTIONS(157),
    [anon_sym_69] = ACTIONS(155),
    [anon_sym_70] = ACTIONS(155),
    [anon_sym_71] = ACTIONS(155),
    [anon_sym_72] = ACTIONS(155),
    [anon_sym_73] = ACTIONS(155),
    [anon_sym_74] = ACTIONS(155),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(155),
    [anon_sym_75] = ACTIONS(155),
    [anon_sym_76] = ACTIONS(155),
    [anon_sym_77] = ACTIONS(155),
    [anon_sym_78] = ACTIONS(155),
    [anon_sym_79] = ACTIONS(155),
    [anon_sym_80] = ACTIONS(155),
    [anon_sym_81] = ACTIONS(155),
    [anon_sym_82] = ACTIONS(155),
    [anon_sym_83] = ACTIONS(155),
    [anon_sym_84] = ACTIONS(157),
    [anon_sym_85] = ACTIONS(157),
    [anon_sym_86] = ACTIONS(155),
    [anon_sym_87] = ACTIONS(155),
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
    [anon_sym_88] = ACTIONS(155),
    [anon_sym_89] = ACTIONS(157),
    [anon_sym_90] = ACTIONS(155),
    [anon_sym_91] = ACTIONS(155),
    [anon_sym_92] = ACTIONS(155),
    [anon_sym_93] = ACTIONS(155),
    [anon_sym_94] = ACTIONS(157),
    [anon_sym_95] = ACTIONS(155),
    [anon_sym_96] = ACTIONS(157),
    [anon_sym_97] = ACTIONS(157),
    [anon_sym_98] = ACTIONS(155),
    [anon_sym_99] = ACTIONS(157),
    [anon_sym_100] = ACTIONS(157),
    [anon_sym_101] = ACTIONS(157),
    [anon_sym_102] = ACTIONS(155),
    [anon_sym_103] = ACTIONS(155),
    [anon_sym_104] = ACTIONS(155),
    [anon_sym_105] = ACTIONS(155),
    [anon_sym_106] = ACTIONS(155),
    [anon_sym_107] = ACTIONS(155),
    [anon_sym_108] = ACTIONS(155),
    [anon_sym_109] = ACTIONS(155),
    [anon_sym_110] = ACTIONS(155),
    [anon_sym_111] = ACTIONS(155),
    [anon_sym_112] = ACTIONS(155),
    [anon_sym_113] = ACTIONS(157),
    [anon_sym_114] = ACTIONS(157),
    [anon_sym_115] = ACTIONS(157),
    [anon_sym_116] = ACTIONS(155),
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
    [anon_sym_117] = ACTIONS(157),
    [anon_sym_118] = ACTIONS(157),
    [anon_sym_119] = ACTIONS(155),
    [anon_sym_120] = ACTIONS(155),
    [anon_sym_121] = ACTIONS(157),
    [anon_sym_122] = ACTIONS(155),
    [anon_sym_123] = ACTIONS(157),
    [anon_sym_124] = ACTIONS(157),
    [anon_sym_125] = ACTIONS(157),
    [anon_sym_126] = ACTIONS(157),
    [anon_sym_127] = ACTIONS(157),
    [anon_sym_128] = ACTIONS(157),
    [anon_sym_129] = ACTIONS(157),
    [anon_sym_130] = ACTIONS(157),
    [anon_sym_131] = ACTIONS(155),
    [anon_sym_132] = ACTIONS(155),
    [anon_sym_133] = ACTIONS(155),
    [anon_sym_134] = ACTIONS(155),
    [anon_sym_135] = ACTIONS(155),
    [anon_sym_136] = ACTIONS(155),
    [anon_sym_137] = ACTIONS(155),
    [anon_sym_138] = ACTIONS(155),
    [anon_sym_139] = ACTIONS(155),
    [anon_sym_140] = ACTIONS(155),
    [anon_sym_141] = ACTIONS(155),
    [anon_sym_142] = ACTIONS(155),
    [anon_sym_143] = ACTIONS(155),
    [anon_sym_144] = ACTIONS(155),
    [anon_sym_145] = ACTIONS(157),
    [anon_sym_146] = ACTIONS(155),
    [anon_sym_147] = ACTIONS(157),
    [anon_sym_148] = ACTIONS(157),
    [anon_sym_149] = ACTIONS(157),
    [anon_sym_150] = ACTIONS(157),
    [anon_sym_151] = ACTIONS(157),
    [anon_sym_152] = ACTIONS(157),
    [anon_sym_153] = ACTIONS(157),
    [anon_sym_154] = ACTIONS(155),
    [anon_sym_155] = ACTIONS(155),
    [anon_sym_156] = ACTIONS(155),
    [anon_sym_157] = ACTIONS(155),
    [anon_sym_158] = ACTIONS(155),
    [anon_sym_159] = ACTIONS(155),
    [anon_sym_160] = ACTIONS(155),
    [anon_sym_161] = ACTIONS(155),
    [anon_sym_162] = ACTIONS(155),
    [anon_sym_163] = ACTIONS(155),
    [anon_sym_164] = ACTIONS(155),
    [anon_sym_165] = ACTIONS(155),
    [anon_sym_166] = ACTIONS(157),
    [anon_sym_167] = ACTIONS(157),
    [sym_type] = ACTIONS(155),
    [sym_comment] = ACTIONS(155),
    [aux_sym_z_token1] = ACTIONS(157),
    [aux_sym_z_token2] = ACTIONS(157),
    [aux_sym_z_token3] = ACTIONS(155),
    [sym_str] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_168] = ACTIONS(155),
    [anon_sym_169] = ACTIONS(155),
    [anon_sym_170] = ACTIONS(157),
    [anon_sym_171] = ACTIONS(157),
    [anon_sym_172] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [anon_sym_null] = ACTIONS(157),
    [anon_sym_173] = ACTIONS(155),
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
    [anon_sym_9] = ACTIONS(159),
    [anon_sym_10] = ACTIONS(159),
    [anon_sym_11] = ACTIONS(159),
    [anon_sym_12] = ACTIONS(161),
    [anon_sym_13] = ACTIONS(161),
    [anon_sym_14] = ACTIONS(161),
    [anon_sym_15] = ACTIONS(159),
    [anon_sym_16] = ACTIONS(161),
    [anon_sym_17] = ACTIONS(159),
    [anon_sym_18] = ACTIONS(161),
    [anon_sym_19] = ACTIONS(159),
    [anon_sym_20] = ACTIONS(161),
    [anon_sym_21] = ACTIONS(159),
    [anon_sym_22] = ACTIONS(159),
    [anon_sym_23] = ACTIONS(161),
    [anon_sym_24] = ACTIONS(159),
    [anon_sym_25] = ACTIONS(159),
    [anon_sym_class] = ACTIONS(161),
    [anon_sym_interface] = ACTIONS(161),
    [anon_sym_struct] = ACTIONS(161),
    [anon_sym_enum] = ACTIONS(161),
    [anon_sym_var] = ACTIONS(161),
    [anon_sym_delegate] = ACTIONS(161),
    [anon_sym_26] = ACTIONS(159),
    [anon_sym_27] = ACTIONS(159),
    [anon_sym_28] = ACTIONS(159),
    [anon_sym_29] = ACTIONS(159),
    [anon_sym_30] = ACTIONS(159),
    [anon_sym_31] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_32] = ACTIONS(159),
    [anon_sym_33] = ACTIONS(159),
    [anon_sym_34] = ACTIONS(159),
    [anon_sym_35] = ACTIONS(159),
    [anon_sym_36] = ACTIONS(159),
    [anon_sym_37] = ACTIONS(159),
    [anon_sym_38] = ACTIONS(159),
    [anon_sym_39] = ACTIONS(159),
    [anon_sym_40] = ACTIONS(159),
    [anon_sym_41] = ACTIONS(161),
    [anon_sym_42] = ACTIONS(159),
    [anon_sym_43] = ACTIONS(159),
    [anon_sym_44] = ACTIONS(161),
    [anon_sym_45] = ACTIONS(161),
    [anon_sym_46] = ACTIONS(159),
    [anon_sym_47] = ACTIONS(159),
    [anon_sym_48] = ACTIONS(161),
    [anon_sym_49] = ACTIONS(159),
    [anon_sym_50] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(161),
    [anon_sym_51] = ACTIONS(159),
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
    [anon_sym_52] = ACTIONS(159),
    [anon_sym_53] = ACTIONS(159),
    [anon_sym_54] = ACTIONS(159),
    [anon_sym_55] = ACTIONS(159),
    [anon_sym_56] = ACTIONS(161),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(159),
    [anon_sym_57] = ACTIONS(159),
    [anon_sym_58] = ACTIONS(159),
    [anon_sym_59] = ACTIONS(159),
    [anon_sym_60] = ACTIONS(159),
    [anon_sym_61] = ACTIONS(159),
    [anon_sym_62] = ACTIONS(159),
    [anon_sym_63] = ACTIONS(159),
    [anon_sym_64] = ACTIONS(159),
    [anon_sym_65] = ACTIONS(159),
    [anon_sym_66] = ACTIONS(159),
    [anon_sym_67] = ACTIONS(159),
    [anon_sym_68] = ACTIONS(161),
    [anon_sym_69] = ACTIONS(159),
    [anon_sym_70] = ACTIONS(159),
    [anon_sym_71] = ACTIONS(159),
    [anon_sym_72] = ACTIONS(159),
    [anon_sym_73] = ACTIONS(159),
    [anon_sym_74] = ACTIONS(159),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(159),
    [anon_sym_75] = ACTIONS(159),
    [anon_sym_76] = ACTIONS(159),
    [anon_sym_77] = ACTIONS(159),
    [anon_sym_78] = ACTIONS(159),
    [anon_sym_79] = ACTIONS(159),
    [anon_sym_80] = ACTIONS(159),
    [anon_sym_81] = ACTIONS(159),
    [anon_sym_82] = ACTIONS(159),
    [anon_sym_83] = ACTIONS(159),
    [anon_sym_84] = ACTIONS(161),
    [anon_sym_85] = ACTIONS(161),
    [anon_sym_86] = ACTIONS(159),
    [anon_sym_87] = ACTIONS(159),
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
    [anon_sym_88] = ACTIONS(159),
    [anon_sym_89] = ACTIONS(161),
    [anon_sym_90] = ACTIONS(159),
    [anon_sym_91] = ACTIONS(159),
    [anon_sym_92] = ACTIONS(159),
    [anon_sym_93] = ACTIONS(159),
    [anon_sym_94] = ACTIONS(161),
    [anon_sym_95] = ACTIONS(159),
    [anon_sym_96] = ACTIONS(161),
    [anon_sym_97] = ACTIONS(161),
    [anon_sym_98] = ACTIONS(159),
    [anon_sym_99] = ACTIONS(161),
    [anon_sym_100] = ACTIONS(161),
    [anon_sym_101] = ACTIONS(161),
    [anon_sym_102] = ACTIONS(159),
    [anon_sym_103] = ACTIONS(159),
    [anon_sym_104] = ACTIONS(159),
    [anon_sym_105] = ACTIONS(159),
    [anon_sym_106] = ACTIONS(159),
    [anon_sym_107] = ACTIONS(159),
    [anon_sym_108] = ACTIONS(159),
    [anon_sym_109] = ACTIONS(159),
    [anon_sym_110] = ACTIONS(159),
    [anon_sym_111] = ACTIONS(159),
    [anon_sym_112] = ACTIONS(159),
    [anon_sym_113] = ACTIONS(161),
    [anon_sym_114] = ACTIONS(161),
    [anon_sym_115] = ACTIONS(161),
    [anon_sym_116] = ACTIONS(159),
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
    [anon_sym_117] = ACTIONS(161),
    [anon_sym_118] = ACTIONS(161),
    [anon_sym_119] = ACTIONS(159),
    [anon_sym_120] = ACTIONS(159),
    [anon_sym_121] = ACTIONS(161),
    [anon_sym_122] = ACTIONS(159),
    [anon_sym_123] = ACTIONS(161),
    [anon_sym_124] = ACTIONS(161),
    [anon_sym_125] = ACTIONS(161),
    [anon_sym_126] = ACTIONS(161),
    [anon_sym_127] = ACTIONS(161),
    [anon_sym_128] = ACTIONS(161),
    [anon_sym_129] = ACTIONS(161),
    [anon_sym_130] = ACTIONS(161),
    [anon_sym_131] = ACTIONS(159),
    [anon_sym_132] = ACTIONS(159),
    [anon_sym_133] = ACTIONS(159),
    [anon_sym_134] = ACTIONS(159),
    [anon_sym_135] = ACTIONS(159),
    [anon_sym_136] = ACTIONS(159),
    [anon_sym_137] = ACTIONS(159),
    [anon_sym_138] = ACTIONS(159),
    [anon_sym_139] = ACTIONS(159),
    [anon_sym_140] = ACTIONS(159),
    [anon_sym_141] = ACTIONS(159),
    [anon_sym_142] = ACTIONS(159),
    [anon_sym_143] = ACTIONS(159),
    [anon_sym_144] = ACTIONS(159),
    [anon_sym_145] = ACTIONS(161),
    [anon_sym_146] = ACTIONS(159),
    [anon_sym_147] = ACTIONS(161),
    [anon_sym_148] = ACTIONS(161),
    [anon_sym_149] = ACTIONS(161),
    [anon_sym_150] = ACTIONS(161),
    [anon_sym_151] = ACTIONS(161),
    [anon_sym_152] = ACTIONS(161),
    [anon_sym_153] = ACTIONS(161),
    [anon_sym_154] = ACTIONS(159),
    [anon_sym_155] = ACTIONS(159),
    [anon_sym_156] = ACTIONS(159),
    [anon_sym_157] = ACTIONS(159),
    [anon_sym_158] = ACTIONS(159),
    [anon_sym_159] = ACTIONS(159),
    [anon_sym_160] = ACTIONS(159),
    [anon_sym_161] = ACTIONS(159),
    [anon_sym_162] = ACTIONS(159),
    [anon_sym_163] = ACTIONS(159),
    [anon_sym_164] = ACTIONS(159),
    [anon_sym_165] = ACTIONS(159),
    [anon_sym_166] = ACTIONS(161),
    [anon_sym_167] = ACTIONS(161),
    [sym_type] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [aux_sym_z_token1] = ACTIONS(161),
    [aux_sym_z_token2] = ACTIONS(161),
    [aux_sym_z_token3] = ACTIONS(159),
    [sym_str] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_168] = ACTIONS(159),
    [anon_sym_169] = ACTIONS(159),
    [anon_sym_170] = ACTIONS(161),
    [anon_sym_171] = ACTIONS(161),
    [anon_sym_172] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [sym_int] = ACTIONS(161),
    [anon_sym_null] = ACTIONS(161),
    [anon_sym_173] = ACTIONS(159),
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
    [anon_sym_9] = ACTIONS(163),
    [anon_sym_10] = ACTIONS(163),
    [anon_sym_11] = ACTIONS(163),
    [anon_sym_12] = ACTIONS(165),
    [anon_sym_13] = ACTIONS(165),
    [anon_sym_14] = ACTIONS(165),
    [anon_sym_15] = ACTIONS(163),
    [anon_sym_16] = ACTIONS(165),
    [anon_sym_17] = ACTIONS(163),
    [anon_sym_18] = ACTIONS(165),
    [anon_sym_19] = ACTIONS(163),
    [anon_sym_20] = ACTIONS(165),
    [anon_sym_21] = ACTIONS(163),
    [anon_sym_22] = ACTIONS(163),
    [anon_sym_23] = ACTIONS(165),
    [anon_sym_24] = ACTIONS(163),
    [anon_sym_25] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [anon_sym_struct] = ACTIONS(165),
    [anon_sym_enum] = ACTIONS(165),
    [anon_sym_var] = ACTIONS(165),
    [anon_sym_delegate] = ACTIONS(165),
    [anon_sym_26] = ACTIONS(163),
    [anon_sym_27] = ACTIONS(163),
    [anon_sym_28] = ACTIONS(163),
    [anon_sym_29] = ACTIONS(163),
    [anon_sym_30] = ACTIONS(163),
    [anon_sym_31] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_32] = ACTIONS(163),
    [anon_sym_33] = ACTIONS(163),
    [anon_sym_34] = ACTIONS(163),
    [anon_sym_35] = ACTIONS(163),
    [anon_sym_36] = ACTIONS(163),
    [anon_sym_37] = ACTIONS(163),
    [anon_sym_38] = ACTIONS(163),
    [anon_sym_39] = ACTIONS(163),
    [anon_sym_40] = ACTIONS(163),
    [anon_sym_41] = ACTIONS(165),
    [anon_sym_42] = ACTIONS(163),
    [anon_sym_43] = ACTIONS(163),
    [anon_sym_44] = ACTIONS(165),
    [anon_sym_45] = ACTIONS(165),
    [anon_sym_46] = ACTIONS(163),
    [anon_sym_47] = ACTIONS(163),
    [anon_sym_48] = ACTIONS(165),
    [anon_sym_49] = ACTIONS(163),
    [anon_sym_50] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_51] = ACTIONS(163),
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
    [anon_sym_52] = ACTIONS(163),
    [anon_sym_53] = ACTIONS(163),
    [anon_sym_54] = ACTIONS(163),
    [anon_sym_55] = ACTIONS(163),
    [anon_sym_56] = ACTIONS(165),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(163),
    [anon_sym_57] = ACTIONS(163),
    [anon_sym_58] = ACTIONS(163),
    [anon_sym_59] = ACTIONS(163),
    [anon_sym_60] = ACTIONS(163),
    [anon_sym_61] = ACTIONS(163),
    [anon_sym_62] = ACTIONS(163),
    [anon_sym_63] = ACTIONS(163),
    [anon_sym_64] = ACTIONS(163),
    [anon_sym_65] = ACTIONS(163),
    [anon_sym_66] = ACTIONS(163),
    [anon_sym_67] = ACTIONS(163),
    [anon_sym_68] = ACTIONS(165),
    [anon_sym_69] = ACTIONS(163),
    [anon_sym_70] = ACTIONS(163),
    [anon_sym_71] = ACTIONS(163),
    [anon_sym_72] = ACTIONS(163),
    [anon_sym_73] = ACTIONS(163),
    [anon_sym_74] = ACTIONS(163),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(163),
    [anon_sym_75] = ACTIONS(163),
    [anon_sym_76] = ACTIONS(163),
    [anon_sym_77] = ACTIONS(163),
    [anon_sym_78] = ACTIONS(163),
    [anon_sym_79] = ACTIONS(163),
    [anon_sym_80] = ACTIONS(163),
    [anon_sym_81] = ACTIONS(163),
    [anon_sym_82] = ACTIONS(163),
    [anon_sym_83] = ACTIONS(163),
    [anon_sym_84] = ACTIONS(165),
    [anon_sym_85] = ACTIONS(165),
    [anon_sym_86] = ACTIONS(163),
    [anon_sym_87] = ACTIONS(163),
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
    [anon_sym_88] = ACTIONS(163),
    [anon_sym_89] = ACTIONS(165),
    [anon_sym_90] = ACTIONS(163),
    [anon_sym_91] = ACTIONS(163),
    [anon_sym_92] = ACTIONS(163),
    [anon_sym_93] = ACTIONS(163),
    [anon_sym_94] = ACTIONS(165),
    [anon_sym_95] = ACTIONS(163),
    [anon_sym_96] = ACTIONS(165),
    [anon_sym_97] = ACTIONS(165),
    [anon_sym_98] = ACTIONS(163),
    [anon_sym_99] = ACTIONS(165),
    [anon_sym_100] = ACTIONS(165),
    [anon_sym_101] = ACTIONS(165),
    [anon_sym_102] = ACTIONS(163),
    [anon_sym_103] = ACTIONS(163),
    [anon_sym_104] = ACTIONS(163),
    [anon_sym_105] = ACTIONS(163),
    [anon_sym_106] = ACTIONS(163),
    [anon_sym_107] = ACTIONS(163),
    [anon_sym_108] = ACTIONS(163),
    [anon_sym_109] = ACTIONS(163),
    [anon_sym_110] = ACTIONS(163),
    [anon_sym_111] = ACTIONS(163),
    [anon_sym_112] = ACTIONS(163),
    [anon_sym_113] = ACTIONS(165),
    [anon_sym_114] = ACTIONS(165),
    [anon_sym_115] = ACTIONS(165),
    [anon_sym_116] = ACTIONS(163),
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
    [anon_sym_117] = ACTIONS(165),
    [anon_sym_118] = ACTIONS(165),
    [anon_sym_119] = ACTIONS(163),
    [anon_sym_120] = ACTIONS(163),
    [anon_sym_121] = ACTIONS(165),
    [anon_sym_122] = ACTIONS(163),
    [anon_sym_123] = ACTIONS(165),
    [anon_sym_124] = ACTIONS(165),
    [anon_sym_125] = ACTIONS(165),
    [anon_sym_126] = ACTIONS(165),
    [anon_sym_127] = ACTIONS(165),
    [anon_sym_128] = ACTIONS(165),
    [anon_sym_129] = ACTIONS(165),
    [anon_sym_130] = ACTIONS(165),
    [anon_sym_131] = ACTIONS(163),
    [anon_sym_132] = ACTIONS(163),
    [anon_sym_133] = ACTIONS(163),
    [anon_sym_134] = ACTIONS(163),
    [anon_sym_135] = ACTIONS(163),
    [anon_sym_136] = ACTIONS(163),
    [anon_sym_137] = ACTIONS(163),
    [anon_sym_138] = ACTIONS(163),
    [anon_sym_139] = ACTIONS(163),
    [anon_sym_140] = ACTIONS(163),
    [anon_sym_141] = ACTIONS(163),
    [anon_sym_142] = ACTIONS(163),
    [anon_sym_143] = ACTIONS(163),
    [anon_sym_144] = ACTIONS(163),
    [anon_sym_145] = ACTIONS(165),
    [anon_sym_146] = ACTIONS(163),
    [anon_sym_147] = ACTIONS(165),
    [anon_sym_148] = ACTIONS(165),
    [anon_sym_149] = ACTIONS(165),
    [anon_sym_150] = ACTIONS(165),
    [anon_sym_151] = ACTIONS(165),
    [anon_sym_152] = ACTIONS(165),
    [anon_sym_153] = ACTIONS(165),
    [anon_sym_154] = ACTIONS(163),
    [anon_sym_155] = ACTIONS(163),
    [anon_sym_156] = ACTIONS(163),
    [anon_sym_157] = ACTIONS(163),
    [anon_sym_158] = ACTIONS(163),
    [anon_sym_159] = ACTIONS(163),
    [anon_sym_160] = ACTIONS(163),
    [anon_sym_161] = ACTIONS(163),
    [anon_sym_162] = ACTIONS(163),
    [anon_sym_163] = ACTIONS(163),
    [anon_sym_164] = ACTIONS(163),
    [anon_sym_165] = ACTIONS(163),
    [anon_sym_166] = ACTIONS(165),
    [anon_sym_167] = ACTIONS(165),
    [sym_type] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [aux_sym_z_token1] = ACTIONS(165),
    [aux_sym_z_token2] = ACTIONS(165),
    [aux_sym_z_token3] = ACTIONS(163),
    [sym_str] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_168] = ACTIONS(163),
    [anon_sym_169] = ACTIONS(163),
    [anon_sym_170] = ACTIONS(165),
    [anon_sym_171] = ACTIONS(165),
    [anon_sym_172] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_int] = ACTIONS(165),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_173] = ACTIONS(163),
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
    [anon_sym_9] = ACTIONS(167),
    [anon_sym_10] = ACTIONS(167),
    [anon_sym_11] = ACTIONS(167),
    [anon_sym_12] = ACTIONS(169),
    [anon_sym_13] = ACTIONS(169),
    [anon_sym_14] = ACTIONS(169),
    [anon_sym_15] = ACTIONS(167),
    [anon_sym_16] = ACTIONS(169),
    [anon_sym_17] = ACTIONS(167),
    [anon_sym_18] = ACTIONS(169),
    [anon_sym_19] = ACTIONS(167),
    [anon_sym_20] = ACTIONS(169),
    [anon_sym_21] = ACTIONS(167),
    [anon_sym_22] = ACTIONS(167),
    [anon_sym_23] = ACTIONS(169),
    [anon_sym_24] = ACTIONS(167),
    [anon_sym_25] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(169),
    [anon_sym_interface] = ACTIONS(169),
    [anon_sym_struct] = ACTIONS(169),
    [anon_sym_enum] = ACTIONS(169),
    [anon_sym_var] = ACTIONS(169),
    [anon_sym_delegate] = ACTIONS(169),
    [anon_sym_26] = ACTIONS(167),
    [anon_sym_27] = ACTIONS(167),
    [anon_sym_28] = ACTIONS(167),
    [anon_sym_29] = ACTIONS(167),
    [anon_sym_30] = ACTIONS(167),
    [anon_sym_31] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_32] = ACTIONS(167),
    [anon_sym_33] = ACTIONS(167),
    [anon_sym_34] = ACTIONS(167),
    [anon_sym_35] = ACTIONS(167),
    [anon_sym_36] = ACTIONS(167),
    [anon_sym_37] = ACTIONS(167),
    [anon_sym_38] = ACTIONS(167),
    [anon_sym_39] = ACTIONS(167),
    [anon_sym_40] = ACTIONS(167),
    [anon_sym_41] = ACTIONS(169),
    [anon_sym_42] = ACTIONS(167),
    [anon_sym_43] = ACTIONS(167),
    [anon_sym_44] = ACTIONS(169),
    [anon_sym_45] = ACTIONS(169),
    [anon_sym_46] = ACTIONS(167),
    [anon_sym_47] = ACTIONS(167),
    [anon_sym_48] = ACTIONS(169),
    [anon_sym_49] = ACTIONS(167),
    [anon_sym_50] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(169),
    [anon_sym_51] = ACTIONS(167),
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
    [anon_sym_52] = ACTIONS(167),
    [anon_sym_53] = ACTIONS(167),
    [anon_sym_54] = ACTIONS(167),
    [anon_sym_55] = ACTIONS(167),
    [anon_sym_56] = ACTIONS(169),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(167),
    [anon_sym_57] = ACTIONS(167),
    [anon_sym_58] = ACTIONS(167),
    [anon_sym_59] = ACTIONS(167),
    [anon_sym_60] = ACTIONS(167),
    [anon_sym_61] = ACTIONS(167),
    [anon_sym_62] = ACTIONS(167),
    [anon_sym_63] = ACTIONS(167),
    [anon_sym_64] = ACTIONS(167),
    [anon_sym_65] = ACTIONS(167),
    [anon_sym_66] = ACTIONS(167),
    [anon_sym_67] = ACTIONS(167),
    [anon_sym_68] = ACTIONS(169),
    [anon_sym_69] = ACTIONS(167),
    [anon_sym_70] = ACTIONS(167),
    [anon_sym_71] = ACTIONS(167),
    [anon_sym_72] = ACTIONS(167),
    [anon_sym_73] = ACTIONS(167),
    [anon_sym_74] = ACTIONS(167),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(167),
    [anon_sym_75] = ACTIONS(167),
    [anon_sym_76] = ACTIONS(167),
    [anon_sym_77] = ACTIONS(167),
    [anon_sym_78] = ACTIONS(167),
    [anon_sym_79] = ACTIONS(167),
    [anon_sym_80] = ACTIONS(167),
    [anon_sym_81] = ACTIONS(167),
    [anon_sym_82] = ACTIONS(167),
    [anon_sym_83] = ACTIONS(167),
    [anon_sym_84] = ACTIONS(169),
    [anon_sym_85] = ACTIONS(169),
    [anon_sym_86] = ACTIONS(167),
    [anon_sym_87] = ACTIONS(167),
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
    [anon_sym_88] = ACTIONS(167),
    [anon_sym_89] = ACTIONS(169),
    [anon_sym_90] = ACTIONS(167),
    [anon_sym_91] = ACTIONS(167),
    [anon_sym_92] = ACTIONS(167),
    [anon_sym_93] = ACTIONS(167),
    [anon_sym_94] = ACTIONS(169),
    [anon_sym_95] = ACTIONS(167),
    [anon_sym_96] = ACTIONS(169),
    [anon_sym_97] = ACTIONS(169),
    [anon_sym_98] = ACTIONS(167),
    [anon_sym_99] = ACTIONS(169),
    [anon_sym_100] = ACTIONS(169),
    [anon_sym_101] = ACTIONS(169),
    [anon_sym_102] = ACTIONS(167),
    [anon_sym_103] = ACTIONS(167),
    [anon_sym_104] = ACTIONS(167),
    [anon_sym_105] = ACTIONS(167),
    [anon_sym_106] = ACTIONS(167),
    [anon_sym_107] = ACTIONS(167),
    [anon_sym_108] = ACTIONS(167),
    [anon_sym_109] = ACTIONS(167),
    [anon_sym_110] = ACTIONS(167),
    [anon_sym_111] = ACTIONS(167),
    [anon_sym_112] = ACTIONS(167),
    [anon_sym_113] = ACTIONS(169),
    [anon_sym_114] = ACTIONS(169),
    [anon_sym_115] = ACTIONS(169),
    [anon_sym_116] = ACTIONS(167),
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
    [anon_sym_117] = ACTIONS(169),
    [anon_sym_118] = ACTIONS(169),
    [anon_sym_119] = ACTIONS(167),
    [anon_sym_120] = ACTIONS(167),
    [anon_sym_121] = ACTIONS(169),
    [anon_sym_122] = ACTIONS(167),
    [anon_sym_123] = ACTIONS(169),
    [anon_sym_124] = ACTIONS(169),
    [anon_sym_125] = ACTIONS(169),
    [anon_sym_126] = ACTIONS(169),
    [anon_sym_127] = ACTIONS(169),
    [anon_sym_128] = ACTIONS(169),
    [anon_sym_129] = ACTIONS(169),
    [anon_sym_130] = ACTIONS(169),
    [anon_sym_131] = ACTIONS(167),
    [anon_sym_132] = ACTIONS(167),
    [anon_sym_133] = ACTIONS(167),
    [anon_sym_134] = ACTIONS(167),
    [anon_sym_135] = ACTIONS(167),
    [anon_sym_136] = ACTIONS(167),
    [anon_sym_137] = ACTIONS(167),
    [anon_sym_138] = ACTIONS(167),
    [anon_sym_139] = ACTIONS(167),
    [anon_sym_140] = ACTIONS(167),
    [anon_sym_141] = ACTIONS(167),
    [anon_sym_142] = ACTIONS(167),
    [anon_sym_143] = ACTIONS(167),
    [anon_sym_144] = ACTIONS(167),
    [anon_sym_145] = ACTIONS(169),
    [anon_sym_146] = ACTIONS(167),
    [anon_sym_147] = ACTIONS(169),
    [anon_sym_148] = ACTIONS(169),
    [anon_sym_149] = ACTIONS(169),
    [anon_sym_150] = ACTIONS(169),
    [anon_sym_151] = ACTIONS(169),
    [anon_sym_152] = ACTIONS(169),
    [anon_sym_153] = ACTIONS(169),
    [anon_sym_154] = ACTIONS(167),
    [anon_sym_155] = ACTIONS(167),
    [anon_sym_156] = ACTIONS(167),
    [anon_sym_157] = ACTIONS(167),
    [anon_sym_158] = ACTIONS(167),
    [anon_sym_159] = ACTIONS(167),
    [anon_sym_160] = ACTIONS(167),
    [anon_sym_161] = ACTIONS(167),
    [anon_sym_162] = ACTIONS(167),
    [anon_sym_163] = ACTIONS(167),
    [anon_sym_164] = ACTIONS(167),
    [anon_sym_165] = ACTIONS(167),
    [anon_sym_166] = ACTIONS(169),
    [anon_sym_167] = ACTIONS(169),
    [sym_type] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [aux_sym_z_token1] = ACTIONS(169),
    [aux_sym_z_token2] = ACTIONS(169),
    [aux_sym_z_token3] = ACTIONS(167),
    [sym_str] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_168] = ACTIONS(167),
    [anon_sym_169] = ACTIONS(167),
    [anon_sym_170] = ACTIONS(169),
    [anon_sym_171] = ACTIONS(169),
    [anon_sym_172] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [sym_int] = ACTIONS(169),
    [anon_sym_null] = ACTIONS(169),
    [anon_sym_173] = ACTIONS(167),
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
    [anon_sym_9] = ACTIONS(171),
    [anon_sym_10] = ACTIONS(171),
    [anon_sym_11] = ACTIONS(171),
    [anon_sym_12] = ACTIONS(173),
    [anon_sym_13] = ACTIONS(173),
    [anon_sym_14] = ACTIONS(173),
    [anon_sym_15] = ACTIONS(171),
    [anon_sym_16] = ACTIONS(173),
    [anon_sym_17] = ACTIONS(171),
    [anon_sym_18] = ACTIONS(173),
    [anon_sym_19] = ACTIONS(171),
    [anon_sym_20] = ACTIONS(173),
    [anon_sym_21] = ACTIONS(171),
    [anon_sym_22] = ACTIONS(171),
    [anon_sym_23] = ACTIONS(173),
    [anon_sym_24] = ACTIONS(171),
    [anon_sym_25] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_interface] = ACTIONS(173),
    [anon_sym_struct] = ACTIONS(173),
    [anon_sym_enum] = ACTIONS(173),
    [anon_sym_var] = ACTIONS(173),
    [anon_sym_delegate] = ACTIONS(173),
    [anon_sym_26] = ACTIONS(171),
    [anon_sym_27] = ACTIONS(171),
    [anon_sym_28] = ACTIONS(171),
    [anon_sym_29] = ACTIONS(171),
    [anon_sym_30] = ACTIONS(171),
    [anon_sym_31] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_32] = ACTIONS(171),
    [anon_sym_33] = ACTIONS(171),
    [anon_sym_34] = ACTIONS(171),
    [anon_sym_35] = ACTIONS(171),
    [anon_sym_36] = ACTIONS(171),
    [anon_sym_37] = ACTIONS(171),
    [anon_sym_38] = ACTIONS(171),
    [anon_sym_39] = ACTIONS(171),
    [anon_sym_40] = ACTIONS(171),
    [anon_sym_41] = ACTIONS(173),
    [anon_sym_42] = ACTIONS(171),
    [anon_sym_43] = ACTIONS(171),
    [anon_sym_44] = ACTIONS(173),
    [anon_sym_45] = ACTIONS(173),
    [anon_sym_46] = ACTIONS(171),
    [anon_sym_47] = ACTIONS(171),
    [anon_sym_48] = ACTIONS(173),
    [anon_sym_49] = ACTIONS(171),
    [anon_sym_50] = ACTIONS(173),
    [anon_sym_return] = ACTIONS(173),
    [anon_sym_51] = ACTIONS(171),
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
    [anon_sym_52] = ACTIONS(171),
    [anon_sym_53] = ACTIONS(171),
    [anon_sym_54] = ACTIONS(171),
    [anon_sym_55] = ACTIONS(171),
    [anon_sym_56] = ACTIONS(173),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(171),
    [anon_sym_57] = ACTIONS(171),
    [anon_sym_58] = ACTIONS(171),
    [anon_sym_59] = ACTIONS(171),
    [anon_sym_60] = ACTIONS(171),
    [anon_sym_61] = ACTIONS(171),
    [anon_sym_62] = ACTIONS(171),
    [anon_sym_63] = ACTIONS(171),
    [anon_sym_64] = ACTIONS(171),
    [anon_sym_65] = ACTIONS(171),
    [anon_sym_66] = ACTIONS(171),
    [anon_sym_67] = ACTIONS(171),
    [anon_sym_68] = ACTIONS(173),
    [anon_sym_69] = ACTIONS(171),
    [anon_sym_70] = ACTIONS(171),
    [anon_sym_71] = ACTIONS(171),
    [anon_sym_72] = ACTIONS(171),
    [anon_sym_73] = ACTIONS(171),
    [anon_sym_74] = ACTIONS(171),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(171),
    [anon_sym_75] = ACTIONS(171),
    [anon_sym_76] = ACTIONS(171),
    [anon_sym_77] = ACTIONS(171),
    [anon_sym_78] = ACTIONS(171),
    [anon_sym_79] = ACTIONS(171),
    [anon_sym_80] = ACTIONS(171),
    [anon_sym_81] = ACTIONS(171),
    [anon_sym_82] = ACTIONS(171),
    [anon_sym_83] = ACTIONS(171),
    [anon_sym_84] = ACTIONS(173),
    [anon_sym_85] = ACTIONS(173),
    [anon_sym_86] = ACTIONS(171),
    [anon_sym_87] = ACTIONS(171),
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
    [anon_sym_88] = ACTIONS(171),
    [anon_sym_89] = ACTIONS(173),
    [anon_sym_90] = ACTIONS(171),
    [anon_sym_91] = ACTIONS(171),
    [anon_sym_92] = ACTIONS(171),
    [anon_sym_93] = ACTIONS(171),
    [anon_sym_94] = ACTIONS(173),
    [anon_sym_95] = ACTIONS(171),
    [anon_sym_96] = ACTIONS(173),
    [anon_sym_97] = ACTIONS(173),
    [anon_sym_98] = ACTIONS(171),
    [anon_sym_99] = ACTIONS(173),
    [anon_sym_100] = ACTIONS(173),
    [anon_sym_101] = ACTIONS(173),
    [anon_sym_102] = ACTIONS(171),
    [anon_sym_103] = ACTIONS(171),
    [anon_sym_104] = ACTIONS(171),
    [anon_sym_105] = ACTIONS(171),
    [anon_sym_106] = ACTIONS(171),
    [anon_sym_107] = ACTIONS(171),
    [anon_sym_108] = ACTIONS(171),
    [anon_sym_109] = ACTIONS(171),
    [anon_sym_110] = ACTIONS(171),
    [anon_sym_111] = ACTIONS(171),
    [anon_sym_112] = ACTIONS(171),
    [anon_sym_113] = ACTIONS(173),
    [anon_sym_114] = ACTIONS(173),
    [anon_sym_115] = ACTIONS(173),
    [anon_sym_116] = ACTIONS(171),
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
    [anon_sym_117] = ACTIONS(173),
    [anon_sym_118] = ACTIONS(173),
    [anon_sym_119] = ACTIONS(171),
    [anon_sym_120] = ACTIONS(171),
    [anon_sym_121] = ACTIONS(173),
    [anon_sym_122] = ACTIONS(171),
    [anon_sym_123] = ACTIONS(173),
    [anon_sym_124] = ACTIONS(173),
    [anon_sym_125] = ACTIONS(173),
    [anon_sym_126] = ACTIONS(173),
    [anon_sym_127] = ACTIONS(173),
    [anon_sym_128] = ACTIONS(173),
    [anon_sym_129] = ACTIONS(173),
    [anon_sym_130] = ACTIONS(173),
    [anon_sym_131] = ACTIONS(171),
    [anon_sym_132] = ACTIONS(171),
    [anon_sym_133] = ACTIONS(171),
    [anon_sym_134] = ACTIONS(171),
    [anon_sym_135] = ACTIONS(171),
    [anon_sym_136] = ACTIONS(171),
    [anon_sym_137] = ACTIONS(171),
    [anon_sym_138] = ACTIONS(171),
    [anon_sym_139] = ACTIONS(171),
    [anon_sym_140] = ACTIONS(171),
    [anon_sym_141] = ACTIONS(171),
    [anon_sym_142] = ACTIONS(171),
    [anon_sym_143] = ACTIONS(171),
    [anon_sym_144] = ACTIONS(171),
    [anon_sym_145] = ACTIONS(173),
    [anon_sym_146] = ACTIONS(171),
    [anon_sym_147] = ACTIONS(173),
    [anon_sym_148] = ACTIONS(173),
    [anon_sym_149] = ACTIONS(173),
    [anon_sym_150] = ACTIONS(173),
    [anon_sym_151] = ACTIONS(173),
    [anon_sym_152] = ACTIONS(173),
    [anon_sym_153] = ACTIONS(173),
    [anon_sym_154] = ACTIONS(171),
    [anon_sym_155] = ACTIONS(171),
    [anon_sym_156] = ACTIONS(171),
    [anon_sym_157] = ACTIONS(171),
    [anon_sym_158] = ACTIONS(171),
    [anon_sym_159] = ACTIONS(171),
    [anon_sym_160] = ACTIONS(171),
    [anon_sym_161] = ACTIONS(171),
    [anon_sym_162] = ACTIONS(171),
    [anon_sym_163] = ACTIONS(171),
    [anon_sym_164] = ACTIONS(171),
    [anon_sym_165] = ACTIONS(171),
    [anon_sym_166] = ACTIONS(173),
    [anon_sym_167] = ACTIONS(173),
    [sym_type] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
    [aux_sym_z_token1] = ACTIONS(173),
    [aux_sym_z_token2] = ACTIONS(173),
    [aux_sym_z_token3] = ACTIONS(171),
    [sym_str] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_168] = ACTIONS(171),
    [anon_sym_169] = ACTIONS(171),
    [anon_sym_170] = ACTIONS(173),
    [anon_sym_171] = ACTIONS(173),
    [anon_sym_172] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [sym_int] = ACTIONS(173),
    [anon_sym_null] = ACTIONS(173),
    [anon_sym_173] = ACTIONS(171),
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
    [anon_sym_9] = ACTIONS(175),
    [anon_sym_10] = ACTIONS(175),
    [anon_sym_11] = ACTIONS(175),
    [anon_sym_12] = ACTIONS(177),
    [anon_sym_13] = ACTIONS(177),
    [anon_sym_14] = ACTIONS(177),
    [anon_sym_15] = ACTIONS(175),
    [anon_sym_16] = ACTIONS(177),
    [anon_sym_17] = ACTIONS(175),
    [anon_sym_18] = ACTIONS(177),
    [anon_sym_19] = ACTIONS(175),
    [anon_sym_20] = ACTIONS(177),
    [anon_sym_21] = ACTIONS(175),
    [anon_sym_22] = ACTIONS(175),
    [anon_sym_23] = ACTIONS(177),
    [anon_sym_24] = ACTIONS(175),
    [anon_sym_25] = ACTIONS(175),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_interface] = ACTIONS(177),
    [anon_sym_struct] = ACTIONS(177),
    [anon_sym_enum] = ACTIONS(177),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_delegate] = ACTIONS(177),
    [anon_sym_26] = ACTIONS(175),
    [anon_sym_27] = ACTIONS(175),
    [anon_sym_28] = ACTIONS(175),
    [anon_sym_29] = ACTIONS(175),
    [anon_sym_30] = ACTIONS(175),
    [anon_sym_31] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_32] = ACTIONS(175),
    [anon_sym_33] = ACTIONS(175),
    [anon_sym_34] = ACTIONS(175),
    [anon_sym_35] = ACTIONS(175),
    [anon_sym_36] = ACTIONS(175),
    [anon_sym_37] = ACTIONS(175),
    [anon_sym_38] = ACTIONS(175),
    [anon_sym_39] = ACTIONS(175),
    [anon_sym_40] = ACTIONS(175),
    [anon_sym_41] = ACTIONS(177),
    [anon_sym_42] = ACTIONS(175),
    [anon_sym_43] = ACTIONS(175),
    [anon_sym_44] = ACTIONS(177),
    [anon_sym_45] = ACTIONS(177),
    [anon_sym_46] = ACTIONS(175),
    [anon_sym_47] = ACTIONS(175),
    [anon_sym_48] = ACTIONS(177),
    [anon_sym_49] = ACTIONS(175),
    [anon_sym_50] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(177),
    [anon_sym_51] = ACTIONS(175),
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
    [anon_sym_52] = ACTIONS(175),
    [anon_sym_53] = ACTIONS(175),
    [anon_sym_54] = ACTIONS(175),
    [anon_sym_55] = ACTIONS(175),
    [anon_sym_56] = ACTIONS(177),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(175),
    [anon_sym_57] = ACTIONS(175),
    [anon_sym_58] = ACTIONS(175),
    [anon_sym_59] = ACTIONS(175),
    [anon_sym_60] = ACTIONS(175),
    [anon_sym_61] = ACTIONS(175),
    [anon_sym_62] = ACTIONS(175),
    [anon_sym_63] = ACTIONS(175),
    [anon_sym_64] = ACTIONS(175),
    [anon_sym_65] = ACTIONS(175),
    [anon_sym_66] = ACTIONS(175),
    [anon_sym_67] = ACTIONS(175),
    [anon_sym_68] = ACTIONS(177),
    [anon_sym_69] = ACTIONS(175),
    [anon_sym_70] = ACTIONS(175),
    [anon_sym_71] = ACTIONS(175),
    [anon_sym_72] = ACTIONS(175),
    [anon_sym_73] = ACTIONS(175),
    [anon_sym_74] = ACTIONS(175),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(175),
    [anon_sym_75] = ACTIONS(175),
    [anon_sym_76] = ACTIONS(175),
    [anon_sym_77] = ACTIONS(175),
    [anon_sym_78] = ACTIONS(175),
    [anon_sym_79] = ACTIONS(175),
    [anon_sym_80] = ACTIONS(175),
    [anon_sym_81] = ACTIONS(175),
    [anon_sym_82] = ACTIONS(175),
    [anon_sym_83] = ACTIONS(175),
    [anon_sym_84] = ACTIONS(177),
    [anon_sym_85] = ACTIONS(177),
    [anon_sym_86] = ACTIONS(175),
    [anon_sym_87] = ACTIONS(175),
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
    [anon_sym_88] = ACTIONS(175),
    [anon_sym_89] = ACTIONS(177),
    [anon_sym_90] = ACTIONS(175),
    [anon_sym_91] = ACTIONS(175),
    [anon_sym_92] = ACTIONS(175),
    [anon_sym_93] = ACTIONS(175),
    [anon_sym_94] = ACTIONS(177),
    [anon_sym_95] = ACTIONS(175),
    [anon_sym_96] = ACTIONS(177),
    [anon_sym_97] = ACTIONS(177),
    [anon_sym_98] = ACTIONS(175),
    [anon_sym_99] = ACTIONS(177),
    [anon_sym_100] = ACTIONS(177),
    [anon_sym_101] = ACTIONS(177),
    [anon_sym_102] = ACTIONS(175),
    [anon_sym_103] = ACTIONS(175),
    [anon_sym_104] = ACTIONS(175),
    [anon_sym_105] = ACTIONS(175),
    [anon_sym_106] = ACTIONS(175),
    [anon_sym_107] = ACTIONS(175),
    [anon_sym_108] = ACTIONS(175),
    [anon_sym_109] = ACTIONS(175),
    [anon_sym_110] = ACTIONS(175),
    [anon_sym_111] = ACTIONS(175),
    [anon_sym_112] = ACTIONS(175),
    [anon_sym_113] = ACTIONS(177),
    [anon_sym_114] = ACTIONS(177),
    [anon_sym_115] = ACTIONS(177),
    [anon_sym_116] = ACTIONS(175),
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
    [anon_sym_117] = ACTIONS(177),
    [anon_sym_118] = ACTIONS(177),
    [anon_sym_119] = ACTIONS(175),
    [anon_sym_120] = ACTIONS(175),
    [anon_sym_121] = ACTIONS(177),
    [anon_sym_122] = ACTIONS(175),
    [anon_sym_123] = ACTIONS(177),
    [anon_sym_124] = ACTIONS(177),
    [anon_sym_125] = ACTIONS(177),
    [anon_sym_126] = ACTIONS(177),
    [anon_sym_127] = ACTIONS(177),
    [anon_sym_128] = ACTIONS(177),
    [anon_sym_129] = ACTIONS(177),
    [anon_sym_130] = ACTIONS(177),
    [anon_sym_131] = ACTIONS(175),
    [anon_sym_132] = ACTIONS(175),
    [anon_sym_133] = ACTIONS(175),
    [anon_sym_134] = ACTIONS(175),
    [anon_sym_135] = ACTIONS(175),
    [anon_sym_136] = ACTIONS(175),
    [anon_sym_137] = ACTIONS(175),
    [anon_sym_138] = ACTIONS(175),
    [anon_sym_139] = ACTIONS(175),
    [anon_sym_140] = ACTIONS(175),
    [anon_sym_141] = ACTIONS(175),
    [anon_sym_142] = ACTIONS(175),
    [anon_sym_143] = ACTIONS(175),
    [anon_sym_144] = ACTIONS(175),
    [anon_sym_145] = ACTIONS(177),
    [anon_sym_146] = ACTIONS(175),
    [anon_sym_147] = ACTIONS(177),
    [anon_sym_148] = ACTIONS(177),
    [anon_sym_149] = ACTIONS(177),
    [anon_sym_150] = ACTIONS(177),
    [anon_sym_151] = ACTIONS(177),
    [anon_sym_152] = ACTIONS(177),
    [anon_sym_153] = ACTIONS(177),
    [anon_sym_154] = ACTIONS(175),
    [anon_sym_155] = ACTIONS(175),
    [anon_sym_156] = ACTIONS(175),
    [anon_sym_157] = ACTIONS(175),
    [anon_sym_158] = ACTIONS(175),
    [anon_sym_159] = ACTIONS(175),
    [anon_sym_160] = ACTIONS(175),
    [anon_sym_161] = ACTIONS(175),
    [anon_sym_162] = ACTIONS(175),
    [anon_sym_163] = ACTIONS(175),
    [anon_sym_164] = ACTIONS(175),
    [anon_sym_165] = ACTIONS(175),
    [anon_sym_166] = ACTIONS(177),
    [anon_sym_167] = ACTIONS(177),
    [sym_type] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [aux_sym_z_token1] = ACTIONS(177),
    [aux_sym_z_token2] = ACTIONS(177),
    [aux_sym_z_token3] = ACTIONS(175),
    [sym_str] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [anon_sym_168] = ACTIONS(175),
    [anon_sym_169] = ACTIONS(175),
    [anon_sym_170] = ACTIONS(177),
    [anon_sym_171] = ACTIONS(177),
    [anon_sym_172] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [sym_int] = ACTIONS(177),
    [anon_sym_null] = ACTIONS(177),
    [anon_sym_173] = ACTIONS(175),
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
    [anon_sym_9] = ACTIONS(179),
    [anon_sym_10] = ACTIONS(179),
    [anon_sym_11] = ACTIONS(179),
    [anon_sym_12] = ACTIONS(181),
    [anon_sym_13] = ACTIONS(181),
    [anon_sym_14] = ACTIONS(181),
    [anon_sym_15] = ACTIONS(179),
    [anon_sym_16] = ACTIONS(181),
    [anon_sym_17] = ACTIONS(179),
    [anon_sym_18] = ACTIONS(181),
    [anon_sym_19] = ACTIONS(179),
    [anon_sym_20] = ACTIONS(181),
    [anon_sym_21] = ACTIONS(179),
    [anon_sym_22] = ACTIONS(179),
    [anon_sym_23] = ACTIONS(181),
    [anon_sym_24] = ACTIONS(179),
    [anon_sym_25] = ACTIONS(179),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(181),
    [anon_sym_struct] = ACTIONS(181),
    [anon_sym_enum] = ACTIONS(181),
    [anon_sym_var] = ACTIONS(181),
    [anon_sym_delegate] = ACTIONS(181),
    [anon_sym_26] = ACTIONS(179),
    [anon_sym_27] = ACTIONS(179),
    [anon_sym_28] = ACTIONS(179),
    [anon_sym_29] = ACTIONS(179),
    [anon_sym_30] = ACTIONS(179),
    [anon_sym_31] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_32] = ACTIONS(179),
    [anon_sym_33] = ACTIONS(179),
    [anon_sym_34] = ACTIONS(179),
    [anon_sym_35] = ACTIONS(179),
    [anon_sym_36] = ACTIONS(179),
    [anon_sym_37] = ACTIONS(179),
    [anon_sym_38] = ACTIONS(179),
    [anon_sym_39] = ACTIONS(179),
    [anon_sym_40] = ACTIONS(179),
    [anon_sym_41] = ACTIONS(181),
    [anon_sym_42] = ACTIONS(179),
    [anon_sym_43] = ACTIONS(179),
    [anon_sym_44] = ACTIONS(181),
    [anon_sym_45] = ACTIONS(181),
    [anon_sym_46] = ACTIONS(179),
    [anon_sym_47] = ACTIONS(179),
    [anon_sym_48] = ACTIONS(181),
    [anon_sym_49] = ACTIONS(179),
    [anon_sym_50] = ACTIONS(181),
    [anon_sym_return] = ACTIONS(181),
    [anon_sym_51] = ACTIONS(179),
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
    [anon_sym_52] = ACTIONS(179),
    [anon_sym_53] = ACTIONS(179),
    [anon_sym_54] = ACTIONS(179),
    [anon_sym_55] = ACTIONS(179),
    [anon_sym_56] = ACTIONS(181),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(179),
    [anon_sym_57] = ACTIONS(179),
    [anon_sym_58] = ACTIONS(179),
    [anon_sym_59] = ACTIONS(179),
    [anon_sym_60] = ACTIONS(179),
    [anon_sym_61] = ACTIONS(179),
    [anon_sym_62] = ACTIONS(179),
    [anon_sym_63] = ACTIONS(179),
    [anon_sym_64] = ACTIONS(179),
    [anon_sym_65] = ACTIONS(179),
    [anon_sym_66] = ACTIONS(179),
    [anon_sym_67] = ACTIONS(179),
    [anon_sym_68] = ACTIONS(181),
    [anon_sym_69] = ACTIONS(179),
    [anon_sym_70] = ACTIONS(179),
    [anon_sym_71] = ACTIONS(179),
    [anon_sym_72] = ACTIONS(179),
    [anon_sym_73] = ACTIONS(179),
    [anon_sym_74] = ACTIONS(179),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(179),
    [anon_sym_75] = ACTIONS(179),
    [anon_sym_76] = ACTIONS(179),
    [anon_sym_77] = ACTIONS(179),
    [anon_sym_78] = ACTIONS(179),
    [anon_sym_79] = ACTIONS(179),
    [anon_sym_80] = ACTIONS(179),
    [anon_sym_81] = ACTIONS(179),
    [anon_sym_82] = ACTIONS(179),
    [anon_sym_83] = ACTIONS(179),
    [anon_sym_84] = ACTIONS(181),
    [anon_sym_85] = ACTIONS(181),
    [anon_sym_86] = ACTIONS(179),
    [anon_sym_87] = ACTIONS(179),
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
    [anon_sym_88] = ACTIONS(179),
    [anon_sym_89] = ACTIONS(181),
    [anon_sym_90] = ACTIONS(179),
    [anon_sym_91] = ACTIONS(179),
    [anon_sym_92] = ACTIONS(179),
    [anon_sym_93] = ACTIONS(179),
    [anon_sym_94] = ACTIONS(181),
    [anon_sym_95] = ACTIONS(179),
    [anon_sym_96] = ACTIONS(181),
    [anon_sym_97] = ACTIONS(181),
    [anon_sym_98] = ACTIONS(179),
    [anon_sym_99] = ACTIONS(181),
    [anon_sym_100] = ACTIONS(181),
    [anon_sym_101] = ACTIONS(181),
    [anon_sym_102] = ACTIONS(179),
    [anon_sym_103] = ACTIONS(179),
    [anon_sym_104] = ACTIONS(179),
    [anon_sym_105] = ACTIONS(179),
    [anon_sym_106] = ACTIONS(179),
    [anon_sym_107] = ACTIONS(179),
    [anon_sym_108] = ACTIONS(179),
    [anon_sym_109] = ACTIONS(179),
    [anon_sym_110] = ACTIONS(179),
    [anon_sym_111] = ACTIONS(179),
    [anon_sym_112] = ACTIONS(179),
    [anon_sym_113] = ACTIONS(181),
    [anon_sym_114] = ACTIONS(181),
    [anon_sym_115] = ACTIONS(181),
    [anon_sym_116] = ACTIONS(179),
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
    [anon_sym_117] = ACTIONS(181),
    [anon_sym_118] = ACTIONS(181),
    [anon_sym_119] = ACTIONS(179),
    [anon_sym_120] = ACTIONS(179),
    [anon_sym_121] = ACTIONS(181),
    [anon_sym_122] = ACTIONS(179),
    [anon_sym_123] = ACTIONS(181),
    [anon_sym_124] = ACTIONS(181),
    [anon_sym_125] = ACTIONS(181),
    [anon_sym_126] = ACTIONS(181),
    [anon_sym_127] = ACTIONS(181),
    [anon_sym_128] = ACTIONS(181),
    [anon_sym_129] = ACTIONS(181),
    [anon_sym_130] = ACTIONS(181),
    [anon_sym_131] = ACTIONS(179),
    [anon_sym_132] = ACTIONS(179),
    [anon_sym_133] = ACTIONS(179),
    [anon_sym_134] = ACTIONS(179),
    [anon_sym_135] = ACTIONS(179),
    [anon_sym_136] = ACTIONS(179),
    [anon_sym_137] = ACTIONS(179),
    [anon_sym_138] = ACTIONS(179),
    [anon_sym_139] = ACTIONS(179),
    [anon_sym_140] = ACTIONS(179),
    [anon_sym_141] = ACTIONS(179),
    [anon_sym_142] = ACTIONS(179),
    [anon_sym_143] = ACTIONS(179),
    [anon_sym_144] = ACTIONS(179),
    [anon_sym_145] = ACTIONS(181),
    [anon_sym_146] = ACTIONS(179),
    [anon_sym_147] = ACTIONS(181),
    [anon_sym_148] = ACTIONS(181),
    [anon_sym_149] = ACTIONS(181),
    [anon_sym_150] = ACTIONS(181),
    [anon_sym_151] = ACTIONS(181),
    [anon_sym_152] = ACTIONS(181),
    [anon_sym_153] = ACTIONS(181),
    [anon_sym_154] = ACTIONS(179),
    [anon_sym_155] = ACTIONS(179),
    [anon_sym_156] = ACTIONS(179),
    [anon_sym_157] = ACTIONS(179),
    [anon_sym_158] = ACTIONS(179),
    [anon_sym_159] = ACTIONS(179),
    [anon_sym_160] = ACTIONS(179),
    [anon_sym_161] = ACTIONS(179),
    [anon_sym_162] = ACTIONS(179),
    [anon_sym_163] = ACTIONS(179),
    [anon_sym_164] = ACTIONS(179),
    [anon_sym_165] = ACTIONS(179),
    [anon_sym_166] = ACTIONS(181),
    [anon_sym_167] = ACTIONS(181),
    [sym_type] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
    [aux_sym_z_token1] = ACTIONS(181),
    [aux_sym_z_token2] = ACTIONS(181),
    [aux_sym_z_token3] = ACTIONS(179),
    [sym_str] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_168] = ACTIONS(179),
    [anon_sym_169] = ACTIONS(179),
    [anon_sym_170] = ACTIONS(181),
    [anon_sym_171] = ACTIONS(181),
    [anon_sym_172] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [sym_int] = ACTIONS(181),
    [anon_sym_null] = ACTIONS(181),
    [anon_sym_173] = ACTIONS(179),
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
    [anon_sym_9] = ACTIONS(183),
    [anon_sym_10] = ACTIONS(183),
    [anon_sym_11] = ACTIONS(183),
    [anon_sym_12] = ACTIONS(185),
    [anon_sym_13] = ACTIONS(185),
    [anon_sym_14] = ACTIONS(185),
    [anon_sym_15] = ACTIONS(183),
    [anon_sym_16] = ACTIONS(185),
    [anon_sym_17] = ACTIONS(183),
    [anon_sym_18] = ACTIONS(185),
    [anon_sym_19] = ACTIONS(183),
    [anon_sym_20] = ACTIONS(185),
    [anon_sym_21] = ACTIONS(183),
    [anon_sym_22] = ACTIONS(183),
    [anon_sym_23] = ACTIONS(185),
    [anon_sym_24] = ACTIONS(183),
    [anon_sym_25] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [anon_sym_struct] = ACTIONS(185),
    [anon_sym_enum] = ACTIONS(185),
    [anon_sym_var] = ACTIONS(185),
    [anon_sym_delegate] = ACTIONS(185),
    [anon_sym_26] = ACTIONS(183),
    [anon_sym_27] = ACTIONS(183),
    [anon_sym_28] = ACTIONS(183),
    [anon_sym_29] = ACTIONS(183),
    [anon_sym_30] = ACTIONS(183),
    [anon_sym_31] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_32] = ACTIONS(183),
    [anon_sym_33] = ACTIONS(183),
    [anon_sym_34] = ACTIONS(183),
    [anon_sym_35] = ACTIONS(183),
    [anon_sym_36] = ACTIONS(183),
    [anon_sym_37] = ACTIONS(183),
    [anon_sym_38] = ACTIONS(183),
    [anon_sym_39] = ACTIONS(183),
    [anon_sym_40] = ACTIONS(183),
    [anon_sym_41] = ACTIONS(185),
    [anon_sym_42] = ACTIONS(183),
    [anon_sym_43] = ACTIONS(183),
    [anon_sym_44] = ACTIONS(185),
    [anon_sym_45] = ACTIONS(185),
    [anon_sym_46] = ACTIONS(183),
    [anon_sym_47] = ACTIONS(183),
    [anon_sym_48] = ACTIONS(185),
    [anon_sym_49] = ACTIONS(183),
    [anon_sym_50] = ACTIONS(185),
    [anon_sym_return] = ACTIONS(185),
    [anon_sym_51] = ACTIONS(183),
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
    [anon_sym_52] = ACTIONS(183),
    [anon_sym_53] = ACTIONS(183),
    [anon_sym_54] = ACTIONS(183),
    [anon_sym_55] = ACTIONS(183),
    [anon_sym_56] = ACTIONS(185),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(183),
    [anon_sym_57] = ACTIONS(183),
    [anon_sym_58] = ACTIONS(183),
    [anon_sym_59] = ACTIONS(183),
    [anon_sym_60] = ACTIONS(183),
    [anon_sym_61] = ACTIONS(183),
    [anon_sym_62] = ACTIONS(183),
    [anon_sym_63] = ACTIONS(183),
    [anon_sym_64] = ACTIONS(183),
    [anon_sym_65] = ACTIONS(183),
    [anon_sym_66] = ACTIONS(183),
    [anon_sym_67] = ACTIONS(183),
    [anon_sym_68] = ACTIONS(185),
    [anon_sym_69] = ACTIONS(183),
    [anon_sym_70] = ACTIONS(183),
    [anon_sym_71] = ACTIONS(183),
    [anon_sym_72] = ACTIONS(183),
    [anon_sym_73] = ACTIONS(183),
    [anon_sym_74] = ACTIONS(183),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(183),
    [anon_sym_75] = ACTIONS(183),
    [anon_sym_76] = ACTIONS(183),
    [anon_sym_77] = ACTIONS(183),
    [anon_sym_78] = ACTIONS(183),
    [anon_sym_79] = ACTIONS(183),
    [anon_sym_80] = ACTIONS(183),
    [anon_sym_81] = ACTIONS(183),
    [anon_sym_82] = ACTIONS(183),
    [anon_sym_83] = ACTIONS(183),
    [anon_sym_84] = ACTIONS(185),
    [anon_sym_85] = ACTIONS(185),
    [anon_sym_86] = ACTIONS(183),
    [anon_sym_87] = ACTIONS(183),
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
    [anon_sym_88] = ACTIONS(183),
    [anon_sym_89] = ACTIONS(185),
    [anon_sym_90] = ACTIONS(183),
    [anon_sym_91] = ACTIONS(183),
    [anon_sym_92] = ACTIONS(183),
    [anon_sym_93] = ACTIONS(183),
    [anon_sym_94] = ACTIONS(185),
    [anon_sym_95] = ACTIONS(183),
    [anon_sym_96] = ACTIONS(185),
    [anon_sym_97] = ACTIONS(185),
    [anon_sym_98] = ACTIONS(183),
    [anon_sym_99] = ACTIONS(185),
    [anon_sym_100] = ACTIONS(185),
    [anon_sym_101] = ACTIONS(185),
    [anon_sym_102] = ACTIONS(183),
    [anon_sym_103] = ACTIONS(183),
    [anon_sym_104] = ACTIONS(183),
    [anon_sym_105] = ACTIONS(183),
    [anon_sym_106] = ACTIONS(183),
    [anon_sym_107] = ACTIONS(183),
    [anon_sym_108] = ACTIONS(183),
    [anon_sym_109] = ACTIONS(183),
    [anon_sym_110] = ACTIONS(183),
    [anon_sym_111] = ACTIONS(183),
    [anon_sym_112] = ACTIONS(183),
    [anon_sym_113] = ACTIONS(185),
    [anon_sym_114] = ACTIONS(185),
    [anon_sym_115] = ACTIONS(185),
    [anon_sym_116] = ACTIONS(183),
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
    [anon_sym_117] = ACTIONS(185),
    [anon_sym_118] = ACTIONS(185),
    [anon_sym_119] = ACTIONS(183),
    [anon_sym_120] = ACTIONS(183),
    [anon_sym_121] = ACTIONS(185),
    [anon_sym_122] = ACTIONS(183),
    [anon_sym_123] = ACTIONS(185),
    [anon_sym_124] = ACTIONS(185),
    [anon_sym_125] = ACTIONS(185),
    [anon_sym_126] = ACTIONS(185),
    [anon_sym_127] = ACTIONS(185),
    [anon_sym_128] = ACTIONS(185),
    [anon_sym_129] = ACTIONS(185),
    [anon_sym_130] = ACTIONS(185),
    [anon_sym_131] = ACTIONS(183),
    [anon_sym_132] = ACTIONS(183),
    [anon_sym_133] = ACTIONS(183),
    [anon_sym_134] = ACTIONS(183),
    [anon_sym_135] = ACTIONS(183),
    [anon_sym_136] = ACTIONS(183),
    [anon_sym_137] = ACTIONS(183),
    [anon_sym_138] = ACTIONS(183),
    [anon_sym_139] = ACTIONS(183),
    [anon_sym_140] = ACTIONS(183),
    [anon_sym_141] = ACTIONS(183),
    [anon_sym_142] = ACTIONS(183),
    [anon_sym_143] = ACTIONS(183),
    [anon_sym_144] = ACTIONS(183),
    [anon_sym_145] = ACTIONS(185),
    [anon_sym_146] = ACTIONS(183),
    [anon_sym_147] = ACTIONS(185),
    [anon_sym_148] = ACTIONS(185),
    [anon_sym_149] = ACTIONS(185),
    [anon_sym_150] = ACTIONS(185),
    [anon_sym_151] = ACTIONS(185),
    [anon_sym_152] = ACTIONS(185),
    [anon_sym_153] = ACTIONS(185),
    [anon_sym_154] = ACTIONS(183),
    [anon_sym_155] = ACTIONS(183),
    [anon_sym_156] = ACTIONS(183),
    [anon_sym_157] = ACTIONS(183),
    [anon_sym_158] = ACTIONS(183),
    [anon_sym_159] = ACTIONS(183),
    [anon_sym_160] = ACTIONS(183),
    [anon_sym_161] = ACTIONS(183),
    [anon_sym_162] = ACTIONS(183),
    [anon_sym_163] = ACTIONS(183),
    [anon_sym_164] = ACTIONS(183),
    [anon_sym_165] = ACTIONS(183),
    [anon_sym_166] = ACTIONS(185),
    [anon_sym_167] = ACTIONS(185),
    [sym_type] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [aux_sym_z_token1] = ACTIONS(185),
    [aux_sym_z_token2] = ACTIONS(185),
    [aux_sym_z_token3] = ACTIONS(183),
    [sym_str] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_168] = ACTIONS(183),
    [anon_sym_169] = ACTIONS(183),
    [anon_sym_170] = ACTIONS(185),
    [anon_sym_171] = ACTIONS(185),
    [anon_sym_172] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [sym_int] = ACTIONS(185),
    [anon_sym_null] = ACTIONS(185),
    [anon_sym_173] = ACTIONS(183),
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
    [anon_sym_9] = ACTIONS(187),
    [anon_sym_10] = ACTIONS(187),
    [anon_sym_11] = ACTIONS(187),
    [anon_sym_12] = ACTIONS(189),
    [anon_sym_13] = ACTIONS(189),
    [anon_sym_14] = ACTIONS(189),
    [anon_sym_15] = ACTIONS(187),
    [anon_sym_16] = ACTIONS(189),
    [anon_sym_17] = ACTIONS(187),
    [anon_sym_18] = ACTIONS(189),
    [anon_sym_19] = ACTIONS(187),
    [anon_sym_20] = ACTIONS(189),
    [anon_sym_21] = ACTIONS(187),
    [anon_sym_22] = ACTIONS(187),
    [anon_sym_23] = ACTIONS(189),
    [anon_sym_24] = ACTIONS(187),
    [anon_sym_25] = ACTIONS(187),
    [anon_sym_class] = ACTIONS(189),
    [anon_sym_interface] = ACTIONS(189),
    [anon_sym_struct] = ACTIONS(189),
    [anon_sym_enum] = ACTIONS(189),
    [anon_sym_var] = ACTIONS(189),
    [anon_sym_delegate] = ACTIONS(189),
    [anon_sym_26] = ACTIONS(187),
    [anon_sym_27] = ACTIONS(187),
    [anon_sym_28] = ACTIONS(187),
    [anon_sym_29] = ACTIONS(187),
    [anon_sym_30] = ACTIONS(187),
    [anon_sym_31] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_32] = ACTIONS(187),
    [anon_sym_33] = ACTIONS(187),
    [anon_sym_34] = ACTIONS(187),
    [anon_sym_35] = ACTIONS(187),
    [anon_sym_36] = ACTIONS(187),
    [anon_sym_37] = ACTIONS(187),
    [anon_sym_38] = ACTIONS(187),
    [anon_sym_39] = ACTIONS(187),
    [anon_sym_40] = ACTIONS(187),
    [anon_sym_41] = ACTIONS(189),
    [anon_sym_42] = ACTIONS(187),
    [anon_sym_43] = ACTIONS(187),
    [anon_sym_44] = ACTIONS(189),
    [anon_sym_45] = ACTIONS(189),
    [anon_sym_46] = ACTIONS(187),
    [anon_sym_47] = ACTIONS(187),
    [anon_sym_48] = ACTIONS(189),
    [anon_sym_49] = ACTIONS(187),
    [anon_sym_50] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(189),
    [anon_sym_51] = ACTIONS(187),
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
    [anon_sym_52] = ACTIONS(187),
    [anon_sym_53] = ACTIONS(187),
    [anon_sym_54] = ACTIONS(187),
    [anon_sym_55] = ACTIONS(187),
    [anon_sym_56] = ACTIONS(189),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(187),
    [anon_sym_57] = ACTIONS(187),
    [anon_sym_58] = ACTIONS(187),
    [anon_sym_59] = ACTIONS(187),
    [anon_sym_60] = ACTIONS(187),
    [anon_sym_61] = ACTIONS(187),
    [anon_sym_62] = ACTIONS(187),
    [anon_sym_63] = ACTIONS(187),
    [anon_sym_64] = ACTIONS(187),
    [anon_sym_65] = ACTIONS(187),
    [anon_sym_66] = ACTIONS(187),
    [anon_sym_67] = ACTIONS(187),
    [anon_sym_68] = ACTIONS(189),
    [anon_sym_69] = ACTIONS(187),
    [anon_sym_70] = ACTIONS(187),
    [anon_sym_71] = ACTIONS(187),
    [anon_sym_72] = ACTIONS(187),
    [anon_sym_73] = ACTIONS(187),
    [anon_sym_74] = ACTIONS(187),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(187),
    [anon_sym_75] = ACTIONS(187),
    [anon_sym_76] = ACTIONS(187),
    [anon_sym_77] = ACTIONS(187),
    [anon_sym_78] = ACTIONS(187),
    [anon_sym_79] = ACTIONS(187),
    [anon_sym_80] = ACTIONS(187),
    [anon_sym_81] = ACTIONS(187),
    [anon_sym_82] = ACTIONS(187),
    [anon_sym_83] = ACTIONS(187),
    [anon_sym_84] = ACTIONS(189),
    [anon_sym_85] = ACTIONS(189),
    [anon_sym_86] = ACTIONS(187),
    [anon_sym_87] = ACTIONS(187),
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
    [anon_sym_88] = ACTIONS(187),
    [anon_sym_89] = ACTIONS(189),
    [anon_sym_90] = ACTIONS(187),
    [anon_sym_91] = ACTIONS(187),
    [anon_sym_92] = ACTIONS(187),
    [anon_sym_93] = ACTIONS(187),
    [anon_sym_94] = ACTIONS(189),
    [anon_sym_95] = ACTIONS(187),
    [anon_sym_96] = ACTIONS(189),
    [anon_sym_97] = ACTIONS(189),
    [anon_sym_98] = ACTIONS(187),
    [anon_sym_99] = ACTIONS(189),
    [anon_sym_100] = ACTIONS(189),
    [anon_sym_101] = ACTIONS(189),
    [anon_sym_102] = ACTIONS(187),
    [anon_sym_103] = ACTIONS(187),
    [anon_sym_104] = ACTIONS(187),
    [anon_sym_105] = ACTIONS(187),
    [anon_sym_106] = ACTIONS(187),
    [anon_sym_107] = ACTIONS(187),
    [anon_sym_108] = ACTIONS(187),
    [anon_sym_109] = ACTIONS(187),
    [anon_sym_110] = ACTIONS(187),
    [anon_sym_111] = ACTIONS(187),
    [anon_sym_112] = ACTIONS(187),
    [anon_sym_113] = ACTIONS(189),
    [anon_sym_114] = ACTIONS(189),
    [anon_sym_115] = ACTIONS(189),
    [anon_sym_116] = ACTIONS(187),
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
    [anon_sym_117] = ACTIONS(189),
    [anon_sym_118] = ACTIONS(189),
    [anon_sym_119] = ACTIONS(187),
    [anon_sym_120] = ACTIONS(187),
    [anon_sym_121] = ACTIONS(189),
    [anon_sym_122] = ACTIONS(187),
    [anon_sym_123] = ACTIONS(189),
    [anon_sym_124] = ACTIONS(189),
    [anon_sym_125] = ACTIONS(189),
    [anon_sym_126] = ACTIONS(189),
    [anon_sym_127] = ACTIONS(189),
    [anon_sym_128] = ACTIONS(189),
    [anon_sym_129] = ACTIONS(189),
    [anon_sym_130] = ACTIONS(189),
    [anon_sym_131] = ACTIONS(187),
    [anon_sym_132] = ACTIONS(187),
    [anon_sym_133] = ACTIONS(187),
    [anon_sym_134] = ACTIONS(187),
    [anon_sym_135] = ACTIONS(187),
    [anon_sym_136] = ACTIONS(187),
    [anon_sym_137] = ACTIONS(187),
    [anon_sym_138] = ACTIONS(187),
    [anon_sym_139] = ACTIONS(187),
    [anon_sym_140] = ACTIONS(187),
    [anon_sym_141] = ACTIONS(187),
    [anon_sym_142] = ACTIONS(187),
    [anon_sym_143] = ACTIONS(187),
    [anon_sym_144] = ACTIONS(187),
    [anon_sym_145] = ACTIONS(189),
    [anon_sym_146] = ACTIONS(187),
    [anon_sym_147] = ACTIONS(189),
    [anon_sym_148] = ACTIONS(189),
    [anon_sym_149] = ACTIONS(189),
    [anon_sym_150] = ACTIONS(189),
    [anon_sym_151] = ACTIONS(189),
    [anon_sym_152] = ACTIONS(189),
    [anon_sym_153] = ACTIONS(189),
    [anon_sym_154] = ACTIONS(187),
    [anon_sym_155] = ACTIONS(187),
    [anon_sym_156] = ACTIONS(187),
    [anon_sym_157] = ACTIONS(187),
    [anon_sym_158] = ACTIONS(187),
    [anon_sym_159] = ACTIONS(187),
    [anon_sym_160] = ACTIONS(187),
    [anon_sym_161] = ACTIONS(187),
    [anon_sym_162] = ACTIONS(187),
    [anon_sym_163] = ACTIONS(187),
    [anon_sym_164] = ACTIONS(187),
    [anon_sym_165] = ACTIONS(187),
    [anon_sym_166] = ACTIONS(189),
    [anon_sym_167] = ACTIONS(189),
    [sym_type] = ACTIONS(187),
    [sym_comment] = ACTIONS(187),
    [aux_sym_z_token1] = ACTIONS(189),
    [aux_sym_z_token2] = ACTIONS(189),
    [aux_sym_z_token3] = ACTIONS(187),
    [sym_str] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_168] = ACTIONS(187),
    [anon_sym_169] = ACTIONS(187),
    [anon_sym_170] = ACTIONS(189),
    [anon_sym_171] = ACTIONS(189),
    [anon_sym_172] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [sym_int] = ACTIONS(189),
    [anon_sym_null] = ACTIONS(189),
    [anon_sym_173] = ACTIONS(187),
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
    [anon_sym_9] = ACTIONS(191),
    [anon_sym_10] = ACTIONS(191),
    [anon_sym_11] = ACTIONS(191),
    [anon_sym_12] = ACTIONS(193),
    [anon_sym_13] = ACTIONS(193),
    [anon_sym_14] = ACTIONS(193),
    [anon_sym_15] = ACTIONS(191),
    [anon_sym_16] = ACTIONS(193),
    [anon_sym_17] = ACTIONS(191),
    [anon_sym_18] = ACTIONS(193),
    [anon_sym_19] = ACTIONS(191),
    [anon_sym_20] = ACTIONS(193),
    [anon_sym_21] = ACTIONS(191),
    [anon_sym_22] = ACTIONS(191),
    [anon_sym_23] = ACTIONS(193),
    [anon_sym_24] = ACTIONS(191),
    [anon_sym_25] = ACTIONS(191),
    [anon_sym_class] = ACTIONS(193),
    [anon_sym_interface] = ACTIONS(193),
    [anon_sym_struct] = ACTIONS(193),
    [anon_sym_enum] = ACTIONS(193),
    [anon_sym_var] = ACTIONS(193),
    [anon_sym_delegate] = ACTIONS(193),
    [anon_sym_26] = ACTIONS(191),
    [anon_sym_27] = ACTIONS(191),
    [anon_sym_28] = ACTIONS(191),
    [anon_sym_29] = ACTIONS(191),
    [anon_sym_30] = ACTIONS(191),
    [anon_sym_31] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_32] = ACTIONS(191),
    [anon_sym_33] = ACTIONS(191),
    [anon_sym_34] = ACTIONS(191),
    [anon_sym_35] = ACTIONS(191),
    [anon_sym_36] = ACTIONS(191),
    [anon_sym_37] = ACTIONS(191),
    [anon_sym_38] = ACTIONS(191),
    [anon_sym_39] = ACTIONS(191),
    [anon_sym_40] = ACTIONS(191),
    [anon_sym_41] = ACTIONS(193),
    [anon_sym_42] = ACTIONS(191),
    [anon_sym_43] = ACTIONS(191),
    [anon_sym_44] = ACTIONS(193),
    [anon_sym_45] = ACTIONS(193),
    [anon_sym_46] = ACTIONS(191),
    [anon_sym_47] = ACTIONS(191),
    [anon_sym_48] = ACTIONS(193),
    [anon_sym_49] = ACTIONS(191),
    [anon_sym_50] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(193),
    [anon_sym_51] = ACTIONS(191),
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
    [anon_sym_52] = ACTIONS(191),
    [anon_sym_53] = ACTIONS(191),
    [anon_sym_54] = ACTIONS(191),
    [anon_sym_55] = ACTIONS(191),
    [anon_sym_56] = ACTIONS(193),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(191),
    [anon_sym_57] = ACTIONS(191),
    [anon_sym_58] = ACTIONS(191),
    [anon_sym_59] = ACTIONS(191),
    [anon_sym_60] = ACTIONS(191),
    [anon_sym_61] = ACTIONS(191),
    [anon_sym_62] = ACTIONS(191),
    [anon_sym_63] = ACTIONS(191),
    [anon_sym_64] = ACTIONS(191),
    [anon_sym_65] = ACTIONS(191),
    [anon_sym_66] = ACTIONS(191),
    [anon_sym_67] = ACTIONS(191),
    [anon_sym_68] = ACTIONS(193),
    [anon_sym_69] = ACTIONS(191),
    [anon_sym_70] = ACTIONS(191),
    [anon_sym_71] = ACTIONS(191),
    [anon_sym_72] = ACTIONS(191),
    [anon_sym_73] = ACTIONS(191),
    [anon_sym_74] = ACTIONS(191),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(191),
    [anon_sym_75] = ACTIONS(191),
    [anon_sym_76] = ACTIONS(191),
    [anon_sym_77] = ACTIONS(191),
    [anon_sym_78] = ACTIONS(191),
    [anon_sym_79] = ACTIONS(191),
    [anon_sym_80] = ACTIONS(191),
    [anon_sym_81] = ACTIONS(191),
    [anon_sym_82] = ACTIONS(191),
    [anon_sym_83] = ACTIONS(191),
    [anon_sym_84] = ACTIONS(193),
    [anon_sym_85] = ACTIONS(193),
    [anon_sym_86] = ACTIONS(191),
    [anon_sym_87] = ACTIONS(191),
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
    [anon_sym_88] = ACTIONS(191),
    [anon_sym_89] = ACTIONS(193),
    [anon_sym_90] = ACTIONS(191),
    [anon_sym_91] = ACTIONS(191),
    [anon_sym_92] = ACTIONS(191),
    [anon_sym_93] = ACTIONS(191),
    [anon_sym_94] = ACTIONS(193),
    [anon_sym_95] = ACTIONS(191),
    [anon_sym_96] = ACTIONS(193),
    [anon_sym_97] = ACTIONS(193),
    [anon_sym_98] = ACTIONS(191),
    [anon_sym_99] = ACTIONS(193),
    [anon_sym_100] = ACTIONS(193),
    [anon_sym_101] = ACTIONS(193),
    [anon_sym_102] = ACTIONS(191),
    [anon_sym_103] = ACTIONS(191),
    [anon_sym_104] = ACTIONS(191),
    [anon_sym_105] = ACTIONS(191),
    [anon_sym_106] = ACTIONS(191),
    [anon_sym_107] = ACTIONS(191),
    [anon_sym_108] = ACTIONS(191),
    [anon_sym_109] = ACTIONS(191),
    [anon_sym_110] = ACTIONS(191),
    [anon_sym_111] = ACTIONS(191),
    [anon_sym_112] = ACTIONS(191),
    [anon_sym_113] = ACTIONS(193),
    [anon_sym_114] = ACTIONS(193),
    [anon_sym_115] = ACTIONS(193),
    [anon_sym_116] = ACTIONS(191),
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
    [anon_sym_117] = ACTIONS(193),
    [anon_sym_118] = ACTIONS(193),
    [anon_sym_119] = ACTIONS(191),
    [anon_sym_120] = ACTIONS(191),
    [anon_sym_121] = ACTIONS(193),
    [anon_sym_122] = ACTIONS(191),
    [anon_sym_123] = ACTIONS(193),
    [anon_sym_124] = ACTIONS(193),
    [anon_sym_125] = ACTIONS(193),
    [anon_sym_126] = ACTIONS(193),
    [anon_sym_127] = ACTIONS(193),
    [anon_sym_128] = ACTIONS(193),
    [anon_sym_129] = ACTIONS(193),
    [anon_sym_130] = ACTIONS(193),
    [anon_sym_131] = ACTIONS(191),
    [anon_sym_132] = ACTIONS(191),
    [anon_sym_133] = ACTIONS(191),
    [anon_sym_134] = ACTIONS(191),
    [anon_sym_135] = ACTIONS(191),
    [anon_sym_136] = ACTIONS(191),
    [anon_sym_137] = ACTIONS(191),
    [anon_sym_138] = ACTIONS(191),
    [anon_sym_139] = ACTIONS(191),
    [anon_sym_140] = ACTIONS(191),
    [anon_sym_141] = ACTIONS(191),
    [anon_sym_142] = ACTIONS(191),
    [anon_sym_143] = ACTIONS(191),
    [anon_sym_144] = ACTIONS(191),
    [anon_sym_145] = ACTIONS(193),
    [anon_sym_146] = ACTIONS(191),
    [anon_sym_147] = ACTIONS(193),
    [anon_sym_148] = ACTIONS(193),
    [anon_sym_149] = ACTIONS(193),
    [anon_sym_150] = ACTIONS(193),
    [anon_sym_151] = ACTIONS(193),
    [anon_sym_152] = ACTIONS(193),
    [anon_sym_153] = ACTIONS(193),
    [anon_sym_154] = ACTIONS(191),
    [anon_sym_155] = ACTIONS(191),
    [anon_sym_156] = ACTIONS(191),
    [anon_sym_157] = ACTIONS(191),
    [anon_sym_158] = ACTIONS(191),
    [anon_sym_159] = ACTIONS(191),
    [anon_sym_160] = ACTIONS(191),
    [anon_sym_161] = ACTIONS(191),
    [anon_sym_162] = ACTIONS(191),
    [anon_sym_163] = ACTIONS(191),
    [anon_sym_164] = ACTIONS(191),
    [anon_sym_165] = ACTIONS(191),
    [anon_sym_166] = ACTIONS(193),
    [anon_sym_167] = ACTIONS(193),
    [sym_type] = ACTIONS(191),
    [sym_comment] = ACTIONS(191),
    [aux_sym_z_token1] = ACTIONS(193),
    [aux_sym_z_token2] = ACTIONS(193),
    [aux_sym_z_token3] = ACTIONS(191),
    [sym_str] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_168] = ACTIONS(191),
    [anon_sym_169] = ACTIONS(191),
    [anon_sym_170] = ACTIONS(193),
    [anon_sym_171] = ACTIONS(193),
    [anon_sym_172] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_int] = ACTIONS(193),
    [anon_sym_null] = ACTIONS(193),
    [anon_sym_173] = ACTIONS(191),
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
