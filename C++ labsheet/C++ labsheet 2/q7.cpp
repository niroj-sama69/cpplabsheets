#include <iostream>
using namespace std;
int main()
{
    int x,y,temp;
    cout<<"Enter 2 numebers"<<endl;
    cin>>x>>y;
    cout<<"Before swap"<<endl;
    cout<<x<<" "<<y<<endl;
    temp = x;
    x = y;
    y = temp;
    cout<<"After swap"<<endl;
    cout<<x<<" "<<y;
}