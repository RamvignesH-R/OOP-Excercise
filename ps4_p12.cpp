#include<iostream>
using namespace std;
typedef struct 
{
    float collarSize;
    float sleeveLength;
}SHIRT;
typedef struct{
    float waistSize;
    float inSeam;
}PANT;
void displayClothingFacts(SHIRT s)
{
    cout<<"CLOTHING FACTS(SHIRT):-\n";
    cout<<"The collar size: "<<s.collarSize<<endl;
    cout<<"The sleeve length: "<<s.sleeveLength<<endl;
}
void displayClothingFacts(PANT p)
{
    cout<<"CLOTHING FACTS(PANT):-\n";
    cout<<"The waist size: "<<p.waistSize<<endl;
    cout<<"Inseam: "<<p.inSeam<<endl;
}
int main()
{
    SHIRT s;
    PANT p;
    int choice;
    cout<<"Enter the type of clothing(shirt(1) or pant(2)) in integer:\n";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the collar size of the shirt:\n";
        cin>>s.collarSize;
        cout<<"Enter the sleeve length of the shirt:\n";
        cin>>s.sleeveLength;
        displayClothingFacts(s);
    }
    else if(choice==2)
    {
        cout<<"Enter the waist size of the pant:\n";
        cin>>p.waistSize;
        cout<<"Enter the Inseam of the pant:\n";
        cin>>p.inSeam;
        displayClothingFacts(p);
    }
    
    else
    {
        cout<<"ERROR 404!!";  
    }
    return 0;
}