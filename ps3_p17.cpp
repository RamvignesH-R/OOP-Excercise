#include<iostream>
#include<cmath>
using namespace std;
typedef struct 
{
    int years;
    float AmtInvest;
    float finalAmt;
}INVESTMENT;
int main()
{
    INVESTMENT i1;
    int i;
    cout<<"Enter the term of the Investment in years:\n";
    cin>>i1.years;
    while(i1.years<=0){
        cout<<"Invalid !! Enter the positive year\n";
        cin>>i1.years;
    }
    cout<<"Enter the beginning dollar amount of the Investment:\n$";
    cin>>i1.AmtInvest;
    while(i1.AmtInvest<0){
        cout<<"Invalid !! Enter the positive Amount\n";
        cin>>i1.AmtInvest;
    }
    cout<<"\nYEAR\tFINALVALUE\n";
    for(i=1;i<=i1.years;i++)
    {
        i1.finalAmt=i1.AmtInvest*pow(1+0.08,i);
        cout<<i<<"\t"<<i1.finalAmt<<endl;
    }
    cout << "\nFinal Values:\n";
    cout << "Term: " << i1.years << " years\n";
    cout << "Initial Investment: $" << i1.AmtInvest << "\n";
    cout << "Final Value: $" << i1.finalAmt << "\n";

    return 0;
}