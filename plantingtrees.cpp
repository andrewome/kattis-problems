#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec;
    priority_queue<int> pq;
    int num_TC, time;
    cin >> num_TC;
    for(int i=0;i<num_TC;i++) {
        cin >> time;
        vec.push_back(time);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    int count=1;
    for(auto it = vec.begin();it != vec.end();it++) {
        pq.push(*it+count);
        count++;
    }
    cout << pq.top()+1 << endl;
    return 0;
}