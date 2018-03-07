// 4 3 2 1 4 1 3 1 2 4 1 2 3 4 

// 1 2 3 4
// 4 3 3 4 14

// 5 4 3 2 1 5 1 4 1 3 1 2 5 1 2 4 1 2 3 5 1 2 3 4 5

// 1 2 3 4 5 
// 7 5 4 4 5 25

// 6 5 4 3 2 1 6 1 5 1 4 1 3 1 2 6 1 2 5 1 2 4 1 2 3 6 1 2 3 5 1 2 3 4 6 1 2 3 4 5 6

// 1  2  3  4  5  6 
// 11 8  6  5  5  6 41 

// (n-1)*1 + 1 + (n-2)*2 + 1 + (n-3)*3 + 1 + (n-4)*4 + 1 + (n-5)*5 + 1
// 5 7 7 5 
// 6 9 10 9 6 
// 3 + 1 + 4 + 1 + 3 + 1 + 0 + 1

//http://codeforces.com/problemset/problem/268/B
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int n, sum = 0;
	cin >> n;
	if (n == 1) {cout << 1; return 0;}
	fr(1,n)
	{
		sum += ((n-i)*i + 1);
	}
	cout << sum + 1;
	return 0;
}