#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For STL functors

using namespace std;

// 👑 Custom Functor (Function Object)
class Square {
public:
    int operator()(int x) const {
        return x * x;
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // 1️⃣ Custom Functor: Square
    cout << "Squares using custom functor:\n";
    Square squareObj;
    for (int x : v) {
        cout << squareObj(x) << " ";
    }
    cout << "\n";

    // 2️⃣ STL Arithmetic Functor: plus
    cout << "Add 10 to all using STL functor 'plus':\n";
    transform(v.begin(), v.end(), v.begin(), bind(plus<int>(), placeholders::_1, 10));
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";

    // 3️⃣ STL Logical Functor: logical_not (used on boolean vector)
    vector<bool> flags = {true, false, true};
    vector<bool> negated(flags.size());

    transform(flags.begin(), flags.end(), negated.begin(), logical_not<bool>());
    cout << "Logical NOT on {true, false, true}:\n";
    for (bool b : negated) {
        cout << b << " ";
    }
    cout << "\n";

    return 0;
}
