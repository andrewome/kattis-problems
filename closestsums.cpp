#include <bits/stdc++.h>
using namespace std;           

void checkClosestSum(int input, vector<int> &inputs) {
    vector<pair<int, int>> differences;
    for(int i=0;i<inputs.size()-1;i++) {
        for(int j = i+1;j<inputs.size();j++) {
            if(i == j) continue;
            int sum = inputs[i] + inputs[j];
            differences.push_back({abs(sum - input), sum});
        }
    }
    sort(differences.begin(), differences.end());
    cout << "Closest sum to " << input << " is " << differences[0].second << ".\n";
}

int main() {
    int numCases;
    int counter = 1;
    while(cin >> numCases) {
        vector<int> inputs;
        for(int i=0;i<numCases;i++) {
            int input;
            cin >> input;
            inputs.push_back(input);
        }
        cout << "Case " << counter << ":\n";
        int tests;
        cin >> tests;
        for(int i=0;i<tests;i++) {
            int input;
            cin >> input;
            checkClosestSum(input, inputs);
        }
        counter++;
    }
}