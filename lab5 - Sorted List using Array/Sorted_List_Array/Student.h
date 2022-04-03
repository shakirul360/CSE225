#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student
{
    public:
        Student();
        Student(int id, string name, double quiz, double mid_1, double mid_2, double asn, double fin);
        void print();

    private:
        int id;
        string name;
        double quiz;
        double mid_1;
        double mid_2;
        double asn;
        double fin;
        double total;

    friend bool operator>(Student a, Student b);
};

#endif // STUDENT_H
