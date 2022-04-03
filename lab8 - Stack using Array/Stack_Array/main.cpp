#include <iostream>
#include "Stack_arr.cpp"

using namespace std;

int main() {

    Stack_arr<int> s1;
    Stack_arr<int> s2;
    int k;
    int idx = 0;
    int arr[10];
    int val;


    for (int i = 10; i <= 100; i+=10){
        arr[idx] = i;
        idx++;
    }

    cout << "Enter k:  ";
    cin >> k;

    for (int i = 0; i < k; i++){
        s1.push(arr[i]);
    }

    while (s1.is_Empty() != true){
        cout << s1.Top() << "\t";
        s1.pop();
    }

    for (int i = k; i < 10; i++){
        cout << arr[i] << "\t";
    }



    cout << endl;







    return 0;
}
//5 4 10
//1 6 4 2 4
//5 8 1 2
