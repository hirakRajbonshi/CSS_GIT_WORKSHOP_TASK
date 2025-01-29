#include "geometry_utils.h"
#include<math.h>
#include <stdio.h>
#define PI 3.14159
#define g 9.8 



double area_rectangle(double length, double width) {
    return length*width;
}
double perimeter_circle(double radius) {
    return 2 * PI * radius;
}
double perimeter_rectangle(double length, double width) {
    return 2 * (length + width);
}
double volume_cylinder(double radius, double height) {
    return PI * radius * radius * height;
}
double volume_sphere(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}
double volume_cube(double side) {
    return side * side * side;
}
double volume_cone(double radius, double height) {
    return (1.0 / 3.0) * PI * radius * radius * height;
}
double volume_pyramid(double side, double height) {
    double base_area = side * side; 
    return (1.0 / 3.0) * base_area * height;
}
double surface_area_cylinder(double radius, double height) {
    return 2 * PI * radius * (height + radius);
}

double area_circle(double radius) {
    return PI * radius * radius; 
}

double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs(x1 * y2 + x2 * y3 + x3 * y1 - (y1 * x2 + y2 * x3 + y3 * x1));
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
double perimeter_triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);
    return side1 + side2 + side3;
}
