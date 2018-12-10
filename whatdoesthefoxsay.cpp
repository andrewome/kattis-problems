#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> sounds;
    unordered_set<string> database_of_sounds;
    int num_TC;
    string animal, goes, sound_type, str;
    vector<string> fox_says;
    
    cin >> num_TC;
    cin.ignore();
    for(int i=0;i<num_TC;i++) {
        // Take in the sounds heard in forest, put in queue
        getline(cin, str);
        istringstream ss1(str);
        while(ss1 >> str) {
            sounds.push(str);
        }
        while(1) {
            getline(cin, str);
            // Check if string == what does the fox say to end loop
            if(str.compare("what does the fox say?") == 0) {
                break;
            }
            istringstream ss2(str);
            // Take in the sounds that animals make
            ss2 >> animal;
            ss2 >> goes;
            ss2 >> sound_type;
            database_of_sounds.insert(sound_type);
        }
        /* Debugging
        for(auto it = database_of_sounds.begin();it != database_of_sounds.end();it++) {
            cout << it->second << " " << it->first << endl; 
        }
        */
        while(!sounds.empty()) {
            if(database_of_sounds.find(sounds.front()) == database_of_sounds.end()) {
                cout << sounds.front() << " ";
            }
            sounds.pop();
        }

        cout << endl;
        //Reinitialising
        bool sound_taken = false;
        database_of_sounds.clear();
    }
    return 0;
}