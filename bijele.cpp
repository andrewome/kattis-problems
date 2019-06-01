#include <bits/stdc++.h>
using namespace std;

int getExpectedNumberOfPieces(int i) {
    switch(i + 1) {
        case 1:
        case 2:
            return 1;
        case 3:
        case 4: 
        case 5:
            return 2;
        case 6:
            return 8;
    }
}

int main() {
    int numberOfPieces;
    for(int i = 0; i < 6; i++) {
        cin >> numberOfPieces;
        cout << getExpectedNumberOfPieces(i) - numberOfPieces << " ";
    }
    return 0;
}