//https://www.hackerrank.com/challenges/classes-objects/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student 
{
    vector<int> scores;
    public:
        void input()
        {
            for (int i = 0; i < 5; i++)
            {
                int score;
                cin >> score;
                scores.push_back(score);
            }
        }
        int calculateTotalScore()
        {
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum += scores[i];
            }
            return sum;
        }
};