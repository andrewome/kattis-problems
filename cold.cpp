#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, counter = 0;;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(temp < 0) counter++;
    }
    cout << counter << endl;
}