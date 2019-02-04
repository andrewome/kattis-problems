#include <bits/stdc++.h>
using namespace std;           

int main() {
    vector<int> prices;
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++) {
        int input;
        cin >> input;
        prices.push_back(input);
    }
    
    sort(prices.begin(), prices.end(), greater<int>());
    
    unsigned long long int sum = 0;
    for(int i=2;i<n;i+=3) {
        sum += prices[i];
    }
    
    cout << sum << endl;
}