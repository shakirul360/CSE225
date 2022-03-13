#include "Sorted_List_arr.h"
#include <iostream>

using namespace std;

template <class T>
Sorted_List_arr<T>::Sorted_List_arr(){
    length = 0;
    currentPos = -1;
}


template <class T>
void Sorted_List_arr<T>::make_empty(){
    length = 0;
}

template <class T>
int Sorted_List_arr<T>::length_is(){
    return length;
}

template <class T>
bool Sorted_List_arr<T>::is_Empty(){
    return (length == 0);
}

template <class T>
bool Sorted_List_arr<T>::is_full(){
    return (length == MAX_ITEMS);
}

template <class T>
void Sorted_List_arr<T>::insert_item(T item){
    //cout << "adding = " << item << endl;

    int pos;

    if (is_full()){
        return;
    } else {

        for (pos = 0; pos < length; pos++){
            if (items[pos] > item){
                break;
            }
        }

        for (int j = length; j > pos; j--){
            items[j] = items[j - 1];
        }

        items[pos] = item;
        length++;
    }

    //cout << "inserted in position " << pos  << endl;

}

template <class T>
void Sorted_List_arr<T>::reset_list(){
    currentPos = -1;
}

template <class T>
void Sorted_List_arr<T>::get_next_item(T &item){
    //cout << currentPos << endl;
    currentPos++;
    item = items[currentPos];
}

template <class T>
void Sorted_List_arr<T>::delete_item(T item){

    int pos = length;        //if pos = 0, then items are added at the front when items in the array are all smaller than item
    for (int i = 0; i < length; i++){
        if (item == items[i]){
            pos = i;
            break;
        }
    }

    for (int j = pos; j < length; j++){
        items[j] = items[j + 1];
    }
    length--;
}

template <class T>
void Sorted_List_arr<T>::retrieve_item(T &item, bool &flag){

    flag = false;
    for (int i = 0; i < length; i++){
        if (items[i] == item){
            flag = true;
            break;
        }
    }
}
