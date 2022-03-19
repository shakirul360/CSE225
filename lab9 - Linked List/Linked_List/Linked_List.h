#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node {

    int data;
    node *next;

};

class Linked_List
{
    public:
        Linked_List();
        virtual ~Linked_List();
        void insert_at_first(int item);
        void insert_at_last(int item);
        void print_list();

    private:
        node *head;
};

#endif // LINKED_LIST_H
