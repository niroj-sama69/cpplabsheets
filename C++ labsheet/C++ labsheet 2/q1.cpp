#include <iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter four digit number"<<endl;
    cin>>num;
    while(num !=0)
    {
        sum+=num%10; 
        num /=10;       
    }
    cout<<"the sum is "<<sum;
}