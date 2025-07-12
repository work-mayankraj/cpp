//Take three numbers and print their average.
#include<iostream>
using namespace std;
int main()
{
    int number1, number2, number3;

    cout << "Enter your first number : ";
    cin >> number1;

    cout << "Enter your second number : ";
    cin >> number2;

    cout << "Enter your third number : ";
    cin >> number3;

    float addition;
    addition = number1 + number2 + number3;

    cout << "The average of "<< number1 << ", " << number2 << " and " << number3 << " is : " << addition/3 << endl;
    return 0;
}