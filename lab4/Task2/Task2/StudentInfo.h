#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <iostream>

using namespace std;

class StudentInfo
{
    public:
        StudentInfo();
        StudentInfo(int id);
        StudentInfo(int id, string Name, double gpa);
        int get_id();
        double get_gpa();
        string get_name();
        void set_id(int id);
        void set_gpa(double gpa);
        void set_name(string name);
        void print_student();

    private:
        int id;
        double gpa;
        string name;
};

#endif // STUDENTINFO_H
