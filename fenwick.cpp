#include <bits/stdc++.h>
using namespace std;

template <class T>  
class FenwickTree {
    private:
	vector<T> v;
	int n;

    public:
	FenwickTree(int n) { 
        this->n = n;
        v.assign(n + 1, 0);
    }

	T query(int l, int r) {
        return query(r) - query(l - 1);
    }

	T query(int r) {
		T sum = 0;
		while (r > 0) {
            sum += v[r];
            r -= (r & (-r));
        }
		return sum;
	}

	void update(int i, T k) {
		while (i < n + 1) {
            v[i] += k;
            i += (i & (-i));
        }
	}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    FenwickTree<long long int> ft(n);
    for(int i=0;i<q;i++) {
        char op;    
        long long int value;
        int index;
        cin >> op;
        if(op == '+') {
            cin >> index >> value;
            ft.update(index+1, value);
        }
        if(op == '?') {
            cin >> index;
            if(index == 0) cout << "0\n";
            else cout << ft.query(index) << '\n';
        }
    }
}