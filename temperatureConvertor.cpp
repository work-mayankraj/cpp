//WAP to convert temperature from Celsius to Fahrenheit and vice versa.
#include<iostream>
using namespace std;
int main ()
{
    float temp;
    cout << "Enter your temperature :";
    cin >> temp;

    char unit;
    cout << "Enter temperature's unit :";
    cin >> unit;

    if(unit=='C' || unit=='c')
    {
        float far;
        far=(((9.0/5)*temp)+32);
        cout <<"The conversion of your temperature from celsius to farenheit is :" << far << endl;

    }
    else if(unit=='F' || unit=='f')
    {
        float cel;
        cel=((temp-32)*(0.55555555555));
        cout <<"The conversion of your temperature from farenheit to celsius is :" << cel << endl;
    }
    
    else
    {
        cout << "Invalid Unit!" << endl;
        cout << "put either clecius or farenheit" << endl;
    }
    
    return 0;
}