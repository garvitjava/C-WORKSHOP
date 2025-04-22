//Non-manipulating algorithms are the type of algorithms provided by the Standard Template Library (STL) 
//that operate on elements in a range without altering their values or the order of the elements.

#include <bits/stdc++.h>
#include <numeric>  // For accumulate and partial_sum
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 4, 5};

    // max_element
    auto maxIt = max_element(v.begin(), v.end());
    cout << "Max element: " << *maxIt << endl;

    // min_element
    auto minIt = min_element(v.begin(), v.end());
    cout << "Min element: " << *minIt << endl;

    // accumulate
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of elements: " << sum << endl;

    // count
    cout << "Count of 2s: " << count(v.begin(), v.end(), 2) << endl;

    // find
    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end())
        cout << "Element 3 found at index: " << distance(v.begin(), it) << endl;
    else
        cout << "Element not found." << endl;

    // is_permutation
    vector<int> perm = {2, 1, 5, 4, 3, 2};
    cout << "Is permutation? " << boolalpha << is_permutation(v.begin(), v.end(), perm.begin()) << endl;

    // is_sorted
    cout << "Is sorted? " << boolalpha << is_sorted(v.begin(), v.end()) << endl;

    // partial_sum
    vector<int> prefix;
    partial_sum(v.begin(), v.end(), back_inserter(prefix));
    cout << "Prefix sum: ";
    for (auto x : prefix) cout << x << " ";
    cout << endl;

    return 0;
}
