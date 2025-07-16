// WAP to print conscutive number from 1 to 100.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the last digits up to which number to be print :";
    cin >> number;


    for(int i=1 ; i<=number; i++)
    {
        cout << i << " " ; 
    }
    cout << endl;

    return 0;
}
