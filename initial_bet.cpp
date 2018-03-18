//http://codeforces.com/problemset/problem/478/A
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n,sum = 0;
	fr(0,5)
	{
		cin >> n; 
		sum += n;
	}
	(sum%5 == 0 && sum != 0) ? cout << sum/5 : cout << -1;
	return 0;
}