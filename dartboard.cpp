#include <bits/stdc++.h>
#define PI 3.141592653589793238462
using namespace std;

long double intF(long double r, long double sigma2) {
    return -exp(-(r*r)/(2*sigma2));
}

long double multiplier(int index) {
    long double mult;
	if(index == 0) mult = 50.0;
	if(index == 1) mult = 25.0;
	if(index == 2) mult = 10.5;
	if(index == 3) mult = 31.5;
	if(index == 4) mult = 10.5;
	if(index == 5) mult = 21.0;
    return mult;
}

long double calcProbability(long double r0, long double r1, double sigma2) {
    return intF(r1, sigma2) - intF(r0, sigma2);
}

int main() {
    vector<long double> radii(7);
    radii[0] = 0.0;
    for(int i=1;i<7;i++) {
        long double input;
        cin >> input;
        radii[i] = input;
    }

    long double sigma, sigma2;
    cin >> sigma;
    sigma2 = sigma * sigma;
    long double expectation = 0.0;
    for(int i=0;i<6;i++) {
        expectation += calcProbability(radii[i], radii[i+1], sigma2) * multiplier(i);
    }
    cout.precision(15);
    cout << expectation << endl;
}