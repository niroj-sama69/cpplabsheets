// program to count the number of words in a line
#include <iostream>
using namespace std;
int main()
{
    int i=0,count=1;
    char str[200];
    cout << "Enter a line of text" << endl;
    cin.getline(str,200);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            count++;
        i++;
    }
    cout << count;
}