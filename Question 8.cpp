/* Write a C++ program to accept a password and throw an exception if the password has
    less than 6 characters or does not contain a digit or does not contain any special
    character or does not contain any capital letter.   */

#include<iostream>
using namespace std;

int main()
{
    char password[20];
    int count_s=0,count_n=0,count=0,count_c=0;

    cout<<"Enter password -> "<<endl;
    cin>>password;

    for(int i=0;password[i]!='\0';i++)
    {
        if(password[i]>=48 && password[i]<=57)
        {
            count++;
            count_n++;
        }
        else if((password[i]>=97 && password[i]<=122))
        {
            count++;
        }
        else if((password[i]>=65 && password[i]<=90))
        {
            count++;
            count_c++;
        }
        else
        {
            count++;
            count_s++;
        }
    }
    try{
        if(count_n==0 || count_s==0)
        throw "Your password must contain number and special character ";
        if(count_c==0)
        throw "Your password must contain capital latter";
        if(count<6)
        throw "Minimum 6 character of your password ";
    }
    catch(const char *p)
    {
        cout<<p<<endl;
    }

    return 0;
}
