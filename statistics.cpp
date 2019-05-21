#include <bits/stdc++.h>
#define INF 0x3f3f3f3
using namespace std;

int main() {
    int curTC = 1;
    int numInputs;
    while(cin >> numInputs) {
        int value, minVal = INF, maxVal = -INF;
        for(int i=0;i<numInputs;i++) {
            cin >> value;
            minVal = min(value, minVal);
            maxVal = max(value, maxVal);
        }
        int range = maxVal - minVal;
        printf("Case %d: %d %d %d\n", curTC++, minVal, maxVal, range);
    }
}
