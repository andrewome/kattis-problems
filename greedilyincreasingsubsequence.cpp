#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, num_elements, count=0, N, current_max=0;
    queue<int> permutations;
    queue<int> filtered;
    
    cin >> num_elements;
    for(i=0;i<num_elements;i++) {
        if(i == num_elements-1) {
            scanf("%d", &N);
        }
        else {
            scanf("%d ", &N);
        }
        permutations.push(N);
    }
    
    while(!permutations.empty()) {
        if(permutations.front() > current_max) {
            filtered.push(permutations.front());
            current_max = permutations.front();
        }
        permutations.pop();
    }
    cout << filtered.size() << endl;
    while(!filtered.empty()) {
        cout << filtered.front() << " ";
        filtered.pop();
    }
    return 0;
}