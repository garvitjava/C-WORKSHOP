#include <bits/stdc++.h>
using namespace std;
//deque container provides fast insertion and deletion at both ends. Stands for Double Ended QUEue, 
//it is a special type of queue where insertion and deletion operations are possible at both the ends in constant time complexity.
int main() {
    // Creating a deque
    deque<int> dq = {1, 4, 2};

    // Inserting elements
    dq.push_back(5);       // Add at end
    dq.push_front(0);      // Add at beginning

    // Insert element at specific position
    auto it = dq.begin() + 2;
    dq.insert(it, 11);     // Insert 11 at index 2

    cout << "After insertion: ";
    for (auto x : dq) cout << x << " ";
    cout << "\n";

    // Accessing elements (random access supported)
    cout << "Element at index 2: " << dq[2] << endl;
    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;

    // Deleting elements
    dq.pop_back();         // Remove from end
    dq.pop_front();        // Remove from front
    dq.erase(dq.begin());  // Remove first element (now at front after pops)

    cout << "After deletion: ";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;

    return 0;
}
