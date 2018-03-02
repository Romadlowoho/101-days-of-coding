//http://codeforces.com/problemset/problem/230/B
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

bool isPrime(long double k)
{
		if(k == floor(k)) {k = (double) k;} else return 0;
		if (k <= 1) {return false;}
		else if (k <= 3) {return true;}
		else if ((long)k%2 == 0 || (long)k%3 == 0) {return false;}
		int j = 5;
		while (j*j <= k)
		{
			if((long)k % j == 0 || (long)k % (j + 2) == 0) {return false;}
			j += 6;
		}
		return true;
}

int main()
{
	int n;
	long long num;
	cin >> n;
	fr(0,n)
	{
		cin >> num;
		if(num == 4 || num == 9 || num == 25) {cout << "YES\n";}
		else if(num%10 != 1 && num%10 != 9) {cout << "NO\n";}
		else if(isPrime(sqrt(num))) {cout << "YES\n";}
		else cout << "NO\n";
	}
	return 0;
}