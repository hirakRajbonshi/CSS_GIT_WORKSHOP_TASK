#include "geometry_utils.h"
#define PI 3.14159
double surface_area_cone(double radius, double slant_height) {
    double base_area = PI * radius * radius;     
    double lateral_area = PI * radius * slant_height;  
    return base_area + lateral_area;                     
}
double surface_area_pyramid(double base_perimeter, double slant_height, double base_area) {
    if (base_perimeter <= 0 || slant_height <= 0 || base_area <= 0) {
        return -1; 
    double lateral_area = (base_perimeter * slant_height) / 2.0;
    return base_area + lateral_area;
}

}

double distance_2d(double x1, double y1, double x2, double y2) {
return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
}

double distance_3d(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt((x2 - x1) * (x2 - x1) + 
                (y2 - y1) * (y2 - y1) + 
                (z2 - z1) * (z2 - z1)); 
}

#include <math.h>

double slope(double x1, double y1, double x2, double y2) {
    const double EPSILON = 1e-9;  
    double deltaX = x2 - x1;

    if (fabs(deltaX) < EPSILON) {
        return INFINITY;  
    }

    return (y2 - y1) / deltaX;
}


double midpoint_x(double x1, double x2) {
    return (x1 + x2) / 2.0; 
}


double midpoint_y(double y1, double y2) {
    return (y1 + y2) / 2.0; 
}


double centroid_x(double x1, double x2, double x3) {
    return (x1 + x2 + x3) / 3.0; 
}

double centroid_y(double y1, double y2, double y3) {
    return (y1 + y2 + y3) / 3.0; 
}


double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}



