#include "math_utils.h"
#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
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
    return pow(base, exp);
}

double square_root(double n) {
    double x = n;
    double y = 1.0;
    double epsilon = 0.000001;

    while (x - y > epsilon) {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}

double cube_root(double n) {
    double x = n;
    double epsilon = 0.000001;

    while ((x * x * x - n) > epsilon || (n - x * x * x) > epsilon) {
        x = (2 * x + n / (x * x)) / 3;
    }

    return x;
}

double nth_root(double base, int n) {
    return pow(base, 1.0 / n);
}

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, factorial(num));

    int a, b;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d", &a, &b);
    printf("LCM of %d and %d is: %d\n", a, b, lcm(a, b));

    double base;
    int exp;
    printf("Enter base and exponent for power calculation: ");
    scanf("%lf %d", &base, &exp);
    printf("%.2f raised to the power of %d is: %.2f\n", base, exp, power(base, exp));
    
    printf("Enter a number for square root and cube root calculation: ");
    scanf("%lf", &base);

    double sqrt_result = square_root(base);
    double cbrt_result = cube_root(base);

    printf("Square root of %.2f is: %.6f\n", base, sqrt_result);
    printf("Cube root of %.2f is: %.6f\n", base, cbrt_result);

    int n1;
    printf("Enter the value of n (root): ");
    scanf("%d", &n1);

    if (n1 <= 0) {
        printf("The value of n must be greater than 0.\n");
    } else if (base < 0 && n1 % 2 == 0) {
        printf("For even roots, the base must be non-negative.\n");
    } else {
        double result = nth_root(base, n1);
        printf("The %.d-th root of %.2lf is %.5lf\n", n1, base, result);
    }

    return 0;
}
