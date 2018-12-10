#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, diff;
    while(cin >> x >> y) {
        diff = x-y;
        if(diff < 0) {
            diff = 0 - diff;
        }
        cout << diff << '\n';
    }
    return 0;
}