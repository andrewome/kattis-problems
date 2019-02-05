#include <bits/stdc++.h>
using namespace std;           

int main() {
    //preprocessing using sieve of eratosthenes
    bool isPrime[32001];
    for(int i=0;i<32001;i++) isPrime[i] = true;
    
    for(int i=2;i<sqrt(32000)+1;i++) {
        if(isPrime[i]) {
            for(int j=i*i;j<=32000;j+=i) {
                isPrime[j] = false;
            }
        }
    }
    isPrime[0] = false;
    isPrime[1] = false;
    
    int testCases;
    cin >> testCases;
    while(testCases--) {
        vector<pair<int, int>> v;
        int input;
        cin >> input;
        
        for(int i=2;i<=input/2;i++) {
            if(isPrime[i] && isPrime[input-i]) {
                v.push_back(make_pair(i, input-i));
            }
        }
        
        cout << input << " has " << v.size() << " representation(s)" << endl;
        for(pair<int, int> p : v) {
            cout << p.first << '+' << p.second << endl;
        }
        cout << endl;
    }
}