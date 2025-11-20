#ifndef CALCULATOR_H
#define CALCULATOR_H
class Calculator {
public:
// Basic arithmetic operations (existing)
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
// Advanced mathematical operations (new features)
double power(double base, double exponent);
double squareRoot(double value);
int factorial(int n);
};
#endif