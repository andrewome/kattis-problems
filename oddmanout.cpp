#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> guests;
    int num_TC, num_guests, case_number = 0, guest_number, alone;
    cin >> num_TC;
    for(int i=0;i<num_TC;i++) {
        cin >> num_guests;
        for(int j=0;j<num_guests;j++) {
            cin >> guest_number;
            // Check if guest number is inside guest list
            auto it = guests.find(guest_number);
            // If it is inside, increment by 1.
            if(it != guests.end()) {
                it->second += 1;
            }
            // Else it is not inside, we insert it in
            else {
                guests.insert(make_pair(guest_number, 1));
            }
        }
        for(auto it = guests.begin(); it != guests.end();it++) {
            if(it->second != 2) {
                alone = it->first;
            }
        }
        case_number++;
        cout << "Case #" << case_number << ": " << alone << endl;
        guests.clear();
    }
    return 0;
}