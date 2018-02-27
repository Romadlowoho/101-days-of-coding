//http://codeforces.com/problemset/problem/58/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int counter = 0;
	string hello = "hello";
	for (int i = 0; i < input.size(); i++)
	{
		if(input[i] == hello[counter])
		{
			++counter;
		}
		if(counter > 4)
		{
			cout << "YES"; return 0;
		}

	} cout << "NO";
}
