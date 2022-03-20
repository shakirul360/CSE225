#include <iostream>
#include "Queue.cpp"

using namespace std;
void print_q(Queue<int> q);
int main()
{
    Queue<int> q;

    //cout << q.is_Empty() << endl;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(2);
    //cout << q.is_Empty() << endl;
    //cout << q.is_full() << endl;
    q.enqueue(6);
    //cout << q.is_full() << endl;
    q.enqueue(8);
    //cout << q.Front() << endl;
    //q.dequeue();
    //cout << q.Front() << endl;


    print_q(q);

    return 0;
}

void print_q(Queue<int> q){
    Queue<int> aux;

    while(!q.is_Empty())
    {
        cout<<q.Front()<<endl;
        aux.enqueue(q.Front());
        q.dequeue();
    }
    while (!aux.is_Empty())
    {
        q.enqueue(aux.Front());
        aux.dequeue();
    }
}
