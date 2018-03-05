//http://codeforces.com/contest/839/problem/A
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n,k, CandiesReserve = 0;
	cin >> n >> k;
	if(n*8 < k) {cout << -1; return 0;}
	fr(0,n)
	{
		int a;
		cin >> a;
		if(a < 8 && CandiesReserve != 0)
		{
			k -= (a + min(CandiesReserve, abs(8-a)));
			CandiesReserve -= min(CandiesReserve, abs(8-a));
			if(k <= 0) {cout << i+1; return 0;}
		} else
		  {
			  k -= min(a,8);
			  CandiesReserve += max(0,a-8);
			  if(k <= 0) {cout << i+1; return 0;}
		  }
	}
	cout << -1;
	return 0;
}