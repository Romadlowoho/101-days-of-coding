//https://www.hackerrank.com/challenges/time-conversion/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string time, newtime;
    char a ='A', p = 'P'; 
    string twlv = "12";
    cin >> time;
    if (time[8] == a & time.substr(0,2) != twlv) 
    {
        cout << time.substr(0,8);
    }   else if (time[8] == a & time.substr(0,2) == twlv)
        {
        time.replace(0,2,"00");
        cout << time.substr(0,8);
        }       else if (time[8] == p & time.substr(0,2) != twlv)
                {
                    int twlv_hour = stoi(time.substr(0,2));
                    int twntfr_hour = twlv_hour+12;
                    time.replace(0,2,to_string(twntfr_hour));
                    cout << time.substr(0,8);
                } else 
                  {
                    cout << time.substr(0,8);
                  }
    return 0;
}
