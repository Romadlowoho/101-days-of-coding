//http://codeforces.com/contest/82/problem/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i <= n; ++i)

int getCycle(int num)
{
	int sum = 0, counter = 0;
	while(1)
	{
		sum += 5*pow(2,counter);
		++counter;
		if(sum >= num) {return max(counter - 2,0);}
	}
}


int main()
{
	double n;
	int start = 0, mynum, k;
	cin >> n;
	mynum = getCycle(n);
	fr(0,mynum) {start += 5*pow(2,i);}
	k = pow(2,mynum+1);
	if(n <= 5) {start = 0; k = 1;}
	fr(0,4)
	{
		start += k;
		if(start >= n)
		{
			if(i == 0) {cout << "Sheldon"; return 0;}
			else if(i == 1) {cout << "Leonard"; return 0;}
			else if(i == 2) {cout << "Penny"; return 0;}
			else if(i == 3) {cout << "Rajesh"; return 0;}
			else cout << "Howard"; 
		}
	} 
	return 0;
}