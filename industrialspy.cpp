#include <bits/stdc++.h>
using namespace std;

bool isPrime[10000000];

void preprocess() {
    //preprocessing using sieve of eratosthenes
    for(int i=0;i<10000000;i++) isPrime[i] = true;
    for(int i=2;i<sqrt(10000000)+1;i++) {
        if(isPrime[i]) {
            for(int j=i*i;j<=10000000;j+=i) {
                isPrime[j] = false;
            }
        }
    }
    isPrime[0] = false;
    isPrime[1] = false;
}

void permute(string str, unordered_set<int> &primes) {
    sort(str.begin(), str.end());
    do {
        int value = stol(str);
        if(isPrime[value]) {
            if(primes.find(value) == primes.end()) {
                primes.insert(value);
            }
        }
    } while(next_permutation(str.begin(), str.end()));
}

int main() {
    preprocess();
    int c;
    cin >> c;
    while(c--) {
        unordered_set<int> primes;
        string input;
        cin >> input;

        //check for all permutations of the input string using powersets
        int powerSetSize = pow(2, input.size());
        for(int i=0;i<powerSetSize;i++) {
            string s = "";
            for(int j=0;j<input.size();j++) {
                if(i & (1 << j)) {
                    s.push_back(input[j]);
                    permute(s, primes);
                }
            }
        }
        cout << primes.size() << endl;
    }
}