//#include "queuetype.h"
//
//template <class ItemType>
//QueType<ItemType>::QueType(){
//    maxQue = DEFAULT_SIZE + 1;
//    front = maxQue - 1;
//    rear = maxQue - 1;
//    items = new ItemType[maxQue];
//}
//
//template <class ItemType>
//QueType<ItemType>::QueType(int max){
//    maxQue = max + 1;
//    front = maxQue - 1;
//    rear = maxQue - 1;
//    items = new ItemType[maxQue];
//}
//
//template <class ItemType>
//QueType<ItemType>::~QueType(){
//    delete [] items;
//}
//
//template <class ItemType>
//void QueType<ItemType>::make_empty(){
//    front = maxQue - 1;
//    rear = maxQue - 1;
//}
//template <class ItemType>
//bool QueType<ItemType>::is_Empty(){
//    return (rear == front);
//}
//
//template <class ItemType>
//bool QueType<ItemType>::is_full(){
//    return ((rear + 1) % maxQue == front);
//}
//
//template <class ItemType>
//void QueType<ItemType>::enqueue(ItemType item){
//    if (is_full()){
//        throw FullQueue();
//    }
//    else{
//        rear = (rear + 1) % maxQue;
//        items[rear] = item;
//    }
//}
//
//template <class ItemType>
//void QueType<ItemType>::dequeue(ItemType &item){
//    if (is_Empty()){
//        throw EmptyQueue();
//    } else {
//        front = (front + 1) % maxQue;
//        item = items[front];
//
//    }
//}
