#include<iostream>
using namespace std;
class Servant
{
    public:

    string name;
    Servant( string name)
    {
        this->name=name;
    }
    void greet()
    {
        cout<<this->name;
    }
};
int main()
{
    Servant a("person2");
    a.greet();
}