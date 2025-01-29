#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "math_utils.h"
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;
    }
    return a; 
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
double power(double base, int exp) {
    double result = 1.0;
    if (exp < 0) {
        base = 1 / base;
        exp = -exp;
    }
    for (int i = 0; i < exp; i++) 
        result *= base;
    return result;
}
double square_root(double n) {
    if (n < 0) {
        printf("Error: Negative input\n");
        return -1; 
    }
    double g = n / 2.0;
    double t = 0.000001;  
    while ((g*g- n) > t || (n - g*g) > t) {
        g = (g+ n / g) / 2.0; 
        }
    return g;
}
double cube_root(double n) {
    return pow(n, 1.0 / 3.0);
}
double nth_root(double n, int root) {
    if (root == 0) {
        return 0; 
    }
    return pow(n, 1.0 / root);
}