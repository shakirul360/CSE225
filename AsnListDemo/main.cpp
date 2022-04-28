#include <iostream>
#include "List.h"

using namespace std;

int main(){

    cout << "Assignment Q1" << endl;

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

    Node temp = l.Find(3);
    cout << l.LengthIs() << endl;
    cout << temp.val  << " val" << endl;

    l.Reverse();
    l.Print();

    int p = l.PopHead();
    cout << p << endl;
    l.AddAsHead(3);
    l.Print();
    l.RemoveFirst(3);

    l.Print();
    l.RemoveFirst(3);
    l.Print();
    l.AddAsTail(3);
    l.Print();
    l.RemoveAll(3);
    l.Print();


//    cout << "Assignment Q2" << endl;
//
//    List l;
//    //l.Print_tail();
//    l.AddAsHeadV2(4);
//    //l.Print_tail();
//    l.AddAsHeadV2(3);
//    //l.Print();
//    //l.Print_tail();
//    l.AddAsTailV2(6);
//    //l.Print_tail();
//    //l.Print();
//
//    Node z;
//    z = l.Find(8);
//    l.ReverseV2();
//    l.Print();
//    //l.Print_tail();
//    l.AddAsTailV2(6);
//    l.Print();
//    //l.Print_tail();
//    l.RemoveAll(6);
//    l.Print();
//    l.AddAsTailV2(7);
//    l.Print();
//    l.Print_tail();
//    l.AddAsHeadV2(1);
//    l.AddAsTailV2(10);
//    l.Print();
//    l.Print_tail();
//
//    List x;
//    x.AddAsHead(2);
//
//    l.AddAllV2(x);
//    l.Print();
//    l.Print_tail();
//
//    l.AddAsTailV2(13);
//    l.Print();






    cout << "Hello world!" << endl;
    return 0;
}
