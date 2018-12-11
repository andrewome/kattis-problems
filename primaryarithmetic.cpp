#include <bits/stdc++.h>
using namespace std;

int main() {
    string number1, number2;
    
    while(cin >> number1 >> number2) {
        if(number1 == "0" && number2 == "0") break;

        //if number lengths are different, pad the smaller number's left with 0s
        if(number1.size() < number2.size()) {
            while(number1.size() != number2.size()) {
                number1.insert(0, "0");
            }
        }
        else {
            while(number2.size() != number1.size()) {
                number2.insert(0, "0");
            }
        }

        //compare both strings from right to left
        int counter = 0;
        int size = number1.size()-1;
        while(size != -1) {
            int sum;
            sum = number1[size] + number2[size] - (2 * '0');
            
            //if sum >= 10, there is a carry over. Also make sure to increment next digit in line w/ carry over
            if(sum >= 10) {
                counter++;
                if(size > 0) {
                    number1[size-1]++;
                }
            }
            size--;
        }

        if(counter > 1) {
            cout << counter <<  " carry operations." << endl;
        } else if(counter == 1) {
            cout << counter <<  " carry operation." << endl;
        } else if(counter == 0) {
            cout << "No carry operation." << endl;
        }
    }   
}