#ifndef GEOMETRY_UTILS_H
#define GEOMETRY_UTILS_H
#include <math.h>
#define PI 3.14159

double area_circle(double radius)
{
    double a;
    a = PI * radius * radius;
    return a;
}

double area_rectangle(double length, double width)
{
    double a;
    a = length * width;
    return a;
}

double perimeter_circle(double radius)
{
    double p;
    p = 2 * PI * radius;
    return p;
}

double perimeter_rectangle(double length, double width)
{
    double p;
    p = 2 * (length + width);
    return p;
}

double volume_cylinder(double radius, double height)
{
    double v;
    v = PI * radius * radius * height;
    return v;
}

double volume_sphere(double radius)
{
    double v;
    v = (4/3) * PI * radius * radius * radius;
    return v;
}

double volume_cube(double side)
{
    double v;
    v = side * side * side;
    return v;
}

double volume_cone(double radius, double height)
{
    double v;
    v = (1/3) * PI * radius * radius * height;
    return v;
}

double volume_pyramid(double base_area, double height)
{
    double v;
    v = (1/3) * base_area * height;
    return v;
}

double surface_area_cylinder(double radius, double height)
{
    double sa;
    sa = 2*PI*radius*(radius+height);
    return sa;
}

double surface_area_sphere(double radius)
{
    double sa;
    sa = 4*PI*radius*radius;
    return sa;
}

double surface_area_cube(double side)
{
    double sa;
    sa = 6 * side * side;
    return sa;
}

double surface_area_cone(double radius, double slant_height)
{
    double sa;
    sa = PI*radius*(radius+slant_height);
    return sa;
}

double surface_area_pyramid(double base_perimeter, double slant_height)
{
    double sa;
    sa = (1/2) * base_perimeter * slant_height;
    return sa;
}

double distance_2d(double x1, double y1, double x2, double y2)
{
    double d;
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return d;
}

double distance_3d(double x1, double y1, double z1, double x2, double y2, double z2)
{
    double d;
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    return d;
}

double slope(double x1, double y1, double x2, double y2)
{
    double d;
    d = (y2-y1)/(x2-x1);
    return d;
}

double midpoint_x(double x1, double x2)
{
    double d;
    d = (x2+x1)/2;
    return d;
}

double midpoint_y(double y1, double y2)
{
    double d;
    d = (y2+y1)/2;
    return d;
}

double centroid_x(double x1, double x2, double x3)
{
    double d;
    d = (x2+x1+x3)/3;
    return d;
}

double centroid_y(double y1, double y2, double y3)
{
    double d;
    d = (y2+y1+y3)/3;
    return d;
}

double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a;
    a = (1/2) * (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    return a;
}

double perimeter_triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double p;
    p = sqrt(pow((x2-x1),2)+pow((y2-y1),2)) + sqrt(pow((x2-x3),2)+pow((y2-y3),2)) + sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    return p;
}


#endif
