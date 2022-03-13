#include <iostream>
#include "complex.h"
using namespace std;

int main() {
    cout << "Hello world!" << endl;
    Complex a(2,3);
    Complex b(2,3);
    Complex c;

//    c = a * b;
//    c.Print();
//    Complex d;
//    d = c * 2;
//    d.Print();
//    d = 2 * d;
//    d.Print();

    if (a != b){
        cout << "not equal";
    }

    if (a != 2){
        cout << "not equal";
    }

    if (2 != a){
        cout << "not equal";
    }
    return 0;
}
