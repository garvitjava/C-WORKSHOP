//sets are associative container which stores unique elements in some sorted order. 
//By default, it is sorted ascending order of the keys, but this can be changed as per requirement. 
//It provides fast insertion, deletion and search operations.

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declaration & Initialization
    set<int> s = {1, 4, 2};

    // Insert elements
    s.insert(5);        // insert() adds element (does nothing if already exists)
    s.emplace(3);       // emplace() is faster; constructs in-place
    s.insert(5);        // Duplicate won't be inserted

    cout << "After Insertion: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    // Accessing elements using iterator
    auto it1 = s.begin();            // Points to first (smallest) element
    auto it2 = next(it1, 2);         // Move iterator to 3rd element

    cout << "First Element: " << *it1 << endl;
    cout << "Third Element: " << *it2 << endl;

    // Finding an element
    auto itFind = s.find(3);         // Returns iterator to element or s.end()
    if (itFind != s.end())
        cout << "Element 3 Found: " << *itFind << endl;
    else
        cout << "Element 3 Not Found!" << endl;

    // Deleting elements
    s.erase(5);                      // Remove by value
    s.erase(s.begin());              // Remove by iterator (first element)

    cout << "After Deletion: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    return 0;
}
