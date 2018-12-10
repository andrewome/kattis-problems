#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> result;
    vector<string> vec;
    string str;
    while(cin >> str) {
        vec.push_back(str);
    }
    for(int i=0;i<vec.size();i++) {
        for(int j=0;j<vec.size();j++) {
            if(j == i) {
                continue;
            }
            result.insert(vec[i] + vec[j]);
        }
    }
    for(auto it = result.begin();it != result.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}