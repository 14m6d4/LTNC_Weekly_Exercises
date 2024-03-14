#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j <= n - i) cout << " ";
            else cout << "#";
        }
        cout << endl;
    } 
}