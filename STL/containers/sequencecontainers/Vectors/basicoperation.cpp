#include <iostream>
#include <vector>
//A vector in C++ is a sequence container that encapsulates dynamic arrays. 
//It allows you to store elements of the same type, and 
//it can automatically resize itself when the number of elements exceeds its current capacity.
using namespace std;

int main() {
    //Initialization: The vector vec is initialized with values {1, 2, 3, 4, 5}.
    vector<int> vec = {1, 2, 3, 4, 5};


    // Display initial vector
    cout << "Initial vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    //push_back(): Adds 6 to the end of the vector.
    vec.push_back(6); 
    cout << "After push_back(6): ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Accessing Elements: Demonstrates accessing elements using the index operator [].
    cout << "Element at index 2: " << vec[2] << endl;

    // Resize the vector to increase its size (new elements will be initialized to 0)
    vec.resize(8, 0);
    cout << "After resize(8, 0): ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    
    //pop_back(): Removes the last element (6).
    vec.pop_back();
    cout << "After pop_back(): ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

//insert(): Inserts 99 at index 2 of the vector.

    vec.insert(vec.begin() + 2, 99); // Insert 99 at index 2
    cout << "After insert(99) at index 2: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // erase(): Removes the element at index 4.
    vec.erase(vec.begin() + 4); // Erase element at index 4
    cout << "After erase at index 4: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Iterator: Uses an iterator to loop through and print elements.
    cout << "Using an iterator to traverse the vector: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // size() and capacity(): Displays the current size and capacity of the vector.
    cout << "Size of the vector: " << vec.size() << endl;
    cout << "Capacity of the vector: " << vec.capacity() << endl;

    // Clear all elements from the vector
    vec.clear();
    cout << "After clear(), size: " << vec.size() << endl;

    return 0;
}
