#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float radius,perim,area;
    const float PI = 3.14159;

    cout <<"Give circle R:";
    cin >> radius;

    perim = 2* PI*radius;
    area = PI * radius * radius;
    cout <<setw(12)<<"Perimeter:"<<setw(5)<<setprecision(9)<<perim<<endl;
    cout <<setw(12)<<"Area:"<<setw(5)<<setprecision(9)<<area<<endl;

    return 0;
} // end of main
