#include <iostream>
using namespace std;

int main() {
    int x = 10;  // outer scope variable

    {
        int x = 20;  // inner scope variable (shadows outer x)
        cout << "Inside block: " << x << endl;
    }

    cout << "Outside block: " << x << endl;

    return 0;
}
