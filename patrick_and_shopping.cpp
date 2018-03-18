//http://codeforces.com/problemset/problem/599/A
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int a, b, c, sum;
	cin >> a >> b >> c;
	sum = a + b;
	if(a + c < sum) {sum = a + c;}
	else if(b + c < sum) {sum = b + c;}
	if(a + b + c < sum*2) {sum = a + b + c; cout << sum; return 0;}
	cout << sum*2;
	return 0;
}