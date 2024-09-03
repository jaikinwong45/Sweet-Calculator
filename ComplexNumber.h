#pragma once
#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include "Scientific.h"
class ComplexNumber : public Scientific {
private:
	double real;
	double imaginary;
public:
	// Prototypes for ComplexNumber.cpp
	ComplexNumber();
	ComplexNumber(double realNumber, double imaginaryNumber);

	double getReal();
	void setReal(double realNumber);
	void setImaginary(double imaginaryNumber);
	double getImaginary();

	ComplexNumber add(ComplexNumber b);
	ComplexNumber subtract(ComplexNumber b);
	ComplexNumber divide(ComplexNumber b);
	ComplexNumber multiply(ComplexNumber b);

	double magnitude();
};
#endif