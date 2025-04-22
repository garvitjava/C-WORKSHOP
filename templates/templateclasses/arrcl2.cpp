#include <iostream>
using namespace std;

// Template for a Pair class that can hold two different types
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 f, T2 s) {
        first = f;
        second = s;
    }

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    // Create Pair of int and float
    Pair<int, float> marks(101, 85.5);
    marks.display();  // Output: First: 101, Second: 85.5

    // Create Pair of string and int
    Pair<string, int> student("Sanjna", 1);
    student.display();  // Output: First: Sanjna, Second: 1

    return 0;
}
