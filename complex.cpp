#include <iostream>
#include "complex.h"
#include <cmath>
#include <string>

using namespace std;


Complex::Complex() {
	real = 0;
	image = 0;

}
Complex::Complex(float r, float i) {

	real = r;
	image = i;
}
Complex::Complex(const Complex& c) {
	real = c.real;
	image = c.image;

}
float Complex::getReal() {
	return real;
}
float Complex::getImage() {
	return image;
}
void Complex::setReal(float r) {
	real = r;
}
void Complex::setImage(float i) {
	image = i;
}

istream& operator >> (istream& input, Complex& c) {
	string str;
	input >> str;

	string num1, num2;
	int i = 0;

	for ( ; str[i] != '+'; ++i)
		num1 += str[i];

	++i;

	for ( ; str[i] != 'i'; ++i)
		num2 += str[i];

	c.real = stof(num1);
	c.image = stof(num2);

	return input;
}


ostream& operator << (ostream& out, Complex& c){
	out << "the real part is : " << c.real << endl;
	out << "the imaginary part is : " << c.image << endl;
	return out;
}

Complex Complex::operator +(const Complex& a) {

	Complex tmp(real + a.real, image + a.image);
	return tmp;

}

Complex Complex:: operator *(const Complex& a) {
	Complex resualt;
	resualt.real = this->real * a.real - (this->image * a.image);
	resualt.image = this->image * a.real + this->real * a.image;

	return resualt;

}

Complex Complex::operator =(const Complex& a) {
	this->real= a.real ;
	this->image = a.image;

	return *this;
}

Complex Complex::operator =(float a) {
	this->real = a;
	this->image = 0;

	return *this;
}

float Complex::operator ()() {
	return sqrt(real * real + image * image);

}

bool Complex::operator<(const Complex& a) {
	float thissize = sqrt(this->real * this->real + (this->image * this->image));
    float asize = sqrt(a.real * a.real + a.image * a.image);

	return thissize < asize;
}

bool Complex::operator>(const Complex& a) {
	float thissize = sqrt(this->real * this->real + (this->image * this->image));
    float asize = sqrt(a.real * a.real + (a.image * a.image));

	return thissize > asize;
}



















