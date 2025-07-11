#include<iostream>
using namespace std;
int main()
{
    int number1;
    int number2;
    cout << "Enter your first number: ";
    cin >> number1;

    cout << "Enter your second number: ";
    cin >> number2;

    // addition
    int addition = number1 + number2;
    cout << "The addition of "<< number1 << " and " << number2 << " is: " << addition << endl;
    
    // subtraction
    int subtraction = number1 - number2;
    cout << "The subtraction of " << number1 << " and " << number2 << " is: " << subtraction << endl;
    

    // multiplication
    int multiplication = number1 * number2;
    cout << "The multiplication of " << number1 << " and " << number2 << " is: " << multiplication << endl;

    // division
    int division = number1 / number2;
    cout << "The division of " << number1 << " and " << number2 << " is: " << division << endl;

    // modulus (remainder)
    int remainder = number1 % number2;
    cout << "The remainder of " << number1 << " and " << number2 << " is: " << remainder << endl;
    return 0;
}