#include<iostream>
using namespace std;
typedef struct
{
    int invoiceNum;
    float AmtSale;
    float AmtTax;
}PURCHASE;
int main()
{
    PURCHASE p1;
    cout<<"Enter the Invoice number of the product:\n";
    do{
        cin>>p1.invoiceNum;
        if(p1.invoiceNum>8000||p1.invoiceNum<1000){
            cout<<"ERROR!!Enter  number between 1000 and 8000\n";
            }
    }while(p1.invoiceNum>8000||p1.invoiceNum<1000);
    cout<<"Enter the Sales Amount of the product:\n";
    do{
        cin>>p1.AmtSale;
        if(p1.AmtSale<=0){
            cout<<"ERROR!!Enter non negative number \n";
            }
    }while(p1.AmtSale<=0);
    p1.AmtTax=0.05*p1.AmtSale;
    cout<<"THE INVOICE BILL:\n"<<"1.Invoice Number:"<<p1.invoiceNum<<endl;
    cout<<"2.Sales Amount:"<<p1.AmtSale<<endl;
    cout<<"3.Sales tax:"<<p1.AmtTax<<endl;
    
    return 0;
}