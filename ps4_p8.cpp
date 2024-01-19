#include<iostream>
using namespace std;
void balanceAccount(float balance,int count,float checks[])
{
    int i;
    float total,sum=0;
    for(i=0;i<count;i++)
    {
        sum+=checks[i];
    }
    total=balance-sum;
    cout<<"the total Amount left in the bank account is $"<<total<<endl;

}
void balanceAccount(float balance,int count,float checks[],float interestRate)
{
   int i;
    float grandTotal,total,sum=0;
    for(i=0;i<count;i++)
    {
        sum+=checks[i];
    }
    total=balance-sum;
    grandTotal=total*((interestRate)/100)+total;
    cout<<"the total Amount left in the bank account is $"<<grandTotal<<endl;
 
}
int main()
{
    float balance,checks[50],interestRate;
    int i,count=0;
    cout<<"Enter the balance in the bank account:\n$";
    cin>>balance;
    cout <<"Enter the checks issued and the amount(-1 to stop adding check issued):\n";
    for(i=0;i<50;i++)
    {
        cin>>checks[i];
        if(checks[i]==-1)
        {
            break;
        }
        count++;
    }
    cout<<"Enter whether the account can bear interest(if not enter 0):\n";
    cin>>interestRate;
    balanceAccount(balance,count,checks,interestRate);


    return 0;
}