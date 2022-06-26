// operator overloading means giving new semantic meanings to operators so that they can be used for user defined data
// types as well. operator overloading is done with the help of "operator" key word. the syntax for "operator" is given
// below:
// return-type operator op(arg list)
// {
//     .....
// }
// where op is the operator that is being overloaded like +, - etc.
// the process of overloading involves the following steps:
// 1) create a class that defines the data-type that is to be used in overloading operation
// 2) declare the operator op() function in the public section of the class. It can be either a member function or a 
//     friend function.
// 3) define the operator function to  perform the required operation

// In case of member functions, overloaded operator functions can be invoked as following
//  x op or op x
//  for unary operators and
//  x op y 
//  for binary operators
// In case of friend functions, overloaded operator functions can be invokes as following
//  operator op(x)
//  for unary operators and
//  operator op(x,y)
//  for binary operators
 
//  C++ has a rich list of operators that can be overloaded. The only operators that cannot be overloaded are:
//  1) sizeof operator
//  2) class member access operator
//  3) scope resolution operator
//  4) conditional operator
#include <iostream>
using namespace std;
class dis
{
    int feet,inch;
    public:
    dis(){}
    dis(int f,int i)
    {
        feet = f + i/12;
        inch = i%12;
        
    }
    void show()
    {
        cout<<"feet = "<<feet<<"inch = "<<inch<<endl;
    }
    dis operator +(dis d2)
    {
        return dis(this->feet + d2.feet, this->inch+d2.inch);
    }
};
int main()
{
    dis d1(12,3),d2(3,13),d3;
    d3 = d1 + d2;
    d1.show();
    d2.show();
    d3.show();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 