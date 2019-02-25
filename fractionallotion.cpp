#include <bits/stdc++.h>
using namespace std;

int main() {
    int one, n;
    char slash;
    while(cin >> one >> slash >> n) {
        int count = 0;
        for(int x=n+1;x<=2*n;x++) {
            if((n*x)%(x-n) == 0) {
                int y = (n*x)/(x-n);
                if(y >= n) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}