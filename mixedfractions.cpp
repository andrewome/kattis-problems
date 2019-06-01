#include <bits/stdc++.h>
using namespace std;

int main() {
    int numerator, denominator;
    while(cin >> numerator >> denominator) {
        if(numerator == 0 && denominator == 0)
            break;
        printf("%d %d / %d\n", numerator/denominator, numerator%denominator, denominator);
    }
}