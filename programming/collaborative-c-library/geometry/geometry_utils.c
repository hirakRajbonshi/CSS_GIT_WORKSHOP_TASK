#include<stdio.h>
#include "geometry_utils.h"
#define PI 3.14159
#include<math.h>


double area_circle(double radius) {
    double area = 3.14 * radius * radius;
    return area;
}
double area_rectangle(double length, double width) {
    double area = length * width;
    return area;
}
double perimeter_circle(double radius){
    double perimeter = 2*PI*radius;
    return perimeter;
}
double perimeter_rectangle(double length, double width){
    double perimeter = 2*(length + width);
    return perimeter;
}
double volume_cylinder(double radius, double height){
    double volume = PI*radius*radius*height;
    return volume;
}
double volume_sphere(double radius){
    double volume = PI*radius*radius*radius*4.0/3.0;
    return volume;
}
double volume_cube(double side){
    double volume = side *side*side;
    return volume;
}
double volume_cone(double radius, double height){
    double volume = PI*radius*radius*height/3.0;
    return volume;
}
double volume_pyramid(double base_area, double height){
    double volume = base_area*height/3.0;
    return volume;
}
double surface_area_cylinder(double radius, double height){
    double area = 2.0*PI*radius*height + 2*PI*radius * radius;
    return area;
}
double surface_area_sphere(double radius){
    double area = 4.0*PI*radius*radius;
    return area;
}
double surface_area_cube(double side){
    double area = 6.0*side*side;
    return area;
}
double surface_area_cone(double radius, double slant_height){
    double area = PI*(radius*slant_height + radius*radius);
    return area;
}
double surface_area_pyramid(double base_perimeter, double slant_height){
    double area = base_perimeter*slant_height/2.0;
    return area;
}
double distance_2d(double x1, double y1, double x2, double y2){
    double distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    return distance;
}
double distance_3d(double x1, double y1, double z1, double x2, double y2, double z2){
    double distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
    return distance;
}

double slope(double x1, double y1, double x2, double y2){
    double slope = (y2-y1)/(x2-x1);
    return slope;
}
double midpoint_x(double x1, double x2){
    double midpoint = (x2-x1)/2.0;
    return midpoint;
}
double midpoint_y(double y1, double y2){
    double midpoint = (y2-y1)/2.0;
    return midpoint;
}
double centroid_x(double x1, double x2, double x3){
    double centroid = (x1 + x2 + x3)/3.0;
    return centroid;
}
double centroid_y(double y1, double y2, double y3){
    double centroid = (y1 + y2 + y3)/3.0;
    return centroid;
}
double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3){
    double area = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    return area;
}
double perimeter_triangle(double x1, double y1, double x2, double y2, double x3, double y3){
    double perimeter = (sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) + sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)) + sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)));
    return perimeter;
}

int main(){
    printf("The area of circle is %f.\n", area_circle(1));
    printf("The area of rectangle is %f.\n", area_rectangle(1, 2));
    printf("The perimeter of circle is %f.\n", perimeter_circle(1));
    printf("The perimeter of rctangle is %f.\n", perimeter_rectangle(1, 2));
    printf("The volume of cylinder is %f.\n",volume_cylinder(1,2));
    printf("The volume of sphere is %f.\n",volume_sphere(1));
    printf("The volume of cube is %f.\n",volume_cube(1));
    printf("The volume of cone is %f.\n",volume_cone(1, 2));
    printf("The volume of pyramid is %f.\n",volume_pyramid(1 , 2));
    printf("The surface area of cylinder is %f.\n",surface_area_cylinder(1, 2));
    printf("The surface area of sphere is %f.\n",surface_area_sphere(1));
    printf("The surface area of cube is %f.\n",surface_area_cube(1));
    printf("The surface area of cone is %f.\n",surface_area_cone(1, 2));
    printf("The surface area of pyramid is %f.\n",surface_area_pyramid(1, 2));
    printf("The distance in 2D is %f.\n",distance_2d(1, 2 , 3, 4));
    printf("The distance in 3D is %f.\n",distance_3d(1, 2 , 3 , 4 , 5 , 6));
    printf("The slope is %f.\n",slope(1, 2, 3, 4));
    printf("The midpoint(x) is %f.\n",midpoint_x(1, 2));
    printf("The midpoint(y) is %f.\n",midpoint_y(1, 2));
    printf("The centroid(x) is %f.\n",centroid_x(1, 2, 3));
    printf("The centroid(y) is %f.\n",centroid_y(1, 2, 3));
    printf("The area of the triangle is %f.\n",triangle_area(1, 1, 3, 1, 3, 3));
    printf("The perimeter of the triangle is %f.\n",perimeter_triangle(1, 1, 3, 1, 3, 3));


    return 0;

}

