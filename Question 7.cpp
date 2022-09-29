/* Write a C++ program to accept a username if the username has less than 6 characters
    or does contain any digit or special symbol.    */

#include<iostream>
using namespace std;

int main()
{
    char user_name[20];
    int count_s=0,count_n=0,count=0;

    cout<<"Enter user name -> "<<endl;
    cin>>user_name;

    for(int i=0;user_name[i]!='\0';i++)
    {
        if(user_name[i]>=48 && user_name[i]<=57)
        {
            count_n++;
        }
        else if((user_name[i]>=97 && user_name[i]<=122) || (user_name[i]>=65 && user_name[i]<=90))
        {
            count++;
        }
        else
        {
            count_s++;
        }
    }
    try{
        if(count_n==0 || count_s==0)
        throw "Your user name must contain number and special character ";
        if(count<6)
        throw "Minimum 6 character of your user name ";
    }
    catch(const char *p)
    {
        cout<<p<<endl;
    }

    return 0;
}
