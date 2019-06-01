#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W, H;
    cin >> N >> W >> H;
    double diagonal = sqrt(W * W + H * H);
    for(int i = 0; i < N; i++) {
        int matchLength;
        cin >> matchLength;
        if(matchLength <= diagonal)
            cout << "DA\n";
        else 
            cout << "NE\n";
    }
}