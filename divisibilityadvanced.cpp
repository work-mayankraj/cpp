//WAP that take a number as input and check  if it is divisible by both 2 and 3, but not divisible by 4.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number :";
    cin >> num;

    if((num%2==0) && (num%3==0) && (num%4!=0))
    {
        cout << "Your number is divisible by '2' and '3' but not divisible by 4." << endl;  
    }
    else{
        cout <<"Condition does not fulfill." << endl;
    }
    return 0;
}