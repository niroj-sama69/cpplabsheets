#include<iostream>
using namespace std;
int main()
{
    int marks[5],i;
    float total,percent;
    for(i=0;i<5;i++)
    {
        cout<<"enter marks in subject"<<i<<endl;
        cin>>marks[i];
        total += marks[i];
    }
    percent = total /5;
    cout<<"total = "<<total<<endl<<"percent= "<<percent;
}
