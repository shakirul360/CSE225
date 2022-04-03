#include "Stack_arr.h"
#include <iostream>

using namespace std;

template <class T>
Stack_arr<T>::Stack_arr() {
    top = -1;
}


template <class T>
bool Stack_arr<T>::is_Empty(){
    return (top == -1);
}

template <class T>
bool Stack_arr<T>::is_full(){

    return (top == MAX_ITEMS);

}

template <class T>
void Stack_arr<T>::push(T item){
    try{
        if (is_full()){
        throw FullStack();
        }
        top++;
        items[top] = item;

    } catch (FullStack e){
        //cout << "Stack is full!" << endl;
    }

}

template <class T>
void Stack_arr<T>::pop(){
    try{
        if (is_Empty()){
        throw EmptyStack();
        }
        top--;

    } catch (EmptyStack e){
        cout << "Stack is Empty!" << endl;
    }

}

template <class T>
T Stack_arr<T>::Top(){
    try{
        if (is_Empty()){
        throw EmptyStack();
        }
        return items[top];

    } catch (EmptyStack e){
        cout << "Stack is Empty!" << endl;
    }

}
