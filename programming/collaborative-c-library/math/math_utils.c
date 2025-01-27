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


int main() {
            int num;
            printf("Enter a number to calculate its factorial: ");
            scanf("%d", &num);
            printf("Factorial of %d is: %d\n", num, factorial(num));

            int a, b;
            printf("Enter two numbers to find their GCD: ");
            scanf("%d %d", &a, &b);
            printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
}