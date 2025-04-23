#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>
using namespace std;

int main() {
    cout << "🎯 Input Iterator Example:\n";
    cout << "Enter one number: ";
    istream_iterator<int> input(cin);    //reads an integer from standard input
    int userInput = *input;   //extracts the value, like dereferencing a pointer.
    cout << "You entered: " << userInput << "\n\n";

    cout << "🎯 Output Iterator Example:\n";
    ostream_iterator<int> output(cout, " ");  //Writes data to cout using iterator syntax. Adds space " " after each output value.
    *output = 100;
    ++output;
    *output = 200;
    cout << "\n\n";   //output will be 100,200

    cout << "🎯 Forward Iterator Example (forward_list):\n";   //Loop visits each node and prints value.
    forward_list<int> fl = {1, 2, 3};
    for (forward_list<int>::iterator it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";
    cout << "\n\n";

    //list allows both ++ and -- movements.
    cout << "🎯 Bidirectional Iterator Example (list):\n";  //We move forward once, then move backward.
    list<int> lst = {10, 20, 30};
    list<int>::iterator bit = lst.begin();
    ++bit; // move forward to 20
    cout << "Forward to: " << *bit << "\n";
    --bit; // move back to 10
    cout << "Backward to: " << *bit << "\n\n";

    cout << "🎯 Random Access Iterator Example (vector):\n";  //vector supports rit[i] like an array.
    vector<int> vec = {5, 10, 15, 20};
    vector<int>::iterator rit = vec.begin();
    cout << "Direct access (rit[2]): " << rit[2] << "\n";  //rit + 3 lets you jump to index 3 directly.
    rit = rit + 3;
    cout << "Jump to index 3: " << *rit << "\n";

    return 0;
}
