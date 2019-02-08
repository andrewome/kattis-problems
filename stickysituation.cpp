#include <bits/stdc++.h>
using namespace std;           

string checkIfTriangle(vector<long long int> &v) {
    for(int i=0;i<v.size()-2;i++) {
        if(v[i] + v[i+1] > v[i+2]) {
            return "possible";
        }
    }
    return "impossible";
}

int main() {
    int N;
    cin >> N;
    vector<long long int> v;
    for(int i=0;i<N;i++) {
        long long int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    cout << checkIfTriangle(v) << endl;
}