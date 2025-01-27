#include "math_utils.h"
#include <stdio.h>
#include <math.h>

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

double power(double base, int exp) {
    return pow(base, exp);
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
}
