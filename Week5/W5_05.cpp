#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin >> q;
    set<int> s;
    while(q--) {
        int type, x;
        cin >> type >> x;
        if (type == 1) s.insert(x);
        else if (type == 2) s.erase(x);
        else if (type == 3) {
            if (s.count(x) == 0) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}
