//https://www.hackerrank.com/challenges/mars-exploration/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    string sos;
    cin >> input; 
    int n = input.size()/3;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sos += "SOS";
    }
    
    for (int k = 0; k < input.size(); k++)
    {
        if(input[k] != sos[k])
        {
            ++count;
        }
    }
    cout << count;
    return 0;
}