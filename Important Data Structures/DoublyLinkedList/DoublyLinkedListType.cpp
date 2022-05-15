#include <iostream>
#include "DoublyLinkedListType.h"

using namespace std;

template <class ItemType>
void DoublyLinkedListType<ItemType>::addFront(ItemType item) {
    NodeType<ItemType> *temp = new NodeType<ItemType>;
    temp->info = item;
    if (front==NULL) {
        temp->prev = NULL;
        temp->next = NULL;
        front = rear = temp;
    } else {
        temp->prev = NULL;
        temp->next = front;
        front->prev = temp;
        front = temp;
    }
}

template <class ItemType>
void DoublyLinkedListType<ItemType>::addRear(ItemType item) {
    NodeType<ItemType> *temp = new NodeType<ItemType>;
    temp->info = item;
    if (rear==NULL) {
        temp->prev = NULL;
        temp->next = NULL;
        front = rear = temp;
    } else {
        rear->next = temp;
        temp->prev = rear;
        temp->next = NULL;
        rear = temp;
    }
}

template <class ItemType>
void DoublyLinkedListType<ItemType>::addItemBefore(ItemType item, ItemType newItem) {
    NodeType<ItemType> *pos = front;
    while (pos!=NULL) {
        if (pos->info==item) break;
        pos = pos->next;
    }

    if (pos==NULL) return;

    NodeType<ItemType> *temp = new NodeType<ItemType>;
    temp->info = newItem;
    temp->prev = pos->prev;
    temp->next = pos;

    if (pos->prev==NULL) { // or front == pos
        front = temp;
        pos->prev = temp;
    } else {
        pos->prev->next = temp;
        pos->prev = temp;
    }
}

template <class ItemType>
void DoublyLinkedListType<ItemType>::addItemAfter(ItemType item, ItemType newItem) {
    NodeType<ItemType> *pos = front;
    while (pos!=NULL) {
        if (pos->info==item) break;
        pos = pos->next;
    }

    if (pos==NULL) return;

    NodeType<ItemType> *temp = new NodeType<ItemType>;
    temp->info = newItem;
    temp->prev = pos;
    temp->next = pos->next;

    if (pos->next==NULL) { // or rear == pos
        rear = temp;
        pos->next = temp;
    } else {
        pos->next->prev = temp;
        pos->next = temp;
    }
}

template <class ItemType>
void DoublyLinkedListType<ItemType>::deleteFront()
{
    if (front==NULL) return;
    NodeType<ItemType> *temp = front;
    if (front->next==NULL) {
        front = rear = NULL;
        delete temp;
    } else {
        front->next->prev = NULL;
        front = front->next;
        delete temp;
    }
}

template <class ItemType>
void DoublyLinkedListType<ItemType>::deleteRear()
{
    if (rear==NULL) return;
    NodeType<ItemType> *temp = rear;
    if (rear->prev==NULL) {
        front = rear = NULL;
        delete temp;
    } else {
        rear->prev->next = NULL;
        rear = rear->prev;
        delete temp;
    }
}

template <class ItemType>
void DoublyLinkedListType<ItemType>::deleteItem(ItemType item)
{
    NodeType<ItemType> *pos = front;
    while (pos != NULL && pos->info != item) {
        pos = pos->next;
    }
    if (pos==NULL) return;

    if (pos==front) deleteFront();
    else if (pos==rear) deleteRear();
    else {
        pos->prev->next = pos->next;
        pos->next->prev = pos->prev;
        delete pos;
    }
}

template <class ItemType>
bool DoublyLinkedListType<ItemType>::findItem(ItemType item)
{
    NodeType<ItemType> *pos = front;
    while (pos != NULL && pos->info != item) {
        pos = pos->next;
    }
    if (pos!=NULL) return true;
    return false;
}

template <class ItemType>
void DoublyLinkedListType<ItemType>::display() {
    NodeType<ItemType> *pos = front;
    while (pos!=NULL) {
        cout << pos->info << "  ";
        pos = pos->next;
    }
    cout << endl;
}

template <class ItemType>
DoublyLinkedListType<ItemType>::DoublyLinkedListType() {
    front = rear = NULL;
}

template <class ItemType>
DoublyLinkedListType<ItemType>::~DoublyLinkedListType() {
    NodeType<ItemType> *pos = front, *temp;
    while (pos!=NULL) {
        temp = pos;
        pos = pos->next;
        delete temp;
    }
    front = rear = NULL;
}

// end of file
