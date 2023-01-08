#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_package = 1,
  anon_sym_import = 2,
  anon_sym_function = 3,
  anon_sym_void = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_String = 7,
  anon_sym_boolean = 8,
  anon_sym_byte = 9,
  anon_sym_float = 10,
  anon_sym_int = 11,
  anon_sym_long = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_rule = 17,
  anon_sym_end = 18,
  anon_sym_when = 19,
  anon_sym_then = 20,
  sym_line_comment = 21,
  sym_block_comment = 22,
  sym_line = 23,
  sym_identifier = 24,
  sym_function_statement = 25,
  sym_when_statement = 26,
  sym_then_statement = 27,
  sym_source_file = 28,
  sym_definition = 29,
  sym_package_declaration = 30,
  sym_import_statement = 31,
  sym_function_definition = 32,
  sym_type = 33,
  sym_array_type = 34,
  sym_object_type = 35,
  sym_primitive_type = 36,
  sym_parameter_list = 37,
  sym_parameter = 38,
  sym_function_block = 39,
  sym_rule_definition = 40,
  sym_when_block = 41,
  sym_then_block = 42,
  sym_comment = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_source_file_repeat2 = 45,
  aux_sym_parameter_list_repeat1 = 46,
  aux_sym_function_block_repeat1 = 47,
  aux_sym_when_block_repeat1 = 48,
  aux_sym_then_block_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_function] = "function",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_String] = "String",
  [anon_sym_boolean] = "boolean",
  [anon_sym_byte] = "byte",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_rule] = "rule",
  [anon_sym_end] = "end",
  [anon_sym_when] = "when",
  [anon_sym_then] = "then",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_line] = "line",
  [sym_identifier] = "identifier",
  [sym_function_statement] = "function_statement",
  [sym_when_statement] = "when_statement",
  [sym_then_statement] = "then_statement",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_package_declaration] = "package_declaration",
  [sym_import_statement] = "import_statement",
  [sym_function_definition] = "function_definition",
  [sym_type] = "type",
  [sym_array_type] = "array_type",
  [sym_object_type] = "object_type",
  [sym_primitive_type] = "primitive_type",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_function_block] = "function_block",
  [sym_rule_definition] = "rule_definition",
  [sym_when_block] = "when_block",
  [sym_then_block] = "then_block",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_function_block_repeat1] = "function_block_repeat1",
  [aux_sym_when_block_repeat1] = "when_block_repeat1",
  [aux_sym_then_block_repeat1] = "then_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_then] = anon_sym_then,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_line] = sym_line,
  [sym_identifier] = sym_identifier,
  [sym_function_statement] = sym_function_statement,
  [sym_when_statement] = sym_when_statement,
  [sym_then_statement] = sym_then_statement,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_package_declaration] = sym_package_declaration,
  [sym_import_statement] = sym_import_statement,
  [sym_function_definition] = sym_function_definition,
  [sym_type] = sym_type,
  [sym_array_type] = sym_array_type,
  [sym_object_type] = sym_object_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_function_block] = sym_function_block,
  [sym_rule_definition] = sym_rule_definition,
  [sym_when_block] = sym_when_block,
  [sym_then_block] = sym_then_block,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_function_block_repeat1] = aux_sym_function_block_repeat1,
  [aux_sym_when_block_repeat1] = aux_sym_when_block_repeat1,
  [aux_sym_then_block_repeat1] = aux_sym_then_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_when_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_then_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_when_block] = {
    .visible = true,
    .named = true,
  },
  [sym_then_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_when_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_then_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_parameters = 3,
  field_return_type = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '.' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '.' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_function_statement);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '!') ADVANCE(99);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_function_statement);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_function_statement);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '!') ADVANCE(107);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_when_statement);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_then_statement);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_then_statement);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_then_statement);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_then_statement);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_then_statement);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_then_statement);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_then_statement);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 110},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 110},
  [30] = {.lex_state = 101},
  [31] = {.lex_state = 101},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 68},
  [49] = {.lex_state = 68},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_definition] = STATE(10),
    [sym_package_declaration] = STATE(6),
    [sym_import_statement] = STATE(5),
    [sym_function_definition] = STATE(18),
    [sym_rule_definition] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_source_file_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_rule] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(13),
    [sym_block_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      anon_sym_void,
    ACTIONS(18), 1,
      anon_sym_String,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_type,
    STATE(2), 2,
      sym_parameter,
      aux_sym_parameter_list_repeat1,
    STATE(40), 3,
      sym_array_type,
      sym_object_type,
      sym_primitive_type,
    ACTIONS(21), 5,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_float,
      anon_sym_int,
      anon_sym_long,
  [29] = 7,
    ACTIONS(26), 1,
      anon_sym_void,
    ACTIONS(28), 1,
      anon_sym_String,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_type,
    STATE(4), 2,
      sym_parameter,
      aux_sym_parameter_list_repeat1,
    STATE(40), 3,
      sym_array_type,
      sym_object_type,
      sym_primitive_type,
    ACTIONS(30), 5,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_float,
      anon_sym_int,
      anon_sym_long,
  [58] = 7,
    ACTIONS(26), 1,
      anon_sym_void,
    ACTIONS(28), 1,
      anon_sym_String,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_type,
    STATE(2), 2,
      sym_parameter,
      aux_sym_parameter_list_repeat1,
    STATE(40), 3,
      sym_array_type,
      sym_object_type,
      sym_primitive_type,
    ACTIONS(30), 5,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_float,
      anon_sym_int,
      anon_sym_long,
  [87] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(11), 2,
      sym_definition,
      aux_sym_source_file_repeat2,
    STATE(14), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(18), 3,
      sym_function_definition,
      sym_rule_definition,
      sym_comment,
  [117] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(11), 2,
      sym_definition,
      aux_sym_source_file_repeat2,
    STATE(18), 3,
      sym_function_definition,
      sym_rule_definition,
      sym_comment,
  [147] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(9), 2,
      sym_definition,
      aux_sym_source_file_repeat2,
    STATE(14), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(18), 3,
      sym_function_definition,
      sym_rule_definition,
      sym_comment,
  [177] = 5,
    ACTIONS(26), 1,
      anon_sym_void,
    ACTIONS(28), 1,
      anon_sym_String,
    STATE(35), 1,
      sym_type,
    STATE(40), 3,
      sym_array_type,
      sym_object_type,
      sym_primitive_type,
    ACTIONS(30), 5,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_float,
      anon_sym_int,
      anon_sym_long,
  [199] = 6,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(12), 2,
      sym_definition,
      aux_sym_source_file_repeat2,
    STATE(18), 3,
      sym_function_definition,
      sym_rule_definition,
      sym_comment,
  [222] = 6,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(12), 2,
      sym_definition,
      aux_sym_source_file_repeat2,
    STATE(18), 3,
      sym_function_definition,
      sym_rule_definition,
      sym_comment,
  [245] = 6,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_rule,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(12), 2,
      sym_definition,
      aux_sym_source_file_repeat2,
    STATE(18), 3,
      sym_function_definition,
      sym_rule_definition,
      sym_comment,
  [268] = 6,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_function,
    ACTIONS(47), 1,
      anon_sym_rule,
    ACTIONS(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(12), 2,
      sym_definition,
      aux_sym_source_file_repeat2,
    STATE(18), 3,
      sym_function_definition,
      sym_rule_definition,
      sym_comment,
  [291] = 1,
    ACTIONS(53), 8,
      anon_sym_void,
      anon_sym_String,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_float,
      anon_sym_int,
      anon_sym_long,
      anon_sym_RPAREN,
  [302] = 3,
    ACTIONS(57), 1,
      anon_sym_import,
    STATE(14), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [317] = 1,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [326] = 1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [335] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [343] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [351] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [359] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [367] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [375] = 1,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_rule,
      sym_line_comment,
      sym_block_comment,
  [383] = 3,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      sym_function_statement,
    STATE(28), 1,
      aux_sym_function_block_repeat1,
  [393] = 3,
    ACTIONS(80), 1,
      anon_sym_end,
    ACTIONS(82), 1,
      sym_then_statement,
    STATE(29), 1,
      aux_sym_then_block_repeat1,
  [403] = 3,
    ACTIONS(84), 1,
      anon_sym_then,
    ACTIONS(86), 1,
      sym_when_statement,
    STATE(31), 1,
      aux_sym_when_block_repeat1,
  [413] = 3,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym_function_statement,
    STATE(26), 1,
      aux_sym_function_block_repeat1,
  [423] = 3,
    ACTIONS(93), 1,
      anon_sym_end,
    ACTIONS(95), 1,
      sym_then_statement,
    STATE(27), 1,
      aux_sym_then_block_repeat1,
  [433] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      sym_function_statement,
    STATE(26), 1,
      aux_sym_function_block_repeat1,
  [443] = 3,
    ACTIONS(102), 1,
      anon_sym_end,
    ACTIONS(104), 1,
      sym_then_statement,
    STATE(27), 1,
      aux_sym_then_block_repeat1,
  [453] = 3,
    ACTIONS(106), 1,
      anon_sym_then,
    ACTIONS(108), 1,
      sym_when_statement,
    STATE(30), 1,
      aux_sym_when_block_repeat1,
  [463] = 3,
    ACTIONS(111), 1,
      anon_sym_then,
    ACTIONS(113), 1,
      sym_when_statement,
    STATE(30), 1,
      aux_sym_when_block_repeat1,
  [473] = 2,
    ACTIONS(115), 1,
      anon_sym_when,
    STATE(37), 1,
      sym_when_block,
  [480] = 2,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
  [487] = 2,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_parameter_list,
  [494] = 2,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      sym_identifier,
  [501] = 1,
    ACTIONS(125), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [506] = 2,
    ACTIONS(127), 1,
      anon_sym_then,
    STATE(42), 1,
      sym_then_block,
  [513] = 2,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_function_block,
  [520] = 1,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [525] = 1,
    ACTIONS(133), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [530] = 1,
    ACTIONS(135), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [535] = 1,
    ACTIONS(137), 1,
      anon_sym_end,
  [539] = 1,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
  [543] = 1,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
  [547] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [551] = 1,
    ACTIONS(145), 1,
      sym_identifier,
  [555] = 1,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
  [559] = 1,
    ACTIONS(149), 1,
      sym_line,
  [563] = 1,
    ACTIONS(151), 1,
      sym_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 302,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 343,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 367,
  [SMALL_STATE(22)] = 375,
  [SMALL_STATE(23)] = 383,
  [SMALL_STATE(24)] = 393,
  [SMALL_STATE(25)] = 403,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 433,
  [SMALL_STATE(29)] = 443,
  [SMALL_STATE(30)] = 453,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 473,
  [SMALL_STATE(33)] = 480,
  [SMALL_STATE(34)] = 487,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 501,
  [SMALL_STATE(37)] = 506,
  [SMALL_STATE(38)] = 513,
  [SMALL_STATE(39)] = 520,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 530,
  [SMALL_STATE(42)] = 535,
  [SMALL_STATE(43)] = 539,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 551,
  [SMALL_STATE(47)] = 555,
  [SMALL_STATE(48)] = 559,
  [SMALL_STATE(49)] = 563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(40),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(39),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(36),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(46),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_then_block, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_block, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2), SHIFT_REPEAT(26),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_then_block_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(27),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_then_block, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_when_block_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_when_block_repeat1, 2), SHIFT_REPEAT(30),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_block, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_drools(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
