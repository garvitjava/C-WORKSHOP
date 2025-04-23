#include <iostream>
#include <stdexcept>
#include <cmath> // For std::domain_error

// Function that might throw different kinds of errors
double calculate(double num) {
    if (num < 0) {
        throw std::domain_error("Input cannot be negative for square root.");
    }
    if (num > 100) {
        throw std::overflow_error("Input too large for this simple calculation.");
    }
    return std::sqrt(num);
}

int main() {
    std::cout << "--- Handling Different Errors ---" << std::endl;

    try {
        double result1 = calculate(25.0);
        std::cout << "Result for 25.0: " << result1 << std::endl;

        double result2 = calculate(-9.0); // This will throw std::domain_error
        std::cout << "Result for -9.0: " << result2 << std::endl; // Won't run

        double result3 = calculate(150.0); // This will throw std::overflow_error
        std::cout << "Result for 150.0: " << result3 << std::endl; // Won't run

    }
    // Catch the error for negative input
    catch (const std::domain_error& error) {
        std::cerr << "Math Error: " << error.what() << std::endl;
    }
    // Catch the error for input that's too large
    catch (const std::overflow_error& error) {
        std::cerr << "Size Error: " << error.what() << std::endl;
    }
    // Catch any other general errors (just in case)
    catch (const std::runtime_error& error) {
        std::cerr << "General Error: " << error.what() << std::endl;
    }

    std::cout << "\nEnd of program." << std::endl;
    return 0;
}
