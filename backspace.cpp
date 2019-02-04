#include <bits/stdc++.h>
using namespace std;           

int main() {
    string input;
    cin >> input;
    stack<char> actualMessage;
    
    for(char c : input) {
        if(c == '<' && !actualMessage.empty()) {
            actualMessage.pop();
            continue;
        }
        actualMessage.push(c);
    }
    
    char message[actualMessage.size() + 1];
    message[actualMessage.size()] = '\0';
    while(!actualMessage.empty()) {
        message[actualMessage.size() - 1] = actualMessage.top();
        actualMessage.pop();
    }
    
    cout << message << endl;
}