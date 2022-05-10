#include <iostream>
using namespace std;
int main()
{
    int p, t, r, interest, amount;
    cout << "Enter principal amount, time and rate" << endl;
    cin >> p >> t >> r;
    interest = (p * t * r) / 100;
    amount = p + interest;
    cout << "interest = " << interest << endl;
    cout << "amount = " << amount << endl;
}