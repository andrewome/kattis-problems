#include <bits/stdc++.h>
using namespace std;

//[0] = name, [1] = A, [2] = B.
vector<string> parseStr(string str) {
    vector<string> output;
    size_t colonIdx, commaIdx, end = str.size();
    colonIdx = str.find(":");
    commaIdx = str.find(",");
    output.push_back(str.substr(0, colonIdx));
    output.push_back(str.substr(colonIdx + 1, commaIdx - colonIdx - 1));
    output.push_back(str.substr(commaIdx + 1, end - commaIdx - 1));
    return output;
}

int main() {
    int numTC, curTc = 1;
    cin >> numTC;
    while(numTC--) {
        int N, M, numCompanies;
        vector<pair<int, string>> costs;
        cin >> N >> M >> numCompanies;
        for(int i=0;i<numCompanies;i++) {
            string input;
            cin >> input;
            vector<string> parsedStr = parseStr(input);
            string companyName = parsedStr[0];
            int costOfAddingOne = stoi(parsedStr[1]);
            int costOfHalving = stoi(parsedStr[2]);
            int curWork = N;
            int endWork = M;
            int totalCost = 0;

            //Do quick maff
            while(curWork > endWork) {
                if(curWork/2 < endWork) { //if halving gets a value smaller than aimed load
                    int diff = curWork - endWork;
                    totalCost += diff * costOfAddingOne;
                    curWork -= diff;
                } else {
                    //calculate cost of halving vs adding one
                    int cost = (curWork - curWork/2) * costOfAddingOne;
                    if(cost < costOfHalving) {
                        totalCost += cost;
                    } else {
                        totalCost += costOfHalving;
                    }
                    curWork /= 2;
                }
            }
            costs.push_back({totalCost, companyName});
        }
        sort(costs.begin(), costs.end());
        cout << "Case " << curTc++ << endl;
        for(pair<int, string> p: costs) {
            cout << p.second << " " << p.first << endl;
        }
    }
}