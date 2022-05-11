#include <iostream>
//insert, traversals, find_min, find_max, delete

using namespace std;
struct node {
    int data;
    node *left;
    node *right;
};
node* NewNode(int item);
node* insert(node * root, int item);
bool root_arr[8];
int i = 0;
int arr[8];

void in_order(node* root);
void pre_order(node* root);
void post_order(node* root);
node* find_min(node* root);
node* find_max(node* root);
node* Delete(node *root, int val);

int main() {

    node *root = NULL;

    root = insert(root, 25);
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 70);
//    cout << "pre-order - ";
//    pre_order(root);
//    cout<<endl;
//    cout << "in-order - ";
//    in_order(root);
//    cout<<endl;
//    cout << "post-order -";
//    post_order(root);
//    cout<<endl;
//    find_min(root);
//    find_max(root);
//
//    cout << "Deleting 50..." << endl;
//    Delete(root, 50);
//    pre_order(root);
//    cout << endl;
//    in_order(root);

    in_order(root);
    for (int i = 0; i < 8; i++){
        cout << arr[i] << "\t";
    }

    int x;
    cout << endl;
    cout << "Enter nth largest value to find: ";
    cin >> x;
    cout << arr[8 - x] << endl;

    if (root_arr[8 - x] == 1){
        cout << "it is a leaf node" << endl;
    } else {
        cout << "it is not a leaf node" << endl;
    }




    cout << "Hello world!" << endl;
    return 0;
}


node* NewNode(int item){
    node *temp = new node();
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
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
    if (root->right == NULL && root->left == NULL){
        root_arr[i] = 1;
    }
    in_order(root->left);
    //cout << root->data << " ";
    arr[i] = root->data;
    i++;
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
    cout << "Minimum from root = " << root->data << endl;
    return root;
}

node* find_max(node* root){

    while (root->right != NULL){
        root = root->right;
    }
    cout << "Maximum from root = " << root->data << endl;
    return root;
}

node* Delete(node *root, int val){

    node* temp;

    if (root == NULL){
        return root;

    } else if (root->data < val){
        root->right = Delete(root->right, val);

    } else if (root->data > val){
        root->left = Delete(root->left, val);

    } else {

        if (root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;

        } else if (root->left != NULL && root->right == NULL){
             temp = root;
             root = root->left;
             delete temp;

        } else if (root->left == NULL && root->right != NULL){
            temp = root;
            root = root->right;
            delete temp;

        } else {
            temp = find_max(root->left);     // could have also used the right subtree to find minimum
            // temp = find_min(root->right);
            root->data = temp->data;
            root->left = Delete(root->left, temp->data);
            //root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}
