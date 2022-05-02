#include <iostream>
#include "List.h"

using namespace std;

int main(){

//    cout << "Assignment Q1" << endl;
//
//    List l;
//    l.AddAsHead(2);
//    l.AddAsHead(1);
//    l.AddAsTail(3);
//    l.AddAsTail(4);
//    l.Print();
//
//    List x;
//    x.AddAsHead(2);
//    x.AddAsTail(4);
//
//    l.AddAll(x);
//    l.Print();
//    l.AddAsTail(6);
//    l.Print();
//
//    Node temp = l.Find(3);
//    cout << l.LengthIs() << endl;
//    cout << temp.val  << " val" << endl;
//
//    l.Reverse();
//    l.Print();
//
//    int p = l.PopHead();
//    cout << p << endl;
//    l.AddAsHead(3);
//    l.Print();
//    l.RemoveFirst(3);
//
//    l.Print();
//    l.RemoveFirst(3);
//    l.Print();
//    l.AddAsTail(3);
//    l.Print();
//    l.RemoveAll(3);
//    l.Print();


    cout << "Assignment Q2" << endl;
    cout << "printing list - " << endl;
    List l;
    //l.Print_tail();
    cout << "adding 4 at head" << endl;
    l.AddAsHeadV2(4);
    //l.Print_tail();
    cout << "adding 3 at head" << endl;
    l.AddAsHeadV2(3);
    //l.Print();
    //l.Print_tail();
    cout << "adding 6 at tail" << endl;
    l.AddAsTailV2(6);
    //l.Print_tail();
    cout << "printing list -" << endl;
    l.Print();

    cout << "Finding 8 in list: " << endl;
    Node z;
    z = l.Find(8);

    if (z.val == -222222222)
        cout << "Not found!" << endl;
    else
        cout << " z = " << z.val << endl;

    cout << "Reversing list: " << endl;
    l.ReverseV2();
    cout << "printing list -" << endl;
    l.Print();
    //l.Print_tail();
    cout << "adding 6 at tail" << endl;
    l.AddAsTailV2(6);
    cout << "printing list -" << endl;
    l.Print();
    //l.Print_tail();
    cout << "Removing all 6 from list -" << endl;
    l.RemoveAll(6);
    cout << "printing list -" << endl;
    l.Print();
    cout << "Adding 7 at tail" << endl;
    l.AddAsTailV2(7);
    l.Print();
    cout << "Printing tail - " << endl;
    l.Print_tail();
    cout << "adding 1 at head " << endl;
    l.AddAsHeadV2(1);
    cout << "adding 10 at tail" << endl;
    l.AddAsTailV2(10);
    cout << "printing list -" << endl;
    l.Print();
    cout << "printing tail - "  << endl;
    l.Print_tail();

    cout << "creating another list x" << endl;
    List x;
    cout << "adding 2 on list x's head..." << endl;
    x.AddAsHead(2);

    cout << "adding list x with list l" << endl;
    l.AddAllV2(x);
    cout << "printing list -" << endl;
    l.Print();
    cout << "printing tail - " << endl;
    l.Print_tail();

    cout << "adding 13 to list l's tail - " << endl;
    l.AddAsTailV2(13);
    cout << "printing list -" << endl;
    l.Print();






    cout << "Hello world!" << endl;
    return 0;
}
