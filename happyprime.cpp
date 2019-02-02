#include <bits/stdc++.h>
using namespace std;           

bool checkPrime(int num) {
    if(num == 1) {
        return false;
    }
    if(num == 2) {
        return true;
    }
    
    for(int i=2;i<num/2;i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

bool checkHappy(int num) {
    int sum = 0;
    int counter = 0;
    while(sum != 1) {
        sum = 0;
        while(num > 0) {
            sum += (num%10) * (num%10);
            num /= 10;
        }
        num = sum;
        counter++;
        if(counter == 500) {
            return false;
        }
    }
    return true;
}

int main() {
    int K, m;
    cin >> K;
    for(int i=0;i<K;i++) {
        int dummy;
        cin >> dummy >> m;
        bool isPrime = checkPrime(m);
        bool isHappy = checkHappy(m);
        cout << dummy << ' ' << m << ' ';
        if(isPrime && isHappy) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}