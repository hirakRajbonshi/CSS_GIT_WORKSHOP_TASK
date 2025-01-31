#include "math_utils.h"
#include <stdio.h>

int main()
{
    int n, a, b, exp, root;
    double x, base;

    n = 6;

    //Factorial
    printf("\nFactorial - n : %d\n", n);
    printf("%d\n\n",factorial(n));

    //GCD
    a = 5; b = 28;
    printf("GCD - a : %d, b : %d\n", a,b);
    printf("%d\n\n",gcd(a,b));

    //LCM
    printf("LCM - a : %d, b : %d\n", a,b);
    printf("%d\n\n",lcm(a,b));

    //Power
    base = 4; exp = 3;
    printf("Power - base : %.2f, exp : %d\n", base, exp);
    printf("%.2f\n\n",power(base,exp));

    //Square Root
    x = 135;
    printf("Square Root - n : %.2f\n", x);
    printf("%.2f\n\n",square_root(x));

    //Cube Root
    printf("Cube Root - n : %.2f\n", x);
    printf("%.2f\n\n",cube_root(x));

    //Nth Root
    root = 5;
    printf("Nth Root - n : %.2f, root : %d\n", x, root);
    printf("%.2f\n\n",nth_root(x,root));

    return 0;
}