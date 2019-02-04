#include <bits/stdc++.h>
using namespace std;           

int main() {
    int testCases;
    cin >> testCases;
    while(testCases--) {
        unordered_map<string, int> numberOfToysSold;
        int k;
        cin >> k;
        for(int i=0;i<k;i++) {
            string toyName;
            int numberOfToys;
            cin >> toyName >> numberOfToys;
            if(numberOfToysSold.find(toyName) == numberOfToysSold.end()) {
                numberOfToysSold.insert(make_pair(toyName, numberOfToys));
            } else {
                numberOfToysSold[toyName] += numberOfToys;
            }
        }
        
        cout << numberOfToysSold.size() << endl;
        
        //sort according to number of toys sold
        vector<pair<int, string>> v;
        for(pair<string, int> p : numberOfToysSold) {
            v.push_back(make_pair(-(p.second), p.first));
        }
        
        sort(v.begin(), v.end());
        
        //output answer, don't forget to negative the number again
        for(pair<int, string> p : v) {
            cout << p.second << ' ' << -(p.first) << endl;
        }
    }
}