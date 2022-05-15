#include <iostream>
#include "unsortedtype.h"
#include "sortedtype.h"

using namespace std;

int main() {

//    int a;
//    int b = 2;
//    bool flag;
//    UnsortedType<int> uns;
//    uns.insert_item(1);
//    uns.insert_item(2);
//    uns.get_next_item(a);
//    cout << a << endl;
//
//    uns.delete_item(4);
//    uns.retrieve_item(a, flag);
//    cout << a << " " <<  flag << endl;

    //SortedType Testing
    int item = 1;
    bool flag;
    SortedType<int> arr;
    arr.InsertItem(1);
    arr.InsertItem(2);
    arr.InsertItem(3);
    arr.InsertItem(4);
    arr.InsertItem(5);
    arr.RetrieveItem(item, flag, 0, arr.LengthIs());
    cout << arr.LengthIs() << endl;
    cout << flag << endl;
    arr.DeleteItem(1);
    arr.RetrieveItem(item, flag, 0, arr.LengthIs());
    cout << arr.LengthIs() << endl;
    cout << flag << endl;


    cout << "Hello world!" << endl;
    return 0;
}
