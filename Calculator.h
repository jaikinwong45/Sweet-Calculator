#pragma once
#ifndef CALCUALTOR_H
#define CALCULATOR_H

#include <string>
#include "Basic.h"
#include "Scientific.h"
#include "UnitConverter.h"
#include "Geometry.h"
#include "ComplexNumber.h"

//Calculator is made up of all other classes
class Calculator : public Basic, public Scientific, public Geometry, public UnitConverter, public ComplexNumber {
private:
	double result;	//stores result throughout the loop
	bool pwr;	//power of the calculator
	double num1, num2; //tow double user inputs

public:
	Calculator();
	void driver();	//runs the code
	void displayInitalMenu();
	bool singleOperandFunct(string operand);
};
#endif

