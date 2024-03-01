#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];

int divisibleSumPairs(int n, int k, int arr[]) {
    int count = 0;
    for(int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            if ((arr[i] + arr[j]) % k == 0) {
                // cout << i << " " << j << endl;
                count++;
            }
        }
    }
    return count;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    cout << divisibleSumPairs(n, k, arr);
    
}
