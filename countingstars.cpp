#include <bits/stdc++.h>
using namespace std;

void search(int i, int j, int r, int c, char starmap[100][100]) {
    starmap[i][j] = '#';
    if(i+1 < r && starmap[i+1][j] == '-') search(i+1, j, r, c, starmap);
    if(i-1 >= 0 && starmap[i-1][j] == '-') search(i-1, j, r, c, starmap);
    if(j+1 < c && starmap[i][j+1] == '-') search(i, j+1, r, c, starmap);
    if(j-1 >= 0 && starmap[i][j-1] == '-') search(i, j-1, r, c, starmap);
}
void printarr(int r, int c, char starmap[100][100]) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout << starmap[i][j];
        }
        cout << '\n';
    }
}
int main() {
    char starmap[100][100];
    int r, c, i, j, case_number = 1;
    while(cin >> r >> c) {
        cin.ignore();
        int count = 0;
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                cin >> starmap[i][j];
            }
            cin.ignore();
        }

        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                if(starmap[i][j] == '-') {
                    search(i, j, r, c, starmap);
                    count++;
                    // debugging
                    //cout << '\n';
                    //printarr(r, c, starmap);
                }
            }
        }
        cout << "Case " << case_number << ": " << count << '\n';
        case_number++;
    }
    return 0;
}
