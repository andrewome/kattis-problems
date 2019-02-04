#include <bits/stdc++.h>
using namespace std;           

int main() {
    int guess = 500;
    int min = 1;
    int max = 1001;
    string input;
    
    cout << guess << endl;
    while(cin >> input) {
        if(input == "correct") {
            return 0;
        }
        if(input == "lower") {
            max = guess;
        }
        if(input == "higher") {
            min = guess;
        }
        guess = (max - min)/2 + min;
        cout << guess << endl;
    }
}