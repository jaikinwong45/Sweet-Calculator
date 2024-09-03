#pragma once

#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H

#include "Basic.h"

class Scientific : public Basic {
protected:
	// Prototypes for scientific.cpp
	double squareRoot(double x);
	double cubeRoot(double x);
	double exponential(double pwr, double base);

	double factorial(double x);

	double sine(double x);
	double cosine(double x);
	double tangent(double x);

	double arcSine(double x);
	double arcCosine(double x);
	double arcTangent(double x);

	double sineH(double x);
	double cosineH(double x);
	double tangentH(double x);

	double ln(double x);
	double logB(double base, double x); //add B after or will overide cmaths function 
	double absoluteValue(double x);

	int greatestCommonDivisor(int x, int y);
	int leastCommonMultiple(int x, int y);

	double hypotenuse(double x, double y);

	double calculateAge(double birthYear, double currentYear);

	double calculateBMI(double wgt, double hgt);
	int binaryToDecimal(string binary);
};
#endif
