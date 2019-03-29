#include <bits/stdc++.h>
using namespace std;

void printRecursively(vector<vector<int>> &v, vector<string> &s, int idx) {
    cout << s[idx];
    for(int i : v[idx]) {
        printRecursively(v, s, i);
    }
}

int main() {
    cin.tie(NULL);ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i=0;i<n;i++) {
        cin >> strings[i];
    }

    int idx1, idx2, lastIdx = 0; //concat idx2 to idx1
    vector<vector<int>> v;
    v.assign(n, vector<int>());
    for(int i=0;i<n-1;i++) {
        cin >> idx1 >> idx2;
        idx1--;idx2--;
        v[idx1].push_back(idx2);
        lastIdx = idx1;
    }

    printRecursively(v, strings, lastIdx);
    cout << endl;
}