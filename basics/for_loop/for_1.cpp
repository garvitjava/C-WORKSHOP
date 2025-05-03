/*
Develop a program that display examples of the uses of for loop
1. Count to Ten.
2. Print out 10 rows of stars ordered by ASC & DESC format
3. Dual variable for loop 
*/
#include <iostream>
using namespace std;
int main() {
    int i=0,j=0,N=10,M=10;
    cout << "Count to Ten" << endl;
    for (i = 0; i < N; i++)
    {
        cout << i+1 << endl;
    }
    cout << "Stars DESC" << endl;
    for(i=0; i<N; i++)
    {
        for(j=i; j<M; j++)
        {
            cout <<"*";
        } cout << endl;
    }

    cout << "Stars ASC" << endl;

    for(i=0,M=9; i<N,M>=0; M--,i++)
    {
        for(j=N; j>M; j--)
        {
            cout <<"*";
        } cout << endl;
    }
    
    for (int x=0,y=0; x+y<100; x=x+10,y=y+20)
        cout <<"x="<<x<<" y="<<y<<" x+y="<<x+y<< endl;
    
    return 0;
} // end of main
