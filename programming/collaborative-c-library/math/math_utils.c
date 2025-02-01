#include <stdio.h>
#include "math_utils.h"

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int gcd(int a, int b)
 {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; 
    }
    return (a / gcd(a, b)) * b;
}

double power(double base, int exp)
{
double result = 1.0;
    for (int i = 0; i < abs(exp); ++i) {
        result *= base;
    }
    if (exp < 0) {
        result = 1.0 / result;
    }
    return result;
}

double square_root(double n)
{
    if (n < 0) {
        return -1.0; 
    }
    return sqrt(n);
}

double cube_root(double n)
{
    return cbrt(n);
}

double nth_root(double n, int root)
{
    if (root <= 0) {
        return -1.0; 
    }
    if (n < 0 && root % 2 == 0) {
        return -1.0;
    }
    return pow(n, 1.0 / root);
}
