#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char prevChar = '\0';
    for(char c : s) {
        if(c == prevChar)
            continue;
        cout << c;
        prevChar = c;
    }
}