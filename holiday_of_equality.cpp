//http://codeforces.com/problemset/problem/758/A
#include <iostream>
#include <algorithm>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n,a,max = 0,sum = 0;
	cin >> n;
	if (n == 1) {cout << 0; return 0;}
	fr(0,n)
	{
		cin >> a;
		if(i == 0) {max = a; continue;}
		if(a >= max)
		{
			int ind = std::max(i,1);
			sum += (a - max)*ind;
			max = a;
			
		} else
		{
			sum += max - a;
		}
	}
	cout << sum << endl;
	return 0;
}