#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Entereyar "<<endl;
    cin>>year;
    if(year%100==0 &&year%400==0)
    cout<<"it is leap year"<<endl;
    else if(year%100!=0 && year%4==0)
    cout<<"it is leap year";
    else
    cout<<"it is not leap year";
}