#include <iostream>
#include "calculator.h"
#include <stdexcept>
int main() {
Calculator calc;
std::cout << "=== Enhanced C++ Calculator Project ===" << std::endl;
std::cout << "Demonstrating Basic and Advanced Operations" << std::endl;
std::cout << "=========================================" << std::endl;
// Demonstrate basic operations
std::cout << "\n--- Basic Arithmetic Operations ---" << std::endl;
std::cout << "Addition: 5 + 3 = " << calc.add(5, 3) << std::endl;
std::cout << "Subtraction: 5 - 3 = " << calc.subtract(5, 3) << std::endl;
std::cout << "Multiplication: 5 * 3 = " << calc.multiply(5, 3) << std::endl;
std::cout << "Division: 6 / 3 = " << calc.divide(6, 3) << std::endl;
// Demonstrate new advanced operations
std::cout << "\n--- Advanced Mathematical Operations ---" << std::endl;
std::cout << "Power: 2^3 = " << calc.power(2, 3) << std::endl;
std::cout << "Square Root: sqrt(16) = " << calc.squareRoot(16) << std::endl;
std::cout << "Factorial: 5! = " << calc.factorial(5) << std::endl;
// Demonstrate error handling
std::cout << "\n--- Error Handling Demonstration ---" << std::endl;
try {
std::cout << "Testing division by zero: " << calc.divide(5, 0) << std::endl;
} catch (const std::exception& e) {
std::cout << "Caught exception: " << e.what() << std::endl;
}
try {
std::cout << "Testing negative square root: " << calc.squareRoot(-4) << std::endl;
} catch (const std::exception& e) {
std::cout << "Caught exception: " << e.what() << std::endl;
}
std::cout << "\n=== Program Completed Successfully ===" << std::endl;
return 0;
}