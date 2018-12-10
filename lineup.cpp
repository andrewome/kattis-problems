#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string name;
    vector<string> names, sorted;
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> name;
        names.push_back(name);
        sorted.push_back(name);
    }
    sort(sorted.begin(), sorted.end());
    if(names == sorted) {
        cout << "Increasing\n";
    }
    else {
        reverse(sorted.begin(), sorted.end());
        if(names == sorted) {
            cout << "Decreasing\n";
        }
        else {
            cout << "Neither\n";
        }
    }
    return 0;
}