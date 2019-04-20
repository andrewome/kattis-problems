#include <bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<pair<int, double>>> &adjList, vector<double> &distances) {
    priority_queue<pair<double, int>, vector<pair<double, int>>> pq;
    pq.push({1, 0});
    distances[0] = 1;
    
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        for(pair<int, double> p : adjList[u]) {
            int v = p.first;
            double factor = p.second;
            if(distances[v] < distances[u] * factor) {
                distances[v] = distances[u] * factor;
                pq.push({distances[v], v});
            }
        }
    }
}

int main() {
    int n, m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        
        //n is the number of intersections (vertices)
        //m is the number of corridors (edges)
        vector<vector<pair<int, double>>> adjList;
        adjList.assign(n, vector<pair<int, double>>());

        //i/o
        int v1, v2;
        double factor;
        for(int i=0;i<m;i++) {
            cin >> v1 >> v2 >> factor;
            adjList[v1].push_back({v2, factor});
            adjList[v2].push_back({v1, factor});
        }

        vector<double> dist(n, -INFINITY);
        dijkstra(adjList, dist);
        cout << fixed;
        cout.precision(4);
        cout << dist[n-1] << endl;
    }
}