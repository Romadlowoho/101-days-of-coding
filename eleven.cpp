//http://codeforces.com/problemset/problem/918/A
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

#define fr(a, n) for (int i = a; i <= n; ++i)

vector<int> fib(vector<int> vec, int m)
{
	vec.push_back(0);
	vec.push_back(1);

	for(int i = 2; i <= m; i++)
	{
		vec.push_back(vec[i-1] + vec[i-2]);
		if(vec[i] > m) break;
	} 
	return vec;
}

int main()
{
	int n;
	cin >> n;
	if(n <= 3)
	{
		fr(1,n){cout << "O";}
		return 0;
	}
	vector<int> arr;
	arr = fib(arr,n);
	int sz = arr.size();
	fr(1,n)
	{
		if(find(arr.begin(),arr.end(),i) != arr.end())
		{
			cout << 'O';
		} else cout << 'o';
	}
	return 0;
}