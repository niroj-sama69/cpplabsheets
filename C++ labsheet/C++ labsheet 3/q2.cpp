#include <iostream>
using namespace std;
int main()
{
    char c;
    start:
    cout<<"Enter a character"<<endl;
    cin>>c;
    if(c>=65 && c<=90)
        c +=32;
    else if(c>=97 && c<=122)
        c -=32;
    else
    {
        cout<<"invalid input";
        goto start;
    }
    cout<<c;
}