#include "Basic.h"
#include <cmath>

//This function adds 2 variables
double Basic::add(double x, double y) {
	return x + y;
}
//This function adds 3 variables
double Basic::add(double x, double y, double z)
{
	return x + y + z;
}
//This function subtracts 2 variables
double Basic::subtract(double x, double y) {
	return x - y;
}
//This function multiplies 2 variables
double Basic::multiply(double x, double y) {
	return x * y;
}
//This function multiplies 3 variables
double Basic::multiply(double x, double y, double z)
{
	return x * y * z;
}
//This function multiples 4 variables
double Basic::multiply(double x, double y, double z, double u)
{
	return x * y * z * u;
}
//This function divied 2 variables
double Basic::divide(double x, double y) {
	if (y == 0) {
		return NAN; //not a number, found in <cmath> to return Not a Number
	}
	else {
		return x / y;
	}
}
//This function uses 2 variables to calculate the modulus
int Basic::modulus(int x, int y) {
	return x % y;
}