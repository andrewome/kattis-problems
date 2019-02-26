#include <bits/stdc++.h>
using namespace std;           

int main() {
    int numIndex;
    while(cin >> numIndex) {
        if(!numIndex) {
            break;
        }
        
        vector<int> indexSequence;
        for(int i=0;i<numIndex;i++) {
            int input;
            cin >> input;
            indexSequence.push_back(input-1);
        }
        
        string message;
        cin.ignore(10, '\n');
        getline(cin, message);
        
        //pad message if it's not a multiple of index size
        if(message.size()%numIndex != 0) {
            int numberOfSpacesToPad = numIndex - message.size()%numIndex;
            message.append(numberOfSpacesToPad, ' ');
        }
        
        
        //construct encrypted message
        int startIdx = 0;
        cout << "'";
        for(int i=0;i<message.size();i++) {
            if(i%numIndex == 0 && i != 0) {
                startIdx += numIndex;
            }
            char c = message[startIdx + indexSequence[i%numIndex]];
            cout << c;
        }
        cout << "'\n";
        indexSequence.clear();
    }
}