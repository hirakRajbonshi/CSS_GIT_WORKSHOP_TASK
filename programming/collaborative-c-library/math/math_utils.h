#ifndef MATH_UTILS_H
#define MATH_UTILS_H
#include <math.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int gcd(int a, int b)
{
    int g;
    for (int i=1; i <= a && i <= b; i++)
    {
        if (a%i==0 && b%i==0)
        g = i;
    }
    return g;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

double power(double base, int exp)
{
    return pow(base,exp);
}

double square_root(double n)
{
    return sqrt(n);
}

double cube_root(double n)
{
    return pow(n,(1.0/3));
}

double nth_root(double n, int root)
{
    return pow(n,(1.0/root));
}



#endif
