#include "Queue.h"

template <class T>
Queue<T>::Queue()
{
    front = -1;
    rear = -1;
}


template <class T>
bool Queue<T>::is_full(){
    return (front == (rear + 1) % MAX_ITEMS);
}

template <class T>
bool Queue<T>::is_Empty(){
    return (rear == -1 && front == -1);
}

template <class T>
void Queue<T>::enqueue(T item){

    if (is_Empty()){
        rear = 0;
        front = 0;
    } else {
        rear = (rear + 1) % MAX_ITEMS;
    }
    items[rear] = item;
}

template <class T>
void Queue<T>::dequeue(){

    if (rear == front){
        rear = -1;
        front = -1;

    } else {
        front = (front + 1) % MAX_ITEMS;
    }

}


template <class T>
T Queue<T>::Front(){

    return items[front];

}

template <class T>
void Queue<T>::make_empty()
{
    front = -1;
    rear = -1;
}
