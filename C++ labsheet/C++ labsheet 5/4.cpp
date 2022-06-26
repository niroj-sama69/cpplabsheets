// program to add two time objects using operator overloading
#include <iostream>
using namespace std;
class time
{
    int hr, min, sec;

public:
    time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    time(int a,int b,int c)
    {
        hr=a;
        min=b;
        sec=c;
    }
    void showdata()
    {
        cout << hr << " hour " << min << " mins " << sec << " secs " << endl;
    }
    time operator+(time t2)
    {
        time t3;
        t3.sec = sec + t2.sec;
        t3.min = min + t2.min;
        t3.hr = hr + t2.hr;
        t3.min += t3.sec / 60;
        t3.sec %= 60;
        t3.hr += t3.min / 60;
        t3.min %= 60;
        return t3;
    }
};
int main()
{
    time t1(10,20,30), t2(11,12,55), t3;
    t3 = t1 + t2;
    cout << "t1 is" << endl;
    t1.showdata();
    cout << "t2 is " << endl;
    t2.showdata();
    cout << "t3 is " << endl;
    t3.showdata();
}