#include<iostream>
using namespace std;

void update(int x) {
    x = x + 10;
}

int main() {
    int a = 5;
    update(a);
    cout << a;  // Output: 5 (unchanged)
}
