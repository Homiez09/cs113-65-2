#include <iostream>
using namespace std;

class Rectangle {
public:
    double width;
    double length;

    double Area() {
        return width * length;
    }

    double Perimeter() {
        return 2 * (width + length);
    }
};

int main() {
    Rectangle r1, r2;

    cout << "Please enter the width and length: " << endl;
    cin >> r1.width >> r1.length
        >> r2.width >> r2.length ;
 
    cout << "Rectangle 1's area: " << r1.Area() << " "
         << "perimeter = " << r1.Perimeter() << endl;
    cout << "Rectangle 1's area: " << r2.Area() << " "
         << "perimeter = " << r2.Perimeter() << endl;

}