#include <iostream>
#include "HashTable.h"

using namespace std;

int main()
{
    cout << "Assignment - Q2" << endl;
    HashTable h1(20);
    //cout << h1.hash_func(33) << endl;

    h1.Insert(13);
    h1.Insert(17);
    h1.Insert(23);
    h1.Insert(37);
    h1.Insert(57);
    h1.Insert(77);
    h1.Insert(97);
    cout << endl;

    //cout << h1.Find(57) << endl;
    cout << "Printing h1" << endl;
    h1.print();
    cout << "Deleting 17 from h1 " << endl;
    h1.Delete(17);
    cout << "Printing h1" << endl;
    h1.print();

    cout << "Creating new hashtable h2 " << endl;
    HashTable h2 = h1.Rehash();

    cout << "Printing h2" << endl;
    h2.print();

    cout << "Inserting 32 to h2" << endl;

    h2.Insert(32);
    cout << "Finding 32 in h2" << endl;
    cout << h2.Find(32) << endl;
    cout << "Printing h2" << endl;
    h2.print();

    cout << "Inserting 22 in h2" << endl;
    h2.Insert(22);
    cout << "Printing h2" << endl;
    h2.print();

    cout << "Deleting 13 from h1" << endl;
    h1.Delete(13);
    cout << "Printing h1" << endl;
    h1.print();

    return 0;
}
