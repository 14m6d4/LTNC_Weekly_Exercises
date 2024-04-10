#include<bits/stdc++.h>
using namespace std;
int arr1[1010], arr2[1010];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin>> n>> m;
	for(int i = 1; i <= n; i++) cin >> arr1[i];
	for(int i = 1; i <= m; i++) cin >> arr2[i];
	int count = 0;
	for(int x = 1; x <= 100;x++)
	{
		bool flag = 1;
		for(int i = 1; i <= n;i++)
		{
			if(x % arr1[i] != 0) 
			{
				flag = 0;
				break;
			}
		}
		for(int i = 1; i <= m ; i++)
		{
			if(arr2[i] % x != 0) 
			{
				flag = 0;
				break;
			}
		}
		count += flag;
	}
	cout << count << endl;
}