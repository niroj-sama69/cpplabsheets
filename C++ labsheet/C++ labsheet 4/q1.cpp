#include <iostream>
using namespace std;
int main()
{
    int arr[30],i;
    for(i=0;i<30;i++)
    {
        if((i+1)%2==0)
            arr[i] = -(i+1);
        else
            arr[i] = (i+1);
    }
    for(i=0;i<30;i++)
    {
        cout<<arr[i]<<" ";
    }
}