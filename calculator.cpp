#include "calculator.h"
#include <cmath>
#include <stdexcept>
// Existing basic operations implementation remains unchanged
double Calculator::add(double a, double b) {
return a + b;
}
double Calculator::subtract(double a, double b) {
return a - b;
}
double Calculator::multiply(double a, double b) {
return a * b;
}
double Calculator::divide(double a, double b) {
if (b == 0) {
throw std::invalid_argument("Division by zero error");
}
return a / b;
}
// NEW: Advanced mathematical operations implementation
double Calculator::power(double base, double exponent) {
// Using std::pow for reliable exponentiation
return std::pow(base, exponent);
}
double Calculator::squareRoot(double value) {
// Validate input before calculation
if (value < 0) {
throw std::invalid_argument("Cannot calculate square root of negative number");
}
return std::sqrt(value);
}
int Calculator::factorial(int n) {
// Input validation and recursive implementation
if (n < 0) {
throw std::invalid_argument("Factorial not defined for negative numbers");
}
if (n == 0 || n == 1) {
return 1;
}
// Recursive calculation for factorial
return n * factorial(n - 1);
}