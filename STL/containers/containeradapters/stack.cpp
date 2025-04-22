// Container adapters provide a different interface for other containers. 
//They adapt the behavior of underlying containers to fit specific use cases.
//Implemented using deque by default, but can also be based on vector or list.
#include <bits/stdc++.h>
using namespace std;

//stack container follows LIFO (Last In First Out) order of insertion and deletion. 
//It means that most recently inserted element is removed first and the first inserted element will be removed last. 
//This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.

int main() {
    stack<int> st;

    // Pushing elements (adds to top)
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack after pushing: ";
    stack<int> temp = st;  // Create copy to print
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << "\n";

    // Accessing top element
    cout << "Top element: " << st.top() << endl;

    // Popping top element
    st.pop();  // Removes 30
    cout << "Top after pop: " << st.top() << endl;

    // Size of stack
    cout << "Stack size: " << st.size() << endl;

    // Checking if stack is empty
    if (st.empty()) cout << "Stack is empty\n";
    else cout << "Stack is not empty\n";

    return 0;
}
