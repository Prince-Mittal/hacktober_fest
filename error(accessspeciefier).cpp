#include<iostream>
#include<string>
using namespace std;
class firstaccess
{
public:
    void setname(string x)
    {
        name=x;
    }
private:
    string  name;
};
int main()
{
    firstaccess a;
    a.setname("ridhav");
    cout<<a.name;
    //this code will give error as the name member is private we can't access it.to access it change the access specifier to public;
    return 0;
}
