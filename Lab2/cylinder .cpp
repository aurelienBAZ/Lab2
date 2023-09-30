// cylinder.cpp

#include "cylinder.h"
#include <cmath>

cylinder::cylinder() {
	radius = 0.0;
	height = 0.0;
}

cylinder::cylinder(double r, double h) {
	radius = r;
	height = h;
}

double cylinder::getradius() const {
	return radius;
}

double cylinder::getheight() const {
	return radius;
}

void cylinder::setradius(double r) {
	radius = r;
}

void cylinder::setheight(double h) {
	height = h;
}

double cylinder::calculatevolume() const {
	return &pow(radius, 2) * height;
}

double cylinder::calculatesurfacearea() const {
	return (2 * radius * height) + (2 * pow(radius, 2));
}