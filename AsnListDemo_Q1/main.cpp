#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    cout << "Assignment Q1" << endl;

    List l;
    cout << "Adding 2 as head - " << endl;
    l.AddAsHead(2);
    cout << "Adding 1 as head - " << endl;
    l.AddAsHead(1);
    cout << "Adding 3 as Tail - " << endl;
    l.AddAsTail(3);
    cout << "Adding 4 as tail - " << endl;
    l.AddAsTail(4);
    cout << "Printing list - ";
    l.Print();

    cout << "initiating another list x.. " << endl;
    List x;
    cout << "Adding 2 as head of list x - " << endl;
    x.AddAsHead(2);
    cout << "Adding 4 as tail of list x - " << endl;
    x.AddAsTail(4);

    cout << "Adding list x to list - " << endl;
    l.AddAll(x);
    cout << "Printing list - " << endl;
    l.Print();
    cout << "Adding 6 as tail of list - " << endl;
    l.AddAsTail(6);
    cout << "Printing list - " << endl;
    l.Print();

    cout << "Finding 3 in list - " << endl;
    Node temp = l.Find(3);
    //cout << l.LengthIs() << endl;

    if (temp.val == 3)
        cout << temp.val  << " val" << endl;
    else
        cout << "Not found!" << endl;

    cout << "reversing list..." << endl;
    l.Reverse();
    cout << "Printing list  -" << endl;
    l.Print();

    cout << "popping head of list - " << endl;
    int p = l.PopHead();
    cout << "popped head value = ";
    cout << p << endl;

    cout << "Adding 3 as head of list - " << endl;
    l.AddAsHead(3);
    cout << "Printing list - " << endl;
    l.Print();
    cout << "Removing first 3 from list - " << endl;
    l.RemoveFirst(3);


    cout << "Printing list - " << endl;
    l.Print();
    cout << "Removing first 3 - " << endl;
    l.RemoveFirst(3);
    cout << "Printing list - " << endl;
    l.Print();
    cout << "Adding 3 as tail of list - " << endl;
    l.AddAsTail(3);
    cout << "Adding 3 as head of list - " << endl;
    l.AddAsHead(3);
    cout << "Printing list - " << endl;
    l.Print();
    cout << "Removing all 3s - " << endl;
    l.RemoveAll(3);
    cout << "Printing list - " << endl;
    l.Print();

    return 0;
}
