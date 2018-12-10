#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> scores;
    double total, average;
    int num_TC, num_students, grades;
    cin >> num_TC;
    for(int i=0;i<num_TC;i++) {
        total = 0;
        cin >> num_students;
        for(int j=0;j<num_students;j++) {
            cin >> grades;
            total += grades;
            scores.push(grades);
        }
        average = total/num_students;
        double count = 0;
        while(!scores.empty()) {
            if(scores.top() > average) {
                count++;
            }
            scores.pop();
        }
        double percentage = count/num_students * 100;
        printf("%.3lf%%\n", percentage);
    }
    return 0;
}