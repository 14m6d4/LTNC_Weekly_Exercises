#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    string find = "hackerrank";
    while(t--) {
        int count = 0;
        int j = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == find[j]) {
                j++;
                count++;
            }
        }
        if (count == 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}