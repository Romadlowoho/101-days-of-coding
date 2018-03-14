//http://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define frr(a, n) for (int i = a; i <= n; ++i)
#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	string a, b;
	cin >> a >> b;
	int s1 = 0, s2 = 0;
	int len = a.size();
	fr(0,len)
	{
		s1 += tolower(a[i]);
		s2 += tolower(b[i]);
		if(s1 < s2) {cout << -1; return 0;}
		else if(s1 > s2) {cout << 1; return 0;}
	}
	cout << 0 << endl;
	return 0;
}