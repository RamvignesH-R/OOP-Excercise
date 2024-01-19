#include<iostream>
using namespace std;
int main()
{
    int i,year;
    float investAmt;
    cout<<"Enter the Invested amount:\n"<<"$";
    cin>>investAmt;
    cout<<"Enter the number of years:\n";
    l1:
    cin>>year;
    if(year<1||year>30)
     {
        cout<<"Enter the year between 1 and 30\n";
        goto l1;
        
     }
     for(i=1;i<=year;i++){
        investAmt+=investAmt*0.08;
        cout<<"the total amount earned for "<<i<<" year:"<<(float)investAmt<<endl;
     
     }
    return 0;
}