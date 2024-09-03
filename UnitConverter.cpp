#include "UnitConverter.h"

double UnitConverter::convertToMeters(double value, string unit) {
	if (unit == "mm") return { divide(value , 1000.0) };
	else if (unit == "cm") return { divide(value , 100.0) };
	else if (unit == "dm") return{ divide(value , 10.0) };
	else if (unit == "m") return { value };
	else if (unit == "km") return { multiply(value , 1000.0) };
	else if (unit == "in") return { multiply(value , 0.0254) };
	else if (unit == "ft") return { multiply(value , 0.3048) };
	else if (unit == "yd") return { multiply(value , 0.9144) };
	else if (unit == "mile") return { multiply(value , 1609.34) };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertFromMeters(double value, string unit) {
	if (unit == "mm") return { multiply(value , 1000.0) };
	else if (unit == "cm") return { multiply(value , 100.0) };
	else if (unit == "dm") return { multiply(value , 10.0) };
	else if (unit == "m") return { value };
	else if (unit == "km") return { divide(value , 1000.0) };
	else if (unit == "in") return { divide(value , 0.0254) };
	else if (unit == "ft") return { divide(value , 0.3048) };
	else if (unit == "yd") return { divide(value , 0.9144) };
	else if (unit == "mile") return { divide(value , 1609.34) };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertToGrams(double value, string unit) {
	if (unit == "Gt") return { multiply(value , 1e15) };
	else if (unit == "Mt") return { multiply(value , 1e12) };
	else if (unit == "t") return { multiply(value , 1e6) };
	else if (unit == "kg") return { multiply(value , 1e3) };
	else if (unit == "g") return { value };
	else if (unit == "mg") return { multiply(value , 1e-3) };
	else if (unit == "µg") return { multiply(value , 1e-6) };
	else if (unit == "ng") return { multiply(value , 1e-9) };
	else if (unit == "pg") return { multiply(value , 1e-12) };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertFromGrams(double value, string unit) {
	if (unit == "Gt") return { multiply(value , 1e-15) };
	else if (unit == "Mt") return { multiply(value , 1e-12) };
	else if (unit == "t") return { multiply(value , 1e-6) };
	else if (unit == "kg") return { multiply(value , 1e-3) };
	else if (unit == "g") return { value };
	else if (unit == "mg") return { multiply(value , 1e3) };
	else if (unit == "µg") return { multiply(value , 1e6) };
	else if (unit == "ng") return { multiply(value , 1e9) };
	else if (unit == "pg") return { multiply(value , 1e12) };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertToMilliliters(double value, string unit) {
	if (unit == "ml") return { value };
	else if (unit == "cl") return { multiply(value , 10.0) };
	else if (unit == "dl") return { multiply(value , 100.0) };
	else if (unit == "L") return { multiply(value , 1000.0) };
	else if (unit == "cm3") return{ value };
	else if (unit == "mL") return { value };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertFromMilliliters(double value, string unit) {
	if (unit == "ml") return{ value };
	else if (unit == "cl") return { divide(value , 10.0) };
	else if (unit == "dl") return { divide(value , 100.0) };
	else if (unit == "L") return { divide(value , 1000.0) };
	else if (unit == "cm3") return{ value };
	else if (unit == "mL") return { value };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertAreaToSquareMeters(double value, string unit) {
	if (unit == "mm2") return { divide(value , 1000000.0) };
	else if (unit == "cm2") return { divide(value , 10000.0) };
	else if (unit == "dm2") return{ divide(value , 100.0) };
	else if (unit == "m2") return { value };
	else if (unit == "km2") return{ multiply(value , 1000000.0) };
	else if (unit == "in2") return { multiply(value , 0.00064516) };
	else if (unit == "ft2") return{ multiply(value , 0.092903) };
	else if (unit == "yd2") return { multiply(value , 0.836127) };
	else if (unit == "mile2") return{ multiply(value , 2589988.11) };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertAreaFromSquareMeters(double value, string unit) {
	if (unit == "mm2") return { multiply(value , 1000000.0) };
	else if (unit == "cm2") return{ multiply(value , 10000.0) };
	else if (unit == "dm2") return{ multiply(value , 100.0) };
	else if (unit == "m2") return { value };
	else if (unit == "km2") return{ divide(value , 1000000.0) };
	else if (unit == "in2") return { divide(value , 0.00064516) };
	else if (unit == "ft2") return{ divide(value , 0.092903) };
	else if (unit == "yd2") return{ divide(value , 0.836127) };
	else if (unit == "mile2") return{ divide(value , 2589988.11) };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertPressureToPascals(double value, string unit){
	if (unit == "mm2") return { multiply(value , 1000000.0) };
	else if (unit == "cm2") return { multiply(value , 10000.0) };
	else if (unit == "dm2") return { multiply(value , 100.0) };
	else if (unit == "m2") return { value };
	else if (unit == "km2") return { divide(value , 1000000.0) };
	else if (unit == "in2") return { divide(value , 0.00064516) };
	else if (unit == "ft2") return { divide(value , 0.092903) };
	else if (unit == "yd2") return { divide(value , 0.836127) };
	else if (unit == "mile2") return{ divide(value , 2589988.11) };
	else { return -1.0; } // Invalid unit
}

double UnitConverter::convertPressureFromPascals(double value, string unit){
	if (unit == "atm") return { divide(value , 101325.0) };
	else if (unit == "mmHg" || unit == "torr") return { divide(value , 133.322) };
	else if (unit == "psi") return { divide(value , 6894.76) };
	else if (unit == "kPa") return { divide(value , 1000.0) };
	else if (unit == "bar") return { divide(value , 100000.0) };
	else if (unit == "MPa") return { divide(value , 1000000.0) };
	else { return -1.0; } //Invalid unit
}