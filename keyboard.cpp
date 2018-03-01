//http://codeforces.com/problemset/problem/474/A
#include <iostream>
#include <string>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	char m;
	string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", message;
	cin >> m >> message;

	fr(0,message.size())
	{
		if(m == 'R') {cout << keyboard[keyboard.find(message[i]) - 1];}
		else cout << keyboard[keyboard.find(message[i]) + 1];
	}
	return 0;
}