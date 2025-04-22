#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapValues(x, y);  // Works with int
    cout << "x: " << x << " y: " << y << endl;

    float m = 1.1, n = 2.2;
    swapValues(m, n);  // Works with float
    cout << "m: " << m << " n: " << n << endl;

    return 0;
}
