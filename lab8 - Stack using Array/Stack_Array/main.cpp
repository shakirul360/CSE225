#include <iostream>
#include "Stack_arr.cpp"

using namespace std;

int main() {
    Stack_arr<int> st;

    cout << st.is_Empty() << endl;
    st.push(5);
    st.push(7);
    st.push(4);
    st.push(2);
    st.push(3);
    //cout << st.is_Empty() << endl;
    //cout << st.is_full() << endl;


    Stack_arr<int> aux;

    while (st.is_Empty() != true){
        aux.push(st.Top());
        //cout << aux.Top() << "\t";
        st.pop();
    }
    cout << endl;
    while (aux.is_Empty() != true){
        st.push(aux.Top());
        cout << st.Top() << "\t";
        aux.pop();
    }
    cout << endl;

    cout << st.is_full() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
