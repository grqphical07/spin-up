#include "main.h"
#include <cmath>

// Mathematical functions to help with using the odometry


// Takes in radians and converts it to degrees
inline int rad2deg(double rad) {
    rad *= 180 / M_PI;
    return rad;
}