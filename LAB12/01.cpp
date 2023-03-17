#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D {
public:
    virtual double volumn() = 0;
    virtual double surfaceArea() = 0;
};

class RightRectangularPyramid : public Shape3D {
private:
    double length;
    double width;
    double height;
public:
    RightRectangularPyramid(double length, double width, double height);
    RightRectangularPyramid();
    double volumn();
    double surfaceArea();
};

class Sphere : public Shape3D {
private:
    double radius;
public:
    Sphere(double radius);
    Sphere();
    double volumn();
    double surfaceArea();
};

RightRectangularPyramid::RightRectangularPyramid(double length, double width, double height) : length(length), width(width), height(height) {}

RightRectangularPyramid::RightRectangularPyramid() {
    this->length = 0;
    this->width = 0;
    this->height = 0;
}

double RightRectangularPyramid::volumn() {
    return (this->length * this->width * this->height) / 3;
}

double RightRectangularPyramid::surfaceArea() {
    return this->length * this->width + this->length * sqrt(pow(this->width / 2, 2) + pow(this->height, 2)) + this->width * sqrt(pow(this->length / 2, 2) + pow(this->height, 2));
}

Sphere::Sphere(double radius) : radius(radius) {}

Sphere::Sphere() {
    this->radius = 0;
}

double Sphere::volumn() {
    return (4 * M_PI * pow(this->radius, 3)) / 3;
}

double Sphere::surfaceArea() {
    return 4 * M_PI * pow(this->radius, 2);
}

int main()
{
	int tc;
	cin >> tc;
	if (tc == 1) {
		Shape3D **shapes = new Shape3D*[3];
		shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
		shapes[1] = new Sphere(10.6);
		shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
		for (int i = 0; i < 3; i++) {
			cout << "Volumn: " << (*shapes)->volumn() << endl;
			cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
			cout << "--------------------\n";
			*shapes++;
		}
	} else if (tc == 2) {
		RightRectangularPyramid rectangle;
		Sphere sphere;
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 3) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
	} else if (tc == 4) {
		Sphere sphere(34.25);
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 5) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		Sphere sphere(34.25);
		Shape3D *shape = &rectangle;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
		shape = &sphere;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
	} else if(tc == 6) {
	}

}