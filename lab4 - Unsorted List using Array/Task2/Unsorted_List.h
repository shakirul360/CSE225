#ifndef UNSORTED_LIST_H
#define UNSORTED_LIST_H

const int MAX_SIZE = 5;

template <class T>
class Unsorted_List
{
    public:
        Unsorted_List();
        bool is_Empty();
        bool is_full();
        void make_empty();
        void insert_item(T item);
        void delete_item(T item);
        int length_is();
        void get_next_item(T &item);
        void reset_list();
        void retrieve_item(T &item, bool &flag);



    private:
        T items[MAX_SIZE];
        int length;
        int currentPos;
};

#endif // UNSORTED_LIST_H
