#ifndef UNSORTED_LIST_H
#define UNSORTED_LIST_H


#include <iostream>

using namespace std;

const int MAX_ITEMS = 5;

template <class T>

class Unsorted_List {

    private:
        int length;
        T items[MAX_ITEMS];
        int currentPos;

    public:
        Unsorted_List();
        bool is_Empty();
        bool is_full();
        void make_empty();
        void insert_item(T item);
        void delete_item(int id);
        int lengthis();
        void get_next_item(T &item);
        void reset_list();
        void retrieve_item(T &item, bool &flag);
        void print_list();
};

#endif // UNSORTED_LIST_H
