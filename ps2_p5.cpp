#include <iostream>
using namespace std;
int main(){
    int check,cal;
    bool Return;
    int i,select,manucode[5],prodcode[5],checkdig;
    cout <<"Check whether the product bar code has zero to its left?(enter 1 (yes)or 0(no))\n";
    cin>>select;
    if(select!=0){
        cout<<"Enter the 5-digit manufacturer code:\n";
        for(i=0;i<5;i++){
            cout<<"Enter the "<<i+1<<"th digit:\n";
            cin>>manucode[i];
            }
        cout<<"Enter the 5 digit product code:\n";
        for(i=0;i<5;i++){
            cout<<"Enter the "<<i+1<<"th digit:\n";
            cin>>prodcode[i];
            }
        cout<<"Enter the check digit of Bar code of the product:\n";
        cin>>checkdig;

        check=(3*(manucode[1]+manucode[3]+prodcode[0]+prodcode[2]+prodcode[4]))+(manucode[0]+manucode[2]+manucode[4]+prodcode[1]+prodcode[3]);
        cal=10-(check%10);
        if(cal==checkdig)
        {
            Return=1;
            cout<<"the barcode is matched\n"<<Return;
        }
        else{
            Return=0;
            cout<<"the bar code is unmatched\n"<<Return;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}