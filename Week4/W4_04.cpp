#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define int long long
const int maxN = 3e5+6;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q; cin >> n >> q;
    vector <vector<int>> vec;
    for (int i = 0; i < n; i++){
        vector <int> v; 
        int m, x;
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> x;
            v.push_back(x);
        }
        vec.push_back(v);
    }
    while(q--) {
            int j, k; cin >> j >> k;
            cout << vec[j][k] << endl;
    }
    return 0;
}

