//http://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;

int main()
{
	int n,a,b,c,counter = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a+b+c > 1) ++counter;  
	}
	printf("%d", counter);
}