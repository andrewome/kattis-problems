#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, num;
    stack<int> s;
    cin >> N;
    cin >> num;
    s.push(num);
    for(int i=1;i<N;i++) {
        cin >> num;
        if(!s.empty() && (num + s.top())%2 == 0) {
            s.pop();
        }
        else {
            s.push(num);
        }
    }
    cout << s.size() << endl;
    return 0;
}