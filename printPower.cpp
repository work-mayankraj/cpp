//WAP that take a number as input and print 2 to the power of that number. (Note: -5 <= number <= 5)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int power;
    cout << "Enter the value of power :";
    cin >> power;

// ERROR
    int result;
    result = pow(2,power);
    cout << "2^" << power;
    cout << "=" << result << endl; 
    return 0;
}