//// WAP that takes a number 'n' and check, is it prime or not.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number:";
    cin >> num;

    bool prime=false;

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            prime=true;
             break;
            
        }
    }
    if(prime==true)
    {
        cout << "Your number is Not Prime." <<endl;
    }
    else{
        cout << "Your number is prime." << endl;
    }

    return 0;
}