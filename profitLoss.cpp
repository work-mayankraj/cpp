/*WAP that take two number as input that represents the cost price and selling price of an item. 
Print if it's a profit, loss, or no gain, and how much.*/
#include<iostream>
using namespace std;
int main()
{
    float cp;
    cout << "Enter the cost price of the item: ";
    cin >> cp;

    float sp;
    cout << "Enter the selling price of the item: ";
    cin >> sp;

    if(cp<sp)
    {
        float profit;
        profit=sp-cp;
        cout << "profit = " << profit << endl;
        
    }
    else{
        float loss;
        loss=cp-sp;
        cout << "loss = " << loss << endl;
    }
    return 0;
}