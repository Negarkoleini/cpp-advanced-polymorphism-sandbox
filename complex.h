#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Complex {
private:
    float real;
    float image;
public:
    Complex();
    Complex(float r, float i);
    Complex(const Complex& c);
    float getReal();
    float getImage();
    void setReal(float r);
    void setImage(float i);
    Complex operator +(const Complex &a);
    Complex operator *(const Complex& a);
    Complex operator =(const Complex& a);
    Complex operator =(float a);
    float operator ()();
    bool operator<(const Complex& a);
    bool operator>(const Complex& a);
    friend istream& operator >> (istream& input, Complex& c);
    friend ostream& operator << (ostream& out, Complex& c);


};



#endif
