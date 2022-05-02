#include "HashTable.h"
#include <iostream>

using namespace std;

HashTable::HashTable(int max)
{
    list = new int[max];
    for (int i = 0; i < max; i++){
        list[i] = -2;
    }
    nums = 0;
    maxSize = max;
}

HashTable::~HashTable()
{
    delete list;
}

int HashTable::hash_func(int key){

    return (key % 20);
}

void HashTable::Insert(int x){
    int idx;

    if (nums == maxSize){
        cout << "Array is full!" << endl;
        return;
    } else {

        idx = hash_func(x);

        if (list[idx] < 0){

            list[idx] = x;
            nums++;
            return;

        } else {

            for (int i = idx; i < maxSize; i++){
                if (list[i] < 0){
                    list[i] = x;
                    nums++;
                    return;
                }
            }
        }
    }

    for (int i = 0; i < maxSize; i++){
        if (list[i] < 0){
            list[i] = x;
            nums++;
            return;
        }
    }

}

int HashTable::Find(int x){
    int key = hash_func(x);
    //cout << key << endl;

    if (list[key] == x){
        return key;
    } else if (list[key] == -2){
        return -1;
    } else {                                     //(list[key] == -1)

        for (int i = key; i < maxSize; i++){
            if (list[i] == x){
                return i;
            } else if (list[i] == -2){
                return -1;
            }
        }
        for (int i = 0; i < maxSize; i++){
            if (list[i] == x){
                return i;
            } else if (list[i] == -2){
                return -1;
            }
        }
    }
}

void HashTable::Delete(int x){

    int key = hash_func(x);


    if (list[key] < 0){
        return;
    } else if (list[key] == x){

        if (list[key + 1] < 0){
            list[key] = -1;
        nums--;
        } else {
            int key2 = key + 1;
            int keys = key;
            while (list[key2] >= 0 && (list[key2] % 20) == key && key2 != maxSize - 1){
                list[keys] = list[key2];
                keys++;
                key2++;
            }
            //cout << key2 << endl;
            if (key2 == maxSize - 1){
                list[keys] = list[key2];
                //list[key2] = -1;
                //cout << hash_func(list[key2]) << endl;
                if (hash_func(list[0]) == hash_func(list[key2])){
                    list[key2] = list[0];
                }
                int x;
                for (int i = 0; i < key; i++){
                    if ((hash_func(list[i]) == key) && hash_func(list[i + 1]) == key){
                        list[i] = list[i + 1];
                    } else {
                        x = i;
                        break;
                    }

                }
                //cout << "x = " << x << endl;
                if ((hash_func(list[x]) == key)){
                    list[x] = -1;
                }

            }
            nums--;

        }
    }

}


void HashTable::print(){
    for (int i = 0; i < maxSize; i++){
        if (list[i] == -1){
            cout << "-1 ";
        }else if (list[i] == -2){
            cout << "-2 ";
        } else {
            cout << list[i] << " ";
        }
    }
    cout << endl;
}

HashTable HashTable::Rehash(){

    HashTable h2(maxSize);

    for (int i = 0; i < maxSize; i++){

        if (list[i] == -1 || list[i] == -2){
            h2.list[i] = -2;
        } else {
            h2.list[i] = list[i];
        }
    }
    return h2;
}

