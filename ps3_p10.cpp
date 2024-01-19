#include<iostream>
using namespace std;
int main()
{   
    int i, select;
    do
    {
        cout<<"ENTER THE CHOICE TO EXECUTE(0 TO END):\n"<<"1:all even numbers between 2 and 100 inclusive\n"<<"2:Type A,B,C or (Q FOR EXIT)\n"<<"3:integers from 1 to 20 with their square values\n";
        cin>>select;
        switch(select)
        {
            case 1:
            {
                cout<<"the Even Numbers are:\n";
                for(i=2;i<=100;)
                {
                    cout<<i<<"\t";
                    i+=2;
                }  
                cout<<"\n";
                break;
            }
            case 2:
            {
                char choice;
                
                do
                {
                    cout<<"Enter A,B,C to get message or Q to end\n";
                    cin>>choice;
                    if(choice=='A'||choice=='B'||choice=='C')
                    {
                        cout<<"GOOD JOB!!\n";
                    }
                    else if (choice=='Q')
                    {
                        cout<<"YOU EXITED THE PROGRAM\n";
                        break;
                    }
                    else{
                        cout<<"Error!!Enter the valid input as per choice!!\n";
                    }
                }
                while(choice!='Q');
                break;
            }
            case 3:
            {
                cout<<"INTEGER FROM 1 TO 20 AND ITS SQUARES\n";
                for(i=1;i<=20;i++)
                {
                    cout<<"the square of "<<i<<" is :"<<i*i<<endl;
                }
                break;
            }
            case 0:
            {
                cout<<"YOU EXITED THE PROGRAM\n";
                break;
            }
            default:
            {
                cout<<"Error!!!..Enter the valid input......\n";
            }

        };
    }
    while(select!=0);
    return 0;
}