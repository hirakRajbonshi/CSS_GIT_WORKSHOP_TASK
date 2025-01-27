#include "math_utils.h"
#include<stdio.h>
#include<math.h>

double square_root(double n);
double cube_root(double n);
double nth_root(double n, int root);

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
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


double nth_root(double base, int n) {
    return pow(base, 1.0 / n);
}


int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    double sqrt_result = square_root(num);
    double cbrt_result = cube_root(num);
     

    printf("Square root of %.2f is: %.6f\n", num, sqrt_result);
    printf("Cube root of %.2f is: %.6f\n", num, cbrt_result);
    
    double base;
    int n1;

    
    printf("Enter the number: ");
    scanf("%lf", &base);

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