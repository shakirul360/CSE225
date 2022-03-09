#include <iostream>
#include "Sorted_List_arr.cpp"
#include "Timestamp.h"
using namespace std;

int main()
{
    Sorted_List_arr<Timestamp> time;

    Timestamp t1(15, 34, 23);
    Timestamp t2(13, 13, 02);
    Timestamp t3(43, 45, 12);
    Timestamp t4(25, 36, 17);
    Timestamp t5(52, 02, 20);

    time.insert_item(t1);
    time.insert_item(t2);
    time.insert_item(t3);
    time.insert_item(t4);
    time.insert_item(t5);

    for (int i = 0; i < time.length_is(); i++){
        Timestamp temp;
        time.get_next_item(temp);

        temp.print();
    }

    return 0;
}
