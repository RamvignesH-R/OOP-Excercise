#include<iostream>
using namespace std ;
int main()
{
    int a=0,b=1,c=5;
    cout<<"a+b="<<a+b<<endl;
    cout<<"a>b="<<(a>b)<<endl;
    cout<<"3+b*c="<<(3+b*c)<<endl;
    cout<<"++b ="<<(++b)<<endl;
    b=1;
    cout<<"b++ ="<<(b++)<<endl;
    b=1;
    cout<<"b<=c ="<<(b<=c)<<endl;
    cout<<"a>5 ="<<(a>5)<<endl;
    cout<<"++a==b = "<<((++a)==b)<<endl;
    cout<<"b!=c ="<<(b!=c)<<endl;
    cout<<"b==c ="<<(b==c)<<endl;
    cout<<"b=c ="<<(b=c)<<endl;
    b=1,c=5;
    cout<<"b%c ="<<(b%c)<<endl;
    cout<<"b+c*4/3 ="<<(b+c*4/3) <<endl;
    cout<<"22/(c+3)="<<(22/(c+3))<<endl;                  


    return 0;
}