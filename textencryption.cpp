#include <bits/stdc++.h>
using namespace std;

string removeSpacesAndMakeUpper(string s) {
    string dummy;
    for(char c : s) {
        if(isalpha(c)) dummy.push_back(toupper(c));
    }
    return dummy;
}

int main() {
    int N;
    string s;
    while(cin >> N) {
        if(N == 0) break;
        cin.ignore();
        getline(cin, s);
        s = removeSpacesAndMakeUpper(s);

        if(s.size() <= N) {
            cout << s << endl;
            continue;
        }

        vector<char> v(s.size());
        int strPointer = 0, cipherPointer = 0, tPointer;
        while(strPointer < s.size()) {
            tPointer = cipherPointer;
            while(strPointer < s.size() && tPointer < v.size()) {
                v[tPointer] = s[strPointer];
                tPointer += N;
                strPointer++;
            }
            cipherPointer++;
        }
        
        for(char c : v) cout << c;
        cout << endl;
    }
}