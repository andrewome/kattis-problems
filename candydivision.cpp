#include <bits/stdc++.h>
using namespace std;

void getPrimeFactorisation(long long n, set<long long int> &factors) {
    for(long long int i=1;i<sqrt(n)+1;i++) {
        if(n%i == 0) {
            factors.insert(i);
            factors.insert(n/i);
        }
    }
}

int main() {
    set<long long int> factors;
    long long int n;
    cin >> n;
    getPrimeFactorisation(n, factors);
    for(long long int i : factors) {
        cout << i-1 << ' ';
    }
    cout << endl;
}