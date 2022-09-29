/*  Write a C++ program to accept Nickname and throw an exception if it has greater than 8
    characters or does contain a digit or special symbol or space.  */

#include<iostream>
using namespace std;

int main()
{
    char nickname[20];
    int count_s=0,count_n=0,count=0,count_c=0,count_space=0;

    cout<<"Enter nickname -> "<<endl;
    gets(nickname);

    for(int i=0;nickname[i]!='\0';i++)
    {
        if(nickname[i]>=48 && nickname[i]<=57)
        {
            count++;
            count_n++;
        }
        else if((nickname[i]>=97 && nickname[i]<=122))
        {
            count++;
        }
        else if((nickname[i]>=65 && nickname[i]<=90))
        {
            count++;
            count_c++;
        }
        else if(nickname[i]==32)
        {
            count_space++;
        }
        else
        {
            count++;
            count_s++;
        }
    }

    try
    {
        if(count_n==0 || count_s==0)
        throw "Nickname must contain number and special character ";
        if(count>8)
        throw "Maximum 8 character of Nickname ";
        if(count_space==0)
        throw "Your nick name must contain space ";
    }
    catch(const char *p)
    {
        cout<<p<<endl;
    }
}
