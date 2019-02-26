#include <bits/stdc++.h>
using namespace std;           

int main() {
    unordered_map<string, unordered_set<string>> buzzwordToCategory;
    unordered_map<string, int> categoryScore;
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        string category;
        int W;
        cin >> category >> W;
        categoryScore.insert({category, 0});
        for(int j=0;j<W;j++) {
            string buzzword;
            cin >> buzzword;
            if(buzzwordToCategory.find(buzzword) == buzzwordToCategory.end()) {
                buzzwordToCategory.insert({buzzword, unordered_set<string>()});
            }
            buzzwordToCategory[buzzword].insert(category);
        }
    }
    string word;
    unordered_map<string, int> wordFrequencies;
    while(cin >> word) {
        if(wordFrequencies.find(word) == wordFrequencies.end()) {
            wordFrequencies.insert({word, 0});
        }
        wordFrequencies[word]++;
    }
    for(pair<string, int> p : wordFrequencies) {
        string word = p.first;
        int frequency = p.second;
        if(buzzwordToCategory.find(word) != buzzwordToCategory.end()) {
            for(string s : buzzwordToCategory[word]) {
                categoryScore[s] += frequency;
            }
        }
    }
    vector<pair<int, string>> toBeSorted;
    for(pair<string, int> p : categoryScore) {
        string category = p.first;
        int score = -p.second;
        toBeSorted.push_back({score, category});
    }

    sort(toBeSorted.begin(), toBeSorted.end());
    int score = toBeSorted[0].first;
    for(pair<int, string> p : toBeSorted) {
        //cout << p.second << ' ' << -p.first << endl;
        if(p.first == score) cout << p.second << endl;
    }
}