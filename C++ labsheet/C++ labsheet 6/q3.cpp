//types of inheritance: single inheritance
#include <iostream>
using namespace std;
class student
{
    int roll;
    public:
        void getroll()
        {
            cout<<"Enter roll number"<<endl;
            cin>>roll;
        }
        int showroll()
        {
            return roll;
        }      
};
class result:public student
{
    int marks,percent;
    public:
        result()
        {
            getroll();
            cout<<"Enter total marks in 5 subject"<<endl;
            cin>>marks;
            percent = marks/5;
        }
        void showresult()
        {
            cout<<"ROll NO. " << showroll()<<" got "<<percent<<"%"<<endl;
        }

};
int main()
{
    result r1,r2;
    r1.showresult();
    r2.showresult();
    return 0;
}