//http://codeforces.com/problemset/problem/344/A
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n, a, b, count = 0;
	cin >> n;
	fr(0,n)
	{
		cin >> a;
		if(b != a) {++count;}
		b = a;
	}
	cout << max(count,1) << endl; 
	return 0;
}