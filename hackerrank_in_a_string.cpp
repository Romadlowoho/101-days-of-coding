//https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    string input;
    string hr = "hackerrank";
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        int count = 0;
        int hrIndx = 0;
        for (int j = 0; j < input.size(); j++)
        {
            if (input[j] == hr[hrIndx])
            {
                ++count;
                ++hrIndx;
                if (count == 10)
                {
                    cout << "YES\n"; 
                    break; 
                }
            }
        }
        if (count != 10) cout << "NO\n";
    }
    
    return 0;
}