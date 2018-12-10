#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, count = 0;
    cin >> x;
    
    while(x%2 == 0) {
        count++;
        x = x/2;
    }
    for(int i=3;i<=x/2;i+=2) {
        while(x%i == 0) {
            count++;
            x = x/i;
        }
    }
    if(x > 2) {
        count++;
    }
    cout << count;
    return 0;
}