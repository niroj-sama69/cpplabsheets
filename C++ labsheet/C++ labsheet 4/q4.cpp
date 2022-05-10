#include <iostream>
using namespace std;
class number
{
    int x, y, z;

public:
    number(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    int getMax()
    {
        if (x > y && x > z)
            return x;
        else if (y > z && y > x)
            return y;
        else
            return z;
    }
};
int main()
{
    number num(10, 20, 30);
    cout << "the larger number is " << num.getMax();
}