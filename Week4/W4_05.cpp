#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr1[maxN];
int arr2[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int sum1 = 0; int sum2 = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for (int i = 1; i <= n + 1; i++) {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    cout << sum2 - sum1 << endl;
}