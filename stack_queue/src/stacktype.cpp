//#include "stacktype.h"
//#include <iostream>
//using namespace std;
//
//template <class ItemType>
//StackType<ItemType>::StackType(){
//    top = -1;
//}
//
//
//template <class ItemType>
//bool StackType<ItemType>::is_full(){
//    return (MAX_ITEMS - 1 == top);
//}
//
//template <class ItemType>
//bool StackType<ItemType>::is_Empty(){
//    return (top == -1);
//}
//
//template <class ItemType>
//void StackType<ItemType>::push(ItemType item){
//
//    if (is_full()){
//        throw FullStack();
//    }
//    items[top + 1] = item;
//    top++;
//}
//
//template <class ItemType>
//ItemType StackType<ItemType>::pop(){
//    if (is_Empty()){
//        throw EmptyStack();
//    }
//    top--;
//    return items[top + 1];
//
//}
//
//template <class ItemType>
//ItemType StackType<ItemType>::peek(){
//
//    if (is_Empty()){
//        throw EmptyStack();
//    }
//    return items[top];
//
//}
