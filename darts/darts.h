#ifndef DARTS_H
#define DARTS_H

#include <stdint.h>

typedef struct {
    float x;
    float y;
} coordinate_t;

enum {
    OUTER_RADIUS = 10,
    MIDDLE_RADIUS = 5,
    INNER_RADIUS = 1
};

uint8_t score(coordinate_t position);

#endif
