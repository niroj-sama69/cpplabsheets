#include <iostream>
using namespace std;
int main()
{
    int num,sumOfCubes=0,temp,digit;
    cout<<"Enter a number"<<endl;
    cin>>num;
    temp = num;
    while(temp != 0)
    {
        digit = temp % 10;
        sumOfCubes += digit * digit * digit;
        temp /= 10;
    }
    if(sumOfCubes == num)
        cout<<num<<" is armstrong number"<<endl;
    else
        cout<<num<<" is not armstrong number"<<endl;
}