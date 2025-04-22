#include <bits/stdc++.h>
using namespace std;
//list container implements a doubly linked list in which each element contains the address of next and previous element in the list. 
//It stores data in non-contiguous memory, hence providing fast insertion and deletion once the position of the element is known.
int main() {
    // Declaration and Initialization
    list<int> l = {3, 2};

    // Insert at end
    l.push_back(5);

    // Insert at beginning
    l.push_front(1);

    // Insert at specific position (after 2nd element)
    auto it = l.begin();
    advance(it, 2);  // Moves iterator to 3rd position
    l.insert(it, 4); // Insert 4 before element at it

    cout << "List after insertion: ";
    for (auto i : l) cout << i << " ";
    cout << "\n";

    // Accessing elements
    cout << "First Element (front): " << l.front() << "\n";
    cout << "Last Element (back): " << l.back() << "\n";
    cout << "Third Element: " << *next(l.begin(), 2) << "\n";

    // Deleting elements
    l.pop_back();             // Remove last element
    l.pop_front();            // Remove first element

    // Erase element at specific position
    auto it2 = l.begin();
    advance(it2, 1);
    l.erase(it2);             // Erase 2nd element

    cout << "List after deletion: ";
    for (auto x : l) cout << x << " ";
    cout << endl;

    return 0;
}
