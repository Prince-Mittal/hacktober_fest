#include<iostream>
#include<iomanip>
using namespace std;
class complex
{
    int a,b;
public:
    complex()
    {
        a=2;b=3;
    }
    complex(int x,int y)
    {
        a=x;b=y;
    }
    /*complex(complex &c1)
    {
        a=c1.a;
        b=c1.b;
    }*/
    void put()
    {
        cout<<a<<"+i"<<b<<endl;
    }
};
int main()
{
    complex c1;
  complex c[3]={complex(),complex(5,6),complex(c1)};//explicit call to constructor
  c[0].put();
  c[1].put();
  c[2].put();
}
