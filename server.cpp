#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_tasks, time_limit, i, N, count=0;
    scanf("%d %d", &num_tasks, &time_limit);
    queue<int> myqueue;
    
    for(i=0;i<num_tasks;i++) {
        if(i != num_tasks-1) {
            scanf("%d ", &N);
        }
        else {
            scanf("%d", &N);
        }
        myqueue.push(N);
    }
    while(!myqueue.empty()) {
        if(time_limit < myqueue.front()) {
            break;
        }
        time_limit -= myqueue.front();
        myqueue.pop();
        count++;
    }
    
    cout << count;
    return 0;
}