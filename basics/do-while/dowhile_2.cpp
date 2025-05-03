#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
using namespace std;
int main() {
    char input;
    int choice,grade;


    do
    {
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
                    cout <<endl<<"Input is a number, ["<<input<<"]";
                else if (isalpha(input))
                    cout <<endl<<"Input is a letter, ["<<input<<"]";
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
                } //End of Switch
                break;
            case 4:

                cout <<"(- if -)Insert grade:";
                cin >> grade;
                if((grade>8)&&(grade<11))
                    cout <<"excellent";
                else if((grade>6)&&(grade<9))
                    cout <<"very good";
                else if(grade==6)
                    cout <<"good";
                else if(grade==5)
                    cout <<"pass";
                else if((grade>=0)&&(grade<5))
                    cout <<"fail";
                else
                    cout <<"Out of bounds";

                break;
            case 5:
                //exit(0);
                break;
            default:
                cout <<setw(12)<<"Not a valid choice."<<endl;
                break;
        }//End of Switch

    }while (choice!=5); //End of while withe entry "5" 


    return 0;
}// end of main
