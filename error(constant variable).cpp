#include<iostream>
using namespace std;
class hello
{
    int a;
    const int b=5;
public:
    void change()
    {
        b++;
    }
};
int main()
{
    hello a;
    a.change();
    return 0;
}
