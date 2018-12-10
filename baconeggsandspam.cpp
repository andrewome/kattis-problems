#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 1;
    map<string, set<string>> total;
    string name, food;
    while(cin >> num, (num)) {
        for(int i=0;i<num;i++) {
            cin >> name;
            cin.ignore();
            getline(cin, food);
            istringstream ss(food);
            while(ss >> food) {
                total[food].insert(name);
            }
        }
        
        for(auto it1 = total.begin();it1 != total.end();it1++) {
            cout << it1->first << " ";
            for(auto it2 = it1->second.begin(); it2 != it1->second.end(); it2++) {
                cout << *it2 << " ";
            }
            cout << endl;
        }
        cout << endl;
        total.clear();
    }
    return 0;
}