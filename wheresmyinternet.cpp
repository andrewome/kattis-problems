#include <bits/stdc++.h>
using namespace std;

void bfs(int i, vector<vector<int>> &AdjList, vector<bool> &visited) {
    visited[i] = true;
    queue<int> q;
    q.push(i);
    while(!q.empty()) {
        for(auto it: AdjList[q.front()]) {
            if(!visited[it]) {
                visited[it] = true;
                q.push(it);
            }
        }
        q.pop();
    }
}

int main() {
    vector<vector<int>> AdjList;
    vector<bool> visited;
    int n, M, a, b;
    cin >> n >> M;
    //assigning values to vectors
    AdjList.assign(n, vector<int>());
    visited.assign(n, false);
    for(int i=0;i<M;i++) {
        cin >> a >> b;
        a--; b--;
        AdjList[a].push_back(b);
        AdjList[b].push_back(a);
    }
    
    //searching the map
    bfs(0, AdjList, visited);
    bool disconnected = false;
    for(int i=0;i<n;i++) {
        if(visited[i] == false) {
            cout << i+1 << endl;
            disconnected = true;
        }
    }
    if(!disconnected) {
        cout << "Connected" << endl;
    }
    return 0;
}
