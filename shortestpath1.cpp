#include <bits/stdc++.h>
#define INF 0x3F3F3F3F
using namespace std;

void dijkstra(int source, vector<vector<pair<int, int>>> &adjList, vector<int> &distances) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});
    distances[source] = 0;
    
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        for(pair<int, int> p : adjList[u]) {
            int v = p.second;
            int weight = p.first;
            if(distances[v] > distances[u] + weight) {
                distances[v] = distances[u] + weight;
                pq.push({distances[v], v});
            }
        }
    }
}
int main() {
    int n, m, q, s;
    while(cin >> n >> m >> q >> s) {
        if(n == 0 && m == 0 && q == 0 && s == 0) break;
        vector<vector<pair<int, int>>> adjList;
        vector<int> distances;
        vector<bool> checked;
        adjList.assign(n, vector<pair<int, int>>());
        distances.assign(n, INF);

        //take in edges
        for(int i=0;i<m;i++) {
            int from, to, weight;
            cin >> from >> to >> weight;
            adjList[from].push_back({weight, to});
        }

        //run dijkstra
        dijkstra(s, adjList, distances);
        
        //queries
        for(int i=0;i<q;i++) {
            int query;
            cin >> query;
            if(distances[query] != INF) {
                cout << distances[query];
            } else {
                cout << "Impossible";
            }
            cout << endl;
        }
        cout << endl;
    }   
}