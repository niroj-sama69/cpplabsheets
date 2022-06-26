// Define a Clock class (with necessary constructors and member functions) in Object Oriented programming (abstract necessary attributes and their types). Write a complete code in C++ programming language.
// Derive a Wall_clock class from Clock class adding necessary attributes.
// Create two objects ofWall_clock class with all initial state to 0 or NULL
#include <iostream>
using namespace std;
class clock
{
    protected:
    int hr,min,sec;
    public:
        clock(){}
        clock(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
        void showtime()
        {
            cout<<"the time now is "<<hr<<":"<<min<<":"<<sec<<endl;
        }
};
class wall_clock:public clock
{
    public:
    wall_clock(){}
    wall_clock(int h,int m,int s):clock(h,m,s)
    {}
    void speedup(int h,int m,int s)
    {
        sec+=s;
        min += m + sec/60;
        hr += h + min/60;
        min = min%60;
        sec = sec%60;
    }
};
int main()
{
    wall_clock cl1,cl2;
    cl1=wall_clock(11,55,30);
    cl2 = wall_clock(12,9,2);
    cout<<"time in clock 1 is "<<endl;
    cl1.showtime();
    cout<<"time in clock 2 is "<<endl;
    cl2.showtime();
    cl1.speedup(0,13,32);
    cout<<"Time in clock 1 after speeding up is "<<endl;
    cl1.showtime();
    return 0;
}