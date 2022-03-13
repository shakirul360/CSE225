#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int factorial (int n);

int main(){

    //ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int a;
    cout << "Enter an integer: ";
    cin >> a;
    cout << factorial(a) << endl;
}


int factorial (int n){
    int res = 1;
    while (n > 1){
        res *= n;
        n = n - 1;
    }
    return res;
}
