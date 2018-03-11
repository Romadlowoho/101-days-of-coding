//contest prob A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int l, r, a;
	cin >> l >> r >> a;
	if (a == 0) {cout << min(l,r); return 0;}
	int extra = a - abs(l-r);
	if(extra > 0 && extra%2 == 0) {cout << l+r+a; return 0;}
	else if (extra > 0) {cout << (max(l,r) + extra/2)*2; return 0;}
	if(extra < 0) {cout << (min(l,r) + a)*2; return 0;}
	else if(extra == 0) {cout << max(l,r)*2;}
}