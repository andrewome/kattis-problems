#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    vector<double> probabilities(num);
    string s;
    for(int i=0;i<num;i++) {
        cin >> s >> probabilities[i];
    }
    
    sort(probabilities.begin(), probabilities.end(), greater<double>());

    int numTries = 1;
    double sum = 0;
    for(double d : probabilities) sum += 1.0 * numTries++ * d;
    cout << fixed;
    cout << setprecision(4);
    cout <<  sum << endl;
}