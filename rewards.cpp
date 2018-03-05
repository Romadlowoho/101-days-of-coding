//http://codeforces.com/problemset/problem/448/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int a1,a2,a3,b1,b2,b3,n,shlvs;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	int sumA = a1+a2+a3, sumB = b1+b2+b3;
	if((sumA > 0) && (sumB > 0) && n < 2) {cout << "NO"; return 0;}
	if(sumA+sumB == 0) {cout << "YES"; return 0;}
	shlvs = sumA/5 + sumB/10;
	if(sumA%5 != 0) {++shlvs;}
	if(sumB%10 != 0) {++shlvs;}
	if(shlvs <= n) {cout << "YES"; return 0;}
	else cout << "NO";
	return 0;
}
