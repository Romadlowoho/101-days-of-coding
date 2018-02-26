//http://codeforces.com/problemset/problem/270/A
#include <iostream>
using namespace std;

int main()
{
	int n,a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a >= 180) {cout << "NO\n";}
		if(360%(180-a) == 0)
		{
			cout << "YES\n";
		} else cout << "NO\n";
	}
}