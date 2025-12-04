#include <stdio.h>
#include <math.h>

// Попередня функція f(x)
double f(double x) {
    double numerator   = -8.0 + x;
    double denominator = 20.0 + 1.0 / (8.0 + x);
    double term1 = numerator / denominator;
    double term2 = pow(tanh(x), 9.0);
    return term1 + term2;
}

// Нова функція g(x)
double g(double x) {
    double a = -0.5;
    double b =  0.5;
    
    if (x < a) {
        return 0.0;
    } else if (x <= b) {
        return f(x);
    } else {
        return x;
    }
}

int main(void) {
    double x;
    printf("Enter x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    
    double result = g(x);
    printf("g(%f) = %f\n", x, result);
    return 0;
}
