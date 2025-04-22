#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main(){
cout<<maxValue(5, 10)<<endl;;       // int
cout<<maxValue(3.5, 2.1)<<endl;;    // double
cout<<maxValue('a', 'b')<<endl;;    // char

}