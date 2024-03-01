#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[1000010];
signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    for (int i = n; i >= 1; --i) cout << arr[i] << " ";
}
