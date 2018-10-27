#include<iostream>
#include<string>
using namespace std;
class myclass
{
public:
    myclass(int a,int b)
    {
        regval=a;
        constvar=b;
    }
private:
    int regval;
    const int constvar;
};
int main()
{
    myclass a;
}
