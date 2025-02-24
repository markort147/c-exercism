#include "darts.h"

uint8_t score(coordinate_t position) {
    float distance = position.x*position.x + position.y*position.y;
    if (distance > OUTER_RADIUS*OUTER_RADIUS) {
        return 0;
    }
    if (distance > MIDDLE_RADIUS*MIDDLE_RADIUS) {
        return 1;
    }
    if (distance > INNER_RADIUS*INNER_RADIUS) {
        return 5;
    }
    return 10;
}
