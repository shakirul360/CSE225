#include "Queue.h"
#include <iostream>

using namespace std;

template <class T>
Queue<T>::Queue()
{
    head = NULL;

}

template <class T>
void Queue<T>::enqueue(T item){

    node *temp = new node;
    temp->data = item;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
    } else {

        node *pos = head;

        while(pos->next != NULL){
            pos = pos->next;
        }

        pos->next = temp;
    }
}

template <class T>
void Queue<T>::dequeue(){

    if (head == NULL){
        cout << "Empty List!" << endl;
        return;
    } else {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}


template <class T>
T Queue<T>::front(){

    if (head == NULL){
        cout << "Empty List!" << endl;
    } else {

        return head->data;
    }
}
