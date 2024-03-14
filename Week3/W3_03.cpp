#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string format = s.substr(s.size() - 2);
    string hour = s.substr(0, 2);
    string res = s.substr(0, 8);
    if (format == "PM" && hour != "12") {
        int int_hour = stoi(hour);
        int_hour += 12;
        stringstream ss;
        ss << int_hour;
        res[0] = ss.str()[0];
        res[1] = ss.str()[1];
    }
    else if (format == "AM" && hour == "12") {
        res[0] = '0'; res[1] = '0';
    }
    cout << res;

}