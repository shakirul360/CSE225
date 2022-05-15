#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    //ios_base::sync_with_stdio(false); cin.tie(nullptr);

    double *radius = new double;
    cout << "Enter radius: ";
    cin >> *radius;

    double *area = new double;
    *area = 3.14 * (*radius * (*radius));

    cout << *area << endl;

    delete radius;
    delete area;
    cout << &radius;

}


