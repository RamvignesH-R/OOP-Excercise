#include<iostream>
using namespace std;
int main()
{
    int correct=0,wrong=0;
    cout<<"WELCOME TO THE QUIZ:\n"<<"ANSWER THE FOLLOWING\n";
    char input;
    cout<<"1.What is the capital city of Japan?\na. Beijing\nb. Seoul\nc. Tokyo\nd. Bangkok\n";
    while(true){
        cin>>input;
        if(input=='c'||input=='C'){
            cout<<"Hurrah!!It is a right answer!\n";
            correct++;
            break;
        }
        else if(input=='a'||input=='b'||input=='d'||input=='A'||input=='B'||input=='D')
        {
            cout<<"It is a wrong answer\nANSWER: c. Tokyo\n";
            wrong++;
            break;
        }
        else{
            cout<<"ERROR!! ENTER THE RIGHT INPUT!!(a,b,c,d)\n";
        }
    }



    cout<<"2.The Great Wall of China is visible from space.(t/f)\n";
    while(true){
        cin>>input;
        if(input=='t'||input=='T'){
            cout<<"Hurrah!!It is a right answer!\n";
            correct++;
            break;
        }
        else if(input=='f'||input=='F')
        {
            cout<<"It is a wrong answer\nANSWER: t. True\n";
            wrong++;
            break;
        }
        else{
            cout<<"ERROR!! ENTER THE RIGHT INPUT!!(t/f)\n";
        }
    }

    cout<<"3. Who wrote the play \"Romeo and Juliet\"?\na. Charles Dickens\nb.  William Shakespeare\nc.Jane Austen\nd. Mark Twain\n";
    while(true){
        cin>>input;
        if(input=='b'||input=='B'){
            cout<<"Hurrah!!It is a right answer!\n";
            correct++;
            break;
        }
        else if(input=='a'||input=='c'||input=='d'||input=='A'||input=='C'||input=='D')
        {
            cout<<"It is a wrong answer\nANSWER: b. William Shakespeare\n";
            wrong++;
            break;
        }
        else{
            cout<<"ERROR!! ENTER THE RIGHT INPUT!!(a,b,c,d)\n";
        }
    }


    cout<<"4.The Amazon River is the longest river in the world.(t/f)\n";
    while(true){
        cin>>input;
        if(input=='f'||input=='F'){
            cout<<"Hurrah!!It is a right answer!\n";
            correct++;
            break;
        }
        else if(input=='t'||input=='T')
        {
            cout<<"It is a wrong answer\nANSWER: f. False\n";
            wrong++;
            break;
        }
        else{
            cout<<"ERROR!! ENTER THE RIGHT INPUT!!(t/f)\n";
        }
    }

    cout<<"5.Which planet is known as the \"Morning Star\" or \"Evening Star\"?\na. Mars\nb. Venus\nc. Jupiter\nd. Saturn\n";
    while(true){
        cin>>input;
        if(input=='b'||input=='B'){
            cout<<"Hurrah!!It is a right answer!\n";
            correct++;
            break;
        }
        else if(input=='a'||input=='c'||input=='d'||input=='A'||input=='C'||input=='D')
        {
            cout<<"It is a wrong answer\nANSWER: b. Venus\n";
            wrong++;
            break;
        }
        else{
            cout<<"ERROR!! ENTER THE RIGHT INPUT!!(a,b,c,d)\n";
        }
    }
    cout<<"QUIZ RESULTS:\n";
    cout<<"Correct:"<<correct<<endl;
    cout<<"Wrong:"<<wrong<<endl;

    return 0;
}