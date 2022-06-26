//why are constructors and destructors required? explain with example
#include <iostream>
using namespace std;
class nums
{
    int a,b;
    public:
    nums(){};
    nums(int x,int y)
    {
        cout<<"constructor is called....object is created"<<endl;
        a=x;
        b=y;
    }
    ~nums()
    {
        cout<<"destructor is called.....object is destroyed"<<endl;
    }
    void display()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main()
{
    nums n1(10,20);;
    n1.display();
    {//block 1
        cout<<"inside block 1 now"<<endl;
        nums n2(30,40),n3(32,33);
        n2.display();
        n3.display();
        cout<<"leaving block 1"<<endl;
    }
    cout<<"in main block"<<endl;

}