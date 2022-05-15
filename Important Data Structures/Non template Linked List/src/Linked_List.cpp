#include "Linked_List.h"
#include <iostream>

using namespace std;

Linked_List::Linked_List(){
    head = NULL;
}

Linked_List::~Linked_List(){
    node *pos = new node;

    if (head == NULL){
        return;
    }

    pos = head->next;
    while (pos->next != NULL){
        delete head;
        pos = pos->next;
    }
}

void Linked_List::insert_front(int item){

    node *temp = new node;
    temp->data = item;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
        temp->next = NULL;
    } else {
        temp->next = head;
        head = temp;
    }

}

void Linked_List::insert_rear(int item){
    node *temp = new node;
    temp->data = item;

    if (head == NULL){
        head = temp;
    } else {
        node *pos = head;
        while (pos->next != NULL){
            pos = pos->next;

        }

        pos->next = temp;
        temp->next = NULL;
    }

}

void Linked_List::insert_mid(int item, int new_item){
    //searches for item, if not present, then adds at the end
    node *temp = new node;
    temp->data = new_item;

    if (head != NULL){

        node *pos = head;
        while (pos->data != item && pos->next != NULL){
            pos = pos->next;
        }

        temp->next = pos->next;
        pos->next = temp;

    }
}

void Linked_List::remove_front(int &n){

    if (head == NULL)
        return;
    else{
        node *temp = head;
        head = temp->next;
        n = temp->data;
        delete temp;

    }
}

void Linked_List::remove_rear(int &n){

    if (head != NULL){
        node *temp = head;
        while (temp->next->next != NULL){
            temp = temp->next;
        }

        node *temp2 = temp->next;
        temp->next = NULL;
        n = temp2->data;
        delete temp2;
    }
}


void Linked_List::print_list(){

    if (head != NULL){

        node *pos = head;
        while (pos != NULL){
            cout << pos-> data << "\t";
            pos = pos->next;
        }
        cout << endl;
    }
}

void Linked_List::check(){
    cout << head->data;
    cout << head->next->data;
}

