#include <iostream>
#include "List.h"

using namespace std;

int main(){

    List l;
    l.AddAsHead(2);
    l.AddAsHead(1);
    l.AddAsTail(3);
    l.AddAsTail(4);
    l.Print();

    List x;
    x.AddAsHead(2);
    x.AddAsTail(4);

    l.AddAll(x);
    l.Print();
    l.AddAsTail(6);
    l.Print();
//
////    Node temp = l.Find(3);
////    cout << l.LengthIs() << endl;
////    cout << temp.val  << " val" << endl;
//
//    l.Reverse();
//    l.Print();
//
////    int p = l.PopHead();
////    cout << p << endl;
//    l.AddAsHead(3);
//    l.Print();
////    l.RemoveFirst(3);
////
////    l.Print();
////    l.RemoveFirst(3);
////    l.Print();
//    l.AddAsTail(3);
//    l.Print();
//    l.RemoveAll(3);
//    l.Print();
    cout << "Hello world!" << endl;
    return 0;
}
