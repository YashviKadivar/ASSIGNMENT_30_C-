/* Write a C++ program to demonstrate the use of try, catch block with the argument as an
    integer and string using multiple catch blocks.     */

#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"enter 2 numbers -> "<<endl;\
    cin>>a>>b;

    try{
        if(b==0)
        throw "zero division error ";
        throw (a/b);
    }
    catch(const char *p){
        cout<<p<<endl;
    }
    catch(int i)
    {
        cout<<"ANS -> "<<i<<endl;
    }

    cout<<"END OF PROGRAM "<<endl;

    return 0;
}
