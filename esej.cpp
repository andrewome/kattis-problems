#include <bits/stdc++.h>
using namespace std;           

string generateWord(int n) {
    string output = "";
    while(n > 0) {
        output += n%26 + 'a';
        n /= 26;
    }
    return output;
}

int main() {
    int A, B;
    cin >> A >> B;
    for(int i=1;i<=B;i++) {
        cout << generateWord(i) << ' ';
    }
    cout << endl;
}