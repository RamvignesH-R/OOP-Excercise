#include<iostream>
using namespace std;
void customerCreditLimit(double credit=500)
{
    cout<<"The credit limit is $"<<credit<<endl;

}
int main()
{
    double credit;
    cout<<"enter the credit granted(0 - not opting):\n";
    cin>>credit;
    if(credit==0)
    {
        customerCreditLimit();
    }
    else{
        customerCreditLimit(credit);
    }
    return 0;
}