#include <iostream>
#include "Stack_arr.cpp"

using namespace std;

int main() {

    Stack_arr<int> s1;
    Stack_arr<int> s2;
    int arr[10];
    int a, b;

    int dummy_sum;
    int s1_size, s2_size, total, counter = 0, val, sum = 0, arr_index = 0;

    bool flaga, flagb;

    cout << "enter size of Stack 1: ";
    cin >> s1_size;
    cout << "enter size of Stack 2: ";
    cin >> s2_size;
    cout << "enter total value: ";
    cin >> total;


    cout << "Enter values for Stack A: ";
    for (int i = 0; i < s1_size; i++){
        cin >> val;
        s1.push(val);
    }

    cout << "Enter values for Stack B: ";
    for (int i = 0; i < s2_size; i++){
        cin >> val;
        s2.push(val);
    }


        while (sum < total){

        a = s1.Top();
        b = s2.Top();



        if (a < b){
            sum += s1.Top();
            arr[arr_index] = s1.Top();
            s1.pop();


        } else if (b <= a) {
            sum += s2.Top();
            arr[arr_index] = s2.Top();
            s2.pop();
        }

        if (sum < total){
            counter++;
            arr_index++;
        }

    }




    cout << counter << endl;

    for (int i = 0; i < arr_index; i++){
        cout << arr[i] << "\t";
    }





    cout << "Hello world!" << endl;
    return 0;
}
//5 4 10
//1 6 4 2 4
//5 8 1 2
