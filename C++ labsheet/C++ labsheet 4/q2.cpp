#include <iostream>
using namespace std;
int main()
{
    int data1[100], data2[101], data3[201], i, j, m, n;
    cout << "Enter the sizes of two arrays" << endl;
    cin >> m >> n;
    cout << "Enter the elements of first array" << endl;
    for (i = 0; i < m; i++)
        cin >> data1[i];
    cout << "Enter the elements of second array" << endl;
    for (i = 0; i < n; i++)
        cin >> data2[i];
    for (i = 0; i < m; i++)
        data3[i] = data1[i];
    for (i = 0; i < n; i++)
        data3[i + m] = data2[i];
    cout << "The combined array is" << endl;
    for (i = 0; i < m + n; i++)
        cout << data3[i] << " ";
}