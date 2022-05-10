#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num%5==0 ||num%11==0)
    cout<<num<<" is a multiple of 5 or 11";
    else
    cout<<num<<" is not a multiple of 5 or 11";
    return 0;
}