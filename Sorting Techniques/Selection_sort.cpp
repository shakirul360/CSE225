#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int arr[5] = {6,5,3,2,4};
    int temp, min_idx, j;

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++){
        min_idx = i;

        for (j = i + 1; j < 5; j++){
            if (arr[j] > arr[min_idx]){
                min_idx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }


    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

}


