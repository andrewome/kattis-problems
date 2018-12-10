#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_TC, num;
    string str, s;
    cin >> num_TC;
    for(int i=0;i<num_TC;i++) {
        int ans = 0;
        cin >> str;
        istringstream ss(str);
        if(str == "P=NP") {
            cout << "skipped" << endl;
        }
        else {
            while(getline(ss, s, '+')) {
                istringstream ss1(s);
                ss1 >> num;     
                ans += num;
            }
            cout << ans << endl;
        }
    }
    return 0;
}