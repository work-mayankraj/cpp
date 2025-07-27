#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int x_cur_rate, y_rating;
        cin >> x_cur_rate>> y_rating;
        
        if(x_cur_rate >=y_rating){
            cout << 0 << endl;
        }
        else if(y_rating > x_cur_rate){
            if((y_rating-x_cur_rate)%8==0){
                cout << (y_rating-x_cur_rate)/8 << endl;
            }
            else{
                cout << (y_rating-x_cur_rate)/8 +1 << endl;
            }
        }
    }
    return 0;
}


