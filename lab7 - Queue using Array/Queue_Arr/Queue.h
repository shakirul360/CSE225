#ifndef QUEUE_H
#define QUEUE_H

int const MAX_ITEMS = 6;

template <class T>
class Queue
{
    public:
        Queue();
        bool is_full();
        bool is_Empty();
        void enqueue(T item);
        void dequeue();
        T Front();
        void make_empty();

    private:
        int front;
        int rear;
        T items[MAX_ITEMS];
};

#endif // QUEUE_H
