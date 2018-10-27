#include<iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    int result=a/b;
    cout<<result;
    return 0;//program will get crash when the second input is zero;
}
