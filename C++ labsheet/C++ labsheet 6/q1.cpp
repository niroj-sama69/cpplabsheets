// parameterized constructor
#include <iostream>
using namespace std;
class student
{
    int roll, mark1, mark2, total;

public:
    student(int r, int m1, int m2)
    {
        roll = r;
        mark1 = m1;
        mark2 = m2;
    }
    void showtotal()
    {
        total = mark1 + mark2;
        cout << "Total marks for roll no. " << roll << " is " << total << endl;
    }
};
int main()
{
    student s1(1, 92, 89), s2(2, 94, 93);
    s1.showtotal();
    s2.showtotal();
}