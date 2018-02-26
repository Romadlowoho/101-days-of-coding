//http://codeforces.com/problemset/problem/158/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,k,a;
	vector<int> v;
	cin >> n >> k;
	int count = k;
	int zeroIdx = n+1;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if(a == 0 && i == 0) { cout << 0; return 0;}
		if(a == 0) { zeroIdx = i; break;}
		v.push_back(a);
	}
	if (k >= zeroIdx) { cout << zeroIdx; return 0;}
	int myvall = v[k-1];
	while (v[k] >= myvall)
	{
		if (k >= n || k >= zeroIdx) {break;}
		++count; 
		++k;

	}
	cout << count;
	return 0;
}