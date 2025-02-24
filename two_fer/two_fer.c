#include "two_fer.h"
#include <string.h>
#include <stdlib.h>

void two_fer(char *buffer, const char *name) {
    const char *prefix = "One for ";
    const char *suffix = ", one for me.";
    if (name == NULL) {
        name = "you";
    }

    strcpy(buffer, prefix);
    strcat(buffer, name);
    strcat(buffer, suffix);
}