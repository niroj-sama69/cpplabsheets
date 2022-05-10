#include<iostream>
using namespace std;
int main()
{
    float length,breadth,perimeter,area;
    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>length>>breadth;
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    cout<<"Area = "<< area<<endl;
    cout<<"perimeter = "<<perimeter<<endl;
}