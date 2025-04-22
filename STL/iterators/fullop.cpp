#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    // VECTOR with forward iterator
    vector<int> v = {10, 20, 30};
    cout << "Vector (forward): ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // VECTOR reverse iterator
    cout << "Vector (reverse): ";
    for (auto it = v.rbegin(); it != v.rend(); ++it)
        cout << *it << " ";
    cout << endl;

    // LIST with bidirectional iterator
    list<string> l = {"A", "B", "C"};
    cout << "List: ";
    for (list<string>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // SET with bidirectional iterator
    set<int> s = {4, 1, 3};
    cout << "Set: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // MAP with iterator
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};
    cout << "Map: ";
    for (auto it = m.begin(); it != m.end(); ++it)
        cout << "[" << it->first << "]=" << it->second << " ";
    cout << endl;

    // Const Iterator Example
    cout << "Const Iterator (Vector): ";
    for (vector<int>::const_iterator cit = v.begin(); cit != v.end(); ++cit)
        cout << *cit << " ";
    cout << endl;

    // next(), prev(), advance()
    auto it = v.begin(); // points to 10
    advance(it, 2); // now points to 30
    cout << "Advance by 2: " << *it << endl;

    auto nxt = next(v.begin(), 1); // points to 20
    auto prv = prev(v.end(), 2);  // also points to 20
    cout << "Next: " << *nxt << ", Prev: " << *prv << endl;

    // distance()
    int d = distance(v.begin(), v.end());
    cout << "Distance from begin to end: " << d << endl;

    return 0;
}
