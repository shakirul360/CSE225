#include <iostream>
#include "Sorted_List_arr.cpp"
//#include "Timestamp.h"

void print_list(Sorted_List_arr<int> lis);
using namespace std;

int main() {

    Sorted_List_arr<int> l;

    l.insert_item(4);
    l.insert_item(5);
    l.insert_item(3);
    l.insert_item(1);
    l.insert_item(2);
    l.insert_item(0);
    print_list(l);
    //cout << l.length_is() << endl;

    l.delete_item(2);
    bool flag;
    int n = 3;
    l.retrieve_item(n,flag);

    if (flag){
       cout << "item found" << endl;
    } else {
       cout << "item not found" << endl;
    }

    print_list(l);

    cout << "Hello world!" << endl;
    return 0;
}



void print_list(Sorted_List_arr<int> lis){
    int temp;

    for (int i = 0; i < lis.length_is(); i++){
        lis.get_next_item(temp);
        cout << temp << "\t";
    }
    cout << endl;
    lis.reset_list();
}

