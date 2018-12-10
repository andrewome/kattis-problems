#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    string str;
    cin >> name;
    istringstream ss(name);
    while(ss.good()) {
        getline(ss, str, '-');
        cout << str[0];
    }
}