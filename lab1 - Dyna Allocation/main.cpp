#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void Task1();
void Task2();
void task3();

int main(){

    //ios_base::sync_with_stdio(false); cin.tie(nullptr);

    Task1();
    Task2();
    task3();

}

void Task1(){

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter integers: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Array = ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    delete []arr;

}

void Task2(){

    int row, col;
    cout << "Enter rows and columns: ";
    cin >> row;
    cin >> col;

    char **arr = new char*[row];

    for (int i = 0; i < row; i++){
        arr[i] = new char[col];
        //cin >> arr[i];
    }

    for (int i = 0; i < row; i++){
        //arr[i] = new char[col];
        cin >> arr[i];
    }

    for (int i = 0; i < row; i++){
        cout << arr[i]<< endl;
    }

    for (int i = 0; i < row; i++){
        delete [] arr[i];
    }

    delete [] arr[row];

}

void task3(){

    int row, col, col_var;
    cout << "Enter rows and columns: ";
    cin >> row;

    int ** arr = new int* [row];

    //size_arr stores the sizes of each column to help with printing
    int *size_arr = new int[row];

    for (int i = 0; i < row; i++){
        cout << "Enter column length: ";
        cin >> col;
        arr[i] = new int[col];
        size_arr[i] = col;

        cout << "Enter values of " << i + 1 << "th array: ";
        for (int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    // printing 2d array

    for (int i = 0; i < row; i++){

        col_var = size_arr[i];
        cout << "Size = " << col_var << endl;

        cout << "array " << i << " : ";

        for (int j = 0; j < col_var; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++){
        delete [] arr[i];
    }

    delete [] arr;
    delete [] size_arr;

    cout << "de-allocated memory successfully";
}
