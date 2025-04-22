//priority queue is a type of queue in which there is some priority assigned to the elements.
// According to this priority, elements are removed from the queue. By default, the value of the element being inserted is considered as priority. Higher its value, higher its priority. But this can be changed to any desired priority scheme as per requirement.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    // Creating a priority queue of integers
    priority_queue<int> pq;
    pq.push(9);
    pq.push(10);
    pq.push(6);
    
    cout << pq.top() << " ";
    return 0;
}
