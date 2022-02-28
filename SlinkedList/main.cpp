#include <iostream>
#include <SLinkedList.h>

using namespace std;

int main() {

    SLinkedList<int> l;

    l.insert_front(1);
    l.print_list();

    l.insert_middle(1,2);
    l.print_list();

    l.insert_rear(3);
    l.print_list();

    l.delete_front();
    l.print_list();
    l.insert_front(1);
    l.print_list();


    l.insert_front(2);
    l.print_list();
    l.delete_rear();
    l.print_list();

    cout << "Hello world!" << endl;

    return 0;
}
