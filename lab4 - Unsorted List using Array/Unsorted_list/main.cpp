#include <iostream>
#include "Unsorted_List.cpp"

using namespace std;

void PrintList(Unsorted_List<int> u);

int main(){

    Unsorted_List<int> l;

    //cout << l.length_is();

    l.insert_item(5);
    l.insert_item(7);
    l.insert_item(6);
    l.insert_item(9);


    PrintList(l);
    cout << l.length_is()<< endl;
    l.insert_item(1);
    PrintList(l);

    int a = 9;

    bool flag = false;

    l.retrieve_item(a, flag);

    cout << flag << endl;

    cout << l.is_full() << endl;

    l.delete_item(5);
    l.delete_item(6);
    l.delete_item(1);

    PrintList(l);

    cout << "Hello world!" << endl;
    return 0;
}


void PrintList(Unsorted_List<int> u)
{
    int temp;
    for(int i = 0 ; i<u.length_is();i++)
    {
        u.get_next_item(temp);
        cout<<temp<< "\t";
    }
    cout << endl;
    u.reset_list();
}
