#ifndef STACK_H
#define STACK_H

struct node{

    int data;
    node *next;

};
template <class T>
class Stack
{
    public:
        Stack();
        ~Stack();
        void push(T item);
        void pop();
        T top();

    private:
        node *head;
};

#endif // STACK_H
