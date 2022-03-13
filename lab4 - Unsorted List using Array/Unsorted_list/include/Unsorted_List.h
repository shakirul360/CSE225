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
        void delete_item(T item);
        int lengthis();
        void get_next_item(T &item);
        void reset_list();
        void retrieve_item(T &item, bool &flag);
        void print_list();
};

#endif // UNSORTED_LIST_H


template <class T>
Unsorted_List<T>::Unsorted_List()
{
    length = 0;
    currentPos = -1;

}

template <class T>
bool Unsorted_List<T>::is_Empty(){
    return (length == 0);
}

template <class T>
bool Unsorted_List<T>::is_full(){
    return (length == MAX_ITEMS);
}


template <class T>
void Unsorted_List<T>::make_empty(){
    length = 0;
}




template <class T>
int Unsorted_List<T>::lengthis(){
    return length;
}

template <class T>
void Unsorted_List<T>::insert_item(T item){

    if (is_full() == true){
        cout << "full list "<< endl;
        return;
    }

    items[length] = item;
    length++;

}

template <class T>
void Unsorted_List<T>::delete_item(T item){

    if  (is_Empty() == true){
        return;
    }
    int pos = 0;
    bool found = false;
    for (int i = 0; i < length; i++){
        if (item == items[i]){
            pos = i;
            found = true;
            break;
        }
    }

    if (found){
        items[pos] = items[length - 1];
        length--;
    }
}

template <class T>
void Unsorted_List<T>::retrieve_item(T &item, bool &flag){

    for (int i = 0; i < length; i++){
        if (item == items[i]){
            flag = true;
        }
    }
}

template <class T>
void Unsorted_List<T>::reset_list(){
    length = 0;
    currentPos = -1;
}

template <class T>
void Unsorted_List<T>::get_next_item(T &item){
    currentPos++;
    item = items[currentPos];
}


template <class T>
void Unsorted_List<T>::print_list(){

    for (int i = 0; i < length; i++){

        cout << items[i] << "\t";
    }

    cout << endl;
}
