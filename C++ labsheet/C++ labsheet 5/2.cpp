//type casting from basic to class type and class to basic type
#include <iostream>
#include <math.h>
using namespace std;
class vector
{
    int x,y,z;
    public:
        vector(){x=0;y=0;z=0;}
        vector(int a,int b,int c)   //(basic)int type to (class)vector type
        {
            x=a;y=b;z=c;
        }
        void display()
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        operator double()
        {
            return sqrt(x*x+y*y+z*z);
        }
};
int main()
{
    vector v1(2,3,4);
    double magnitude = v1;
    v1.display();
    cout<<magnitude;
    return 0;
}