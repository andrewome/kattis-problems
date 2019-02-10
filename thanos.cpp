#include <bits/stdc++.h>
using namespace std; 

int main() {
    int numCases;
    cin >> numCases;
    while(numCases--) {
        unsigned long long int P, R, F;
        cin >> P >> R >> F;
        int counter = 0;
        while(P <= F) {
            counter++;
            P *= R;
        }
        cout << counter << endl;
    }
}