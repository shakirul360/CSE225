#include "StudentInfo.h"


StudentInfo::StudentInfo(int id, string Name, double gpa){

    this->id = id;
    this->name = Name;
    this->gpa = gpa;

}

StudentInfo::StudentInfo(){

}

StudentInfo::StudentInfo(int id){
    this->id = id;
}

int StudentInfo::get_id(){
    return id;
}
double StudentInfo::get_gpa(){
    return gpa;
}
string StudentInfo::get_name(){
    return name;
}

void StudentInfo::set_id(int id){
    this->id = id;
}

void StudentInfo::set_gpa(double gpa){
    this->gpa = gpa;
}

void StudentInfo::set_name(string name){
    this->name = name;
}

void StudentInfo::print_student(){
    cout << this->id << "\t" << this->name << "\t" << this->gpa << endl;
}

