#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    unordered_map<string, int> m;
    queue<string> q;
    
    while(getline(cin, str)) {
        if(str == "0") {
            break;
        }
        // if it can find equals, means it is assigning
        if(str.find("=") != string::npos) {
            istringstream ss(str);
            string name;
            int num;
            char op;
            
            ss >> name >> op >> num;
            m[name] = num;
        }
        // else it is just addition 
        else {
            string dummy;
            int total = 0, num;
            
            istringstream ss(str);
            while(ss >> dummy) {
                if(dummy == "+") {
                    continue;
                }
                // checking if it is an integer
                bool isint = true;
                for(int i=0;i<strlen(dummy.c_str());i++) {
                    if(!isdigit(dummy[i])) {
                        isint = false;
                        break;
                    }
                }
                if(isint) {
                    istringstream iss(dummy);
                    iss >> num;
                    total += num;
                }
                else {
                    if(m.find(dummy) != m.end()) {
                        total += m[dummy];
                    }
                    else {
                        q.push(dummy);
                    }
                }
            }
            if(!q.empty()) {
                if(total != 0) {
                    cout << total << " + ";
                }
                while(!q.empty()) {
                    cout << q.front();
                    q.pop();
                    if(!q.empty()) {
                        cout << " + ";
                    }
                    else {
                        cout << "\n";
                    }
                }
            }
            else {
                cout << total << '\n';
            }
        }
    }
    return 0;
}
