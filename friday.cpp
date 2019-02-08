#include <bits/stdc++.h>
using namespace std;           

int main() {
    int testCases;
    cin >> testCases;
    while(testCases--) {
        int numberOfDaysInYear, numberOfMonths, numberOfFridayTheThirteenths = 0;
        cin >> numberOfDaysInYear >> numberOfMonths;
        int day = 0;
        for(int i=0;i<numberOfMonths;i++) {
            int daysInMonth;
            cin >> daysInMonth;
            if((day+13)%7 == 6 && daysInMonth >= 13) {
                numberOfFridayTheThirteenths++;
            }
            day += daysInMonth;
        }
        cout << numberOfFridayTheThirteenths << endl;
    }
}