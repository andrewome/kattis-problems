#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int input;
    while(cin >> input) {
        if(!input) break;
        
        bool isInputPrime = isPrime(input);
        int copy = input;
        copy = copy*2 + 1;
        while(!isPrime(copy)) {
            copy++;
        }
        
        if(isInputPrime) {
            cout << copy << endl;
        } else {
            cout << copy << " (" << input << " is not prime)" << endl;
        }
    }
    return 0;
}