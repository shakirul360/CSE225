#include "StudentInfo.h"
using namespace std;

StudentInfo::StudentInfo(int ID, string Name, double GPA) {

    this->id = ID;
    this->name = Name;
    this->gpa = GPA;

}

StudentInfo::StudentInfo(){


}

void StudentInfo::print(){
    cout << this->id << "\t" << this->name << "\t" << this->gpa << endl;
}

bool operator==(StudentInfo a, StudentInfo b){
    return (a.id == b.id && a.gpa == b.gpa && a.name == b.name);
}
