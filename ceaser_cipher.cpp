#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int k;
    string input;
    cin >> n;
    cin >> input;
    cin >> k;
    k = k%26;
    for (int i = 0; i < n; i++)
    {
        if(isalpha(input[i]) && input[i] + k > 122)
        {
            input[i] = ((input[i] + k)%122 + 96);
        } else if (isupper(input[i]) && input[i] + k > 90) 
        {
            input[i] = ((input[i] + k)%90 + 64);
        } else if(isupper(input[i]) && input[i] + k < 91)
        {
            input[i] = input[i] + k;
        } else if(isalpha(input[i]) && input[i] + k < 123) 
        {
            input[i] = input[i] + k;
        } else continue;
    }
    cout << input;
    return 0;
}