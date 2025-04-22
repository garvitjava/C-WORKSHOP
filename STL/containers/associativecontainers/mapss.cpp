//maps are associative containers that store data in the form of key value pairs sorted on the basis of keys. 
//No two mapped values can have the same keys. 
//By default, it stores data in ascending order of the keys, but this can be changes as per requirement.

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;

    m["apple"] = 2;
    m["banana"] = 3;
    m["orange"] = 1;

    // Insert
    m.insert({"grape", 4});

    // Search
    if (m.count("apple"))
        cout << "Apple found\n";

    // Erase
    m.erase("banana");

    // Traverse
    for (auto x : m)
        cout << x.first << " => " << x.second << endl;

    return 0;
}

