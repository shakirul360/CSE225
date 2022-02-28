#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int x = 10;
    cout << "x = " << x << endl;
    int *p = &x;
    cout << "p = "<< p << endl;
    int **pp = &p;
    cout << "pp = "<< pp << endl;
    cout << "*pp = "<< *pp << endl;
    cout <<  "**pp = " << **pp << endl;
    **pp = 15;
    cout << "**pp = "<< **pp << endl;

}


