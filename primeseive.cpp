#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime;
int main() {
    int n, q;    
    cin >> n >> q;
    isPrime.assign(n+1, true);

    //sieve of eratosthenes
    for(int i=2;i<sqrt(n)+1;i++) {
        if(isPrime[i]) {
            for(int j=i*i;j<=n;j+=i) {
                isPrime[j] = false;
            }
        }
    }
    isPrime[0] = false;
    isPrime[1] = false;
    
    int counter = 0;
    for(int i=1;i<=n;i++) {
        if(isPrime[i]) counter++;
    }
    cout << counter << endl;

    int input;
    for(int i=0;i<q;i++) {
        cin >> input;
        cout << isPrime[input] ? '1' : '0';
        cout << endl;
    }
    return 0;
}