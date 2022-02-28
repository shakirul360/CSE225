#include <iostream>
#include "stacktype.h"
#include "queuetype.h"

//#include "stacktype.cpp"
using namespace std;

int main(){

//    StackType<int> st;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    st.pop();
//    cout << st.peek() << endl;

    int item;

    QueType<int> que;

    que.enqueue(2);
    que.dequeue(item);
    cout << item << endl;
    cout << que.is_Empty() << endl;
    que.enqueue(3);
    cout << que.is_Empty() << endl;
    cout << "Hello world!" << endl;
    return 0;
}

