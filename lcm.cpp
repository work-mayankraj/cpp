//WAP to find LCM of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout <<"Enter your first number:";
    cin >> num1;

    int num2;
    cout <<"Enter your second number:";
    cin >> num2;

    if(num1>num2)
    {
        if(num1%num2==0)
        {
            cout << "Your L.C.M is :" << num1 << endl;
        }
        else 
        {
            int lcm;
            lcm=num1*num2;
            cout << "Your L.C.M is :" << lcm << endl;
        }
    }
    else 
    {
         if(num2%num1==0)
        {
            cout << "Your L.C.M is :" << num2 << endl;
        }
        else 
        {
            int lcm2;
            lcm2=num1*num2;
            cout << "Your L.C.M is :" << lcm2 << endl;
        }
    }

    return 0;
}