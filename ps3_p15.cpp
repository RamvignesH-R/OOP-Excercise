#include<iostream>
using namespace std;
int main()
{
    int guess,input,count=0;
    unsigned seed=time(0);
    srand(seed);
    guess=(rand()%100)+1;
    cout<<"Welcome to the Guessing game\n"<<"GUESS A NUMBER BETWEEN 1 TO 100\n";
    while(true)
    {
        cin>>input;
        if(input<1||input>100){
            cout<<"Invalid..Guess is too big or too small\n";
    
        }
        else if(input==guess)
        {
            cout<<"YOU GUESSED RIGHTLY\n";
            count++;
            cout<<"you took "<<count<<" Guess/es to find the number\n";
            break;
        }
        else if(input<guess)
        {
            cout<<"the guess is low.. guess HIGHER number\n";
            count++;
        
        }
        else if(input>guess)
        {
            cout<<"the guess is high.. guess LOWER number\n";
            count++;
        
        }
    }

    return 0;

}