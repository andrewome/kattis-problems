#include <bits/stdc++.h>
#define PI 3.141592653589793238462643383279502884

using namespace std;           

int main() {
    double A, N;
    cin >> A >> N;
    double maxArea = pow((N/(2*PI)), 2) * PI;
    
    if(A <= maxArea) {
        cout << "Diablo is happy!";
    } else {
        cout << "Need more materials!";
    }
}