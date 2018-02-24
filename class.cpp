//https://www.hackerrank.com/challenges/c-tutorial-class/problem

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int a)
        {
            age = a;
        }
        int get_age()
        {
            return age;
        }
        void set_first_name(string fn)
        {
            first_name = fn;
        }
        string get_first_name()
        {
            return first_name;
        }
        void set_last_name(string ln)
        {
            last_name = ln;
        }
        string get_last_name()
        {
            return last_name;
        }
        void set_standard(int st)
        {
            standard = st;
        }
        int get_standard()
        {
            return standard;
        }
        string to_string()
        {
            string str = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
            return str;
        }
};