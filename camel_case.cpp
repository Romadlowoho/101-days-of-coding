#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    cin >> input;
    int counter = 1;
    for (int i = 0; i < input.size(); i++) 
    {
        if (isupper(input[i])) counter++;
    }
    cout << counter;
    return 0;
} 