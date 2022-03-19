#include "Linked_List.h"
#include <iostream>

using namespace std;

Linked_List::Linked_List() {
    head = NULL;
}

Linked_List::~Linked_List(){
    node * ptr = head;

    while (ptr != NULL){
        head = head->next;
        delete ptr;
        ptr = head;
    }
}

void Linked_List::insert_at_first(int item){

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

void Linked_List::insert_at_last(int item){

    node *temp = new node();
    temp->data = item;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
    } else {
        node *pos = head;
        while (pos->next != NULL)
        {
            pos = pos->next;
        }
        pos->next = temp;
    }
}

void Linked_List::print_list(){

    node *temp = head;

    while (temp!= NULL){
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

