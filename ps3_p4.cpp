#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n1=34.789,n2=7.0,n3=5.789e+12;
    int n4=67;
    cout<<"The number 1 is"<<fixed<<setprecision(2)<<setw(9)<<n1<<endl;
    cout<<"the number 2 is"<<setprecision(3)<<setw(5)<<fixed<<n2<<endl;
    cout<<"the number 3 is"<<fixed<<n3<<endl;
    cout<<"the number 4 is"<<fixed<<left<<setw(7)<<n4<<endl;
    return 0;
}