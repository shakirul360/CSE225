#include <iostream>
#include "Unsorted_List.h"

using namespace std;

int main() {

    Unsorted_List<int> li;

    li.insert_item(5);
    li.insert_item(7);
    li.insert_item(6);
    li.insert_item(9);
    li.insert_item(1);
    li.print_list();
    cout << "length = " << li.lengthis() << endl;
    int a = 5;
    bool flag = false;
    li.retrieve_item(a, flag);
    cout << flag << endl;

    cout << li.is_full() << endl;
    li.delete_item(5);
    cout << li.is_full() << endl;
    li.delete_item(1);
    li.print_list();
    cout << "Hello world!" << endl;
    return 0;
}
