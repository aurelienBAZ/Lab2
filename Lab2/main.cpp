// main.cpp


#include <iostream>
#include "cylinder.h"

int main() {
	// create a cylinder object
	cylinder myCylinder(2.0, 6.0);
	 
	//access and display the radius and height
	std::cout << "getradius: " << myCylinder.getRadius() << std::endl;
	std::cout << "getHeight: " << myCylinder.getHeight() << std::endl;

	// Calculate and display the volume and surface area
	std::cout << "Volume: " << myCylinder.calculateVolume() << std::endl;
	std::cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << std::endl;

	return 0;
}