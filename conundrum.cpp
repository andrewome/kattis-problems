#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    int count = 1, counter = 0;
    for(auto it = word.begin(); it != word.end(); it++) {
        if(count%3 == 1) {
            if(*it != 'P') counter++;
        }
        else if(count%3 == 2) {
            if(*it != 'E') counter++;
        }
        else if(count%3 == 0) {
            if(*it != 'R') counter++;
        }
        count++;
    }
    cout << counter;
    return 0;
}