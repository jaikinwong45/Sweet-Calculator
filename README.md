# TypeMoThinkLess
All-inclusive calculator made for a course in first year
programmed in: C++

Introduction:
A software program called a calculator is made to swiftly and precisely compute mathematical operations. Its main objective is to speed up and simplify calculations, particularly those involving difficult equations or big numbers. In many different disciplines, including education, engineering, economics, and research, where accurate calculations are crucial, calculators are widely utilised. In addition to more complex operations like logarithms, trigonometric computations, and statistical analysis, they offer a convenient and effective means to conduct fundamental arithmetic operations like addition, subtraction, multiplication, and division. Calculators save time and lessen the possibility of human error by automating mathematical processes, allowing users to concentrate on problem-solving and decision-making activities.

Object Oriented Concepts (OOC)

OO concept:
Classes (both header and cpp)
> Basic, Scientific, Unitconverter, Geometry, ComplexNumber, Calculator

Inheritance
> Calculator inherits from all other classes
> Every other class inherits Scientific          > Scientific Inherits basic

Polymorphism
> Shape2D & Shape3D, all shape classes override the function for area and volume
Encapsulation
> Private or Protected members > Complex numbers >accessors & mutators

Abstract classes
Geometry class > the shape2D and shape3D are abstract

Member functions:  public, private, protected
> Basic.cpp,calculator.cpp,  ComplexNumber.cpp, geometry.cpp, Scientific.cpp, UnitConverter

Composition 
> Scientific building upon Basic
> UnitConverter building upon Scientific

Mutators/accessors functions 
> Calculator.cpp. Complexnumber.cpp, Geometry.cpp

Member Variables
> Basic.cpp, calculator.cpp,  ComplexNumber.cpp, geometry.cpp, Scientific.cpp, UnitConverter

Abstraction 
> Calculator using Geometric calculations

Constructor and Deconstructor 
> ComplexNumber,  Geometry, Calculator

Overloaded Methods
> Basic: multiple overridden methods for arithmetic 
> ComplexNumber: arithmetic functions that returns a Complex Number

Switch case menu 
> Menu

Class Details 
Class Name: Calculator 
Class Description: This class is the main component of the program, By inheriting all the other classes, the Calculator class encapsulates the data required for calculations. It provides the logics and instructions for the user to use the calculator

Calculator : Basic, Scientific, Geometry, UnitConverter, ComplexNumber
result: double
pwr: bool
num1: double 
num2: double

Calculator()
driver(): void
displayInitialMenu(): void
singleOpenardFunct(string operand): bool


Class Name: Basic
Class Description:  This class is used to create basic operations objects. Some of these include addition, subtraction, multiplication and division.

Basic
add(double x, double y): double
add(double x, double y, double z): double
subtract(double x, double y): double
multiply(double x, double y): double
multiply(double x, double y, double z): double
multiply(double x, double y, double z, double u): double
divide (double x, double y): double
modulus(int x, int y): int



Class Name: Geometry
Class Description: This class is a base class for multiple abstract and child classes that output a shape's specific information using the parameters entered by a user. There are also some shape classes that output a visual representation of the shape.

Geometric : Scientific 
Geometry() 
~Geometry()



Shape2D : Geometry
getArea(): double
getPerimeter(): double
outputShape():void


Circle: Shape2D                                        
radius: double
Circle( ){}
~Circle() {}
getArea(): double
getPerimeter(): double
outputShape(): void


Triangle :shape2D
base: double
height: double
Public:
Triangle() {}
~Triangle() {}
getArea(): double
getPerimeter(): double
output Shape(): void


Rectangle : Shape2D
length, width: double

Rectangle(){}
~Rectangle() {}
getArea(): double
getPerimeter(): double
output Shape(): void


Shape 3D : Geometry
getVolume: double
getSurfaceArea (): double
outputShape): void


Sphere : shape 3d
radius: double
Sphere()
~Sphere() {};
getArea(): double
getPerimeter(): double
outputShape(): void



Cube : Shape3D
side: double
Cube()
~Cube() {}
getVolume(): double
getSurfaceArea(): double
outputShape(): void


TriangularPrism : Shape3D
base, height, length: double
TriangularPrism()
~TriangularPrism() {};
getArea(): double
getPerimeter(): double
outputShape(): void




Cylinder : Shape 3D
radius, height: double

Cylinder(double r, double h)
~Cylinder (){};
getArea(): double
getPerimeter(): double
outputShape(): double


Class Name: UnitConverter
Class Description: This class is used to creates unit objects. Some of these include mg, kg, inches, cm. This class allows you to convert between different units.

UnitConverter:Scientific
convertToMeters(value: double, unit: string): double
convertFromMeters(value: double,  unit: string): double
convertToGrams(value: double,  unit: string): double
convertfromGrams(value: double, unit: string): double
convertTonilliliters(value: double,  unit: string): double
convertfronMilliliters(value: double,  unit: string): double
convertTemperature(value: double, srcUnit: string, dstUnit: string): double
convertAreaToSquareMeters(value: double,  unit: string): double
convertAreafromSquareMeters(value: double,  unit: string): double
convertPressureToPascals(value: double,  unit: string): double
convertPressureFromPascals(value: double, unit: string): double



Class Name: Scientific
Class Description: This class is used to create scientific objects. Some of these include sine, cosine, and tangent. 
Scientific : Basic
square Root(x: double): double
cubeRoot(x: double): double
exponential(double pwr, double base): double
factorial(x:int): int
sine(x: double): double
cosine(x: double): double
tangent(x: double): double
arcsine(x: double): double
arcCosine(x: double): double
arcTangent(x: double): double
sineH(x: double): double
cosineH(x: double): double
tangentH(x: double): double
ln(x: double): double
logB(base:double, x: double): double
absoluteValue(x: double): double
greatestCommonDivisor(x:int, y:int): int
leastCommonMultiple(x:int, y:int): int
hypotenuse(x: double, hgt:double ): double
Int calculateAge(birth year:int, currentYear:int ): int
Int binaryToDecimal(binary:string): int



Class Relationship Diagram 

The scientific method inherits functions from the Basic calculator, which are available throughout the program. Whenever a mathematical calculation is required, the basic function is used. When a derived class of geometry needs a formula for calculating area and perimeter, the scientific class provides a maths operation to the geometry class. All the code implementations are then applied to the main calculator .cpp where the calculator provides its functionality. The overall function is a looping structure which stores the values entered by the user as a result which can then be used in another calculation later on in the code. In addition, the Complex number class and Unit converter class follow the same logic. 

Geometry Inheritance Relationship Diagram


Project Guide 

Project Run:
CASE 1:To access scientific. Type 1 is from the main menu. Another menu informs the user of the variables behind num1 and num 2. Next another menu gives options for the type of operation. Once an operation is selected the calculator returns the answer.


CASE 2: To access the geometry, type in 2 to the initial menu, then 1 or 2 for 2D or 3D, then a b c d for the shapes provided, then enter units. Press enter for the output

CASE 3: To access the UnitConverter type 3 into the initial menu, Then the user chooses the category of units. Once a category is selected. The user can choose a source unit and then a designated unit.


 
CASE 4:To access Binary/Complex Numbers, first type 4 into the initial menu, then 1 or 2 for binary or complex numbers, respectively. 

For Binary after entering into the menu, all that needs to be done is to enter a binary number, then after pressing enter the output will show
For Complex numbers after entering into the menu, type in the values for both complex numbers, choose simple arithmetic and press enter for the result



CASE 5: To exit the calculator, type in 5 for the main menu to exit


