#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    arr.assign(3, 0);
    string str;
    for(int i=0;i<3;i++) {
        int input;
        cin >> input;
        arr[i] = input;
    }
    cin >> str;
    
    sort(arr.begin(), arr.end());
    for(char c : str) {
        switch(c) {
            case 'A':
                cout << arr[0];
                break;
            case 'B':
                cout << arr[1];
                break;
            case 'C':
                cout << arr[2];
                break;
        }
        cout << ' ';
    }
    return 0;
}