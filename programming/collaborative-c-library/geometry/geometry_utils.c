#include "geometry_utils.h"
#include <math.h>  // Needed for sqrt()

// Define PI if it's not defined in the header file
#ifndef PI
#define PI 3.14159265358979323846
#endif

// Function to calculate the area of a circle
double area_circle(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double area_rectangle(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a circle
double perimeter_circle(double radius) {
    return 2 * PI * radius;
}

// Function to calculate the perimeter of a rectangle
double perimeter_rectangle(double length, double width) {
    return 2 * (length + width);
}

// Function to calculate the volume of a cylinder
double volume_cylinder(double radius, double height) {
    return PI * radius * radius * height;
}

// Function to calculate the volume of a sphere
double volume_sphere(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

// Function to calculate the volume of a cube
double volume_cube(double side) {
    return side * side * side;
}

// Function to calculate the volume of a cone
double volume_cone(double radius, double height) {
    return (1.0 / 3.0) * PI * radius * radius * height;
}

// Function to calculate the volume of a pyramid
double volume_pyramid(double base_area, double height) {
    return (1.0 / 3.0) * base_area * height;
}

// Function to calculate the surface area of a cylinder
double surface_area_cylinder(double radius, double height) {
    return 2 * PI * radius * (radius + height);
}

// Function to calculate the surface area of a sphere
double surface_area_sphere(double radius) {
    return 4 * PI * radius * radius;
}

// Function to calculate the surface area of a cube
double surface_area_cube(double side) {
    return 6 * side * side;
}

// Function to calculate the surface area of a cone
double surface_area_cone(double radius, double slant_height) {
    return PI * radius * (radius + slant_height);
}

// Function to calculate the surface area of a pyramid
double surface_area_pyramid(double base_perimeter, double slant_height) {
    return (1.0 / 2.0) * base_perimeter * slant_height;
}

// Function to calculate the distance between two points in 2D space
double distance_2d(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Function to calculate the distance between two points in 3D space
double distance_3d(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
}

// Function to calculate the slope between two points
double slope(double x1, double y1, double x2, double y2) {
    if (x1 == x2) return NAN; // Avoid division by zero (vertical line)
    return (y2 - y1) / (x2 - x1);
}

// Function to find the x-coordinate of the midpoint
double midpoint_x(double x1, double x2) {
    return (x1 + x2) / 2;
}

// Function to find the y-coordinate of the midpoint
double midpoint_y(double y1, double y2) {
    return (y1 + y2) / 2;
}

// Function to find the x-coordinate of the centroid of a triangle
double centroid_x(double x1, double x2, double x3) {
    return (x1 + x2 + x3) / 3;
}

// Function to find the y-coordinate of the centroid of a triangle
double centroid_y(double y1, double y2, double y3) {
    return (y1 + y2 + y3) / 3;
}

// Function to calculate the area of a triangle using the determinant method
double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

// Function to calculate the perimeter of a triangle
double perimeter_triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    double side1 = distance_2d(x1, y1, x2, y2);
    double side2 = distance_2d(x2, y2, x3, y3);
    double side3 = distance_2d(x3, y3, x1, y1);
    return side1 + side2 + side3;
}
