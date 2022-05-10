#include <iostream>
using namespace std;
int main()
{
    int x,y,z,sum,largest,smallest;
    float avg;
    cout<<"Enter 3 numbers"<<endl;
    cin>>x>>y>>z;
    sum = x+y+z;
    avg = sum /3.0;
    if(x>y && x>z)
        largest = x;
    else if(y>z && y>x)
        largest = y;
    else
        largest = z;
    if(x<y && x<z)
        smallest = x;
    else if(y<z && y<x)
        smallest = y;
    else
        smallest = z;
    cout<<"sum = "<<sum<<endl;
    cout<<"avg = "<<avg<<endl;
    cout<<"largest = "<<largest<<endl;
    cout<<"smallest = "<<smallest<<endl;

}