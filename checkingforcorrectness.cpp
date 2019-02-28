#include <bits/stdc++.h>
using namespace std;           

int moduloExponentiation(long long int a, long long int b, int m) {
    a %= m;
    int result  = 1;
    while(b > 0) {
        if(b%2 == 1) {
            result *= a;
            result %= m;
        }
        b /= 2;
        a = (a*a)%m;
    }
    return result;
}

int main() {
    long long int a, b;
    char op;
    while(cin >> a >> op >> b) {
        if(op == '+') cout << (a%10000 + b%10000)%10000;
        if(op == '*') cout << (a%10000 * b%10000)%10000;
        if(op == '^') cout << moduloExponentiation(a, b, 10000);
        cout << endl;
    }
}