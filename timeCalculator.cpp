//WAP that take seconds as input and convert it to hours, minutes, and seconds (e.g., 3661 → 1hr 1min 1sec).
#include<iostream>
using namespace std;
int main ()
{
    int second;
    cout << "Enter the value of second :";
    cin >> second;

    int minute;
    minute = second/60;
    second =second%60;
    if(minute>=60)
    {
        int hour;
        hour = minute / 60;
        minute = minute % 60;
        cout << hour << ":" << minute << ":" << second << endl;
    }
    else
    {
        cout << "0:" << minute << ":" << second << endl;
    }
    
    return 0;
}