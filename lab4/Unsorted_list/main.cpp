#include <iostream>
#include "Unsorted_List.h"
#include "StudentInfo.h"

using namespace std;

int main() {
    //Unsorted_List<StudentInfo> lis;
    StudentInfo s1(15234, "Jon", 2.6);
    StudentInfo s2(13732, "Tyrion", 3.9);
    StudentInfo s3(13569, "Sandor", 1.2);
    StudentInfo s4(15467, "Ramsey", 3.1);
    StudentInfo s5(16185, "Arya", 3.1);

    Unsorted_List<StudentInfo> l;



    cout << "Hello world!" << endl;
    return 0;
}

//    Unsorted_List<int> li;
//
//    li.insert_item(5);
//    li.insert_item(7);
//    li.insert_item(6);
//    li.insert_item(9);
//    li.insert_item(1);
//    li.print_list();
//    cout << "length = " << li.lengthis() << endl;
//    int a = 5;
//    bool flag = false;
//    li.retrieve_item(a, flag);
//    cout << flag << endl;
//
//    cout << li.is_full() << endl;
//    li.delete_item(5);
//    cout << li.is_full() << endl;
//    li.delete_item(1);
//    li.print_list();
