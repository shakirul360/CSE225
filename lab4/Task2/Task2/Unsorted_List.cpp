#include "Unsorted_List.h"
#include <iostream>

using namespace std;

template <class T>
Unsorted_List<T>::Unsorted_List() {
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
void Unsorted_List<T>::delete_item(int id){

    if  (is_Empty() == true){
        return;
    }
    int pos = 0;
    bool found = false;
    for (int i = 0; i < length; i++){
        if (id == items[i].get_id()){
            pos = i;
            found = true;
            break;
        }
    }

    if (found){
        cout << "deleting item with id: " << id << endl;
        items[pos] = items[length - 1];
        length--;
    }
}

template <class T>
void Unsorted_List<T>::retrieve_item(T &item, bool &flag){

    for (int i = 0; i < length; i++){
        if (item.get_id() == items[i].get_id()){
            flag = true;
            item.set_name(items[i].get_name());
            item.set_gpa(items[i].get_gpa());
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

        cout << items[i].get_id() << "\t" << items[i].get_name() << "\t" << items[i].get_gpa() << endl;

    }

    cout << endl;
}
