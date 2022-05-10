#include  <iostream>
using namespace std;
int main()
{
    int n,digits=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<n;
    while(n!=0)
    {
        n /=10;
        digits++;
    }
    cout<<" has "<<digits<<" digits";
}