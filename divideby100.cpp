#include <bits/stdc++.h>
using namespace std;

int main() {
    string N, M;
    cin >> N >> M;
    int lenN = N.size();
    int lenM = M.size();
    int decimalIndex = lenN - lenM;

    //detect trailing zeros
    int trailingZeroIndex = -1;
    if(N[lenN-1] == '0') {
        for(int i=lenN-1;i>=0;i--) {
            if(N[i] != '0') {
                trailingZeroIndex = i;
                break;
            }
        }
    }
    //cout << decimalIndex << ' ' << trailingZeroIndex << endl;
    if(lenN < lenM) {
        cout << "0.";
        //insert remaining zeros, if any
        for(int i=0;i<lenM-lenN-1;i++) {
            cout << '0';
        }
        //deal with trailing zeros
        if(trailingZeroIndex != -1) {
            for(int i=0;i<=trailingZeroIndex;i++) {
                cout << N[i];
            }
        } else {
            for(int i=0;i<lenN;i++) {
                cout << N[i];
            }
        }
    }
    if(lenN >= lenM) {
        for(int i=0;i<=decimalIndex;i++) {
            cout << N[i];
        }
        //if no trailing zeros, iterate until end of string
        if(trailingZeroIndex == -1) {
            cout << '.';
            for(int i=decimalIndex+1;i<lenN;i++) {
                cout << N[i];
            }
        } else {
        //else iterate until the trailing zero.
        //if decimal index falls before the trailing zero,
        //add the decimal place.
            if(decimalIndex < trailingZeroIndex) {
                cout << '.';
            }
            for(int i=decimalIndex+1;i<=trailingZeroIndex;i++) {
                cout << N[i];
            }
        }
    }
    cout << endl;
}