#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter n";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        cout<<i-1<<"/"<<i<<" ";
    }
}