#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    int size = str.size();
    for(int i=0;i<size/2;i++) {
        if(str[i] != str[size-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    set<string> palindromes;
    while(cin >> input) {
        palindromes.clear();
        
        int stringSize = input.size();
        for(int i=0;i<stringSize-1;i++) {
            for(int j=2;j<=stringSize;j++) {
                if(j > stringSize) {
                    break;
                }
                //cout << "Checking: " << input.substr(i, j) << endl;
                if(isPalindrome(input.substr(i, j))) {
                    palindromes.insert(input.substr(i, j));
                }
            }
        }
        for(string str : palindromes) {
            cout << str << endl;
        }
        cout << endl;
    }
}