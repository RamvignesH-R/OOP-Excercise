#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    cout<<"the quotient of the numbers is"<<setprecision(4)<<setw(9)<<(float)a/b<<endl;
    cout<<"the reminder of the numbers is"<<setprecision(6)<<setw(7)<<a%b<<endl;

    return 0;
}