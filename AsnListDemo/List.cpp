#include "List.h"
#include <iostream>
using namespace std;

List::List(){
    head = NULL;
}

bool List::IsEmpty(){
    return (head == NULL);
}

int List::LengthIs(){
    int n = 0;

    Node *cur = head;

    while (cur != NULL){
        n++;
        cur = cur->next;
    }

    return n;
}

void List::Print(){

    if (head == NULL){
        cout << "Can't print an Empty List!" << endl;
        return;
    } else {
        Node *cur = head;

        while (cur != NULL){
            cout << cur->val << " ";
            cur = cur ->next;
        }
    }
    cout << endl;


}


void List::AddAsHead(int i){

    //check full

    Node *temp = new Node;
    temp->val = i;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}


void List::AddAsTail(int i){

    // check full

    Node *temp = new Node;
    temp->val = i;
    temp->next = NULL;

    Node *cur_node = head;

    while(cur_node->next != NULL){
        cur_node = cur_node->next;
    }

    cur_node->next = temp;
}


Node List::Find(int i){
    Node *cur = head;
    Node temp;

    while (cur != NULL){
        if (cur->val == i){
            temp.val = cur->val;
            //cout << temp.val  << " val" << endl;
            //cout << cur->val <<  " cur->val" << endl;
            break;
        } else {
            cur = cur->next;
        }
    }
    return temp;


}


void List::Reverse(){
    if (head != NULL && head->next != NULL){
        Node *second, *first, *temp;

        second = head;
        first = NULL;
        temp = NULL;

        while (second != NULL){
            temp = second->next;
            second->next = first;
            //cout << "second = " << second->val << endl;
            first = second;
            //cout <<  "second = " << second->val << " first = " << second->next->val << endl;
            second = temp;
        }

        head = first;

    }
}

int List::PopHead(){
    if (head == NULL){
        return NULL;
    } else {
        Node *temp = head;
        head = head->next;
        return temp->val;
    }

}

void List::RemoveFirst(int i){

    Node *cur = head, *temp, *prev;

    if (head->val == i){
        temp = head;
        head = head->next;
        delete temp;
    } else {

        cur = head;
        while (cur->next != NULL){
            if (cur->next->val == i){
                temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
                break;
            } else {
                cur = cur->next;
            }
        }
    }

}

void List::RemoveAll(int i){

    Node *cur = head, *temp, *prev;
    //cout << LengthIs() << endl;

    if (head->val == i){
        temp = head;
        head = head->next;
        delete temp;
    }

    for (int k = 0; k < LengthIs(); k++){
        RemoveFirst(i);
    }

}

void List::AddAll(List l){
    Node *cur = head, *cur2 = l.head;

    if (head == NULL){
        head = cur2;
    } else {
        while (cur->next != NULL){
            cur = cur->next;
        }
        cur->next = cur2;
    }


}


