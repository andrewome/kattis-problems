#include <bits/stdc++.h>
#define oneBillion 1000000000
using namespace std;

int gcd(int a, int b)  { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 


long long int lcm(vector<int> &periods, int n) { 
    long long int ans = periods[0]; 
    for (int i = 1; i < n; i++) {
        if(ans > oneBillion) {
            return oneBillion+1;
        }
        ans = (((periods[i] * ans)) / (gcd(periods[i], ans)));
    }   
    return ans; 
} 

int main() {
    int testCases, n, input;
    vector<int> periods;
    cin >> testCases;
    while(testCases--) {
        periods.clear();
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> input;
            periods.push_back(input);
        }
        long long int period = lcm(periods, n);
        if(period > oneBillion) {
            cout << "More than a billion." << endl;
        } else {
            cout << period << endl;
        }
    }
    return 0;
        
}