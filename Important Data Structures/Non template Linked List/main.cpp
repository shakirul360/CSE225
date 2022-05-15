#include <iostream>
#include <Linked_List.h>
using namespace std;

int main() {

    Linked_List l;
    l.insert_front(1);
    l.insert_front(2);
    l.insert_front(3);
    l.insert_rear(4);

    //l.check();
   l.print_list();

   l.insert_mid(5,6);
   l.print_list();

   int n;
   l.remove_front(n);
   cout << n << endl;

   l.print_list();

   l.remove_rear(n);
   cout <<n << endl;
   l.print_list();


    cout << "Hello world!" << endl;
    return 0;
}
