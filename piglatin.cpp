#include <bits/stdc++.h>
using namespace std;

unordered_set<char> vowels;

string convert(string word) {
    if(vowels.find(word[0]) != vowels.end()) {
        return word + "yay";
    } else {
        string output;
        int firstVowel;
        for(int i=0;i<word.size();i++) {
            if(vowels.find(word[i]) != vowels.end()) {
                firstVowel = i;
                break;
            }
        }        
        return word.substr(firstVowel, word.size()) + word.substr(0, firstVowel) + "ay";
    }
}

int main() {
    string str = "aeiouy";
    for(char c : str) {
        vowels.insert(c);
    }
    
    string word;
    while(cin >> word) {
        cout << convert(word) << ' ';
    }
    cout << endl;
}