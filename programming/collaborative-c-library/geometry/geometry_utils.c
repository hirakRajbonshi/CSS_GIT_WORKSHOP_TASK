#include "geometry_utils.h"
#define PI 3.14159

double area_circle(double radius) {
    double area = 3.14 * radius * radius;
    return area;
}
double area_rectangle(double length, double width){
    double area = length*width;
    return area;
}
double perimeter_circle(double radius){
    double perimeter = 2*PI*radius;
    return perimeter;
}
double perimeter_rectangle(double length, double width){
    double perimeter = 2*length*width;
    return perimeter;
}
double volume_cylinder(double radius, double height){
    double volume = PI*radius*radius*height;
    return volume;
}
double volume_sphere(double radius){
    double volume =(4/3)*PI*radius*radius*radius;
    return volume;
}
double volume_cube(double side){
    double volume =side*side*side;
    return volume;
}
double volume_cone(double radius, double height){
    double volume =(1.0/3)*PI*radius*radius*height;
    return volume;
}
double base_area(double length,double width){
    double area=length*width;
    return area;
}
double volume_pyramid(double base_area, double height){
    double volume =(1.0/3)*base_area*height;
    return volume;
}
double surface_area_cylinder(double radius, double height){
    double surface_area =2*PI*radius*(radius+height);
    return surface_area;
}
double surface_area_sphere(double radius){
    double surface_area =4*PI*radius*radius;
    return surface_area;
}