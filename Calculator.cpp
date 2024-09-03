#include "Calculator.h"
#include <cmath>
#include <math.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// default constructor that initalizes variables to default values
Calculator::Calculator() {
	result = 0.0;
	pwr = true;
	num1 = 0;
	num2 = 0;
}

void Calculator::driver() { //driver

	while (pwr) { //pwr
		//set num to 0
		num1 = 0;
		num2 = 0;
		
		int initChoice = -1;
		string operation = "";

		int option;

		string category;

		double value;
		string srcUnit, dstUnit;

		string binaryNumber;

		double real, imaginary;
		ComplexNumber complexResult;

		//Initial display screen menu 
		displayInitalMenu();
		cout << "enter choice: ";
		cin >> initChoice;

		switch (initChoice) { //1

		case 1: {	//basic + scientific calculator
			operation = "";
			//menu to guide user input
			cout << endl;
			cout<<"-------------------------------------------------------------"<<endl;
			cout << " \n CALCULATE AGE: num1 is birthYear, num2 is current year " << endl;
			cout << " EXPONENTIAL: num1 is base, num2 is exponent " << endl;
			cout << " LOG: num2 is log base, num1 is x " << endl;
			cout << " CALCULATE BMI: num1 is weight, num2 is height " << endl;
			cout << " HYPOTENUSE: num1 is x, num2 is y \n" << endl;
			cout<<"-------------------------------------------------------------\n"<<endl;
			//if statement to store and offer previous result functionality
			if (!(result == 0.0 || std::isnan(result))) {
				char ANS;
				cout << "use previous result as first number? (y/n) " << endl;

				cin >> ANS;

				if (ANS == 'y' || ANS == 'Y') {
					num1 = result;
					cout << num1 << endl; ;
				}
				else {
					//allows user to enter new first number
					cout << "Enter num1: " << endl;
					cin >> num1;
				}
			}
			else {
				cout << "Enter num1: " << endl;
				cin >> num1;
			}

			//menu to guide user to show available operators
			cout<<"------------ Operator Menu ------------"<<endl;
			
			cout<<"\n+, -, /, *,"<<endl;
			cout<<"sq = (square root), c = (cube root)"<<endl;
			cout<<"e = (exponent), f = (factorial)"<<endl;
			cout<<"s = (sin), c = (cos), t = (tan) "<<endl;
			cout<<"as = arcsin, ac = arccos, at = arctan"<<endl;
			cout<<"sh = sinh, ch = cosh, th = tanh"<<endl;
			cout<<"ln = ln, l = log, abs = (absolute value)" <<endl;
			cout<<"h = hyp, ca = calcAge, b = BMI " << endl;
			cout<<"\n---------------------------------------"<<endl;
			cout<<endl;

			//user enters operations
			cout << "Enter a operator:"<<endl;
			cin >> operation;
			singleOperandFunct(operation);

			//stores result with the appropriate opperator set by the user
			if (singleOperandFunct(operation) == true) {
				if (operation == "sq") {
					result = Scientific::squareRoot(num1);
				}
				else if (operation == "c") {
					result = Scientific::cubeRoot(num1);
				}
				else if (operation == "f") {
					result = Scientific::factorial(num1);
				}
				else if (operation == "s") {
					result = Scientific::sine(num1);
				}
				else if (operation == "c") {
					result = Scientific::cosine(num1);
				}
				else if (operation == "t") {
					result = Scientific::tangent(num1);
				}
				else if (operation == "as") {
					result = Scientific::arcSine(num1);
				}
				else if (operation == "ac") {
					result = Scientific::arcCosine(num1);
				}
				else if (operation == "at") {
					result = Scientific::arcTangent(num1);
				}
				else if (operation == "sh") {
					result = Scientific::sineH(num1);
				}
				else if (operation == "ch") {
					result = Scientific::cosineH(num1);
				}
				else if (operation == "th") {
					result = Scientific::tangentH(num1);
				}
				else if (operation == "ln") {
					result = Scientific::ln(num1);
				}
				else if (operation == "abs") {
					result = Scientific::absoluteValue(num1);
				}
				else {
					cout << "Invalid operator" << endl;
					result = NAN;
				}
			}
			else {
				//user input for second number
				//application of basic calculator
				cout << "enter num2: ";
				cin >> num2;
				if (operation == "+") {
					result = Basic::add(num1, num2);
				}
				else if (operation == "-") {
					result = Basic::subtract(num1, num2);
				}
				else if (operation == "*") {
					result = Basic::multiply(num1, num2);
				}
				else if (operation == "/") {
					result = Basic::divide(num1, num2);
				}
				else if (operation == "e") {
					cout << "num1 is base, num2 is exponent" << endl;
					result = Scientific::exponential(num2, num1);;
				}
				else if (operation == "l") {
					cout << "num2 is log base, num1 is x" << endl;
					result = Scientific::logB(num2, num1);
				}
				else if (operation == "ca") {
					cout << "num1 is birthYear, num2 is current year" << endl;
					result = Scientific::calculateAge(num1, num2);
				}
				else if (operation == "b") {
					cout << "num1 is weight, num2 is height" << endl;
					result = Scientific::calculateBMI(num1, num2);
				}
				else if (operation == "h") {
					cout << "num1 is x, num2 is y" << endl;
					result = Scientific::hypotenuse(num1, num2);
				}
				else {
					cout << "Invalid operator" << endl;
					result = NAN;
				}
			}
			break;
		}//basic + scientific calculator

		case 2: {	//geometric
			
			//do while loop to validate user inoute
			do {
				//opening menu for user input
				cout << "Select shape type:" << endl;
				cout << "1- 2D shapes" << endl;
				cout << "2- 3D shapes" << endl;
				cin >> option;
				
				//error message
				if (option > 2 || option < 1)
					cout << "Error...Invlaid input" << endl;

			} while (option > 2 || option < 1);

			switch (option) {	//option
			//case 1 is selected to output information for 2d shapes
			case 1: { 
				//2d menu
				cout << "----- 2D shape menu -----" << endl;
				cout << "a- Circle" << endl;
				cout << "b- Rectangle" << endl;
				cout << "c- Triangle" << endl;

				//store user input
				char input2d;
				cin >> input2d;

				//ouput desired shape and its information
				switch (input2d) {
				case 'a': {
					double radius;
					cout << "*NOTE - Inputs should be same units." << endl;
					cout << "Enter radius: ";

					//enter peramters for initialized circle class variable
					cin >> radius;
					Circle c(radius);

					//ouput area and perimeter of circle
					//(diameter)
					cout << endl;
					cout << "Area: " << c.getArea() << " units^2" << endl;
					cout << "Perimeter: " << c.getPerimeter() << " units" << endl;
					c.outputShape();
					continue;	//used to leave the loop withuth displaying result
				}
				case 'b': {
					//rectangle ouput
					double length, width;
					cout << "*NOTE - Inputs should be same units." << endl;
					cout << "Enter length and width: ";
					cin >> length >> width;
					Rectangle r(length, width);
					cout << endl;
					cout << "Area: " << r.getArea() << "units^2" << endl;
					cout << "Perimeter: " << r.getPerimeter() << " units" << endl;
					r.outputShape();
					continue;
				}
				case 'c': {
					//triangle output
					double base, height;
					cout << "*NOTE - Inputs should be same units." << endl;
					cout << "Enter base and height: ";
					cin >> base >> height;
					Triangle t(base, height);
					cout << endl;
					cout << "Area: " << t.getArea() << " units^2" << endl;
					cout << "Perimeter: " << t.getPerimeter() << " units" << endl;
					t.outputShape();
					continue;
				}
				default: {
					cout << "Invalid Input" << endl;
					continue;
				}
				}
			case 2: {
				//3d menu
				cout << "----- 3D shape menu -----" << endl;
				cout << "a- Sphere" << endl;
				cout << "b- Cube" << endl;
				cout << "c- Triangular Prism" << endl;
				cout << "d- Cylinder" << endl;
				
				//user enters choice
				char shape3D;
				cin >> shape3D;

				//switch case to ouput desired 3d shape
				switch (shape3D) {
				case 'a': {

					//enter radius as parameter to be stored and utilized in sphere child class
					double radius;
					cout << "Enter radius: ";
					cin >> radius;
					
					//initialized sphere class variable that takes radius as parameter
					Sphere s(radius);

					//ouput volume and surface area
					cout << endl;
					cout << "Volume: " << s.getVolume() << " units^3" << endl;
					cout << "Surface Area: " << s.getSurfaceArea() << " units^2" << endl;
					s.outputShape();
					break;
				}
				case 'b': {
					//cube
					double side;
					cout << "Enter side: ";
					cin >> side;
					Cube c(side);
					cout << endl;
					cout << "Volume: " << c.getVolume() << " units^3" << endl;
					cout << "Surface Area: " << c.getSurfaceArea() << " units^2" << endl;
					c.outputShape();
					break;
				}
				case 'c': {
					//triangular prism
					double base, height, length;
					cout << "*NOTE - Inputs should be same units." << endl;
					cout << "Enter base, height, and length: ";
					cin >> base >> height >> length;
					TriangularPrism tp(base, height, length);
					cout << endl;
					cout << "Volume: " << tp.getVolume() << " units^3" << endl;
					cout << "Surface Area: " << tp.getSurfaceArea() << " units^2" << endl;
					tp.outputShape();
					break;
				}
				case 'd': {
					//cylinder
					double radius, height;
					cout << "*NOTE - Inputs should be same units." << endl;
					cout << "Enter radius and height: ";
					cin >> radius >> height;
					Cylinder c(radius, height);
					cout << endl;
					cout << "Volume: " << c.getVolume() << " units^3" << endl;
					cout << "Surface Area: " << c.getSurfaceArea() << " units^2" << endl;
					c.outputShape();
					continue;
				}
				default: {
					//default case outputs error message
					cout << "Invalid Input" << endl;
					continue;
				}
					   break;;
				}
			default: {
				break;
			}
			}
			}
			}	//option
			break;
		}	//geometric

		case 3: {	//unit converter case
			cout << "Available conversion categories: metric, mass, volume, area, pressure" << endl;
			cout << "Enter the conversion category: ";
			cin >> category;

			if (category == "metric") {

				cout << "Unit Converter" << endl;
				cout << "--------------" << endl;
				cout << "Available units: mm, cm, dm, m, km, in, ft, yd, mile" << endl;
				cout << "Enter source unit: ";
				cin >> srcUnit;
				cout << "Enter destination unit: ";
				cin >> dstUnit;
				cout << "Enter value to be converted: ";
				cin >> value;

				double metersValue = convertToMeters(value, srcUnit);
				if (metersValue == -1.0) {
					cout << "Invalid source unit. Please check the available units." << endl;
				}

				double convertedValue = convertFromMeters(metersValue, dstUnit);
				if (convertedValue == -1.0) {
					cout << "Invalid destination unit. Please check the available units." << endl;
				}

				cout << value << " " << srcUnit << " is equal to " << convertedValue << " " << dstUnit << endl;
			}
			else if (category == "mass") {

				cout << "Mass Converter" << endl;
				cout << "--------------" << endl;
				cout << "Available units: Gt, Mt, t, kg, g, mg, µg, ng, pg" << endl;
				cout << "Enter source unit: ";
				cin >> srcUnit;					cout << "Enter destination unit: ";
				cin >> dstUnit;
				cout << "Enter value to be converted: ";
				cin >> value;

				double gramsValue = convertToGrams(value, srcUnit);
				if (gramsValue == -1.0) {
					cout << "Invalid source unit. Please check the available units." << endl;
				}

				double convertedValue = convertFromGrams(gramsValue, dstUnit);
				if (convertedValue == -1.0) {
					cout << "Invalid destination unit. Please check the available units." << endl;
				}
				cout << value << " " << srcUnit << " is equal to " << convertedValue << " " << dstUnit << endl;
			}
			else if (category == "volume") {

				cout << "Volume Converter" << endl;
				cout << "--------------" << endl;
				cout << "Available units: ml, cl, dl, L, cm3, mL" << endl;
				cout << "Enter source unit: ";
				cin >> srcUnit;
				cout << "Enter destination unit: ";
				cin >> dstUnit;
				cout << "Enter value to be converted: ";
				cin >> value;

				double millilitersValue = convertToMilliliters(value, srcUnit);
				if (millilitersValue == -1.0) {
					cout << "Invalid source unit. Please check the available units." << endl;
				}

				double convertedValue = convertFromMilliliters(millilitersValue, dstUnit);
				if (convertedValue == -1.0) {
					cout << "Invalid destination unit. Please check the available units." << endl;
				}
				cout << value << " " << srcUnit << " is equal to " << convertedValue << " " << dstUnit << endl;
			}

			else if (category == "area") {

				cout << "Area Converter" << endl;
				cout << "--------------" << endl;
				cout << "Available units: mm2, cm2, dm2, m2, km2, in2, ft2, yd2, mile2" << endl;
				cout << "Enter source unit: ";
				cin >> srcUnit;
				cout << "Enter destination unit: ";
				cin >> dstUnit;
				cout << "Enter value to be converted: ";
				cin >> value;

				double squareMetersValue = convertAreaToSquareMeters(value, srcUnit);
				if (squareMetersValue == -1.0) {
					cout << "Invalid source unit. Please check the available units." << endl;
				}

				double convertedValue = convertAreaFromSquareMeters(squareMetersValue, dstUnit);
				if (convertedValue == -1.0) {
					cout << "Invalid destination unit. Please check the available units." << endl;
				}
				cout << value << " " << srcUnit << " is equal to " << convertedValue << " " << dstUnit << endl;

			}
			else if (category == "pressure") {

				cout << "Pressure Converter" << endl;
				cout << "--------------" << endl;
				cout << "Available units: atm, mmHg, torr, psi, kPa, bar, MPa" << endl;
				cout << "Enter source unit: ";
				cin >> srcUnit;
				cout << "Enter destination unit: ";
				cin >> dstUnit;
				cout << "Enter value to be converted: ";
				cin >> value;

				double pascalsValue = convertPressureToPascals(value, srcUnit);
				if (pascalsValue == -1.0) {
					cout << "Invalid source unit. Please check the available units." << endl;
				}

				double convertedValue = convertPressureFromPascals(pascalsValue, dstUnit);
				if (convertedValue == -1.0) {
					cout << "Invalid destination unit. Please check the available units." << endl;
				}

				cout << value << " " << srcUnit << " is equal to " << convertedValue << " " << dstUnit << endl;
			}

			else {
				cout << "Invalid conversion category. Please check the available categories." << endl;
			}
			continue;
		}	//unit converter

		case 4: {		//binaryToDecimal && complex numbers
			cout << "1. BINARY" << endl;
			cout << "2. COMPLEX NUMBER" << endl;

			cin >> option;

			switch (option) {	//option
			case 1: {
				cout << "Binary To Decimal" << endl;
				cout << "Enter a binary number: ";
				cin >> binaryNumber;
				int decimalNumber = Scientific::binaryToDecimal(binaryNumber);
				result = decimalNumber;
				break;
			}
			case 2: {
				cout << "enter complex number a REAL: " << endl;
				cin >> real;
				cout << "enter complex number a IMAGINARY: " << endl;
				cin >> imaginary;
				ComplexNumber numberA(real, imaginary);

				cout << "enter complex number b REAL: " << endl;
				cin >> real;
				cout << "enter complex number b IMAGINARY: " << endl;
				cin >> imaginary;
				ComplexNumber numberB(real, imaginary);

				cout << "Choose an operation:  (+.-,/,*) " << endl;
				cin >> operation;

				if (operation == "+") {
					complexResult = numberA.add(numberB);
				}
				else if (operation == "-") {
					complexResult = numberA.subtract(numberB);
				}
				else if (operation == "*") {
					complexResult = numberA.multiply(numberB);
				}
				else if (operation == "/") {
					complexResult = numberA.divide(numberB);
				}
				cout << "The complex number output: " << complexResult.getReal() << "+ (" << complexResult.getImaginary() << ")i" << endl;
				cout << "The complex number magnitude is: " << complexResult.magnitude() << endl;
				continue;	//used to leave the switch
			}
			default: {
				cout << "INVALID INPUT" << endl;
				break;
			}
			}//option
			break;
		}	//binaryToDecimal && complex numbers
		case 5: { //Ender
			cout << "\nThinkLessTypeMo' out, thanks for using" << endl;
			pwr = false;
			continue; //will skip displaying any message in the loop
		} //Ender
		default: {
			cout << "\nInvalid operation" << endl;
			break;
		}
		}//1

		if (std::isnan(result)) {	//math.h function to read if NAN is returned 
			cout << "\nMath/Syntax Error" << endl;
		}
		cout << "\nThe Result is: " << result << endl;
	}//pwr
}//driver

void Calculator::displayInitalMenu() {	//function to display inital menu
	cout << "\nPlease Select an option" << endl;
	cout << "1. Scientific Calculator" << endl;
	cout << "2. Geometric Calculator" << endl;
	cout << "3. Unit Converter" << endl;
	cout << "4. Binary / Complex" << endl;
	cout << "5. EXIT" << endl;
}

bool Calculator::singleOperandFunct(string operand) {	//function to check if a single number operator is in use
	if (operand == "sq" || operand == "c" || operand == "f" || operand == "s" || operand == "c" || operand == "t" || operand == "as" || operand == "ac" || operand == "at" || operand == "sh" || operand == "ch" || operand == "th"
		|| operand == "ln" || operand == "abs") {
		return true;
	}
	else {
		return false;
	}
}
