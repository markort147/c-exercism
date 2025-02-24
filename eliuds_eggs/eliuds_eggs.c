#include "eliuds_eggs.h"

int egg_count(int sum) {
    int res = 0;
    while(sum > 0) {
        res += sum % 2;
        sum /= 2;
    }
    return res;
}