#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
struct SinhVien {
    int age;
    string first_name;
    string last_name;
    int standard;
};
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    SinhVien x;
    cin >> x.age >> x.first_name >> x.last_name >> x.standard;
    cout << x.age  << " " << x.first_name << " " << x.last_name << " " << x.standard;
}