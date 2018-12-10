#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_TC;
    vector<string> vec;
    string name;
    while(cin >> num_TC, (num_TC)) {
        cin.ignore();
        for(int i=0;i<num_TC;i++) {
            cin >> name;
            vec.push_back(name);
        }
        
        stable_sort(vec.begin(), vec.end(), [](string a, string b) {
            if(a[0] != b[0]) {
                return a[0] < b[0];
            }
            else {
                return a[1] < b[1];
            }
        });
        for(auto &it: vec) {
            cout << it << endl;
        }
        vec.clear();
    }
}