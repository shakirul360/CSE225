#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <iostream>
using namespace std;

class StudentInfo
{
    public:
        StudentInfo(int id, double gpa, string Name);

    private:
        int id;
        double gpa;
        string name;
};

#endif // STUDENTINFO_H
