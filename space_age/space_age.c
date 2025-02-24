#include "space_age.h"

float age(planet_t planet, int64_t seconds)
{
    float scaled;
    switch (planet)
    {
    case MERCURY:
        scaled = seconds / .2408467;
        break;
    case VENUS:
        scaled = seconds / .61519726;
        break;
    case MARS:
        scaled = seconds / 1.8808158;
        break;
    case JUPITER:
        scaled = seconds / 11.862615;
        break;
    case SATURN:
        scaled = seconds / 29.447498;
        break;
    case URANUS:
        scaled = seconds / 84.016846;
        break;
    case NEPTUNE:
        scaled = seconds / 164.79132;
        break;
    case EARTH:
        scaled = (float) seconds;
        break;
    default:
        return -1;
    }
    return scaled / EARTH_ORBIT;
}