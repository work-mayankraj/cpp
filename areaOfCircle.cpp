//Take input of radius of a circle and calculate area = 3.14 × radius × radius.
#include<iostream>
using namespace std;
int main(){
    int radius;
    cout << "Enter the radius : ";
    cin >> radius;
    float area;
    area = 3.14 *radius*radius;
    cout << "The area of your desired circle is : " << area << endl;
    return 0;
}