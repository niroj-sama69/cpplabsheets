#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter 3 numbers" << endl;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 < num3 || num1 > num3 && num1 < num2)
        cout << num1 << " is the second largest";
    else if (num2 > num1 && num2 < num3 || num2 > num3 && num2 < num1)
        cout << num2 << " is the second largest";
    else
        cout << num3 << "is the second largest";
}