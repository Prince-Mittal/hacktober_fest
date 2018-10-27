#include<iostream>
using namespace std;
class abc
{
public:
     void show()
    {
        cout<<"in the base class"<<endl;
    }
};
class der : public abc
{
public:
    void show()
    {
        cout<<"in the derived class"<<endl;
    }
};
int main()
{
    abc *p;
    abc ob;
    p=&ob;
    p->show();
    der ob1;
    p=&ob1;
    p->show();
}
