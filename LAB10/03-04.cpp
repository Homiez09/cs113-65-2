#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
    private:
        point center;
        double radius;
    public:
        Circle(point center, double radius) {
            this->center = center;
            this->radius = radius;
        }

        double area() {
            return M_PI * pow(radius, 2);
        }

        double distanceFromCenter(point pt) {
            return sqrt(pow(pt.xPosition - center.xPosition, 2) + pow(pt.yPosition - center.yPosition, 2));
        }

        double contains(point pt) {
            return distanceFromCenter(pt) <= radius;
        }

};

int main()
{
    point center, pt;
    double radius;
    cout << "Center of Circle: ";
    cin >> center.xPosition >> center.yPosition;
    cout << "Radius of Circle: ";
    cin >> radius;
    Circle circle(center, radius);
    cout << "Point to Check: ";
    cin >> pt.xPosition >> pt.yPosition;

    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point " << "(" << pt.xPosition << ", " << pt.yPosition << ") " << "is " << circle.distanceFromCenter(pt) << endl;

    if (circle.contains(pt)) {
        cout << "This circle contains this point." << endl;
    } else {
        cout << "This point is not in this circle." << endl;
    }
    return 0;
}