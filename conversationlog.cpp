#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    unordered_map<string, int> keywords;
    unordered_map<string, unordered_set<string>> map_of_names;
    unordered_set<string> set_of_names;
    string str, name, words;
    cin >> M;
    cin.ignore();
    for(int i=0;i<M;i++) {
        getline(cin, str);
        istringstream ss(str);
        ss >> name;
        set_of_names.insert(name);
        while(ss >> words) {
            if(keywords.find(words) == keywords.end()) {
                keywords.insert(make_pair(words, 1));
            }
            else {
                keywords[words]++;
            }
            map_of_names[words].insert(name);
        }
    }
    
    for(auto it = map_of_names.begin(); it != map_of_names.end(); it++) { 
        if(it->second.size() != set_of_names.size()) {
            auto it2 = keywords.find(it->first);
            keywords.erase(it2);
        }
    }
    
    if(keywords.empty()) {
        cout << "ALL CLEAR" << endl;
        return 0;
    }
    
    vector<pair<int, string>> vec;
    for(auto &it: keywords) {   
        vec.push_back(make_pair(-(it.second), it.first));
    }

    sort(vec.begin(), vec.end());
    for(auto &it: vec) {
        cout << get<1>(it) << endl;
    }
    return 0;
}