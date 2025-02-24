#include "collatz_conjecture.h"

int steps(int start) {
    if(start < 1) {
        return ERROR_VALUE;
    }
    
    int s = 0;
    while(start != 1) {
        if(start % 2 == 0) {
            start /= 2;
        } else {
            start *= 3;
            start++;
        }
        s++;
    }
    return s;
}   
