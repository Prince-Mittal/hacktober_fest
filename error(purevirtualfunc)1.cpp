#include<iostream>
using namespace std;
class myclass
{
public:
    virtual void print()=0;
};
class first:public myclass
{
public:
    void seting()
    {
    cout<<"hello"<<endl;
    }
    void print()
    {
        cout<<"error gone"<<endl;
    }
};
int main()
{
    myclass *e;
    first f;
    myclass e1;//we can't use a variable of base class if it contains a pure virtual function.
    e=&f;
    f.seting();
    e->print();
    return 0;
}
