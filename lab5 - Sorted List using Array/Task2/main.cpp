#include <iostream>
#include "Sorted_List_arr.cpp"
#include "Timestamp.h"

using namespace std;

void print_list(Sorted_List_arr<Timestamp> lis);
int main() {

    Timestamp t1(15, 34, 23);
    Timestamp t2(13, 13, 02);
    Timestamp t3(43, 45, 12);
    Timestamp t4(25, 36, 17);
    Timestamp t5(52, 02, 20);


    Sorted_List_arr<Timestamp> lis;
    lis.insert_item(t1);
    lis.insert_item(t2);
    lis.insert_item(t3);
    lis.insert_item(t4);
    lis.insert_item(t5);


    print_list(lis);
    lis.delete_item(t4);
    print_list(lis);

    cout << "Hello world!" << endl;
    return 0;
}

void print_list(Sorted_List_arr<Timestamp> lis){
    Timestamp temp;

    for (int i = 0; i < lis.length_is(); i++){
        lis.get_next_item(temp);
        temp.print();
    }
    cout << endl;
    lis.reset_list();
}
