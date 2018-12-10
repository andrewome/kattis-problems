#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    unordered_map<int, int> CDs;
    int jack = 1, jill = 1, num;
    while(1) {
        int sum = 0;
        cin >> jack;
        cin >> jill;
        if(jack == 0 && jill == 0) {
            break;
        }
        for(int i=0;i<jack;i++) {
            cin >> num;
            CDs.insert(make_pair(num, 1));
        }
        for(int i=0;i<jill;i++) {
            cin >> num;
            // Check if CD is inside CD list
            auto it = CDs.find(num);
            // If it is inside, increment sum by 1.
            if(it != CDs.end()) {
                sum += 1;
            }
            // Else it is not inside don't do anything
        }
        cout << sum << endl;
        CDs.clear();
    }
    return 0;
}