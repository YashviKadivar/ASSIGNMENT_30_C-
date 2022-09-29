/* Write a C++ program to demonstrate try, throw and catch statements.  */

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter number -> "<<endl;
    cin>>a;
    try{
        if(a==1)
        throw 1;
        if(a==2)
        throw 2;
        if(a==3)
        throw 3;
        if(a==4)
        throw 4;
        if(a==5)
        throw 5;
        throw "Your number is grater then 5 ";
    }
    catch(int i){
        cout<<"you entered -> "<<i<<endl;
    }
    catch(const char *p)
    {
        cout<<p<<endl;
    }
}
