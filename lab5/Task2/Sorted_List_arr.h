#ifndef SORTED_LIST_ARR_H
#define SORTED_LIST_ARR_H

const int MAX_ITEMS = 5;

template <class T>
class Sorted_List_arr {
    public:
        Sorted_List_arr();
        void make_empty();
        bool is_full();
        int length_is();
        void insert_item(T item);
        void delete_item(T item);
        void retrieve_item(T &item, bool &flag);
        void reset_list();
        void get_next_item(T &item);
        void print_list();

    private:
        int length;
        T items[MAX_ITEMS];
        int currentPos;
};

#endif // SORTED_LIST_ARR_H
