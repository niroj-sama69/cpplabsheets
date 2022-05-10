#include <iostream>
using namespace std;
int main()
{
    int seconds,minutes,hours;
    cout<<"Enter time in seconds"<<endl;
    cin>>seconds;
    minutes = seconds/60;
    seconds %=60;
    hours = minutes/60;
    minutes %= 60;
    cout<<hours<<"hours"<<minutes<<"minutes"<<seconds<<"seconds"<<endl;
}