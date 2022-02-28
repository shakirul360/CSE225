#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int a, b, res;
    char op;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Operation to be performed?: ";
    cin >> op;

    if (op == '+'){
        res = a + b;
    } else if (op == '-'){
        res = a - b;
    } else if (op == '*'){
        res = a * b;
    }

    cout << res;
}


