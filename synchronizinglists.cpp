#include <bits/stdc++.h>
using namespace std; 

int binarySearch(vector<int> arr, int l, int r, int value) {
    int mid = (l + r)/2;
    
    if(arr[mid] == value) {
        return mid;
    }
    
    if(arr[mid] > value) {
        return binarySearch(arr, l, mid-1, value);
    }
    if(arr[mid] < value) {
        return binarySearch(arr, mid+1, r, value);
    }
    
    return -1;
}


int main() {
    int n;
    while(cin >> n) {
        if(n == 0) {
            return 0;
        }
        vector<int> firstList, secondList, firstListSorted, secondListSorted;
        for(int i=0;i<n;i++) {
            int input;
            cin >> input;
            firstList.push_back(input);
            firstListSorted.push_back(input);
        }
        for(int i=0;i<n;i++) {
            int input;
            cin >> input;
            secondList.push_back(input);
            secondListSorted.push_back(input);
        }
        sort(firstListSorted.begin(), firstListSorted.end());
        sort(secondListSorted.begin(), secondListSorted.end());

        for(int i : firstList) {
            int index = binarySearch(firstListSorted, 0, n-1, i);
            cout << secondListSorted[index] << endl;
        }
        cout << endl;
    }
    return 0;
}