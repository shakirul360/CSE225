#include <iostream>
#include "StudentInfo.h"
#include "Unsorted_List.cpp"

using namespace std;

int main(){

    StudentInfo s1(15234,"Jon",2.6),
                s2(13732,"Tyrion",3.9),
                s3(13569,"Sandor",1.2),
                s4(15467,"Ramsey2",3.1),
                s5(16285,"Arya",3.1);

    Unsorted_List<StudentInfo> ut;
    ut.insert_item(s1);
    ut.insert_item(s2);
    ut.insert_item(s3);
    ut.insert_item(s4);
    ut.insert_item(s5);
    ut.print_list();


    ut.delete_item(15467);
    ut.print_list();

    bool flag = false;

    StudentInfo s6(13569);
    ut.retrieve_item(s6, flag);
    if (flag == true){
        cout << "Item is found" << endl;
        s6.print_student();
    }
    cout << endl;

    ut.print_list();


    cout << "Hello world!" << endl;
    return 0;
}
