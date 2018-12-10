#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_TC;
    string str;
    cin >> num_TC;
    for(int i=0;i<num_TC;i++) {
        int current_year, previous_year, sum=0;
        cin >> previous_year;
        while(1) {
            cin >> current_year;
            if(current_year == 0) {
                break;
            }
            if(current_year >= 2*previous_year) {
                sum += current_year - 2*previous_year;
            }
            previous_year = current_year;
        }
        cout << sum << endl;
    }
    return 0;
}