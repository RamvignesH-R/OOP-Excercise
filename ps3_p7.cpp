#include<iostream>
using namespace std;
int main ()
{
    int hoursWork,daysWorked,extraHour;
    float workCost,extraCost;
    cout<<"Enter the works worked by the worker:\n";
    cin>>hoursWork;
    daysWorked=hoursWork/8;
    extraHour=hoursWork%8;
    workCost=daysWorked*200;
    extraCost=extraHour*40;
    cout<<"the pay for the work:$"<<workCost<<"\nthe pay for extra hours:$"<<extraCost<<endl;
    cout<<"the total cost of the floorwork :$"<<workCost+extraCost<<endl;
    return 0;
}