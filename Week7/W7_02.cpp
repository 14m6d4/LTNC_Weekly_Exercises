#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
void generateStrings(char arr[], int n, int length, string str = "") {
    if (length == 0) {
        cout << str << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        string newStr = str + arr[i];
        generateStrings(arr, n, length - 1, newStr);
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    char arr[] = {'a', 'b', 'c', 'd'};
    int n = sizeof(arr) / sizeof(arr[0]);
    int length = 3;
    generateStrings(arr, n, length);
    return 0;
    
}