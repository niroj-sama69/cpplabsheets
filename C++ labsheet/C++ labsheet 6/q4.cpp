// Define a Shape class ( with necessary constrictors and member functions) in Object Oriented Programming (abstract necessary attributes and their types).Write a complete code in C++ programming language.
// Derive Triangle and Rectangle classes from Shape class adding necessary attributes.
// Use these classes in a main function and display the area of triangle and rectangle
#include<iostream>
#include <math.h>

using namespace std;
class shape
{
    protected:
        float area;
    public:
    shape()
    {
        area = 1;
    }
    void showarea()
    {
        cout<<"Area is "<<area<<endl;
    }

};
class triangle:public shape
{
    float s,a,b,c;
    public:
    void getsides()
    {
        cout<<"enter the length of 3 sides"<<endl;
        cin>>a>>b>>c;
    }
    void calcarea()
    {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));        
    }

};
class rectangle:public shape
{
    int l,b;
    public:
    void getsides()
    {
        cout<<"Enter length and breadth"<<endl;
        cin>>l>>b;
    }
    void calcarea()
    {
        area = l * b;
    }
};
int main()
{
    triangle t1;
    rectangle r1;
    t1.getsides();
    t1.calcarea();
    t1.showarea();
    r1.getsides();
    r1.calcarea();
    r1.showarea();
    return 0;
}