#include "grains.h"
#include <stdbool.h>

uint64_t chess[64];
bool initiated = false;

void init() {
    chess[0] = 1;
    for(uint8_t i = 1; i < 64; i++) {
        chess[i] = chess[i-1]*2;
    }
    initiated = true;
}

uint64_t square(uint8_t index) {
    if(index < 1 || index > 64) {
        return 0;
    }
    if (!initiated) {
        init();
    }
    return chess[index-1];
}

uint64_t total(void) {
    uint64_t res = 0;
    for(uint8_t i = 0; i < 64; i++) {
        res += square(i+1);
    }
    return res;
}