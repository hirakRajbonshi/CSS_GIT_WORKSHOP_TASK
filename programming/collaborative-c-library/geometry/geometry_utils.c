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

double surface_area_sphere(double radius)
{
    
    return 4 * PI * radius * radius;

}
double surface_area_cube(double side)
{
   return 6 * side * side;
}
double surface_area_cone(double radius, double slant_height)
{
   return PI * radius * slant_height + PI * radius * radius;
}
double surface_area_pyramid(double base_perimeter, double slant_height)
{
  return 0.5 * base_perimeter * slant_height ;  
}
double distance_2d(double x1, double y1, double x2, double y2)
{
   return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double distance_3d(double x1, double y1, double z1, double x2, double y2, double z2)
{
  double dx = x2 - x1;
    double dy = y2 - y1;
    double dz = z2 - z1;
    return sqrt(dx * dx + dy * dy + dz * dz);
}
double slope(double x1, double y1, double x2, double y2) {
    if (x2 - x1 == 0) {
        
        printf("Slope is undefined for vertical lines.\n");
        return 0; 
    }
    return (y2 - y1) / (x2 - x1);
}


double midpoint_x(double x1, double x2) {
    return (x1 + x2) / 2;
}


double midpoint_y(double y1, double y2) {
    return (y1 + y2) / 2;
}

double centroid_x(double x1, double x2, double x3) {
    return (x1 + x2 + x3) / 3;
}


double centroid_y(double y1, double y2, double y3) {
    return (y1 + y2 + y3) / 3;
}
