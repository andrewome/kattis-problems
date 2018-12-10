#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int number, sum=0;
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> number;
        sum += pow(number/10,number%10);
    }
    cout << sum;
    return 0;
}