#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> pastStrings;
    string str;
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        int count = 0;
        cin >> str;
        
        auto it = pastStrings.lower_bound(str);
        while(it != pastStrings.end()) {
            //check if substring is in first few chars in string
            if((*it).first.substr(0, str.size()) != str) {
                break;
            }
            count += (*it).second;
            it++;
        }
        
        if(pastStrings.find(str) == pastStrings.end()) {
            pastStrings.insert(make_pair(str, 1));
        } else {
            pastStrings[str]++;
        }
        cout << count << endl;
    }
    /*
    for(pair<string, int> p : pastStrings) {
        cout << p.first << " " << p.second << endl;
    }
    auto it = pastStrings.lower_bound("hi");
    cout << (*it).first << endl;
    */
    return 0;
}