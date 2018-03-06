//http://codeforces.com/problemset/problem/546/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int k,n,w;
	cin >> k >> n >> w;
	int cost = k*(w*(w+1)/2);
	if(n<cost) {cout << cost-n;}
	else cout << 0;
	return 0;
}