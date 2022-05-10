#include <iostream>
using namespace std;
int main()
{
    int arr[50], i, n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the elements of array" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            break;
    }
    if (i == n-1)
        cout << "sorted";
    else
        cout << "not sorted";
}