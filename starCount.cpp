//WAP to take a number and print stars as much as the given number.
 #include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;

    for(int i=1; i<=num; i++)
    {
        cout << "* ";
    }
    cout << endl;

    return 0;
}