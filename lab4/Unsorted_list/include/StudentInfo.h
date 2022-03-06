#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <iostream>
using namespace std;

class StudentInfo
{
    public:
        StudentInfo(int id, string Name, double gpa);

    private:
        int id;
        double gpa;
        string name;
};

#endif // STUDENTINFO_H
