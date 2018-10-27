#include<iostream>
using namespace std;
class hello
{
    const int a=10;
    int b;
public:
       void add() const
       {
//            a++;
            b++;
       }
       void get()
       {
           cout<<"enter the variable"<<endl;
           cin>>b;
       }
};
int main()
{
    hello a;
    a.get();
    a.add();
    return 0;
}
