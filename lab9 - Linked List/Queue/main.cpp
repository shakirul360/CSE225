#include <iostream>
#include "Queue.cpp"

using namespace std;

int main() {

    Queue<int> q;

    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
