#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr() {
    data = NULL;
    size = 0;
}
dynArr::dynArr(int s) {
    data = new int[s];
    size = s;
}

dynArr::dynArr(int row, int col) {
    int **data = new int*[col];
    size = row;
}

dynArr::~dynArr() {
    delete [] data;
}
int dynArr::getValue(int index) {
    return data[index];
}

void dynArr::setValue(int index, int value) {
    data[index] = value;
}


void dynArr::allocate(int s){
    int *arr = new int[s];

    if (data != NULL){
        for (int i = 0; i < size; i++){
            arr[i] = data[i];
        }
    }
    data = arr;

    size = s;
    cout << "Allocated" << endl;
}

void dynArr::deallocate(){

    if (data != NULL){
            delete [] data;
        }

    cout << "deallocated";
}



