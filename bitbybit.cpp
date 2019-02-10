#include <bits/stdc++.h>
using namespace std; 

int main() {
    int numInstructions;
    while(cin >> numInstructions) {
        if(numInstructions == 0) {
            break;
        }
        
        //initialise bit array
        int arr[32];
        for(int i=0;i<32;i++) {
            arr[i] = 2;
        }
        
        for(int i=0;i<numInstructions;i++) {
            string instruction;
            cin >> instruction;
            if(instruction == "CLEAR") {
                int bitNumber;
                cin >> bitNumber;
                arr[bitNumber] = 0;
            }
            if(instruction == "SET") {
                int bitNumber;
                cin >> bitNumber;
                arr[bitNumber] = 1;
            }
            if(instruction == "AND") {
                int bitOne, bitTwo;
                cin >> bitOne >> bitTwo;
                if(arr[bitOne] == 0 || arr[bitTwo] == 0) arr[bitOne] = 0;
                else if(arr[bitOne] == 1 && arr[bitTwo] == 2) arr[bitOne] = 2;
            }
            if(instruction == "OR") {
                int bitOne, bitTwo;
                cin >> bitOne >> bitTwo;
                if(arr[bitOne] == 1 || arr[bitTwo] == 1) arr[bitOne] = 1;
                else if(arr[bitOne] == 0 && arr[bitTwo] == 2) arr[bitOne] = 2;
            }
        }
        
        for(int i=31;i>=0;i--) {
            if(arr[i] == 2) {
                cout << '?';
            } else {
                cout << arr[i];
            }
        }
        cout << endl;
    }
}