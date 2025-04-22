#include<iostream>
using namespace std;

template <typename t1, typename t2>
auto sum(t1 a, t2 b){
    return a+b;
}
int main(){
    cout<<"the sum is : "<<sum(5,6)<<endl;
    cout<<"the sum is:" <<sum(5,3.5)<<endl;

}

// template <typename t>

// string message(){
//     return "Hello, world!";
// }

// int main(){
//     cout<<message<int>()<<endl;
//     return 0;
// }