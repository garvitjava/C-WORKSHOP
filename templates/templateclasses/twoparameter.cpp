#include <iostream>
using namespace std;

template <class T1, class T2>
class DataHolder {
private:
    T1 data1;
    T2 data2;

public:
    DataHolder(T1 d1, T2 d2) : data1(d1), data2(d2) {}

    void display() {
        cout << "Data 1: " << data1 << " | Data 2: " << data2 << endl;
    }
};

int main() {
    DataHolder<int, string> item(404, "Not Found");
    item.display();

    DataHolder<float, char> pair(3.14, 'P');
    pair.display();

    return 0;
}
