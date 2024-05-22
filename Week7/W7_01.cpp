#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5+6;
int arr[maxN];
int binarySearch(int x,int l,int r)
{
	if(l == r) return l;
	int mid = (l+r)/2;
	if(x <= a[mid]) return binarySearch(x,l,mid);
	else return binarySearch(x,mid+1,r);
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	sort(a+1,a+1+n);
	cout<< binarySearch(x,1,n);
}
