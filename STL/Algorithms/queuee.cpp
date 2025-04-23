#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(100);  // Queue: [100]
    q.push(200);  // Queue: [100, 200]
    q.push(300);  // Queue: [100, 200, 300]

    cout << "Front: " << q.front() << endl;  // Output: 100
    cout << "Back: " << q.back() << endl;    // Output: 300

    q.pop();  // Removes 100
    cout << "After pop, front: " << q.front() << endl;  // Output: 200
    cout << "Queue size: " << q.size() << endl;         // Output: 2

    return 0;
}
