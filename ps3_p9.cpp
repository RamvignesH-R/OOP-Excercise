#include<iostream>
using namespace std;
int main()
{
    int num;
    while(true)
    {
        cout<<"enter the number between 1 and 10(press 0 to exit):\n";
        cin>>num;
        if(num<=10&&num>=1)
        {
            cout<<"Congratulations!!entered the number successfully and the number is "<<num<<endl;
            int i;
            for(i=0;i<num;i++)
            {
                cout<<"Congratulations!!entered the number successfully\n";
            }
        }
        else if(num==0)
        {
            cout<<"EXITED THE PROGRAM\n";
            break;
        }
        else
        {
            cout<<"Error!! Please enter integer number between 1 and 10\n"; 
        }
    }
    return 0;    
}