//http://codeforces.com/problemset/problem/136/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,a;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		v.push_back(0);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v[a-1] = i+1;
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
}