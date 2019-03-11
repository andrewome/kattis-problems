#include <bits/stdc++.h>
using namespace std;

void print(long long int numerator, long long int denominator) {
    long long int gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
    if(numerator > 0 && denominator < 0 || numerator < 0 && denominator < 0) {
        numerator *= -1;
        denominator *= -1;
    }
    if(numerator == 0 || denominator == 0) {
        cout << "0 / 1" << endl;
    } else {
        cout << numerator << " / " << denominator << endl;
    }
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        long long int x1, x2, y1, y2;
        char op;
        cin >> x1 >> y1 >> op >> x2 >> y2;
        long long int numerator, denominator;
        if(op == '+') {
            numerator = y2*x1 + y1*x2;
            denominator = y1*y2;            
        }
        if(op == '-') {
            numerator = y2*x1 - y1*x2;
            denominator = y1*y2;
        }
        if(op == '*') {
            numerator = x1*x2;
            denominator = y1*y2;     
        }
        if(op == '/') {
            numerator = x1*y2;
            denominator = y1*x2;
        }
        print(numerator, denominator);
    } 
}