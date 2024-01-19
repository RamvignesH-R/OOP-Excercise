#include<iostream>
#include<string>
using namespace std;
void  movieInfo( string ,int=90);
int main()
{
    string moviesNames;
    int movieTime;

    cout<<"Enter the movie name:\n";
    getline(cin,moviesNames);
    movieInfo(moviesNames);
    cout<<"Enter the movie name with movie time too:";
    getline(cin,moviesNames);
    cin>>movieTime;
    movieInfo(moviesNames,movieTime);
    return 0;
}
void movieInfo(string moviesNames,int movieTime)
{
    cout<<"MOVIE NAME: "<<moviesNames<<endl;
    cout<<"MOVIE RUNTIME: "<<movieTime<<"mins"<<endl;
}