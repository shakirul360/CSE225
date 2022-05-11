#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(nullptr);

}


int HashTable::Find(int val){
    int key = val % 20;

    if (arr[key] == val){
        return key;
    } else {
        for (int i = key; i < maxSize; i++){
            if (arr[i] == val){
                return i;
            }
        }
    }
}

int HashTable::Insert(int val){
    bool inserted = false;
    int key = val % 20;

    if (arr[key] < 0){
        arr[key] = val;
        inserted = true;
    } else {
        for (int i = key; i < maxSize; i++){
            if (arr[i] < 0){
                arr[i] = key;
                inserted = true;
            }
        }
    }

    if (!inserted){
        cout << "Array full" << endl;
    }
}

void HashTable::Print(){

}
