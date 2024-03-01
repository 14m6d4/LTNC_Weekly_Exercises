#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
bool kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 <= v2) {
        return false;
    }
    else {
        int remainder = x2 - x1;
        int step = v1 - v2;
        if (remainder % step == 0) {
            return true;
        }
        else {
            return false;
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (kangaroo(x1, v1, x2, v2)) cout << "YES";
    else cout << "NO";
}