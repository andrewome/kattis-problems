#include <bits/stdc++.h>
#define PI 3.14159265

using namespace std;

int main() {
    float height, length, angle;
    cin >> height;
    cin >> angle;
    length = height / (sin(angle*PI/180));
    cout << ceil(length);
    return 0;
}