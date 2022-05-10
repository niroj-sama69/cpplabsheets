#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3,largest=0;
    cout<<"Enter 3 numbers "<<endl;
    cin>>num1>>num2>>num3;
   largest = num1>num2?num1:num2;
   largest = largest>num3?largest:num3;
    cout<<"the largest among three is  "<<largest;
}