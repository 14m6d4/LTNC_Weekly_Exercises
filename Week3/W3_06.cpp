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
    string s; cin >> s;
    int k; cin >> k; k = k % 26;
    for (int i = 0; i < n; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] += k;
            if (s[i] > 'z') {
                s[i] -= 26;
            }
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += k;
            if (s[i] > 'Z') {
                s[i] -= 26;
            }
        }
    }
    cout << s << endl;
    return 0;
}