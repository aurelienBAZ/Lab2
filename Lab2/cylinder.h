// cylinder.h

#ifndef cylinder_H
#define cylinder_H	


class cylinder {
private:
	double radius;
	double height;

public:
	//constructoirs 
	cylinder();
	cylinder(double r, double h);

	//getters and setters
	double getradius() const;
	double getheight() const;
	void setradius(double r);
	void setheight(double h);

	//calculate volume and surface area 
	double calculatevolume() const;
	double calculatesurfacearea() const;
};
#endif