#include <stdio.h>
#include "geometry_utils.h"

int main()
{
    double radius, length, width, height, side, base_area, base_perimeter, slant_height;
    double x1, y1, x2, y2, x3, y3, z1, z2;

    //Area and perimeter of a circle
    radius = 5.0;
    printf("\nCircle - Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area_circle(radius));
    printf("Perimeter: %.2f\n\n", perimeter_circle(radius));

    //Area and perimeter of a rectangle
    length = 8.0;
    width = 4.0;
    printf("Rectangle - Length: %.2f, Width: %.2f\n", length, width);
    printf("Area: %.2f\n", area_rectangle(length, width));
    printf("Perimeter: %.2f\n\n", perimeter_rectangle(length, width));

    //Volume and Surface area of a cylinder
    height = 10.0;
    printf("Cylinder - Radius: %.2f, Height: %.2f\n", radius, height);
    printf("Volume: %.2f\n", volume_cylinder(radius, height));
    printf("Surface Area: %.2f\n\n", surface_area_cylinder(radius, height));

    //Volume and Surface area of a sphere
    printf("Sphere - Radius: %.2f\n", radius);
    printf("Volume: %.2f\n", volume_sphere(radius));
    printf("Surface Area: %.2f\n\n", surface_area_sphere(radius));

    //Volume and Surface area of a cube
    side = 5.0;
    printf("Cube - Side: %.2f\n", side);
    printf("Volume: %.2f\n", volume_cube(side));
    printf("Surface Area: %.2f\n\n", surface_area_cube(side));

    //Volume and Surface area of a cone
    slant_height = 7.0;
    printf("Cone - Radius: %.2f, Height: %.2f, Slant Height: %.2f\n", radius, height, slant_height);
    printf("Volume: %.2f\n", volume_cone(radius, height));
    printf("Surface Area: %.2f\n\n", surface_area_cone(radius, slant_height));

    //Volume and Surface area of a pyramid
    base_area = 8.0;
    base_perimeter = 10.0;
    printf("Pyramid - Base area: %.2f, Height: %.2f\n", base_area, height);
    printf("Volume: %.2f\n", volume_pyramid(base_area, height));
    printf("Surface Area: %.2f\n\n", surface_area_pyramid(base_perimeter, slant_height));

    //Distance between two points in 2D
    x1 = 1.0; y1 = 1.0;
    x2 = 4.0; y2 = 5.0;
    printf("2D Distance - Point 1 (%.2f, %.2f), Point 2 (%.2f, %.2f)\n", x1, y1, x2, y2);
    printf("Distance: %.2f\n\n", distance_2d(x1, y1, x2, y2));

    //Distance between two points in 3D
    z1 = 2.0; z2 = 6.0;
    printf("3D Distance - Point 1 (%.2f, %.2f, %.2f), Point 2 (%.2f, %.2f, %.2f)\n", x1, y1, z1, x2, y2, z2);
    printf("Distance: %.2f\n\n", distance_3d(x1, y1, z1, x2, y2, z2));

    //Slope
    printf("Slope - Point 1 (%.2f, %.2f), Point 2 (%.2f, %.2f)\n", x1, y1, x2, y2);
    printf("Slope: %.2f\n\n", slope(x1, y1, x2, y2));

    //Midpoint of x and y
    printf("Midpoint - Point 1 (%.2f, %.2f), Point 2 (%.2f, %.2f)\n", x1, y1, x2, y2);
    printf("Midpoint of x: %.2f\n", midpoint_x(x1, x2));
    printf("Midpoint of y: %.2f\n\n", midpoint_y(y1, y2));

    //Centroid of x and y
    x3 = 7.0; y3 = 2.0;
    printf("Centroid - Point 1 (%.2f, %.2f), Point 2 (%.2f, %.2f), Point 3 (%.2f, %.2f)\n", x1, y1, x2, y2, x3, y3);
    printf("Centroid of x: %.2f\n", centroid_x(x1, x2, x3));
    printf("Centroid of y: %.2f\n\n", centroid_y(y1, y2, y3));
    
    //Area and Perimeter of a triangle given three points
    printf("Triangle - Points (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f)\n", x1, y1, x2, y2, x3, y3);
    printf("Area: %.2f\n", triangle_area(x1, y1, x2, y2, x3, y3));
    printf("Perimeter: %.2f\n\n", perimeter_triangle(x1, y1, x2, y2, x3, y3));

    return 0;
}