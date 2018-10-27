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
   void print(){}
};
int main()
{
    myclass *e;
    first f;
    e=&f;
    f.seting();
    e->print();
    return 0;
}
