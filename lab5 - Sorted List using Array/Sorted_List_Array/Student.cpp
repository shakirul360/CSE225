#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {

}


Student::Student(int id, string name, double quiz, double mid_1, double mid_2, double asn, double fin) {
    this->id = id;
    this->name = name;
    this->quiz = 0.1 * quiz;
    this->mid_1 = 0.2 * mid_1;
    this->mid_2 = 0.2 * mid_2;
    this->asn = 0.2 * asn;
    this->fin = 0.3 * fin;

    this->total = this->quiz + this->mid_1 + this->mid_2 + this->asn + this->fin;
//    cout << this->fin << endl;
//    cout << fin << endl;
    //cout << this->total << endl;
}


void Student::print(){
    cout << this->name << "\t" << this->id << "\t" << this->total << endl;
}

bool operator>(Student a, Student b){
    return (a.total < b.total);
}
