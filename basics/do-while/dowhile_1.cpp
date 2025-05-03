#include <iostream>
#include <cstdio>
#include <conio.h>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    cout <<"Start writing letters without enter"<<endl;
    cout <<"End program with a dot '.'\n"<<endl;
    do
    {
        ch=getche();
        cout <<" -> ";
        if (islower(ch))
            putchar(toupper(ch));
        else putchar(tolower(ch));
        cout <<endl;
    }//Emd of do
    while (ch!='.');         // end program with a '.'
    return 0;
} //end of main
