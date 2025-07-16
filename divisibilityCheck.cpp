//WAP that take a number as input and check if it's divisible by 5 and 11 both.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter your number :";
    cin >> number;
    
    if(number%5==0 && number%11==0)
    {
        cout << "your number is divisible by both '5' and '11'," << endl;
    }

    else
    {
        cout << "Condition does not fulfill. " << endl;
    }
    return 0;
}