#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
using namespace std;
int main() {
    char input;
    int choice,grade;

    cout <<"[1]. Enter one   (1)  for character entry."<<endl;
    cout <<"[2]. Enter two   (2)  for a hello."<<endl;
    cout <<"[3]. Enter three (3)  to rate inputted grade (using switch-case) - [0,10]"<<endl;
    cout <<"[4]. Enter four  (4)  to rate inputted grade (using if) - [0,10]"<<endl;
    cout <<"[5]. Enter five  (5)  to exit."<<endl;
    cout <<"Enter action of choice:"<<endl;
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout <<"Give a character:"; 
            cin >> input;
            if(isdigit(input))
				cout <<endl<<"Input is a number, ["<<input<<"]";//End of if
            else if (isalpha(input))
				cout <<endl<<"Input is a letter, ["<<input<<"]";//End of else if
        break;
        case 2:
            cout <<"Hello!"<<endl;
        break;
        case 3:
            cout <<"(- sc -) Insert grade:";
            cin >> grade;
            switch (grade)
            {
                case 10:
                case 9:
                    cout <<"excellent";
                    break;
                case 8:
                case 7:
                    cout <<"very good";
                    break;
                case 6:
                    cout <<"good";
                    break;
                case 5:
                    cout <<"pass";
                    break;
                default:
                    cout <<"fail";
                    break;
            } //End of switch
        break;
        case 4:

            cout <<"(- if -)Insert grade:";
            cin >> grade;
            if((grade>8)&&(grade<11))
                cout <<"excellent";//End of if
            else if((grade>6)&&(grade<9))
                cout <<"very good";//End of else if
            else if(grade==6)
                cout <<"good";//End of else if
            else if(grade==5)
                cout <<"pass";//End of else if
            else if((grade>=0)&&(grade<5))
                cout <<"fail";//End of else if
            else
                cout <<"Out of bounds";//End of else

        break;
        case 5:
            //exit(0);
        break;
        default:
            cout <<setw(12)<<"Not a valid choice."<<endl;
        break;
    } //End of switch

    return 0;
} // end of main
