#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template <class ItemType>
class UnsortedType {
public :
    UnsortedType();
    void make_empty();
    bool is_full();
    int length_is();
    void insert_item(ItemType item);
    void delete_item(ItemType item);
    void retrieve_item(ItemType& item, bool& flag);
    void reset_list();
    void get_next_item(ItemType& item);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif // UNSORTEDTYPE_H_INCLUDED


//#include "unsortedtype.h"

template <class ItemType>
UnsortedType<ItemType>::UnsortedType() {
    length = 0;
    currentPos = -1;
}

template <class ItemType>
 void UnsortedType<ItemType>::make_empty(){
    length = 0;
    currentPos = -1;
    //? how is it empty just by putting length = 0?
}

template <class ItemType>
bool UnsortedType<ItemType>::is_full(){

    return (length == MAX_ITEMS);
}

template <class ItemType>
int UnsortedType<ItemType>::length_is(){
    return length;
}

template <class ItemType>
void UnsortedType<ItemType>::insert_item(ItemType item){
    info[length] = item;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::delete_item(ItemType item){
    // ?? //
    int idx = -1;
    for (int i = 0; i < length; i++){
        if (item == info[i]){
            idx = i;
            break;
        }
    }

    if (idx != -1){
        info[idx] = info[length - 1];
        length--;
    }

//    int location = 0;
//    while (item != info[location])
//        location++;
//    info[location] = info[length - 1];
//    length--;

}

template <class ItemType>
void UnsortedType<ItemType>::retrieve_item(ItemType &item, bool &flag) {

    int idx = 0;
    bool moretoSearch = (idx < length);
    flag = false;

    while (moretoSearch && !flag){

        if (item == info[idx]){
            item = info[idx];
            flag = true;
            break;

        } else {
            idx++;
            moretoSearch = (idx < length);
        }
    }

}

template <class ItemType>
void UnsortedType<ItemType>::reset_list(){

    currentPos = -1;
}

template <class ItemType>
void UnsortedType<ItemType>::get_next_item(ItemType &item){
    item = info[currentPos + 1];
    currentPos++;
}


