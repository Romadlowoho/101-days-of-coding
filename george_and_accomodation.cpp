//http://codeforces.com/problemset/problem/467/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n, q, p, counter = 0;
	cin >> n;
	fr(0,n)
	{
		cin >> p >> q;
		if (q-p >= 2) {++counter;}
	}
	cout << counter;
}