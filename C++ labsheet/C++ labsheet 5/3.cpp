// program to subtract two complex numbers using opertor overloading
#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int a,int b)
    {
        real = a;
        img = b;
    }
    void showdata();
    complex operator-(complex);
};
complex complex ::operator-(complex c2)
{
    complex c3;
    c3.real = real - c2.real;
    c3.img = img - c2.img;
    return c3;
}
void complex::showdata()
{
    if(img>0)
        cout<<real<<" + "<<img<<" i "<<endl;
    else
        cout<<real<<img<<" i "<<endl;
}


int main()
{
    complex c1(2,4), c2(3,6), c3;
    cout << "c1 is ";
    c1.showdata();
    cout << "c2 is ";
    c2.showdata();
    c3 = c1 - c2;
    cout << "c3 is ";
    c3.showdata();
}