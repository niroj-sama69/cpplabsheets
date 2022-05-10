#include <iostream>
#define pi 3.14
using namespace std;
int main()
{
    float radius,area,circumference;
    cout<<"Enter radius of circle"<<endl;
    cin>>radius;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    cout<<"Area = "<<area<<endl;
    cout<<"circumference = "<<circumference<<endl;
}