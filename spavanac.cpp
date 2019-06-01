#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;
    int totalMinutes = 60 * H + M;
    totalMinutes -= 45;
    if(totalMinutes < 0) totalMinutes = totalMinutes + 24 * 60;
    int outputH = totalMinutes / 60;
    int outputM = totalMinutes % 60;
    printf("%d %d", outputH, outputM);
}