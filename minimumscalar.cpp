#include <bits/stdc++.h>
using namespace std;

int main() {
    int TC, counter = 1;
    cin >> TC;
    while(TC--) {
        int n;
        cin >> n;
        vector<int> v_1;
        vector<int> v_2;
        for(int i=0;i<n;i++) {
            int input;
            cin >> input;
            v_1.push_back(input);
        }
        for(int i=0;i<n;i++) {
            int input;
            cin >> input;
            v_2.push_back(input);
        }

        sort(v_1.begin(), v_1.end());
        sort(v_2.begin(), v_2.end(), greater<int>());
        long long int sum = 0;
        for(int i=0;i<n;i++) {
            sum += 1LL * v_1[i] * v_2[i];
        }
        cout << "Case #" << counter << ": ";
        cout << sum << endl;
        counter++;
    }
}