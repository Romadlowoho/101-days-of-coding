//http://codeforces.com/problemset/problem/761/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int a,b;
	cin >> a >> b;
	if(a==0 && b==0) {cout << "NO"; return 0;}
	if(min(a,b) == 0 && max(a,b) > 1) {cout << "NO"; return 0;}
	if((abs(a-b) == 2 && min(a,b) == 1) || abs(a-b) > 1) {cout << "NO"; return 0;}
	else {cout << "YES";}
	return 0;
}