#include "Stack.h"
#include <iostream>

using namespace std;

template <class T>
Stack<T>::Stack()
{
    head = NULL;
}


template <class T>
Stack<T>::~Stack(){

    node * ptr = head;

    while (ptr != NULL){
        head = head->next;
        delete ptr;
        ptr = head;
    }
}

template <class T>
void Stack<T>::push(T item){

    node *temp = new node();
    temp->data = item;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
    } else {
        temp->next = head;
        head = temp;
    }

}

template <class T>
void Stack<T>::pop(){

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
T Stack<T>::top(){

    if(head!= NULL)
        return head->data;

}
