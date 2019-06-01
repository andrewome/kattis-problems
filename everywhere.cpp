#include <bits/stdc++.h>
using namespace std;

int main() {
    int TC;
    cin >> TC;
    while(TC--) {
        unordered_set<string> s;
        string input;
        int numberOfCities;
        cin >> numberOfCities;
        for(int i = 0; i < numberOfCities; i++) {
            cin >> input;
            s.insert(input);
        }
        printf("%d\n", s.size());
    }
}