#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int index = lower_bound(v.begin(), v.end(), x) - v.begin();
        if (v[index] == x) cout << "Yes";
        else {
            cout << "No";
        }
        cout << " " << index + 1 << endl;
    }
}