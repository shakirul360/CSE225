#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};

node* newNode(int item)
{
    node* temp=new node();
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

node* Insert(node* root, int item)
{
    if(root==NULL)
    {
        root=newNode(item);
        return root;
    }
    else if(item<=root->data)
    {
        root->left=Insert(root->left, item);

    }
    else
    {
        root->right=Insert(root->right,item);
    }
    return root;
}

void PreOrder(node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<< " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void Inorder(node* root)
{
    if(root==NULL)
        return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void PostOrder(node* root)
{
    if(root==NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<< " ";
}
node* FindMin(node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;//int root->data;
}
//smallest largest simulations
int main()
{
    node* root=NULL;

    root= Insert(root, 25);
    root= Insert(root, 15);
    root= Insert(root, 10);
    root= Insert(root, 20);
    root= Insert(root, 50);
    root= Insert(root, 40);
    root= Insert(root, 60);
    PreOrder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    return 0;
}
