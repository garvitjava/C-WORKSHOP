//multiset is an associative container similar to the set, but it can store multiple elements with same value. 
//It is sorted in increasing order by default, but it can be changed to any desired order. 
//It provides fast insertion, deletion and search operations.

#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;

    // 1. Inserting elements (duplicates allowed)
    ms.insert(5);
    ms.insert(3);
    ms.insert(3);
    ms.insert(1);
    ms.insert(7);

    cout << "Multiset after insertion: ";
    for (auto i : ms)
        cout << i << " ";
    cout << endl;

    // 2. Accessing elements using iterator
    auto it1 = ms.begin(); // points to smallest
    cout << "First element: " << *it1 << endl;

    auto it3 = next(it1, 2); // move 2 steps forward
    cout << "Third element: " << *it3 << endl;

    // 3. Searching an element
    int target = 3;
    auto found = ms.find(target);
    if (found != ms.end())
        cout << "Element " << target << " found in multiset." << endl;
    else
        cout << "Element not found." << endl;

    // 4. Counting occurrences
    cout << "Count of 3: " << ms.count(3) << endl;

    // 5. Erasing a single instance of an element
    ms.erase(ms.find(3));  // Only one occurrence erased
    cout << "After erasing one 3: ";
    for (auto i : ms) cout << i << " ";
    cout << endl;

    // 6. Erasing all occurrences of an element
    ms.erase(3);  // All remaining 3s removed
    cout << "After erasing all 3s: ";
    for (auto i : ms) cout << i << " ";
    cout << endl;

    // 7. Size and empty check
    cout << "Size of multiset: " << ms.size() << endl;
    cout << "Is empty? " << (ms.empty() ? "Yes" : "No") << endl;

    return 0;
}
