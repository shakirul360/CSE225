#include "Sorted_List_arr.h"
#include <iostream>

using namespace std;

template <class T>
Sorted_List_arr<T>::Sorted_List_arr()
{
    length = 0;
    currentPos = -1;
}

template <class T>
void Sorted_List_arr<T>::make_empty(){
    length = 0;
}

template <class T>
bool Sorted_List_arr<T>::is_full(){
    return (length == MAX_ITEMS);
}

template <class T>
int Sorted_List_arr<T>::length_is(){
    return length;
}

template <class T>
void Sorted_List_arr<T>::insert_item(T item){

    if (is_full()){
        cout << "array full!" << endl;
        return;
    } else {

        int pos = length;
        for (int i = 0; i < length; i++){
            if (items[i] > item){
                pos = i;
                break;
            }
        }

        for (int j = length; j >= pos; j--){
           items[j + 1] = items[j];
        }

        items[pos] = item;
        length++;

    }
    cout << "inserted " << endl;
}

template <class T>
void Sorted_List_arr<T>::delete_item(T item){

    if (length_is() == 0){
        return;
    } else {

        bool found = false;
        int pos = 0;
        for (int i = 0; i <= length; i++){
            if (items[i] == item){
                found = true;
                pos = i;
                break;
            }
        }
        if (found){
            for (int j = pos; j < length; j++){
            items[j] = items[j + 1];
            }

            length--;
        }

    }
}


template <class T>
void Sorted_List_arr<T>::retrieve_item(T &item, bool &flag){

    for (int i = 0; i < length; i++){

        if (items[i] == item){
            flag = true;
            break;
        }
    }
}


template <class T>
void Sorted_List_arr<T>::reset_list(){
    currentPos = -1;
}

template <class T>
void Sorted_List_arr<T>::get_next_item(T &item){
    item = items[currentPos + 1];
    currentPos++;
}


template <class T>
void Sorted_List_arr<T>::print_list(){
    cout << length_is() << endl;

    T temp;
    for(int i = 0 ; i< length ;i++)
    {
        getNextItem(temp);
        cout<<temp<<endl;
    }
    this->resetList();
}
