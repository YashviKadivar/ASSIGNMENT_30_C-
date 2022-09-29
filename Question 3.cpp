/* Write a C++ program to perform arithmetic operations on two numbers and throw an
    exception if the dividend is zero or does not contain an operator.  */

#include<iostream>
using namespace std;

int main()
{
    int a,b,ans;
    int ch;
    cout<<"enter two number -> "<<endl;
    cin>>a>>b;

    cout<<"1. addition "<<endl;
    cout<<"2. subtraction "<<endl;
    cout<<"3. multiplication "<<endl;
    cout<<"4. division "<<endl;
    cout<<"enter your choice -> "<<endl;
    cin>>ch;
    try
{
    switch (ch)
    {
    case 1:
        cout<<a+b<<endl;
        break;
    case 2:
        cout<<a-b<<endl;
        break;
    case 3:
        cout<<a*b<<endl;
        break;
    case 4:
        if(b==0)
        throw "zero division error ";
        cout<<a/b<<endl;
    default:
        throw "use one operator for operation ";
    }
}
    catch(const char *p)
    {
        cout<<p<<endl;
    }

}
