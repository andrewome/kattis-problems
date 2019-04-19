#include <bits/stdc++.h>
using namespace std;

list<int> parseList(string input, int numberOfElements) {
    list<int> output;
    istringstream ss(input);
    ss.ignore();
    for(int i=0;i<numberOfElements;i++) {
        int input;
        ss >> input;
        output.push_back(input);
        ss.ignore();
    }

    return output;
}

void printList(list<int> &elements, int mode) {
    cout << '[';
    int index = 0, size = elements.size();
    while(!elements.empty()) {
        //print from front
        if(mode%2 == 0) {
            cout << elements.front();
            elements.pop_front();
        } else { //print from back
            cout << elements.back();
            elements.pop_back();
        }
        if(!elements.empty()) cout << ',';
    }
    cout << "]\n";
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string command, input;
        int numberOfElements, mode = 0;
        cin >> command >> numberOfElements >> input;

        list<int> elements = parseList(input, numberOfElements);

        //parse commands
        bool hasError = false;
        for(char c : command) {
            if(c == 'R')
                mode++;
            if(c == 'D') {
                if(elements.empty()) {
                    hasError = true;
                    break;
                } else {
                    if(mode%2 == 0) {
                        elements.pop_front();
                    } else {
                        elements.pop_back();
                    }
                }
            }
        }
        if(!hasError) {
            printList(elements, mode);
        } else {
            cout << "error" << endl;
        }
    }
}