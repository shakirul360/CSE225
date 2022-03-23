#ifndef QUEUE_H
#define QUEUE_H

struct node {

    int data;
    node *next;

};

template <class T>
class Queue
{
    public:
        Queue();
        void enqueue(T item);
        void dequeue ();
        T front();

    private:
        node *head;
};

#endif // QUEUE_H
