#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;  // Declare a stack of integers

    // Pushing elements to the stack
    s.push(10);   // Stack: [10]
    s.push(20);   // Stack: [10, 20]
    s.push(30);   // Stack: [10, 20, 30]
    s.push(40);   // Stack: [10, 20, 30, 40]

    // Display the top element of the stack
    cout << "Top element: " << s.top() << endl;  // Output: 40

    // Pop an element from the stack
    s.pop();  // Removes 40 from the stack
    cout << "After popping, top element: " << s.top() << endl;  // Output: 30

    // Checking if the stack is empty
    if (!s.empty()) {
        cout << "Stack is not empty." << endl;
    }

    // Getting the size of the stack
    cout << "Size of the stack: " << s.size() << endl;  // Output: 3

    return 0;
}
