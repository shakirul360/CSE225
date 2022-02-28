#include <iostream>
#include "dynarr.h"


void Task1();
void Task2();
void Task3();

using namespace std;

int main()
{

    Task2();

    return 0;
}

void Task1(){

    dynArr arr1;
    dynArr arr2(5);
    int val;

    for (int i = 0; i < 5; i++){
        cout << "Enter value: ";
        cin >> val;
        arr2.setValue(i, val);
    }
    cout << " values: ";
    for (int i = 0; i < 5; i++){
        cout << arr2.getValue(i);
    }
    cout <<endl;

}

void Task2(){

    dynArr arr(2);
    arr.setValue(0, 0);
    arr.setValue(1, 1);

    arr.allocate(5);

    for (int i = 2; i < 7; i++){
        arr.setValue(i, i);
    }

    cout << "values: ";
    for (int i = 0; i < 7; i++){
        cout << arr.getValue(i) << " ";
    }
    cout << endl;

    arr.deallocate();
}

void Task3(){
    dynArr arr(3,4);

}
