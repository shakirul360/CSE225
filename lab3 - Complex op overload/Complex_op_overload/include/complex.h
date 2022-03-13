#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex {

    public:
        Complex();
        Complex(double, double);

        void Print();
    private:
        double Real, Imaginary;

     friend Complex operator+(Complex a, Complex b);
     friend Complex operator+(Complex a, int b);
     friend Complex operator+(int a, Complex b);

     friend Complex operator- (Complex a, Complex b);
     friend Complex operator-(Complex a, int b);
     friend Complex operator-(int a, Complex b);

     friend Complex operator* (Complex a, Complex b);
     friend Complex operator* (Complex a, int b);
     friend Complex operator *(int a, Complex b);

     friend bool operator!= (Complex a, Complex b);
     friend bool operator!= (Complex a, int b);
     friend bool operator!= (int a, Complex b);
};
#endif // COMPLEX_H_INCLUDED
