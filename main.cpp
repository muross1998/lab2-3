#include <iostream>
#include <cmath>

// Попередня функція f(x)
double f(double x) {
    double numerator   = -8.0 + x;
    double denominator = 20.0 + 1.0 / (8.0 + x);
    double term1 = numerator / denominator;
    double term2 = std::pow(std::tanh(x), 9.0);
    return term1 + term2;
}

// Нова функція g(x)
double g(double x) {
    const double a = -0.5;
    const double b =  0.5;
    
    if (x < a) {
        return 0.0;
    } else if (x <= b) {
        return f(x);
    } else {
        return x;
    }
}

int main() {
    double x;
    std::cout << "Enter x: ";
    if (!(std::cin >> x)) {
        std::cout << "Invalid input\n";
        return 1;
    }
    
    double result = g(x);
    std::cout << "g(" << x << ") = " << result << "\n";
    return 0;
}
