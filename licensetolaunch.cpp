#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int whichDay = 0;
    int numDays;
    cin >> numDays;
    while(numDays--) {
        int numSpaceJunk;
        cin >> numSpaceJunk;
        pq.push(make_pair(numSpaceJunk, whichDay));
        whichDay++;
    }
    cout << pq.top().second << endl;
}