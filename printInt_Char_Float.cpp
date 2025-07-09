//WAP to print an integer followed by a single character and a decimal number. 
#include<iostream>
using namespace std;
int main()
{
    int number;
    char singleLetter;
    float decimalNumber;

    cout << "Enter your number : " ;
    cin >> number ;

    cout << "Enter your Letter : " ;
    cin >> singleLetter ;

    cout << "Enter your dot number : " ;
    cin >>  decimalNumber ;
    cout << number << " " << singleLetter << " " << decimalNumber  << endl;

    return 0;
}