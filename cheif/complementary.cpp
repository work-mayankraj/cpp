#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n_character;
        cin >> n_character;
        string complete_string="";
        for (int i=0; i<n_character; i++){
            char s_string;
            cin >> s_string;
            /* we need to first add the changing string in a new variable and at last after loop we print that variable*/ 
            if(s_string=='A'){
            complete_string += 'T';
            } else if(s_string=='T'){
                complete_string += 'A';
            } else if(s_string=='C'){
                complete_string += 'G';
            } else if(s_string=='G'){
                complete_string += 'C';  
            } 
        }
        cout << complete_string << endl;
    }
    return 0;
}
