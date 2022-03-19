#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <iostream>

using namespace std;

class StudentInfo
{
    public:
        StudentInfo(int id, string Name, double gpa);
        StudentInfo();
        void print();


    private:
        int id;
        double gpa;
        string name;

    friend bool operator==(StudentInfo a, StudentInfo b);
};

#endif // STUDENTINFO_H
