#include <iostream>
//insert, traversals, find_min, find_max

using namespace std;
struct node {
    int data;
    node *left;
    node *right;
};
node* NewNode(int item);
node* insert(node * root, int item);

void in_order(node* root);
void pre_order(node* root);
void post_order(node* root);
node* find_min(node* root);
node* find_max(node* root);

int main() {

    node *root = NULL;

    root= insert(root, 25);
    root= insert(root, 15);
    root= insert(root, 10);
    root= insert(root, 20);
    root= insert(root, 50);
    root= insert(root, 40);
    root= insert(root, 60);
    pre_order(root);
    cout<<endl;
    in_order(root);
    cout<<endl;
    post_order(root);
    cout<<endl;
    find_min(root);
    find_max(root);

    cout << "Hello world!" << endl;
    return 0;
}


node* NewNode(int item){
    node *temp = new node();
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
}

node* insert(node * root, int item){

    if (root == NULL){
        root = NewNode(item);
        return root;

    } else if (item <= root->data){
        root->left = insert(root->left, item);
    } else {
        root->right = insert(root->right, item);
    }
    return root;
}

void in_order(node* root){
    if (root == NULL){
        return;
    }
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
}

void pre_order(node* root){

    if (root == NULL){
        return;
    }
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(node* root){

    if (root == NULL){
        return;
    }
    post_order(root->left);
    post_order(root->right);

    cout << root->data << " ";
}

node* find_min(node* root){

    while (root->left != NULL){
        root = root->left;
    }
    cout << root->data << endl;
    return root;
}

node* find_max(node* root){

    while (root->right != NULL){
        root = root->right;
    }
    cout << root->data << endl;
    return root;
}
