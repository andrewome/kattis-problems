#include <bits/stdc++.h>
using namespace std; 

bool check(int i, int j, char chessBoard[8][8]) {
    int tempi = i, tempj = j;
    //check west
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        j--;
        if(j == -1) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    }
    //check north-west
    i = tempi, j = tempj;
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        i++;
        j--;
        if(i == 8 || j == -1) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    }   
    //check north
    i = tempi, j = tempj;
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        i++;
        if(i == 8) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    }
    //check north-east
    i = tempi, j = tempj;
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        i++;
        j++;
        if(i == 8 || j == 8) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    }
    //check east
    i = tempi, j = tempj;
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        j++;
        if(j == 8) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    }  
    //check south-east
    i = tempi, j = tempj;
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        i--;
        j++;
        if(i == -1 || j == 8) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    }
    //check south
    i = tempi, j = tempj;
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        i--;
        if(i == -1) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    } 
    //check south-west
    i = tempi, j = tempj;
    while(i >= 0 && i < 8 && j >= 0 && j < 8) {
        i--;
        j--;
        if(i == -1 || j == -1) break;
        if(chessBoard[i][j] == '*') {
            //cout << i << ' ' << j << endl;
            return false;
        }
    }
    return true;
}

int main() {
    char chessBoard[8][8];
    string input;
    int counter = 0;
    for(int i=0;i<8;i++) {
        cin >> input;
        for(int j=0;j<8;j++) {
            chessBoard[i][j] = input[j];
        }
    }
    
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            if(chessBoard[i][j] == '*') {
                counter++;
                if(!check(i, j, chessBoard)) {
                    cout << "invalid" << endl;
                    return 0;
                }
            }
        }
    }
    if(counter == 8) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }
}