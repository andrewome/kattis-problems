#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> bus_numbers;
    int num_buses, bus_number;
    cin >> num_buses;
    for(int i=0;i<num_buses;i++) {
        cin >> bus_number;
        bus_numbers.push_back(bus_number);
    }
    sort(bus_numbers.begin(), bus_numbers.end());
    
    int begin, end;
    for(int i=0;i<num_buses;i++) {
        if(bus_numbers[i] == bus_numbers[i+1] - 1 && i+1 < num_buses) {
            begin = i;
            i++;
            while(bus_numbers[i] == bus_numbers[i+1] - 1 && i+1 < num_buses) {
                i++;
            }
            end = i;
            if(end - begin > 1) {
                cout << bus_numbers[begin] << "-" << bus_numbers[end] << " ";
            }
            else {
                cout << bus_numbers[begin] << " " << bus_numbers[end] << " ";
            }
            continue;
        }
        cout << bus_numbers[i] << " ";
    }
    return 0;
}