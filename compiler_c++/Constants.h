#ifndef CONSTANTS_H
#define CONSTANTS_H

enum TokenId 
{
    EPSILON  = 0,
    DOLLAR   = 1,
    t_TOKEN_2 = 2, //","
    t_TOKEN_3 = 3, //"+"
    t_TOKEN_4 = 4, //"-"
    t_TOKEN_5 = 5, //"*"
    t_TOKEN_6 = 6, //"/"
    t_TOKEN_7 = 7, //"="
    t_TOKEN_8 = 8, //"=="
    t_TOKEN_9 = 9, //"/="
    t_TOKEN_10 = 10, //">"
    t_TOKEN_11 = 11, //"<"
    t_TOKEN_12 = 12, //"<="
    t_TOKEN_13 = 13, //">="
    t_TOKEN_14 = 14, //"("
    t_TOKEN_15 = 15, //")"
    t_TOKEN_16 = 16, //"["
    t_TOKEN_17 = 17, //"]"
    t_TOKEN_18 = 18, //"{"
    t_TOKEN_19 = 19, //"}"
    t_numero = 20,
    t_variavel = 21,
    t_texto = 22,
    t_matbr = 23,
    t_leia = 24,
    t_escreva = 25,
    t_se = 26,
    t_senao = 27,
    t_enquanto = 28,
    t_escolha = 29,
    t_caso = 30,
    t_para = 31,
    t_ir = 32,
    t_de = 33,
    t_ate = 34,
    t_faca = 35,
    t_pi = 36,
    t_euler = 37
};

const int STATES_COUNT = 34;

extern int SCANNER_TABLE[STATES_COUNT][256];

extern int TOKEN_STATE[STATES_COUNT];

extern int SPECIAL_CASES_INDEXES[39];

extern const char *SPECIAL_CASES_KEYS[15];

extern int SPECIAL_CASES_VALUES[15];

extern const char *SCANNER_ERROR[STATES_COUNT];

const int START_SYMBOL = 38;

const int FIRST_NON_TERMINAL    = 38;
const int FIRST_SEMANTIC_ACTION = 67;

extern int PARSER_TABLE[29][37];

extern int PRODUCTIONS[53][11];

extern const char *PARSER_ERROR[67];

#endif
