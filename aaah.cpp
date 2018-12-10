#include <bits/stdc++.h>
using namespace std;

int main() {
    string doctor, jon;
    cin >> jon;
    cin >> doctor;
    if(strlen(doctor.c_str()) > strlen(jon.c_str())) {
        cout << "no";
    }
    else {
        cout << "go";
    }
    return 0;
}