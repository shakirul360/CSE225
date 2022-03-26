#include <iostream>
#include "BST.h"

using namespace std;

int main() {

    BST b;


    //cout << b.is_empty();
    b.insert(6);
    b.insert(2);
    b.insert(10);
    b.insert(7);
    b.insert(13);
    b.insert(1);
    b.in_order();
    cout << endl;

    cout << b.length_is() << endl;

    cout << b.retrieve_item(2) << endl;
    b.delete_item(10);
    b.in_order();
    b.post_order();


    cout << "Hello world!" << endl;
    return 0;
}
