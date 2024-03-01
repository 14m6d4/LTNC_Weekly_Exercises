#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if (n == 1) cout << "one";
    if (n == 2) cout << "two";
    if (n == 3) cout << "three";
    if (n == 4) cout << "four";
    if (n == 5) cout << "five";
    if (n == 6) cout << "six";
    if (n == 7) cout << "seven";
    if (n == 8) cout << "eight";
    if (n == 9) cout << "nine";
    if (n > 9) cout << "Greater than 9";
}