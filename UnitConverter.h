#pragma once

#ifndef UNITCONVERTER_H
#define UNITCONVERTER_H

#include "Scientific.h"
#include <string>
using namespace std;

class UnitConverter : public Scientific {
protected:
//Prototypes for Unitconverter.cpp
	// Conversion functions for Metric
	double convertToMeters(double value, string unit);
	double convertFromMeters(double value, string unit);

	// Conversion functions for Mass
	double convertToGrams(double value, string unit);
	double convertFromGrams(double value, string unit);

	// Conversion functions for Volume
	double convertToMilliliters(double value, string unit);
	double convertFromMilliliters(double value, string unit);

	// Conversion functions for Temperature
	double convertTemperature(double value, string srcUnit, string dstUnit);


	// Conversion functions for Area
	double convertAreaToSquareMeters(double value, string unit);
	double convertAreaFromSquareMeters(double value, string unit);

	// Conversion functions for Pressure
	double convertPressureToPascals(double value, string unit);
	double convertPressureFromPascals(double value, string unit);
};
#endif