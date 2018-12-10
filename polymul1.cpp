#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases, i, j;
    vector<int> firstPolynomial;
    vector<int> secondPolynomial;
    vector<int> finalPolynomial;
    int polynomialDegree1;
    int polynomialDegree2;
    cin >> testCases;
    
    while(testCases) {
        cin >> polynomialDegree1;
        for(i=0;i<polynomialDegree1+1;i++) {
            int input;
            cin >> input;
            firstPolynomial.push_back(input);
        }
        cin >> polynomialDegree2;
        for(i=0;i<polynomialDegree2+1;i++) {
            int input;
            cin >> input;
            secondPolynomial.push_back(input);
        }
        finalPolynomial.assign(polynomialDegree1+polynomialDegree2+1, 0);
        
        for(i=0;i<polynomialDegree1+1;i++) {
            for(j=0;j<polynomialDegree2+1;j++) {
                finalPolynomial[i+j] += firstPolynomial[i] * secondPolynomial[j];
            }
        }
        
        cout << polynomialDegree1+polynomialDegree2 << endl;
        for(int i : finalPolynomial) {
            cout << i << ' ';
        }
        cout << endl;
        firstPolynomial.clear();
        secondPolynomial.clear();
        finalPolynomial.clear();
        testCases--;
    }
}