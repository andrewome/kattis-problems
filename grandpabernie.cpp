#include <bits/stdc++.h>
using namespace std;           

int main() {
    unordered_map<string, vector<int>> countryAndDateVisited;
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string country;
        int year;
        cin >> country >> year;
        if(countryAndDateVisited.find(country) == countryAndDateVisited.end()) {
            countryAndDateVisited.insert({country, vector<int>()});
        }
        countryAndDateVisited[country].push_back(year);
    }
    for(auto &p : countryAndDateVisited) {
        sort(p.second.begin(), p.second.end());
    }

    cin >> n;
    for(int i=0;i<n;i++) {
        string country;
        int whatTime;
        cin >> country >> whatTime;
        cout << countryAndDateVisited[country][whatTime-1] << endl;
    }
}