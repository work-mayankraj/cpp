//WAP that take two float numbers and print the larger number.
#include<iostream>
using namespace std;
int main()
    {
    float number1;
    cout << "Enter your first number :";
    cin >> number1;

    float number2;
    cout << "Enter your second number :";
    cin >> number2;

    if(number1 > number2){
        cout<< number1 << " > "  << number2 << endl;
    }
    else 
    {
        cout << number1 << " < " << number2 << endl;
    }

    return 0;
}