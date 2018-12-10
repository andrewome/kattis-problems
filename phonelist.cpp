#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<string, vector<string>, greater<string>> pq;
    int num_TC, num_numbers;
    string numbers;
    cin >> num_TC;
    for(int i=0;i<num_TC;i++) {
        bool consistent = true;
        cin >> num_numbers;
        cin.ignore();
        for(int j=0;j<num_numbers;j++) {
            cin >> numbers;
            pq.push(numbers);
        }
        
        string _old = pq.top();
        pq.pop();
        while(pq.size() > 0) {
            string _new = pq.top();
            pq.pop();
            if (!strncmp(_new.c_str(), _old.c_str(), strlen(_old.c_str()))) {
                consistent = false;
                break;
            }
            else _old = _new;
        }
        if(consistent) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        pq = priority_queue<string, vector<string>, greater<string>>();
    }
    return 0;
}