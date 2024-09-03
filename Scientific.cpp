#include "Scientific.h"
#include <cmath>
#include <math.h>
using namespace std;
//Function to find sqaure root of a number 
double Scientific::squareRoot(double x) {
	if (x < 0) {
		return NAN;
	}
	return sqrt(x);
}
//Function to find cuberoot of a number 
double Scientific::cubeRoot(double x) {
	return cbrt(x);
}
//Function to find expontent of a number 
double Scientific::exponential(double pwr, double base) {
	return pow(base, pwr);
}
//Function to find sine of a number 
double Scientific::sine(double x) {
	return sin(x);
}
//Function to find cosine of a number 
double Scientific::cosine(double x) {
	return cos(x);
}
//Function to find tangent of a number 
double Scientific::tangent(double x) {
	return tan(x);
}
//Function to find arcsine of a number 
double Scientific::arcSine(double x) {
	//range from -1 to 1
	if (x >= -1 && x <= 1) {
		return asin(x);
	}
	else {
		return NAN;
	}
}
//Function to find arccosine of a number 
double Scientific::arcCosine(double x) {
	//range from -1 to 1
	if (x >= -1 && x <= 1) {
		return acos(x);
	}
	else {
		return NAN;
	}
}
//Function to find arctangent of a number 
double Scientific::arcTangent(double x) {
	//all real numbers range
	return atan(x);
}
//Function to find hyperbolic sine of a number 
double Scientific::sineH(double x) {
	return sinh(x);
}
//Function to find hyperbolic cosine of a number 
double Scientific::cosineH(double x) {
	return cosh(x);
}
//Function to find hyperbolic tangent of a number 
double Scientific::tangentH(double x) {
	return tanh(x);
}
//Function to find the natural logarithm of a number
double Scientific::ln(double x) {
	if (x > 0) {
		return log(x);
	}
	else {
		return NAN;
	}
}
//Function to find the logarithm of a number
double Scientific::logB(double base, double x) {
	if (x == 1 || x <= 0 || base <= 0) {
		return NAN;
	}
	else {
		return divide(log(x), log(base));
	}
}
//Function to find absolute value
double Scientific::absoluteValue(double x) {
	if (x >= 0) {
		return x;
	}
	else {
		return multiply(x, -1); //both negative
	}
}
//Function to find hypotenuse
double Scientific::hypotenuse(double x, double y) {
	if (x < 0 || y < 0) {
		return NAN;
	}
	else {
		return hypot(x, y);
	}
}

//Age calculator function 
double Scientific::calculateAge(double birthYear, double currentYear) {
	return subtract(currentYear, birthYear);
}
//Factorial function 
double Scientific::factorial(double x) {
	if (x < 0) {
		return NAN;  
	}
	else if (x == 1 || x == 0) {
		return 1;
	}
	else {
		return multiply(x, factorial(subtract(x, 1))); //will multiply x by (x-1) unti
	}
}
//BMI function
double Scientific::calculateBMI(double wgt, double hgt) {
	double BMI;
	BMI = multiply(divide(wgt, exponential(2, hgt)), 703);
	// wgt / (pow(hgt, 2)) * 703;
	return BMI;
}
//Binary to decimal function
int Scientific::binaryToDecimal(string binary) {
	int decimal = 0;
	int length = binary.length();
	int powerCount = 0;

	for (int i = subtract(length,1) ; i >= 0 ; i--)
	{
		if (binary[i] == '1')
		{
			decimal += exponential(2,powerCount);
		}
		powerCount++;
	}
	return decimal;
}