#include<iostream>
using namespace std;
int main()
{
    float workedHour,hourlyWage,withHoldPercent,grossPay,netPay,withholdAmount;
    cout<<"Enter the hourly wage of the worker:\n";
    cin>>hourlyWage;
    cout<<"Enter the hours worked by  the worker:\n";
    cin>>workedHour;
    cout<<"Enter the withHolding percent of the employee:\n";
    cin>>withHoldPercent;
    grossPay=hourlyWage*workedHour;
    withholdAmount=withHoldPercent/100;
    netPay=grossPay-withholdAmount;
    cout<<"the gross pay of the employee :"<<grossPay<<endl;
    cout<<"the withhold Amount of the employee :"<<withholdAmount<<endl;
    cout<<"the netpay of the employee :"<<netPay<<endl;
    return 0;
}