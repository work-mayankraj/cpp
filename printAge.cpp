//Write a program to take your name and age as input and print: “Hello [Name], you are [Age] years old
#include<iostream>
using namespace std;
int main(){
    string yourName;
    cout << "Enter your Name :";
    cin >> yourName;
    int yourAge;
    cout << "Enter your age :";
    cin >> yourAge;
    cout << " Hello " << yourName << ", " << "you are " << yourAge << " years old." << endl;

    return 0;

}