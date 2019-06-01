#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> v = {1, 0, 0};
    
    for(char c : s) {
        if(c == 'A')
            swap(v[0], v[1]);
        if(c == 'B')
            swap(v[1], v[2]);
        if(c == 'C')
            swap(v[0], v[2]);
    }
    for(int i = 0; i < 3; i++) {
        if(v[i] == 1) {
            cout << i + 1;
            break;
        }
    }
}