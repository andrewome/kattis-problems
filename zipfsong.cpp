#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int quality, first_song, num, num_songs, num_rank;
    int multiplier = 1;
    priority_queue<tuple<long long int, int, string>> pq;
    string song;
    
    cin >> num_songs;
    cin >> num_rank;
    for(int i=0;i<num_songs;i++) {
        cin >> num;
        cin >> song;
        quality = num * multiplier++;
        pq.push(make_tuple(quality, -i, song));
    }
    for(int i=0;i<num_rank;i++) {
        cout << get<2>(pq.top()) << endl;
        pq.pop();
    }
    return 0;
}
