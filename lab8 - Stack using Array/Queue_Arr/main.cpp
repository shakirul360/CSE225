#include <iostream>
#include "Queue.cpp"

using namespace std;

int main()
{
    Queue<int> q;

    cout << q.is_Empty() << endl;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(2);
    cout << q.is_Empty() << endl;
    cout << q.is_full() << endl;
    q.enqueue(6);
    cout << q.is_full() << endl;
    q.enqueue(8);
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.Front() << endl;

    return 0;
}
