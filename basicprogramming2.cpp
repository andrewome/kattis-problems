#include <bits/stdc++.h>
using namespace std;

void action1(vector<int>& v) {
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        int to_find = 7777 - v[i];
        if (binary_search(v.begin(), v.end(), to_find)) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

void action2(vector<int>& v) {
    unordered_set<int> s;
    for (int i : v) {
        if (s.find(i) == s.end()) // Not found
            s.insert(i);
        else {
            cout << "Contains duplicate\n";
            return;
        }
    }
    cout << "Unique\n";
}

void action3(vector<int>& v) {
    unordered_map<int, int> m;
    int size = v.size();
    for (int i : v) {
        if (m.find(i) == m.end()) { // Not found
            m.insert({i, 1});
        } else {
            m[i]++;
            if (m[i] > size / 2) {
                cout << i << endl;
                return;
            }
        }
    }
    cout << "-1\n";
}

void action4(vector<int>& v) {
    sort(v.begin(), v.end());
    int size = v.size();
    if (size & 1) { // Odd
        cout << v[size / 2] << endl;
    } else {
        cout << v[size / 2 - 1] << ' ' << v[size / 2] << endl;
    }
}

void action5(vector<int>& v) {
    sort(v.begin(), v.end());
    for (int i : v) {
        if (i >= 100 && i <= 999)
            cout << i << " ";
    }
}

int main() {
    int N, t;
    cin >> N >> t;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }
    
    switch (t) {
        case 1:
            action1(v);
            break;
        case 2:
            action2(v);
            break;
        case 3:
            action3(v);
            break;
        case 4:
            action4(v);
            break;
        case 5:
            action5(v);
            break;
    }
}