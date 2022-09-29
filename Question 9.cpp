/* Write a C++ program to accept Gmail id only and throw an exception if the id does not
    contain @ and gmail.com */

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

    try
    {
        if(count==0)
        throw "Please enter valid email address ";
    }
    catch(const char *p){
        cout<<p<<endl;
    }
}
