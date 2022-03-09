#include <iostream>
#include "Sorted_List_arr.cpp"
#include "Timestamp.h"

using namespace std;

int main() {
//    Sorted_List_arr<int> l;
//    l.insert_item(4);
//    l.insert_item(2);
//    l.insert_item(1);
//    l.insert_item(3);
//    l.insert_item(5);
//    l.insert_item(6);
//
//
//
//    l.print_list();
//
//    l.delete_item(3);
//    l.print_list();
//
////    bool flag;
////    int a = 2;
////    l.retrieve_item(a, flag);
////
////    cout << flag << endl;


    Sorted_List_arr<Timestamp> time;

    Timestamp t1(15, 34, 23);
    Timestamp t2(13, 13, 02);
    Timestamp t3(43, 45, 12);
    Timestamp t4(25, 36, 17);
    Timestamp t5(52, 02, 20);

    time.insert_item(t1);
    time.insert_item(t2);
    time.insert_item(t3);
    time.insert_item(t4);
    time.insert_item(t5);




    cout << "Hello world!" << endl;
    return 0;
}
