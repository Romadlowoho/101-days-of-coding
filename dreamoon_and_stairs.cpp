//http://codeforces.com/problemset/problem/476/A
#include <iostream>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n,m;
	cin >> n >> m;
	int minCoins = n%2 + n/2;
	int maxCoins = n;
	int range = maxCoins - minCoins;
	if (n < m) {cout << -1; return 0;}
	if (n == m) {cout << n; return 0;}
	fr(0,range)
	{
		if (minCoins%m == 0)
		{
			cout << minCoins; return 0;
		} else
		{
			++minCoins;
		}
	}
}
