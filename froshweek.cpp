#include <bits/stdc++.h>
using namespace std;

long long count_swaps(int L, int R, vector<int>& V, vector<int>& temp) {
    // if only one element, no swaps needed
    if (L == R) return 0;

    // split array into left and right subarray
    // recurse into each subarray
    int M = (L + R) / 2;
    long long swaps = 0;
    swaps += count_swaps(L, M, V, temp);
    swaps += count_swaps(M + 1, R, V, temp);

    // sort by choosing the minimum of both subarrays
    int index1 = L, index2 = M + 1, index3 = 0;
    while (index1 <= M && index2 <= R) {
        if (V[index1] <= V[index2]) {
            temp[index3++] = V[index1++];
        } else {
            // add number of swaps equal to number of elements remaining in left subarray
            // Hint: you need to modify this part to solve both parts of your assignment
            swaps += M - index1 + 1;
            temp[index3++] = V[index2++];
        }
    }

    // add any remaining elements in left subarray
    while (index1 <= M)
        temp[index3++] = V[index1++];

    // add any remaining elements in right subarray
    while (index2 <= R)
        temp[index3++] = V[index2++];

    // transfer elements back into original array
    memcpy(V.data() + L, temp.data(), index3 * sizeof(int));
    return swaps;
}

int main(){
    int N;
    cin >> N;
    vector<int> V(N), temp(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }
    printf("%lld\n", count_swaps(0, N - 1, V, temp));
	return 0;
}
