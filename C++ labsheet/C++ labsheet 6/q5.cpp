//function overloading
#include<iostream>
using namespace std;
float interest(int principle,int year=1,int rate=10);//percent form of rate
float interest(int principle,int year=2,float rate=0.1);//decimal form of rate
int main()
{
    int p,y,r;
    float y1,r1;
    cout<<"Enter principle,year and rate(in percent)"<<endl;
    cin>>p>>y>>r;
    cout<<"The interest is "<<interest(p,y,r)<<endl;
    cout<<"Enter principle,year and rate(in decimal) "<<endl;
    cin>>p>>y>>r1;
    cout<<"The interest is "<<interest(p,y,r1);
}
float interest(int principle,int year,int rate)
{
    return (principle*year*(rate))/100;
}
float interest(int principle,int year,float rate)
{
    return (principle*year*rate*100)/100;
}