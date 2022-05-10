#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,temp;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num!=0)
    {   
        temp = num%10;
        sum +=temp*temp;
        num /=10;
 
   }
   cout<<"sum is "<<sum;
}