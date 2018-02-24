//https://www.hackerrank.com/challenges/box-it/problem

#include<bits/stdc++.h>

using namespace std;
class Box
{
    private:
    int l,b,h;
    public:
        Box()
        {
            l = 0; b = 0; h = 0;
        }
    
        Box(int length, int breadth, int height)
        {
            l = length; b = breadth; h = height;
        }
        Box(const Box& B) 
        {
            l = B.l; b = B.b; h = B.h;
        }
    
        int getLength() {return l;}
        int getBreadth() {return b;}
        int getHeight() {return h;}
        long long CalculateVolume() {return (long long) l*b*h;}
        
        bool operator< (Box& B)
        {
            if (l < B.l) return true;
            if (b < B.b && l == B.l) return true; 
            if ((h < B.h && b == B.b) && l == B.l) return true;
            else return false;
        }
        friend ostream& operator<<(ostream& out, const Box& B){ return out << B.l << " " << B.b << " " << B.h; }
};