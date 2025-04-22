#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Iterator declaration
    vector<int>::iterator it;

    // Traversal
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    
    return 0;
}
