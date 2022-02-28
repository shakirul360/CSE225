#include "DynArr.h"
#include <iostream>
using namespace std;

template <class T>
DynArr<T>::DynArr(){
    data = NULL;
    size = 0;
}

template <class T>
DynArr<T>::DynArr(int s){
    data = new T[s];
    size = s;
}

template <class T>
DynArr<T>::~DynArr(){
    delete []data;
}

template <class T>
void DynArr<T>::allocate(int s){
    if (data != NULL) delete []data;
    data = new T[s];
    size = s;
}

template <class T>
void DynArr<T>::setValue(int idx, T val){
    data[idx] = val;
}

template <class T>
T DynArr<T>::getValue(int idx){
    if (idx < 0 || idx > size){
        return;
    }
    else
        return data[idx];
}
