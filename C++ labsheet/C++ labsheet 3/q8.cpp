#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,rev=0,digits=0,temp;
    cout<<"Enter a number"<<endl;
    cin>>num;
    temp = num;
    while(temp != 0)
    {
        temp/=10;
        digits++;
    }
    temp = num;
    while(temp != 0 )
    {
        rev += (temp % 10) * pow(10,digits-1);
        digits--;
        temp /=10;
    }
    cout<<"The reverse of "<<num<<" is "<<rev;
}