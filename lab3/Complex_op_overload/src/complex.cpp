#include "complex.h"
#include <iostream>

using namespace std;

Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}
Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}

Complex operator+(Complex a, Complex b) {
    Complex t;
    t.Real = a.Real + b.Real;
    t.Imaginary = a.Imaginary + b.Imaginary;
    return t;
}

Complex operator+(Complex a, int b) {
    Complex t;
    t.Real = a.Real;
    t.Imaginary = a.Imaginary + b;
    return t;
}

Complex operator+(int  a, Complex b) {
    Complex t;
    t.Real = a+ b.Real;
    t.Imaginary = b.Imaginary;
    return t;
}


Complex operator-(Complex a, Complex b) {
    Complex t;
    t.Real = a.Real - b.Real;
    t.Imaginary = a.Imaginary - b.Imaginary;
    return t;
}

Complex operator-(Complex a, int b) {
    Complex t;
    t.Real = a.Real;
    t.Imaginary = a.Imaginary - b;
    return t;
}

Complex operator-(int  a, Complex b) {
    Complex t;
    t.Real = a - b.Real;
    t.Imaginary = b.Imaginary;
    return t;
}

Complex operator*(Complex a, Complex b) {
    Complex t;
    t.Real = (a.Real * b.Real) + (a.Imaginary * b.Imaginary *  - 1);
    t.Imaginary = (a.Real * b.Imaginary) + (a.Imaginary * b.Real);
    return t;
}

Complex operator*(Complex a, int b) {
    Complex t;
    t.Real = a.Real * b;
    t.Imaginary = a.Imaginary * b;
    return t;
}

Complex operator*(int  a, Complex b) {
    Complex t;
    t.Real = a * b.Real;
    t.Imaginary = b.Imaginary * a;
    return t;
}


bool operator!= (Complex a, Complex b) {

    return !((a.Real == b.Real) && (a.Imaginary == b.Imaginary));
}

bool operator!= (Complex a, int b) {
    return !((a.Real == b) && (a.Imaginary == 0));
}

bool operator!= (int  a, Complex b) {
    return !((a == b.Real) && (b.Imaginary == 0));
}


void Complex::Print() {
    if (Imaginary < 0)
        cout << Real << " " << Imaginary << "i"<< endl;
    else if (Imaginary > 0)
        cout << Real << " + " << Imaginary << "i"<< endl;
    else
        cout << Real << endl;
}
