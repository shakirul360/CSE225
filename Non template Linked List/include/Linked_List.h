#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

struct node {
    node *next;
    int data;
};

class Linked_List {

    public:
        Linked_List();
        ~Linked_List();
        void insert_front(int item);
        void insert_rear(int item);
        void insert_mid(int item, int new_item);

        void remove_front(int &n);
        void remove_rear(int &n);

        void print_list();
        void check();


    private:
        node *head;

};

#endif // LINKED_LIST_H

