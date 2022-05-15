#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int arr[5] = {6,5,3,2,4};
    int temp;

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++){

        for (int j = 5 - 1; j > i; j--){
            if (arr[j] > arr[j - 1]){
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }


    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

}


