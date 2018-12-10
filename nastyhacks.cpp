#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_lines, r, e, c;
    cin >> num_lines;
    for(int i=0;i<num_lines;i++) {
        cin >> r;
        cin >> e;
        cin >> c;
        if(r == e-c) {
            cout << "does not matter";
        }
         else if(r > e-c) {
            cout << "do not advertise";
        }
         else {
            cout << "advertise";
        }
        cout << endl;
    }
}