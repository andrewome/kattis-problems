#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjlist;
vector<int> visited; 
vector<int> type;

void dfs(int source, int val) {
    visited[source] = 1;
    type[source] = val;
    for(auto i: adjlist[source]) {
        if(!visited[i]) {
            dfs(i, val^1);
        }
    }
}

int main() {
    int n, m, x, y;
    cin >> n >> m;
    adjlist.assign(n, vector<int>());
    visited.assign(n, 0);
    type.assign(n, 0); // 0 for house, 1 for pub
        
    for(int i=0;i<m;i++) {
        cin >> x >> y;
        x--; y--;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }

    for(int i=0;i<n;i++) {
        if(!visited[i]) {
            if(adjlist[i].size() == 0) {
                cout << "Impossible";
                return 0;
            }
            dfs(i, 0);
        }
    }
    
    for(auto i: type) {
        if(i == 0) cout << "house ";
        if(i == 1) cout << "pub ";
    }
    
    return 0;
}