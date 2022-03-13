#ifndef SORTED_LIST_ARR_H
#define SORTED_LIST_ARR_H

const int MAX_ITEMS = 6;

template <class T>
class Sorted_List_arr {
    public:
        Sorted_List_arr();
        void make_empty();
        int length_is();
        bool is_Empty();
        bool is_full();
        void insert_item(T item);
        void reset_list();
        void get_next_item(T &item);
        void delete_item(T item);
        void retrieve_item(T &item, bool &flag);

    private:
        int length;
        T items[MAX_ITEMS];
        int currentPos;
};

#endif // SORTED_LIST_ARR_H
