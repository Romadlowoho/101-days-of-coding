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
    for (int i = 0; i < input.length(); i++) 
    {
        if ((input[i] == input[i+1]) & input.size() == 2) 
        {
            cout << "Empty String";
            break;
        }
        else if(input[i] == input[i+1]) 
        {
            input.replace(i,2,"");
            i=-1;
            continue;
        } 
        else if (i == input.length() - 1) 
        {
            cout << input; 
            break;
    }   }
    return 0;
}