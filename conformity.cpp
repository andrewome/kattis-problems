#include <bits/stdc++.h>
using namespace std;

int main() {
    int numStudents;
    int i, j;
    unordered_map<string, int> m;
    
    cin >> numStudents;
    for(i=0;i<numStudents;i++) {
        vector<int> v;
        for(j=0;j<5;j++) {
            int moduleCode;
            cin >> moduleCode;
            v.push_back(moduleCode);
        }
        
        //sort the vector and create a string based on the sorted modules
        string output = "";
        sort(v.begin(), v.end());
        for(int j : v) {
            output += to_string(j);
        }
        
        //insert the string into map m
        if(m.find(output) == m.end()) {
            m.insert({output, 1});
        } else {
            m[output]++;
        }
    }
    
    int max = 0;
    for(pair<string, int> p : m) {
        if(p.second > max) {
            max = p.second;
        }
    }
    int total = 0;
    for(pair<string, int> p : m) {
        if(p.second == max) {
            total += max;
        }
    }
    
    cout << total << endl;
}