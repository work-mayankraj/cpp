// WAP to that take two number as input and swap its value.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter a two digit number: ";
    cin >> num;

    int quotient;
    quotient = num/10;

    int remainder;
    remainder = num%10;

    cout << "your number after swap is: "<< remainder << quotient << endl;


    return 0;
}