#include "include/utils.h"
#include <stdio.h>

int main() {
    int n;
    printf("Factorial of 5: %d\n", factorial(5));
    printf("The gcd of 24 and 96 is: %d\n", gcd(24,96));
    printf("The LCM of 90 and 40 is: %d\n",lcm(90,40));
    printf("2 raised to the power 6 is: %lf\n",power(2.0,6));
    printf("The square root of 31 is: %lf\n",square_root(31.0));
    printf("The cube root of 36 is: %lf\n",cube_root(36.0));
    printf("Enter the value of n to find the nth root of 46: ");
    scanf("%d",&n);
    printf("The %dth root of 46 is %lf",n,nth_root(46.0,n));
    printf("The area of circle with radius 7.2 is %lf\n",area_circle(7.2));
    printf("The area of  triangle with co-ordinates (1,0),(3.3,-8.4),(0,5) is: %lf\n",triangle_area(1.0,0.0,3.3,-8.4,0,5));
    printf("The perimeter of triangle with co-ordinates (1,0),(3.3,-8.4),(0,5) is: %lf\n",perimeter_triangle(1.0,0.0,3.3,-8.4,0,5));
    return 0;
}
