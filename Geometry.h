#pragma once

#ifndef GEOMETRY_H
#define GEOMETRY_H
#include <iostream>
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES   

#include "Scientific.h"

const double PI = 3.14159265358979323846;

//base class
class Geometry : public Scientific {
public:
	Geometry() {}
	~Geometry() {}
};

//abstract class (2d)
class Shape2D : public Geometry {
public:
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual void outputShape() = 0;
};

//abstract class (3d)
class Shape3D : public Geometry {
public:
	virtual double getVolume() = 0;
	virtual double getSurfaceArea() = 0;
	virtual void outputShape() = 0;
};

//child classes (derived)
class Triangle : public Shape2D {
	double base, height;
public:
	Triangle(double b, double h);
	~Triangle() {};
	double getArea();
	double getPerimeter();
	void outputShape();
};

class Circle : public Shape2D {
	double radius;
public:
	Circle(double r);
	~Circle() {};
	double getArea();
	double getPerimeter();
	void outputShape();
};

class Rectangle : public Shape2D {
	double length, width;
public:
	Rectangle(double l, double w);
	~Rectangle() {};
	double getArea();
	double getPerimeter();
	void outputShape();
};

class Sphere : public Shape3D {
	double radius;
public:
	Sphere(double r);
	~Sphere() {};
	double getVolume();
	double getSurfaceArea();
	void outputShape();
};

class Cube : public Shape3D {
	double side;
public:
	Cube(double s);
	~Cube() {};
	double getVolume();
	double getSurfaceArea();
	void outputShape();
};

class TriangularPrism : public Shape3D {
	double base, height, length;
public:
	TriangularPrism(double b, double h, double l);
	~TriangularPrism() {};
	double getVolume();
	double getSurfaceArea();
	void outputShape();
};

class Cylinder : public Shape3D {
	double radius, height;
public:
	Cylinder(double r, double h);
	~Cylinder() {};
	double getVolume();
	double getSurfaceArea();
	void outputShape();
};
#endif

