#include "math_utils.h"
#include<math.h>

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


double nth_root(double n, int root) {
    if (root < 1) {
        return -1;
    }
    
    double x = n;
    double epsilon = 0.000001;
    
    while (fabs(pow(x, root) - n) > epsilon) {
        x = ((root - 1) * x + n / pow(x, root - 1)) / root;
    }
    
    return x;
}