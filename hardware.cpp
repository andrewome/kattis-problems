#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_cases, address_count = 0;
    string str;
    cin >> num_cases;
    cin.ignore();
    map<int, int> counter;
    
    for(int i=0;i<num_cases;i++) {
        // output the total number of addresses + street name
        getline(cin, str);
        cout << str << '\n';
        getline(cin, str);
        cout << str << '\n';
        istringstream ss(str);
        int num_addresses;
        ss >> num_addresses;
        
        while(address_count < num_addresses) {
            getline(cin, str);
            //cout << str << '\n';
            if(str[0] == '+') {
                char buffer;
                int start, end, diff;
                istringstream ss(str);
                ss >> buffer; // eat up the + sign
                ss >> start >> end >> diff;
                for(int j=start;j<=end;j+=diff) {
                    int dummy = j;
                    while(dummy > 0) {
                        int digit = dummy%10;
                        if(counter.find(digit) == counter.end()) {
                            counter[digit] = 1;
                        }
                        else {
                            counter[digit]++;
                        }
                        dummy /= 10;
                    }
                    address_count++;
                }
            }
            else {
                istringstream ss(str);
                int dummy;
                ss >> dummy;
                while(dummy > 0) {
                    int digit = dummy%10;
                    if(counter.find(digit) == counter.end()) {
                        counter[digit] = 1;
                    }
                    else {
                        counter[digit]++;
                    }
                    dummy /= 10;
                }
                address_count++;
            }

        }
        for(int i=0;i<10;i++) {
            if(counter.find(i) == counter.end()) {
                cout << "Make 0 digit " << i << '\n';
            }
            else{
                cout << "Make " << counter[i] << " digit " << i << '\n';
            }
        }
        cout << "In total ";
        int total_count = 0;
        for(auto i: counter) {
            total_count += i.second;
        }
        if(total_count == 1) {
            cout << "1 digit\n";
        }
        else {
            cout << total_count << " digits\n";
        }
        counter.clear();
        address_count = 0;
    }
        
    return 0;
}