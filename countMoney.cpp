/* WAP that takes a number as input an amount (like ₹587) and display how many 100, 50, 20, 10, 5, 2 and 1 rupee 
notes it needs.*/
#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter your number: ";
    cin >> num1;
 
    int hund;
    hund=num1/100;

    int num2;
    num2=num1%100;

    int fifty;
    fifty=num2/50;

    int num3;
    num3=num2%50;

    int twenty;
    twenty= num3/20;

    int num4;
    num4=num3%20;

    int ten;
    ten=num4/10;

    int num5;
    num5=num4%10;

    int five;
    five=num5/5;

    int num6;
    num6=num5%5;

    int two;
    two=num6/2;

    int num7;
    num7=num6%2;

    int one;
    one=num7/1;

    cout << "100-"<< hund << endl;
    cout << "50-" << fifty << endl;
    cout << "20-" << twenty << endl;
    cout << "10-" << ten << endl;
    cout << "5-"<<five << endl ;
    cout << "2-" <<two << endl;
    cout << "1-"<<one << endl;
}