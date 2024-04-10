#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];

bool isPalindrome(string s, int index){
    s.erase(index, 1);
    string t = s;
    reverse(t.begin(), t.end());
    if (t == s) return true;
    else return false;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        bool flag = true;
        for (int i = 0; i < s.length()/2; i++) {
            if (s[i] != s[s.length() - i - 1]) {
                if (isPalindrome(s, i)) {
                    flag = false;
                    cout << i << endl;
                }
                else if (isPalindrome(s, s.length() - i - 1)) {
                    flag = false;
                    cout << s.length() - i - 1 << endl;
                }
            break;
            }
        }
        if (flag) cout << -1 << endl;
    }
    
}