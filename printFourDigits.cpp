#include<iostream>
using namespace std;
int main()
{
int number1;
cout << "Enter your first number : ";
cin >> number1;

int number2;
cout << "Enter your second number : ";
cin >> number2;

int number3;
cout << "Enter your third number : ";
cin >> number3;

int number4;
cout << "Enter your fourth number : ";
cin >> number4;

int result;
result = number1*1 + number2*10 + number3*100 + number4*1000 ;
cout << "the final result is :" << result << endl;
return 0;
}