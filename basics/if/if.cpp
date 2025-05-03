#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
using namespace std;
int main() {
    char input;
    int choice;
    cout <<"[1]. Enter one (1) for character entry."<<endl;
    cout <<"[2]. Enter two (2) to exit."<<endl;
    cout <<"Enter action of choice:"<<endl;
    cin >> choice;

    if(choice==1)
    {
        cout <<"Give a character:";
        cin >> input;
        if(isdigit(input))
        {
            cout <<endl<<"Input is a number, ["<<input<<"]";
        }//End of if
        else if (isalpha(input))
        {
            cout <<endl<<"Input is a letter, ["<<input<<"]";
        }//End of else if
    } //End of if
    else if(choice==2)
    {
        exit(0);
    } //End of else if
    else
        cout <<setw(12)<<"Not a valid choice."<<endl;//End of else

    return 0;
} // end of main
