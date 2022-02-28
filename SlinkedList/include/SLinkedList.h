#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H



template <class Type>
struct Node {
    Type data;
    Node* next;
};

template <class Type>
class SLinkedList {
    public:
        SLinkedList();
        ~SLinkedList();

        void insert_front(Type item);
        void insert_middle(Type item, Type new_item);
        void insert_rear(Type item);

        void delete_front();
        void delete_rear();

        void print_list();

    private:
        Node <Type> *head;
};

#endif // SLINKEDLIST_H



#include <iostream>
using namespace std;


template <class Type>
SLinkedList<Type>::SLinkedList() {
    head = NULL;
}

template <class Type>
SLinkedList<Type>::~SLinkedList()
{
    Node<Type> *pos = head;

    while (pos != NULL){
        head = head->next;
        delete pos;
        pos = head;
    }
    head = NULL;
}

template <class Type>
void SLinkedList<Type>::insert_front(Type item){

    Node<Type> *temp = new Node<Type>;
    temp->data = item;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
    }else{
        temp->next = head;
        head = temp;
    }
}

template <class Type>
void SLinkedList<Type>::insert_middle(Type item, Type new_item){

    Node<Type> *temp = new Node<Type>;
    temp->data = new_item;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
    } else {
        Node<Type> *pos;
        pos = head;

        while (pos->data != item && pos->next != NULL){
            pos = pos->next;
        }

        temp->next = pos->next;
        pos->next = temp;
    }

}

template <class Type>
void SLinkedList<Type>::insert_rear(Type item){

    Node<Type> *node = new Node<Type>;
    node->data = item;
    node->next = NULL;

    if (head == NULL){
        head = node;
    } else {
        Node<Type> *pos = head;

        while (pos->next != NULL){
            pos = pos->next;
        }
        pos->next = node;
    }

}


template <class Type>
void SLinkedList<Type>::delete_front(){

    if (head == NULL){
        return;
    } else {
        Node<Type> *temp = new Node<Type>;
        temp = head;
        head = temp->next;
        delete temp;
    }
}

template <class Type>
void SLinkedList<Type>::delete_rear(){
    if (head == NULL){
        return;
    } else {
        Node<Type> *pos = new Node<Type>;
        pos = head;
        while (pos->next->next != NULL){
            pos = pos->next;
        }
        delete pos->next->next;
        pos->next = NULL;
    }
}


template <class Type>
void SLinkedList<Type>::print_list(){

    Node<int> *pos;
    pos = head;
    while (pos != NULL){
        cout << pos->data << "\t";
        pos = pos->next;
    }
    cout << endl;
}
