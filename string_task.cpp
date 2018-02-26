//http://codeforces.com/problemset/problem/118/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'A' ||
		   s[i] == 'a' ||
		   s[i] == 'E' ||
		   s[i] == 'e' ||
		   s[i] == 'I' ||
		   s[i] == 'i' ||
		   s[i] == 'O' ||
		   s[i] == 'o' ||
		   s[i] == 'U' ||
		   s[i] == 'u' ||
		   s[i] == 'Y' ||
		   s[i] == 'y')
		{
			s.erase(i,1);
			--i;
			
		} else
		{
			s[i] = tolower(s[i]);
			s.insert(i,".",1);
			++i;
		}	
	}
	cout << s << endl;
	return 0;
}