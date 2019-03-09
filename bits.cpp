#include <bits/stdc++.h>
using namespace std;
#define INF 0x3F3F3F3

int numberOfBits(long int n) {
    int temp = n;
    int numBits = 0;
    while(n > 0) {
        if(n%2 == 1) numBits++;
        n /= 2;
    }
    return numBits;
}

int checkMaxBits(long int n) {
    int curMaxBits = 0;
    while(n > 0) {
        int numBits = numberOfBits(n);
        if(numBits > curMaxBits) curMaxBits = numBits;
        n /= 10;
    }
    return curMaxBits;
}

int main() {
    int TC;
    cin >> TC;
    while(TC--) {
        long int number;
        cin >> number;
        cout << checkMaxBits(number) << endl;
    }
}