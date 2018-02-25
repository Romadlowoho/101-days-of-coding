//http://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s.size() > 10)
		{
			s = s.front() + to_string(s.size()-2) + s.back();
			cout << s << endl;
		} else cout << s << endl;
	}
}