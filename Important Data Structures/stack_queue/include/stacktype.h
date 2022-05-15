#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

class FullStack
{};  // Exception class thrown by Push when stack is full.
class EmptyStack
{};  // Exception class thrown by Pop and Top when stack is empty.

template <class ItemType>
class StackType
{
    public:
        StackType();
        bool is_full();
        bool is_Empty();
        void make_empty();
        void push(ItemType item);
        ItemType pop();
        ItemType peek();
    private:
        int top;
        ItemType  items[MAX_ITEMS];
};
#endif // STACKTYPE_H_INCLUDED


#include <iostream>
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType(){
    top = -1;
}


template <class ItemType>
bool StackType<ItemType>::is_full(){
    return (MAX_ITEMS - 1 == top);
}

template <class ItemType>
bool StackType<ItemType>::is_Empty(){
    return (top == -1);
}

template <class ItemType>
void StackType<ItemType>::push(ItemType item){

    if (is_full()){
        throw FullStack();
    }
    items[top + 1] = item;
    top++;
}

template <class ItemType>
ItemType StackType<ItemType>::pop(){
    if (is_Empty()){
        throw EmptyStack();
    }
    top--;
    return items[top + 1];

}

template <class ItemType>
ItemType StackType<ItemType>::peek(){

    if (is_Empty()){
        throw EmptyStack();
    }
    return items[top];

}
