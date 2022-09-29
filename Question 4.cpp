/* Write a C++ program to accept an email address and throw an exception if it does not
    contain @ symbol.   */

#include<iostream>
using namespace std;

int main()
{
    char email[100];
    int count=0;

    cout<<"enter your email address -> "<<endl;
    cin>>email;

    for(int i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
        count=1;
    }

    cout<<endl;

    try{
        if(count==0)
        throw "Please enter valid email address ";
    }
    catch(const char *p){
        cout<<p<<endl;
    }

    return 0;
}
