// https://www.hackerrank.com/challenges/vector-erase/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> vec;
    int n,k,x,a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        vec.push_back(k);
    }
    cin >> x;
    vec.erase(vec.begin()+ x -1);
    cin >> a >> b;
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);
    cout << vec.size() << endl;
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}