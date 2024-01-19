#include<iostream>
using namespace std;
typedef struct{
    char dogName[10];

}DOG;
typedef struct{
    char catName[10];
}CAT;
void speak(DOG d)
{
    cout<<"Dog Name:"<<d.dogName<<endl;
    cout<<"Dog Description:\n";
    cout<<d.dogName<<" says woof\n";
}
void speak(CAT c)
{
    cout<<"Cat Name:"<<c.catName<<endl;
    cout<<"Cat Description:\n";
    cout<<c.catName<<" says woof\n";
}
int main()
{
    DOG D;
    CAT C;
    int choice;
    cout<<"Enter the type of Pet(dog(1) or cat(2)) in integer:\n";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the Dog\'s Name:\n";
        cin>>D.dogName;
        speak(D);

    }
    else if(choice==2)
    {
        cout<<"Enter the Cat\'s Name:\n";
        cin>>C.catName;
        speak(C);
    }
    else{
        cout<<"ERRROR!! ";
    }
    return 0;
}