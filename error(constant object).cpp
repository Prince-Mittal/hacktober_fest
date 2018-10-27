#include<iostream>
using namespace std;
class hello
{
    int a=2;// we must have to initialize the variable because it is a constant object
public:
    /*void get()
    {
        cin>>a;
    }*/
    void display() const
    {
        cout<<a;
    }
    /*void disp()
    {
        cout<<a;
    }*/
};
int main()
{
    const hello a1;
    //a1.get();//these functions can't be called because they are not constant
    //a1.disp();//constant objects can call only constant functions
    a1.display();//like that
    return 0;
}
