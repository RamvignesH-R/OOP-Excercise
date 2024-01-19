#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num[9]={2897,5,837,34,7,1623,390,3456,12};
    //cout<<setfill('|');
    cout<<setw(15)<<num[0]<<setw(15)<<num[1]<<setw(15)<<num[2]<<endl;
    cout<<setw(15)<<num[3]<<setw(15)<<num[4]<<setw(15)<<num[5]<<endl;
    cout<<setw(15)<<num[6]<<setw(15)<<num[7]<<setw(15)<<num[8]<<endl;
    return 0;
}