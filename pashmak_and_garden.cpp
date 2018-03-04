//http://codeforces.com/problemset/problem/459/A
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define fr(a, n) for (int i = a; i < n; ++i)

int main()
{
	int x1,y1,x2,y2,dist;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 == x2) 
	{
		dist = max(abs(x1-x2),abs(y1-y2));
		cout << x1+dist << " " << y1 << " " << x2+dist << " " << y2; return 0;
	} else if(y1 == y2) 
	  {
	  	dist = max(abs(x1-x2),abs(y1-y2));
	  	cout << x1 << " " << y1+dist << " " << x2 << " " << y2+dist; return 0;
	  } else if(abs(x1-x2) == abs(y1-y2)) 
	  {
	  	if((x1 > x2 && y1 > y2) || (x1 < x2 && y1 < y2))
	  	{
	  		cout << max(x1,x2) << " " << min(y1,y2) << " " << min(x1,x2) << " " << max(y1,y2); return 0;
	    } else 
	      {
	      	cout << max(x1,x2) << " " << max(y1,y2) << " " << min(x1,x2) << " " << min(y1,y2); return 0;
	      }
	  } else cout << -1;
}