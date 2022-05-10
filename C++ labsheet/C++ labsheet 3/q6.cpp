#include <iostream>
using namespace std;
int main()
{
    int num1,num2,gcd,lcm,i,smaller,larger;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;
    smaller = num1<num2?num1:num2;
    larger = num1>num2?num1:num2;
    for(i=smaller;i>0;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
            break;
        }
    }
    for(i=larger;i>0;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }
    }
    cout<<"gcd = "<<gcd<<endl;
    cout<<"lcm = "<<lcm;
}