#pragma once

#ifndef BASIC_H
#define BASIC_H

#include <string>
using namespace std;

class Basic {
/*In C++, there are three access specifiers :
public - members are accessible from outside the class
private - members cannot be accessed(or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, 
they can be accessed in inherited classes.
*/
protected:
	//Prototype functions of basic arithmetic and modulus
	double add(double x, double y);
	double add(double x, double y, double z); //overloaded functions to support more arguments
	double subtract(double x, double y);
	double multiply(double x, double y);
	double multiply(double x, double y, double z);
	double multiply(double x, double y, double z, double u);
	double divide(double x, double y);
	int modulus(int x, int y);
};
#endif