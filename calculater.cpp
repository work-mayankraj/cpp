//WAP to create a simple calculator: Take 2 numbers and an operator (+, -, *, /) as input and print the result.
#include<iostream>
using namespace std;
int main()
{
    int number1;
    cout << "Enter your first number :";
    cin >> number1;

    int number2;
    cout << "Enter your second number :";
    cin >> number2;

    char operatorSign;
    cout << "Enter your operatorSign :";
    cin >> operatorSign;

    if(operatorSign == '+')
    {
        int addition;
        addition = number1+number2;
        cout << addition << endl;
    }
    else if(operatorSign == '-')
    {
        int subtraction;
        subtraction =number1-number2;
        cout << subtraction << endl;
    }
    else if(operatorSign == '*')
    {
        int multiplication;
        multiplication= number1*number2;
        cout << multiplication << endl;
    }
    else
    {
        int division;
        division= number1/number2;
        cout << division << endl;
    }
    
    return 0;
}