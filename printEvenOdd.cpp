//Take a number and print if it is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter your Nmumber : ";
    cin >> number;
    if(number >0)
{
    if(number % 2 == 0)
    {
        cout << "your number is Even." << endl;
    }
    else
    {
        cout << "your number is odd." << endl;
    }
}
    else
    {
        cout << "invalid Number!" << endl;
    }

    return 0;
}