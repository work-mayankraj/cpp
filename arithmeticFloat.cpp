#include<iostream>
using namespace std;
int main(){
    float number1;
    cout << "Enter your First number: ";
    cin >> number1;
    float number2;
    cout << "Enter your second number: ";
    cin >> number2;  

    // addition 
    float addition;
    addition = number1 + number2;
    cout << "The addition of " << number1 << " and " << number2  << " is: " << addition << endl;

    //suntraction
    float subtraction;
    subtraction = number1 - number2;
    cout << "The subtraction of " << number1 << " and " << number2 << " is: " << subtraction <<  endl;

    //Multiplication
    float multiplication;
    multiplication = number1 * number2;
    cout << "The multiplication of " << number1 << " and " << number2 << " is: " << multiplication <<  endl;

    //Division
    float division;
    division = number1/number2;
    cout << "The division of " << number1 << " and " << number2 << " is: " << division << endl;

    //Modulo
    int remainder;
    division = (int)number1 % (int)number2;
    cout << "The remainder after dividing " << number1 << " and " << number2 << " is: " << division << endl;

    return 0;
}