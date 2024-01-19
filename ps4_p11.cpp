#include<iostream>
using namespace std;
typedef struct{
    float lengthInFeet;
    float widthInFeet;
}CARPET;
void displayArea(float );
int main()
{
    float area;
    CARPET c1;
    cout<<"Enter the length of the carpet in feets:\n";
    cin>>c1.lengthInFeet;
    cout<<"Enter the width of the carpet in feets:\n";
    cin>>c1.widthInFeet;
    area=c1.lengthInFeet*c1.widthInFeet;
    displayArea(area);
    return 0;
}
void displayArea(float area)
{
    cout<<"The area of the carpet in square feets: "<<area<<"sqfeet\n";
}