#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, priority_queue<int>> m;
    while(n--) {
        string op;
        cin >> op;
        if(op == "add") {
            int add_e, add_g;
            cin >> add_e >> add_g;
            if(m.find(add_e) == m.end()) {
                m[add_e] = priority_queue<int>();
            }
            m[add_e].push(add_g);
        }

        if(op == "query") {
            int e;
            long long int sum = 0;
            cin >> e;
            while(m.size() > 0) {
                auto it = m.lower_bound(e);
                if(it == m.end()) it--;
                while(it != m.begin() && it->first > e) {
                    it--;
                }
                if(it->first > e) break;
                sum += it->second.top();
                e -= it->first;
                it->second.pop();
                if(it->second.empty()) {
                    m.erase(it);
                }
            }
            cout << sum << endl;
        }
    }
}