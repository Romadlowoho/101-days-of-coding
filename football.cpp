//http://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i <= n; ++i)

int main()
{
	int size, count = 0;
	string s;
	cin >> s;
	size = s.size();
	fr(1,size)
	{
		if(s[i] == s[i-1])
		{
			++count;
		} else count = 0;
		if (count == 6) {cout << "YES"; return 0;}
	}
	cout << "NO" << endl;
	return 0;
}