#include<iostream>
using namespace std;
int main()
{
    float num1,num2,sum,prd,diff,quo;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;
    sum = num1+num2;
    diff= num1-num2;
    quo =  num1/num2;
    prd = num1 * num2;
    cout<<"sum is "<<sum<<endl;
    cout<<"diff is "<<diff<<endl;
    cout<<"prd is "<<prd<<endl;
    cout<<"quo is "<<quo<<endl;
}