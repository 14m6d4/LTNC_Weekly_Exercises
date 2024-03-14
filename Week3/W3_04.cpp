#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) count++;
    }
    if (count == 0) cout << 1;
    else cout << count + 1;
}