#include "main.h"
#include <cmath>

// Mathematical functions to help with using the odometry
// Such as conversions to different units, or calculations to aid in the use of odometry

// Takes in radians and converts it to degrees
inline int rad2deg(double rad) {
    // Uses formula d = r * 180 / pi
    double deg = rad * 180 / M_PI;
    return deg;
}