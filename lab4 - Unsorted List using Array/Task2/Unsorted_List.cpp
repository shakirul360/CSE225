
#include "Unsorted_List.h"
#include <iostream>
using namespace std;

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
    return (length == MAX_SIZE);
}

template <class T>
void Unsorted_List<T>::make_empty(){
    length = 0;
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
int Unsorted_List<T>::length_is(){
    return length;
}

template <class T>
void Unsorted_List<T>::get_next_item(T &item){

    currentPos++;
    item = items[currentPos];

}

template <class T>
void Unsorted_List<T>::reset_list(){
    currentPos = -1;
}

template <class T>
void Unsorted_List<T>::retrieve_item(T &item, bool &found){
    for (int i = 0; i < length; i++){
        if (items[i] == item){
            found = true;
            return;
        }
    }
}
