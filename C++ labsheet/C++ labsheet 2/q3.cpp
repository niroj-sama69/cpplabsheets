#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter 2 numbers" << endl;
    cin >> m >> n;
    if (m % n == 0)
        cout << "m is multiple of n";
    else
        cout << "m is not multiple of n";
}