#include <bits/stdc++.h>
using namespace std;

int main() {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    unordered_map<char, int> alphabetMap;
    int counter = 0;
    for(char c : alphabet) {
        alphabetMap.insert(make_pair(c, counter));
        counter++;
    }
    
    int numRotations;
    string str;
    while(cin >> numRotations >> str) {
        if(!numRotations) break;
        
        reverse(str.begin(), str.end());
        string encrypted;
        for(char c : str) {
            int shift = alphabetMap[c]+numRotations;
            if(shift >= alphabet.size()) {
                shift = shift % alphabet.size();
            }
            encrypted.push_back(alphabet[shift]);
        }
        cout << encrypted << endl;
    }
}