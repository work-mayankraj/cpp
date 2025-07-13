//WAP to check if a number is positive, negative, or zero.
#include<iostream>
using namespace std;
int main(){
    float number;
    cout << "Enter your number :";
    cin >> number;

      if(number>0)
      {
        cout << "your number is positive." << endl;
      }
      else if(number==0)
      {
        cout << "your number is zero." << endl;
      }
      else
      {
        cout << "your number is negative." << endl ;
      }
    
    return 0;

}