#include <bits/stdc++.h>
using namespace std;           

int main() {
    int testCases;
    cin >> testCases;
    while(testCases--) {
        long long int sum = 0;
        int numberOfChildren;
        cin >> numberOfChildren;
        for(int i=0;i<numberOfChildren;i++) {
            long long int input;
            cin >> input;
            sum += input%numberOfChildren;
        }
        if(sum%numberOfChildren == 0) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
}