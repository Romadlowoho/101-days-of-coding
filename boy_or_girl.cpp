//http://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	string str;
	cin >> str;
	int n = str.size();
	vector<char> vec;
	fr(0,n)
	{
		if(std::find(vec.begin(), vec.end(), str[i]) == vec.end())
		{
			vec.push_back(str[i]);
		}
	}
	if(vec.size()%2 == 0) {cout << "CHAT WITH HER!\n"; return 0;}
	else cout << "IGNORE HIM!\n";
	return 0;
}