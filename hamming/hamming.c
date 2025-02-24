#include "hamming.h"

#include <string.h>

int compute(const char *lhs, const char *rhs) {
    int len_lhs = strlen(lhs);
    int len_rhs = strlen(rhs);
    
    if(len_lhs != len_rhs) {
        return ERROR_CODE;
    }

    int dist = 0;
    for(int i = 0; i < len_lhs; i++) {
        if(lhs[i] != rhs[i]) {
            dist++;
        }
    }
    return dist;
}