#include <iostream>
#include "StudentInfo.h"
#include "Unsorted_List.cpp"
using namespace std;

void print_list(Unsorted_List<StudentInfo> l);
int main(){

    Unsorted_List<StudentInfo> l;

    StudentInfo s1(15234, "Jon", 2.6);
    StudentInfo s2(13732, "Tyrion", 3.9);
    StudentInfo s3(13569, "Sandor", 1.2);
    StudentInfo s4(15467, "Ramsey", 3.1);
    StudentInfo s5(16285, "Arya", 3.1);

    l.insert_item(s1);
    l.insert_item(s2);
    l.insert_item(s3);
    l.insert_item(s4);
    l.insert_item(s5);

    l.delete_item(s4);

    StudentInfo s6;
    bool flag = false;

    l.retrieve_item(s3, flag);
    cout << flag << endl;

    print_list(l);

    cout << "Hello world!" << endl;
    return 0;
}

void print_list(Unsorted_List<StudentInfo> l){

    StudentInfo temp;
    for(int i = 0 ; i< l.length_is(); i++)
    {
        l.get_next_item(temp);
        temp.print();
    }
    l.reset_list();
}
