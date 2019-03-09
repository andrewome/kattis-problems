#include <bits/stdc++.h>
using namespace std;

string playerId(int n) {
    if(n%2 == 0) return "1";
    if(n%2 == 1) return "2";
}

int main() {
    unordered_set<string> history;
    string prev = "";
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string current;
        cin >> current;

        //check last letter of prev and first letter of current
        if(prev.size() != 0) {
            if(prev[prev.size()-1] != current[0]) {
                cout << "Player " << playerId(i%2) << " lost" << endl;
                return 0;
            }
        }

        //check if it has been used before
        if(history.find(current) != history.end()) {
            cout << "Player " << playerId(i%2) << " lost" << endl;
            return 0;
        }
        history.insert(current);
        prev = current;
    }
    cout << "Fair Game" << endl;
}