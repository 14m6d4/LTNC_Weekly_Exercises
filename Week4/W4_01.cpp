#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
int pageCount(int n, int p) {
    if (p % 2 == 0) p++;
    // cout << p;
    if (n % 2 == 0) n++;
    // cout << n;
    int count = 0;
    int middle = (1 + n)/2;
    if (p <= middle) {
        for (int i = 1; i <= p; i += 2) {
            count++;
        }
    }
    else {
        for (int i = p; i <= n; i += 2) {
            count++;
        }
    }
    return count - 1;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int p; cin >> p;
    cout << pageCount (n, p);
}