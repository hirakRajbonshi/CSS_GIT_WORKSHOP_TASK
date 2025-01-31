#include "math_utils.h"
#include <math.h>  // For power and root calculations

// Function to compute the factorial of a number (Recursive approach)
int factorial(int n) {
    if (n < 0) return -1; // Error case for negative numbers
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Function to compute the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function to compute the least common multiple (LCM)
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0; // LCM of zero is zero
    return (a / gcd(a, b)) * b;  // Avoids overflow
}

// Function to compute base^exp (Iterative approach for efficiency)
double power(double base, int exp) {
    double result = 1.0;
    int positive_exp = exp < 0 ? -exp : exp;
    
    while (positive_exp > 0) {
        if (positive_exp % 2 == 1) result *= base;
        base *= base;
        positive_exp /= 2;
    }

    return exp < 0 ? 1.0 / result : result;
}

// Function to compute square root using math library
double square_root(double n) {
    if (n < 0) return -1; // Error case for negative numbers
    return sqrt(n);
}

// Function to compute cube root using math library
double cube_root(double n) {
    return cbrt(n);
}

// Function to compute the nth root of a number using pow()
double nth_root(double n, int root) {
    if (root <= 0) return -1; // Error case for non-positive roots
    return pow(n, 1.0 / root);
}
