#include <iostream>
#include <iomanip>
#include<cstdio>
#include<conio.h>
#include<cmath> // sqrt(), fabs()
using namespace std;
int main()
{
    double a,b,c, D, r1,r2, r,im;
    cout << "Solve for the roots of a quadratic equation" << endl;
    cout << "ax^2+bx+c=0" << endl;
    cout << "Give parameter a:"; //<< endl;
    cin >> a ;
    if (a==0)
    {
        cout << "For a 2nd order equation, a!=0. Try again" << endl;
        cout << "Give parameter a:";
        cin >> a ;
    }  //end of if

    cout << "Give parameter b:";// << endl;
    cin >> b ;
    cout << "Give parameter c:";// << endl;
    cin >> c ;
    cout <<setprecision(5)<< a <<"*x^2 + "<<setprecision(5)<< b <<"*x + "<<setprecision(5)<< c << " = 0" << endl;

    D = b*b-4*a*c;    // Distinctive

        if(D<0)  // for D<0, roots are conjugate complex οι ρίζες είναι συζυγείς µιγαδικές
            {
                cout << "There exist two conjugate complex roots:" << endl;
                r=-b/(2*a);
                im=sqrt(-D)/(2*a);
                cout <<"r1 = "<<setprecision(5)<< r <<" + "<<setprecision(5)<< im << endl;
                cout <<"r2 = "<<setprecision(5)<< r <<" - "<<setprecision(5)<< im << endl;
            }  //end of if
        else if (fabs(D)<1e-10)    // fabs → float,   abs → integer
            {   // for D=0, double root exist
                cout << "There exists a double root:" << endl;
                cout << "r1 = r2 = "<<setprecision(5)<< -b/(2*a) << endl;
            } //end of else if
        else // in any other case there are two real roots
            {
                cout << "There exist two real roots:" << endl;
                r1=(-b+sqrt(D))/(2*a);
                r2=(-b-sqrt(D))/(2*a);
                cout << "r1= " <<setprecision(5)<< r1 << endl;
                cout << "r2= " <<setprecision(5)<< r2 << endl;
            } //end of else
    return 0;
} //end of main