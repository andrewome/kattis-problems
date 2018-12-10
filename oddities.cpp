#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_lines;
    int number;
    cin >> num_lines;
    for(int i=0;i<num_lines;i++) {
        cin >> number;
        if(number == 0) {
            cout << number << " is even" << endl;
        }
        else if(number%2 == 0) {
            cout << number << " is even" << endl;
        }
        else {
            cout << number << " is odd" << endl;
        }
    }
}