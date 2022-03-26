#include "BST.h"
#include <iostream>

using namespace std;

void insert_item(node *& cur_node, int item);
void Print(node *tree);
void print_post(node *tree);
int length(node *tree);
bool retrieve(node *tree, int item);
void get_predecessor(node *& tree, int &data);
void delete_node(node *&tree);
void Delete(node *&tree, int item);

BST::BST() {
    root = NULL;
}

bool BST::is_empty(){

    return (root == NULL);
}

void BST::insert(int item){

    insert_item(root, item);
}

void insert_item(node *& cur_node, int item){

    if (cur_node == NULL){
        cur_node = new node;
        cur_node->data = item;
        cur_node->left = NULL;
        cur_node->right = NULL;

    } else if (cur_node->data > item){
        insert_item(cur_node->left, item);
    } else {
        insert_item(cur_node->right, item);
    }
}

void BST::in_order(){
    Print(root);
    cout << endl;
}

void BST::post_order(){
    print_post(root);
    cout << endl;
}


void print_post(node *tree){

    while (tree!= NULL){
        Print(tree->left);
        Print(tree->right);
        cout << tree->data << "\t";
        break;
    }
    return;
}



void Print(node *tree){

    while (tree!= NULL){
        Print(tree->left);
        cout << tree->data << "\t";
        Print(tree->right);
        break;
    }
    return;
}


int BST::length_is(){
    return length(root);
}

int length(node *tree){

    if (tree == NULL){
        return 0;
    } else {
        return length(tree->left) + length(tree->right) + 1;
    }
}

bool BST::retrieve_item(int item){
    return retrieve(root, item);
}

bool retrieve(node *tree, int item){

    if (tree == NULL){
        return false;
    } else if (tree->data > item){
        return retrieve(tree->left, item);
    } else if (tree->data < item) {
        return retrieve(tree->right, item);
    } else
        return true;
}

void BST::delete_item(int item){

    Delete(root, item);

}


void Delete(node *&tree, int item){

    if (item < tree->data){
        Delete(tree->left, item);
    } else if (item > tree->data){
        Delete(tree->right, item);
    } else {
        delete_node(tree);
    }
}

void delete_node(node *&tree){

    node *ptr = tree;

    if (tree->left == NULL && tree->right == NULL){
        tree = NULL;
        delete ptr;
    } else if (tree->left == NULL){
        tree = tree->right;
        delete ptr;
    } else if (tree->right == NULL){
        tree = tree->left;
        delete ptr;
    } else {
        int data;
        get_predecessor(tree->left, data);
        tree->data = data;
        Delete(tree->left, data);
    }
}

void get_predecessor(node *& tree, int &data){
    while (tree->right != NULL){
        tree = tree->right;
    }
    data = tree->data;
}




