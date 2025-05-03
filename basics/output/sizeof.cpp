/*
Develop a program that examines the length of the integer type and floating-point type
*/
#include <iostream>
#include <cstdio>
#include <cfloat>
#include <climits>
#include <iomanip>
using namespace std;
int main()
{
    cout <<setw(12)<<"int is:"<<setw(5)<< sizeof(int) <<" bytes"<<endl;
    cout <<setw(12)<<"short is:"<<setw(5)<< sizeof(short) <<" bytes"<<endl;
    cout <<setw(12)<<"long is:"<<setw(5)<< sizeof(long) <<" bytes"<<endl;
    cout <<setw(12)<<"float is:"<<setw(5)<< sizeof(float) <<" bytes"<<endl;
    cout <<setw(12)<<"double is:"<<setw(5)<< sizeof(double) <<" bytes"<<endl;
    cout <<setw(12)<<"max int:"<<setw(15)<< INT_MAX <<setw(12)<<"min int:"<<setw(15)<< INT_MIN<<endl;
    cout <<setw(12)<<"max short:"<<setw(15)<< SHRT_MAX <<setw(12)<<"min short:"<<setw(15)<< SHRT_MIN<<endl;
    cout <<setw(12)<<"max long:"<<setw(15)<< LONG_MAX <<setw(12)<<"min long:"<<setw(15)<< LONG_MIN<<endl;
    cout <<setw(12)<<"max float:"<<setw(15)<< FLT_MAX <<setw(12)<<"min float:"<<setw(15)<< FLT_MIN<<endl;
    cout <<setw(12)<<"max double:"<<setw(15)<< DBL_MAX <<setw(12)<<"min double:"<<setw(15)<< DBL_MIN<<endl;

    return 0;
}
