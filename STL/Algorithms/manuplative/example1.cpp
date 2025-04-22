//Manipulative algorithms perform operations that modifies the elements of the given container or rearrange their order.

#include <bits/stdc++.h> //This header essentially includes a wide range of C++ standard libraries, such as <iostream>, <vector>, <algorithm>, <map>, <set>, <cmath>, and many more.
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 4, 2, 5};

    // 1. copy:Copies a specific number of elements from one range to another.
    vector<int> copied(7);  // same size
    copy(v.begin(), v.end(), copied.begin());
    cout << "Copy: ";
    for (int x : copied) cout << x << " ";
    cout << "\n";

    // 2. fill: Assigns a specified value to all elements in a range.
    fill(copied.begin(), copied.begin() + 3, 0);  // fill first 3 elements with 0
    cout << "After fill: ";
    for (int x : copied) cout << x << " ";
    cout << "\n";

    //syntax
    //std::transform(first_input_iterator, last_input_iterator, output_iterator, transformation_function);
    // 3. transform (e.g., doubling each value) Applies a function to each element in a range and stores the result in another range.
    vector<int> transformed(7);
    transform(v.begin(), v.end(), transformed.begin(), [](int x){ return x * 2; }); //The lambda function takes each element x from the vector v, multiplies it by 2, and returns the result.
    cout << "Transformed (x2): ";
    for (int x : transformed) cout << x << " ";
    cout << "\n";

    // 4. replace (replace 2 with 99)
    replace(v.begin(), v.end(), 2, 99);
    cout << "After replace 2→99: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 5. swap
    int a = 10, b = 20;
    swap(a, b);
    cout << "Swap a and b: " << a << " " << b << "\n";

    // 6. reverse
    reverse(v.begin(), v.end());
    cout << "Reversed: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 7. rotate (rotate so 3rd element becomes first)
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 8. remove (removes all 99s logically)
    auto new_end = remove(v.begin(), v.end(), 99);
    cout << "After remove 99s: ";
    for (auto it = v.begin(); it != new_end; ++it)
        cout << *it << " ";
    cout << "\n";

    // 9. unique (removes consecutive duplicates)
    vector<int> dup = {1, 1, 2, 2, 2, 3, 3, 4};
    auto new_end2 = unique(dup.begin(), dup.end());
    cout << "After unique: ";
    for (auto it = dup.begin(); it != new_end2; ++it)
        cout << *it << " ";
    cout << "\n";

    return 0;
}
