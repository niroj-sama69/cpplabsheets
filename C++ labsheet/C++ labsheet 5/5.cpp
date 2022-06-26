// program to subtract two time objects using operator overloading
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
    void getdata()
    {
        cout << "Enter time in h/m/s" << endl;
        cin >> hr >> min >> sec;
    }
    void showdata()
    {
        cout << hr << " hour " << min << " mins " << sec << " secs " << endl;
    }
    time operator-(time t2)
    {
        time t3;
        t3.sec = sec - t2.sec;
        t3.min = min - t2.min;
        t3.hr = hr - t2.hr;
        if (t3.sec < 0)
        {
            t3.min--;
            t3.sec = 60 + t3.sec;
        }
        if (t3.min < 0)
        {
            t3.hr--;
            t3.min = 60 + t3.min;
        }
        return t3;
    }
    int operator>(time t2)
    {
        if (hr > t2.hr)
            return 1;
        else if (hr == t2.hr && min > t2.min)
            return 1;
        else if (hr == t2.hr && min == t2.min && sec > t2.sec)
            return 1;
        else
            return 0;
    }
};
int main()
{
    time t1, t2, t3;
    t1.getdata();
    t2.getdata();
    if (t1 > t2)
        t3 = t1 - t2;
    else
        t3 = t2 - t1;
    cout << "t1 is" << endl;
    t1.showdata();
    cout << "t2 is " << endl;
    t2.showdata();
    cout << "the difference is " << endl;
    t3.showdata();
}