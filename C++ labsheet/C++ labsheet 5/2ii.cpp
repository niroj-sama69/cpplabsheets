// type casting from class type to class type with conversion
#include <iostream>
using namespace std;
class vector // destination class
{
    int x, y;

public:
    vector()
    {
        x = 0;
        y = 0;
    }
    vector(int a, int b)
    {
        x = a;
        y = b;
    }
    // vector(coord c1)
    // {
    //     x=c1.getx2()/2;
    //     y=c1.gety2()/2;
    // }
    void display()
    {
        cout << "x= " << x << "y=" << y << endl;
    }
};
class coord // source class
{
    int x2, y2;

public:
    coord()
    {
        x2 = 0;
        y2 = 0;
    }
    coord(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
    int getx2() { return x2; }
    int gety2() { return y2; }
    operator vector()
    {
        return vector(x2 / 2, y2 / 2);
    }
    void display()
    {
        cout << "x2=" << x2 << "y2=" << y2 << endl;
    }
};

int main()
{
    coord c1(10, 20);
    vector v1;
    v1 = c1;
    v1.display();
    c1.display();
}
