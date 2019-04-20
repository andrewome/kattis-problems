#include <bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3
int main() {
    int n, m, q;
    while(cin >> n >> m >> q) {
        if(n == 0 && m == 0 && q == 0) break;

        vector<vector<long long int>> dist;
        dist.resize(n, vector<long long int>(n, inf));
        for(int i=0;i<n;i++) {
            dist[i][i] = 0;
        }

        //i/o
        int v1, v2;
        long long int weight;
        for(int i=0;i<m;i++) {
            cin >> v1 >> v2 >> weight;
            dist[v1][v2] = min(dist[v1][v2], weight);
        }

        for(int k=0;k<n;k++) {
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    if(dist[i][k] < inf && dist[k][j] < inf) {
                        if(dist[i][j] > dist[i][k] + dist[k][j]) 
                            dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }

        //get negative cycles
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                for(int k=0;k<n;k++) {
                    if(dist[k][k] < 0 && dist[i][k] != inf && dist[k][j] != inf)
                        dist[i][j] = -inf;
                }
            }
        }

        /*
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout << dist[i][j] << ' ';
            }
            cout << endl;
        }
        */

        for(int i=0;i<q;i++) {
            cin >> v1 >> v2;
            if(dist[v1][v2] == inf) cout << "Impossible\n";
            else if(dist[v1][v2] == -inf) cout << "-Infinity\n";
            else cout << dist[v1][v2] << endl;
        }

        cout << endl;
    }
}