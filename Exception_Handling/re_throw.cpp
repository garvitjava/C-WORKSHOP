#include <iostream>
#include <stdexcept>

// Function that might detect a low-level issue
void lowLevelOperation(int value) {
    if (value < 0) {
        throw std::runtime_error("Low-level error: Negative value encountered.");
    }
    std::cout << "Low-level operation successful with value: " << value << std::endl;
}

// Function that uses the low-level operation and wants to add context to errors
void midLevelTask(int data) {
    try {
        lowLevelOperation(data);
        std::cout << "Mid-level task completed successfully with data: " << data << std::endl;
    } catch (const std::runtime_error& lowLevelError) {
        // Catch the low-level error, add more information, and re-throw
        throw std::runtime_error("Mid-level task failed due to: " + std::string(lowLevelError.what()));
    }
}

int main() {
    std::cout << "--- Re-throwing Exceptions ---" << std::endl;

    try {
        midLevelTask(10);
        midLevelTask(-5); // This will cause an exception
        midLevelTask(20);
    } catch (const std::runtime_error& midLevelError) {
        std::cerr << "Error in main: " << midLevelError.what() << std::endl;
    }

    std::cout << "\nEnd of program." << std::endl;
    return 0;
}
