#ifndef BST_H
#define BST_H



struct node{
    int data;
    node *left;
    node *right;
};

class BST
{
    public:
        BST();
        bool is_empty();
        void insert(int item);
        void in_order();
        void post_order();
        int length_is();
        bool retrieve_item(int item);
        void delete_item(int item);


    private:
        node *root;
};

#endif // BST_H
