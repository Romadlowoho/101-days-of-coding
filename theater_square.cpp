//http://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n,m,a;
	cin >> n >> m >> a;
	long long counter = ceil((double)n/a);
	counter *= ceil((double)m/a);
	cout << counter;
}