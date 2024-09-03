#include "ComplexNumber.h"
//Default constructor sets real and imaginary to 0
ComplexNumber::ComplexNumber() {
	real = 0.0;
	imaginary = 0.0;
}

ComplexNumber::ComplexNumber(double realNumber, double imaginaryNumber) {
	real = realNumber;
	imaginary = imaginaryNumber;
}
//Accessor
double ComplexNumber::getReal() {
	return real;
}
//Mutator 
void ComplexNumber::setReal(double realNumber) {
	this->real = realNumber;
}
//Mutator 
void ComplexNumber::setImaginary(double imaginaryNumber)
{
	this->imaginary = imaginaryNumber;
}
//Accessor
double ComplexNumber::getImaginary() {
	return imaginary;
}
//cannot use regular arithmetic as it must return Complex
ComplexNumber ComplexNumber::add(ComplexNumber b) {
	return ComplexNumber(real + b.real, imaginary + b.imaginary);
}

ComplexNumber ComplexNumber::subtract(ComplexNumber b) {
	return ComplexNumber(real - b.real, imaginary - b.imaginary);
}

ComplexNumber ComplexNumber::multiply(ComplexNumber b) {
	//(ac-bd) + i(ad+bc)
	return ComplexNumber(real * b.real - imaginary * b.imaginary, real * b.imaginary + imaginary * b.real);
}

ComplexNumber ComplexNumber::divide(ComplexNumber b) {
	//(ac-bd) + i(ad+bc)     / c^2 + d^2
	//add(exponential(2, b.real), exponential(2, b.imaginary));
	double denom = pow(b.real, 2) + pow(b.imaginary, 2);
	return ComplexNumber((real * b.real - imaginary * b.imaginary) / denom, (real * b.imaginary + imaginary * b.real) / denom);
}

double ComplexNumber::magnitude() {
	return squareRoot(exponential(2, real) + exponential(2, imaginary));
}
