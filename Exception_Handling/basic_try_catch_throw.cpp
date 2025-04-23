#include <iostream>
#include <stdexcept> // For standard exception classes

// Function that might throw an exception
int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Error: Division by zero!");
    }
    return numerator / denominator;
}

int main() {
    int num1 = 10;
    int num2 = 0;
    int result;

    try {
        result = divide(num1, num2);
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::runtime_error& error) {
        std::cerr << "Caught an exception: " << error.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught a generic exception!" << std::endl;
    }

    std::cout << "Program continues after the try-catch block." << std::endl;

    return 0;
}
