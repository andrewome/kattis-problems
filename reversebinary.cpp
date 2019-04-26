#include <bits/stdc++.h>
using namespace std;

int _pow(int digit, int exp) {
    if(exp == 0) return 1;
    int output = 1;
    for(int i=0;i<exp;i++) {
        output *= digit;
    }
    return output;
}

int main() {
    int value;
    cin >> value;

    vector<int> binaryVal;
    //convert to reverse binary
    while(value > 0) {
        if(value%2 == 1) {
            binaryVal.push_back(1);
        } else {
            binaryVal.push_back(0);
        }
        value /= 2;
    }
    
    int size = binaryVal.size();
    int output = 0;
    for(int i=0;i<size;i++) {
        output += binaryVal[i] * _pow(2, size-i-1);
    }
    cout << output << endl;
}