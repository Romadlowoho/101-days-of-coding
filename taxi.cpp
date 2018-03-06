//http://codeforces.com/problemset/problem/158/B
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n, a, ones = 0, twos = 0, threes = 0, fours = 0, count = 0, sum = 0;
	cin >> n;
	if(n == 1) {cout << 1; return 0;}
	fr(0,n)
	{
		cin >> a;
		sum += a;
		if (a == 1) {++ones;}
		else if (a == 2) {++twos;}
		else if (a == 3) {++threes;}
		else ++fours;
	}   
	count += fours;
	if(threes >= ones) // ones will go with threes
	{
		count += threes;
		ones = 0;
		if(twos != 0 && threes != ones) {twos += ones/2;}
		count += (twos/2 + twos%2);
		cout << count;
		return 0;
	}
	else if (threes < ones)
	{
		count += threes;
		ones -= threes;
 		twos += ones/2;
		count += (twos/2 + twos%2);
		if (sum > count*4) {++count;}
		cout << count;
		return 0;
	}
}