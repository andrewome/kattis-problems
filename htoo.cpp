#include <bits/stdc++.h>
using namespace std;

void splitChemical(unordered_map<char, int> &chemicalConstituents, string chemical) {
    for(int i=0;i<chemical.size();i++) {
        if(isalpha(chemical[i])) {
            int j, endIndex, number;
            for(j=i+1;j<chemical.size();j++) {
                if(isalpha(chemical[j])) break;
            }
            endIndex = j;
            if(endIndex == i+1) {
                number = 1;
            } else {
                string numberString = chemical.substr(i+1, endIndex-i-1);
                istringstream ss(numberString);
                ss >> number;
            }
            if(chemicalConstituents.find(chemical[i]) == chemicalConstituents.end()) {
                chemicalConstituents.insert({chemical[i], number});
            } else {
                chemicalConstituents[chemical[i]] += number;
            }
        }
    }
}    

int main() {
    unordered_map<char, int> startChemicalConstituents;
    unordered_map<char, int> endChemicalConstituents;
    string startChemical, endChemical;
    int numStartChemical;
    cin >> startChemical >> numStartChemical;
    cin >> endChemical;
    
    //processing
    splitChemical(startChemicalConstituents, startChemical);
    splitChemical(endChemicalConstituents, endChemical);
    for(pair<char, int> p : startChemicalConstituents) {
        startChemicalConstituents[p.first] *= numStartChemical;
    }
    
    //get the division
    vector<int> differences;
    for(pair<char, int> endElement : endChemicalConstituents) {
        differences.push_back(startChemicalConstituents[endElement.first] / endElement.second);
    }
    
    sort(differences.begin(), differences.end());
    cout << differences[0] << endl;
}