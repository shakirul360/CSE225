#include <iostream>
#include "Linked_List.h"

using namespace std;

int main() {

    Linked_List l;

    l.insert_at_first(4);
    l.insert_at_first(2);
    l.insert_at_first(3);
    l.insert_at_last(5);
    l.insert_at_first(1);
    l.print_list();

    cout << l.average() << endl;
    cout << l.minimum() << endl;
//
//    l.delete_last();
//    l.print_list();
//    l.insert_at_last(0);
//
//    l.delete_first();
//    l.print_list();
//
//    l.insert_at_first(3);
//    l.print_list();
    cout << "Hello world!" << endl;
    return 0;
}
