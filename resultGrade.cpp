/*WAP that take marks in 3 subjects and print the total, percentage, and grade (A if >90, B if >80, C if >70, 
D if >60, and Fail <=60). */
#include<iostream>
using namespace std;
int main()
{
    float number1;
    cout << "Enter the marks of your first subject :";
    cin >> number1;

    float number2;
    cout << "Enter the marks of your second subject :";
    cin >> number2;

    float number3;
    cout << "Enter the marks of your third subject :";
    cin >> number3;

    // calculate total marks
    float totalMarks;
    totalMarks = number1 + number2 + number3 ;
    cout << "your total marks is: " << totalMarks << endl;

    // calculate percentage
    float percentage;
    percentage = (totalMarks /300)*100;
    cout << "your percentage is: " << percentage << endl;
    
    //calculate grade
    char grade;
    if(percentage>90)
    {
        cout << "grade 'A'" << endl;
    }
    else if(percentage>80)
    {
        cout << "grade 'B'" << endl;
    }
    else if(percentage>70)
    {
        cout << "grade 'C'" << endl;
    }
    else if(percentage>60)
    {
        cout << "grade 'D'" << endl;
    }
    else
    {
        cout << "You are fail." << endl;
    }
    return 0;
}