//http://codeforces.com/problemset/problem/617/A
#include <iostream>

using namespace std;

int main()
{
	int n,k = 0;
	cin >> n;
	for(int i = 1; i < 6; i++)
	{
		if(n > 0)
		{
			int l = n/(6-i);
			k += l;
			n -= (6-i)*l;
		}
	}
	cout << k << "\n";
	return 0;
}