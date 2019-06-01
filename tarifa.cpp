#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N, amountSpent, totalAmount = 0;
    cin >> X;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> amountSpent;
        totalAmount += (X - amountSpent);
    }
    totalAmount += X;
    printf("%d\n", totalAmount);
}