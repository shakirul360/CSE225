#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int arr[5] = {6,5,3,2,4};
    int temp, min_idx, j, key;

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < 5; i++){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }


    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

}


