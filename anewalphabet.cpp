#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, string> m;
    m.insert({'a', "@"});
    m.insert({'b', "8"});
    m.insert({'c', "("});
    m.insert({'d', "|)"});
    m.insert({'e', "3"});
    m.insert({'f', "#"});
    m.insert({'g', "6"});
    m.insert({'h', "[-]"});
    m.insert({'i', "|"});
    m.insert({'j', "_|"});
    m.insert({'k', "|<"});
    m.insert({'l', "1"});
    m.insert({'m', "[]\\/[]"});
    m.insert({'n', "[]\\[]"});
    m.insert({'o', "0"});
    m.insert({'p', "|D"});
    m.insert({'q', "(,)"});
    m.insert({'r', "|Z"});
    m.insert({'s', "$"});
    m.insert({'t', "']['"});
    m.insert({'u', "|_|"});
    m.insert({'v', "\\/"});
    m.insert({'w', "\\/\\/"});
    m.insert({'x', "}{"});
    m.insert({'y', "`/"});
    m.insert({'z', "2"});

    string s;
    getline(cin, s);
    for(char c : s) {
        if(isalpha(c))
            cout << m[tolower(c)];
        else
            cout << c;
    }
    cout << endl;
}