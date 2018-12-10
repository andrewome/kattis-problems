#include <bits/stdc++.h>
using namespace std;

int main() {
    int len, maxwidth = 0;
    string str;
    string space = "";
    vector<string> vec;
    
    while(getline(cin, str)) {
        if(str == space) {
            sort(vec.begin(), vec.end(), [](string a, string b) {
                reverse(a.begin(), a.end());
                reverse(b.begin(), b.end());
                return a < b;
            });
            for(auto it = vec.begin(); it != vec.end(); it++) {
                cout.width(maxwidth); cout << right << *it << '\n';
            }
            vec.clear();
            maxwidth = 0;
            cout << endl;
        }
        else {
            len = (int)str.size();
            if(len > maxwidth) {
                maxwidth = len;
            }
            vec.push_back(str);
        }
    }
    
    sort(vec.begin(), vec.end(), [](string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        return a < b;
    });
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout.width(maxwidth); cout << right << *it << '\n';
    }
    return 0;
}