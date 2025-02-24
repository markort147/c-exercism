#include "binary.h"
#include <string.h>

int convert(const char *input) {
    int len = strlen(input);
    int res = 0;
    for(int i = 0; i < len; i++) {
        char d = input[i];
        if (d > '1') {
            return INVALID;
        }
        if (d == '1') {
            res += int_pow(2, len - 1 - i);
        }
    }
    return res;
}

int int_pow(int base, int exp) {
    int res = 1;
    for(int i = 0; i < exp; i++) {
        res *= base;
    }    
    return res;
}