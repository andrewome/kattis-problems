#include <bits/stdc++.h>
using namespace std;

void convert_string(string, vector<pair<string, string>> &vec);
int main() {
    vector<pair<string, string>> vec;
    string str;
    int test_cases, num_ppl;
    cin >> test_cases;
    for(int j=0;j<test_cases;j++) {
        cin >> num_ppl;
        cin.ignore(); //Ignore newline char
        for(int i=0;i<num_ppl;i++) {
            getline(cin, str);
            convert_string(str, vec);
        }
        // sort the vector in a lexographically ascending order to get our answer
        sort(vec.begin(), vec.end());
        for(auto &it: vec) {
            cout << get<1>(it) << '\n';
        }
        // print the 30 '=' chars that separates our test cases
        for(int i=0;i<30;i++) {
            cout << '=';
        }
        cout << '\n';
        // clear the vector for next test case.
        vec.clear();
    }
    return 0;
}

void convert_string(string str, vector<pair<string, string>> &vec) {
    stack<string> s;
    string name, dummy;
    string classtype = "";
    int difference = 0;
    
    istringstream ss(str);  
    getline(ss, name, ':'); // Get the name
    ss.ignore(); // Ignore the space after the ':'
    while(getline(ss, dummy, '-')) {
        if(dummy == "upper" || dummy == "upper class") {
            dummy = '1';
        }
        else if(dummy == "middle" || dummy == "middle class") {
            dummy = '2';
        }
        else if(dummy == "lower" || dummy == "lower class") {
            dummy = '3';
        }
        s.push(dummy); // Use LIFO to reverse the order of the classes
    }
    if(s.size() < 10) { // Get the difference in size so we know how many middle classes to append to the end
        difference = 10 - s.size();
    }
    while(!s.empty()) { // Append to get our classtype in integers
        classtype = classtype + s.top();
        s.pop();
    }
    for(int i=0;i<difference;i++) { // Append middle classes to the back of our classtype if classtype isn't 10 chars long
        classtype = classtype + '2';
    }
    vec.push_back(pair<string, string>(classtype, name)); // insert into array
}