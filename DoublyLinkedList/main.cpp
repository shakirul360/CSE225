#include <iostream>
#include "DoublyLinkedListType.cpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    DoublyLinkedListType<double> list;

    list.addFront(25);
    list.addRear(35);
    list.addItemAfter(35,40);
    list.addItemBefore(35,30);

    cout << list.findItem(75) << endl;

    list.display();
    list.deleteFront();
    list.display();
    list.deleteRear();
    list.display();

    return 0;
}
