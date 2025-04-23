#include <iostream>
#include <stdexcept>

// Class with a destructor to show when objects are destroyed
class Resource {
public:
    Resource(const std::string& name) : name_(name) {
        std::cout << "Resource '" << name_ << "' acquired." << std::endl;
    }
    ~Resource() {
        std::cout << "Resource '" << name_ << "' released." << std::endl;
    }
private:
    std::string name_;
};

// Function that allocates a resource
void functionC() {
    Resource localResourceC("Resource C (in functionC)");
    std::cout << "Function C is executing." << std::endl;
    throw std::runtime_error("Exception thrown from function C!");
}

// Function that calls functionC
void functionB() {
    Resource localResourceB("Resource B (in functionB)");
    std::cout << "Function B calling function C." << std::endl;
    functionC();
    std::cout << "Function B finished (this won't be reached if exception is thrown)." << std::endl;
}

// Function that calls functionB
void functionA() {
    Resource localResourceA("Resource A (in functionA)");
    std::cout << "Function A calling function B." << std::endl;
    functionB();
    std::cout << "Function A finished (this won't be reached if exception is thrown)." << std::endl;
}

int main() {
    std::cout << "--- Stack Unwinding Example ---" << std::endl;

    try {
        functionA();
        std::cout << "Main function finished (this won't be reached if exception is thrown)." << std::endl;
    } catch (const std::runtime_error& error) {
        std::cerr << "Exception caught in main: " << error.what() << std::endl;
    }

    std::cout << "\nEnd of program." << std::endl;
    return 0;
}
