#include "math_utils.h"
#include <stdio.h>
#include <math.h>

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

    while ((x*x*x - n) > epsilon || (n - x*x*x) > epsilon) {
        x = (2 * x + n / (x * x)) / 3;
    }

    return x;
}


double nth_root(double n, int root) {
    if (root < 1) {
        return -1;
    }
    
    double y = n;
    double epsilon = 0.000001;
    
    while (fabs(pow(y, root) - n) > epsilon) {
        y = ((root - 1) * y + n / pow(y, root - 1)) / root;
    }
    
    return y;
}


int main() {
            int a, b;
            printf("Enter two numbers to find their LCM: ");
            scanf("%d %d", &a, &b);
            printf("LCM of %d and %d is: %d\n", a, b, lcm(a, b));

            double base;
            int exp;
            printf("Enter base and exponent for power calculation: ");
            scanf("%lf %d", &base, &exp);
            printf("%.2f raised to the power of %d is: %.2f\n", base, exp, power(base, exp));
            return 0;
}
