//http:codeforces.com/problemset/problem/263/A
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int a, steps;
	int arr[5][5];
	int pos[2];
	fr(1,6)
	{
		for(int j = 1; j < 6; ++j)
		{
			cin >> a;
			if (a == 1) {pos[0] = i; pos[1] = j;}
		}
	}
	steps = (abs(3-pos[0])+abs(3-pos[1]));
	cout << steps << endl;
	return 0;
}