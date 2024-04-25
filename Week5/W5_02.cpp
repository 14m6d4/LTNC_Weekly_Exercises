#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <int> v; int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }  
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}