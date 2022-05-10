#include <iostream>
using namespace std;
int main()
{
    int n,sum=1,s;
    cout<<"Enter n"<<endl;
    cin>>n;
    //do either. both are correct
    //s = n*(n+1)*(n-1)/3 + 1;
    while(n>0)
    {
        sum += (n-1)*n;
        n--;
    }
    cout<<sum<<endl;
    //cout<<s;
}