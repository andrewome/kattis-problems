#include <bits/stdc++.h>
using namespace std;

string indexToString(int i) {
    if(i == 1) return "single";
    if(i == 2) return "double";
    if(i == 3) return "triple";
}

int main() {
    int num;
    cin >> num;

    for(int i=0;i<21;i++) {
        for(int j=0;j<21;j++) {
            for(int k=0;k<21;k++) {
                for(int l=1;l<4;l++) {
                    for(int m=1;m<4;m++) {
                        for(int n=1;n<4;n++) {
                            int sum = l * i + m * j + n * k;
                            if(num == sum) {
                                //cout << sum << endl;
                                string output = "";
                                if(l > 0 && i > 0) {
                                    output = output + indexToString(l) + ' ' + to_string(i) + '\n';
                                }
                                if(m > 0 && j > 0) {
                                    output = output + indexToString(m) + ' ' + to_string(j) + '\n';
                                }
                                if(n > 0 && k > 0) {
                                    output = output + indexToString(n) + ' ' + to_string(k) + '\n';
                                }
                                cout << output << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "Impossible" << endl;
}