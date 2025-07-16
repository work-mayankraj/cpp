// WAP to take a number as input and count the number in the input[ex:- 9856 = 4 numbers]
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    int count;
    count=0;
    for(int i=number; i>0; i=i/10)
    {
        count++;
    }
    cout << "Total number of digit in your number is :" << count << endl;
    return 0;
}