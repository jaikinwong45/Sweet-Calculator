#include "Geometry.h"

using namespace std;

//Created a circle class that takes the radius
Circle::Circle(double r) {
	radius = r;
}
//Solves for the area of the circle
double Circle::getArea() {
	return multiply(PI, exponential(2, radius));
}
//Solves for the Perimeter of the circle
double Circle::getPerimeter() {
	return multiply(2, PI, radius);
}

//Created a rectangle class that takes the length and width
Rectangle::Rectangle(double l, double w) {
	length = l;
	width = w;
}
//Solves for the area of the rectangle
double Rectangle::getArea() {
	return multiply(length, width);
}
//Solves for the Perimeter of the rectangle
double Rectangle::getPerimeter() {
	return multiply(2, add(length, width));
}
//Draws the rectangle
void Rectangle::outputShape() {
	cout << "---- Rectangle ----" << endl;
	cout << endl;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			cout << "*";
		} cout << endl;
	}
}

//Created a sphere class that takes the radius
Sphere::Sphere(double r) {
	radius = r;
}
//Calculates for the volume of the sphere
double Sphere::getVolume() {
	return multiply(divide(4.0, 3.0), PI, exponential(3, radius));
}
//Calculates for the Surface Area of the sphere
double Sphere::getSurfaceArea() {
	return multiply(4, PI, exponential(2, radius));
}

//Created a cube class that takes the sides
Cube::Cube(double s) {
	side = s;
}
//Calculates for the volume of the cube
double Cube::getVolume() {
	return exponential(3, side);
}
//Calculates for the Surface Area of the cube
double Cube::getSurfaceArea() {
	return multiply(6, exponential(2, side));
}

//Created a cube class that takes the length and height
Triangle::Triangle(double b, double h) {
	base = b;
	height = h;
}
//Solves for the area of the triangle
double Triangle::getArea() {
	return multiply(0.5, base, height);
}
//Solves for the Perimeter of the triangle
double Triangle::getPerimeter() {
	double sum = add(multiply(base, base), multiply(height, height));
	return add(base, height, squareRoot(sum));
}
//Draws the triangle
void Triangle::outputShape() {
	cout << "---- Triangle ----" << endl;
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}

//Created a triangularPrism class that takes the base, height, length
TriangularPrism::TriangularPrism(double b, double h, double l) {
	base = b;
	height = h;
	length = l;
}
//Calculates for the volume of the TriangularPrism
double TriangularPrism::getVolume() {
	return multiply(0.5, base, height, length);
}
//Calculates for the Surface Area of the TriangularPrism
double TriangularPrism::getSurfaceArea() {
	double sum = add(exponential(2, height), exponential(2, multiply(0.5, base)), multiply(length, height));
	return add(multiply(base, length), multiply(2, 0.5, base, squareRoot(sum)), multiply(length, height));
	// base * length + 2 * 0.5 * base * sqrt(height * height + (0.5 * base) * (0.5 * base)) + length * height;
}
//Created a Cylinder class that takes the radius and height
Cylinder::Cylinder(double r, double h) {
	radius = r;
	height = h;
}
//Calculates for the volume of the Cylinder
double Cylinder::getVolume() {
	return multiply(PI, radius, radius, height);
}
//Calculates for the Surface Area of the Cylinder
double Cylinder::getSurfaceArea() {
	return multiply(2, PI, radius, add(height, radius));
}

//act as overiders
void Circle::outputShape() {
	cout << "---- Circle ----" << endl;
}

void Sphere::outputShape() {
	cout << "---- Sphere ----" << endl;
}

void Cube::outputShape() {
	cout << "---- Cube ----" << endl;
}

void TriangularPrism::outputShape() {
	cout << "---- Triangular Prism ----" << endl;
}

void Cylinder::outputShape() {
	cout << "---- Cylinder ----" << endl;
}