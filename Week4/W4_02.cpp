#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
int cnt[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int max_frequency = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
        max_frequency = max(max_frequency, cnt[arr[i]]);
    }
    cout << n - max_frequency;
}
aaab