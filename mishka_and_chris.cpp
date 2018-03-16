//http://codeforces.com/problemset/problem/703/A
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n, m, c, count = 0;
	cin >> n;
	fr(0,n)
	{
		cin >> m >> c;
		if(m > c) {++count;}
		else if (m < c) {--count;}
	}
	if(count > 0) {cout << "Mishka\n"; return 0;}
	else if(count < 0) {cout << "Chris\n"; return 0;}
	else cout << "Friendship is magic!^^\n";
	return 0;
}