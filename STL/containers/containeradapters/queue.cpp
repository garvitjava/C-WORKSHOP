//queue container follows the FIFO (First In First Out) order of insertion and deletion. 
//According to it, the elements that are inserted first should be removed first. 
//This is possible by inserting elements at one end (called back) and deleting them from the other end (called front) of the data structure.
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // Pushing elements into the queue
    q.push(3);
    q.push(4);
    q.push(5);
    queue<int> temp(q);
    while (!temp.empty()) {
        cout << temp.front() << " ";
        cout <<temp.back()<<" ";
        temp.pop();
            // Create a copy
    
    
   
    }
    return 0;
}
