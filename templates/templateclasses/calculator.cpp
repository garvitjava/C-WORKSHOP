#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) 
    { 
        return a + b; 
    }
    T subtract(T a, T b) { 
        return a - b; 
    }
    T multiply(T a, T b) {
         return a * b; 
        }
    T divide(T a, T b) { 
        return a / b; 
    }
};

int main() {
    Calculator<int> intCalc;
    cout << "Add: " << intCalc.add(5, 3) << endl;

    Calculator<float> floatCalc;
    cout << "Multiply: " << floatCalc.multiply(2.5, 4.1) << endl;

    return 0;
}
