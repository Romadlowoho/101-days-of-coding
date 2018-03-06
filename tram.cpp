//http://codeforces.com/problemset/problem/116/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n, a, b, psngrs = 0, cap = 0;
	cin >> n;
	fr(0,n)
	{
		cin >> a >> b;
		psngrs += (b-a);
		if (psngrs > cap) {cap = psngrs;}
	}
	cout << cap;
}