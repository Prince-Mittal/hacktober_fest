#include<iostream>
using namespace std;
class hello
{
    int a;
    int b;
public:
    hello(int x)
    {
        a=x;
        b=2*x;
    }
    hello(hello &ob)
    {
        a=ob.a;
        b=ob.b;
    }
    void put()
    {
        cout<<a<<endl<<b<<endl;
    }
};
int main()
{
    hello c2;//this will give error because every object declaration require a default constructor but for this we didn't defined the default constructor

    hello a(2);
    hello b=a;
    a.put();
    b.put();
    return 0;
}
