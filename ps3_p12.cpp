#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[1000],m=0;
    for(i=1;i<=1000;i++)
    {
        int sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
           
        }
        if(sum==i)
            {
                arr[m]=i;
                m++;
            }
    }
    cout<<"the Perfect numbers are :\n";
    for(i=0;i<m;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}