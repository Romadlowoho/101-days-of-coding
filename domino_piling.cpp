//http://codeforces.com/problemset/problem/50/A
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n,m;
	cin >> m >> n;
	int x = floor((double) n/2);
	int y = floor((double) m/2);
	int ans = x*m;
	if(n % 2 != 0)
	{
	cout << ans + y;
	} else cout << ans;
}