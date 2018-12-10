#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string, int> stringnumber;
    unordered_map<int, string> numberstring;
    string command, name;
    string str;
    char op;
    int number, result;
    while(cin >> command) {
        cin.ignore();
        if(command == "def") {
            cin >> name;
            cin >> number;
            if(stringnumber.find(name) != stringnumber.end()) {
                int old_number = stringnumber[name];
                stringnumber[name] = number;
                numberstring[number] = name;
                numberstring.erase(old_number);
            }
            else {
                stringnumber.insert(make_pair(name, number));
                numberstring.insert(make_pair(number, name));
            }
        }
        else if(command == "calc") {
            bool first_time = true;
            getline(cin, str);
            istringstream ss(str);
            while(ss.good()) {
                if(first_time) {
                    ss >> name;
                    if(stringnumber.find(name) == stringnumber.end()) {
                        result = -99998;
                        break;
                    }
                    else {
                        result = stringnumber[name];
                    }
                    first_time = false;
                }
                ss >> op;
                if(op == '=') {
                    break;
                }
                ss >> name;
                if(stringnumber.find(name) == stringnumber.end()) {
                    result = -998808;
                    break;
                }
                else {
                    if(op == '+') {
                        result += stringnumber[name];
                    }
                    else if(op == '-') {
                        result -= stringnumber[name];
                    }
                }
            }
            //cout << result << endl;
            if(numberstring.find(result) == numberstring.end()) {
                cout << str << " unknown" << endl;
            }
            else {
                cout << str << " " << numberstring[result] << endl;
            }
        }
        else if(command == "clear") {
            stringnumber.clear();
            numberstring.clear();
        }
    }
    return 0;
}