#include <iostream>
#include "Sorted_List_arr.cpp"
#include "Student.h"
//#include "Timestamp.h"

void print_list(Sorted_List_arr<Student> lis);
using namespace std;

int main() {

    Sorted_List_arr<Student> students;

    Student s1(1, "A", 100, 100, 100, 100, 100);
    Student s2(2, "B", 100, 90, 50, 50, 50);
    Student s3(3, "C", 100, 90, 50, 50, 90);
    Student s4(4, "D", 100, 90, 50, 50, 100);

    students.insert_item(s1);
    students.insert_item(s2);
    students.insert_item(s3);
    students.insert_item(s4);



    print_list(students);

    cout << "Hello world!" << endl;
    return 0;
}



void print_list(Sorted_List_arr<Student> lis){
    Student temp;

    for (int i = 0; i < lis.length_is(); i++){
        lis.get_next_item(temp);
        temp.print();
    }
    cout << endl;
    lis.reset_list();
}

