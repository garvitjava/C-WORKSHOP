#include <iostream>
#include <string>
#include <stdexcept>

// 1. Create your own exception class
class NegativeNumberError : public std::runtime_error {
public:
    NegativeNumberError(const std::string& message) : std::runtime_error(message) {}
};

// Function that might throw our custom exception
int processPositiveNumber(int num) {
    if (num < 0) {
        throw NegativeNumberError("Input number cannot be negative.");
    }
    return num * 2;
}

int main() {
    std::cout << "--- Custom Exception Example ---" << std::endl;

    try {
        int result1 = processPositiveNumber(5);
        std::cout << "Processing 5: " << result1 << std::endl;

        int result2 = processPositiveNumber(-3); // This will throw our custom exception
        std::cout << "Processing -3: " << result2 << std::endl; // This line won't run
    } catch (const NegativeNumberError& error) {
        std::cerr << "Caught a custom error: " << error.what() << std::endl;
    } catch (const std::runtime_error& error) {
        std::cerr << "Caught a standard runtime error: " << error.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught an unknown error!" << std::endl;
    }

    std::cout << "\nEnd of program." << std::endl;
    return 0;
}
