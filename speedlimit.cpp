#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if(n == - 1)
            break;
        int s, t, prevT = 0, totalDistance = 0;
        for(int i = 0; i < n; i++) {
            cin >> s >> t;
            totalDistance += s * (t - prevT);
            prevT = t;
        }
        printf("%d miles\n", totalDistance);
    }
}