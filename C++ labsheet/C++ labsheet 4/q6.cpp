#include <iostream>
using namespace std;
class swapper
{
    int x,y;
    public:
    swapper(int a,int b)
    {
        x=a;y=b;
    }
    int getX()
    {
        return x;
    }
    int getY()
        {
            return y;
        }
void swap()
{
    int temp = x;
    x = y;
    y = temp;
}
};
int main()
{
swapper obj(10,20);
cout<<"before swap"<<endl<<"x = "<<obj.getX()<<endl<<"y = "<<obj.getY()<<endl;
obj.swap();
cout<<"after swap"<<endl<<"x = "<<obj.getX()<<endl<<"y = "<<obj.getY();

}