#include <bits/stdc++.h>
using namespace std;

int main() {
    float C_float;
    int n;
    while(cin >> C_float >> n) {
        int C = static_cast<int>(floor(C_float));
        vector<int> value(n);
        vector<int> weight(n);
        vector<vector<int>> knapsack;
        knapsack.assign(n+1, vector<int>(C+1));
        for(int i=0;i<n;i++) {
            int inputv, inputw;
            cin >> inputv >> inputw;
            value[i] = inputv;
            weight[i] = inputw;
        }

        //run knapsack algorithm
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=C;j++) {
                if(i == 0 || j == 0) knapsack[i][j] = 0;
                else if(weight[i-1] <= j) knapsack[i][j] = max(value[i-1] + knapsack[i-1][j-weight[i-1]], knapsack[i-1][j]);
                else knapsack[i][j] = knapsack[i-1][j];
            }
        }

        //trace back to get indexes
        vector<int> ans;
        int val = knapsack[n][C], w = C;
        for(int i=n;i>0 && val>0;i--) {
            if(val == knapsack[i-1][w]) continue;
            else {
                ans.push_back(i-1);
                val -= value[i-1];
                w -= weight[i-1];
            }
        }

        int index = 0;
        cout << ans.size() << endl;
        for(int i : ans) cout << i << ' ';
        cout << endl;
    }
}