//http://codeforces.com/problemset/problem/200/B
#include <iostream>
using namespace std;

#define fr(a,n) for (int i = a; i < n; ++i)

int main()
{
	int n,a; 
	double sum = 0;
	cin >> n; 
	fr(0,n)
	{
		cin >> a;
		sum += (double) a/100;
	}
	cout << (double) sum/n*100;
	return 0;
}