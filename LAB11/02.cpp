#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double width, double height);
    double area();
    double circumference();
    double getWidth();
    double getHeight();
};

class SquareRectangle : public Rectangle{
private:
    double side;
public:
    SquareRectangle(double side);
    double getSide();
};

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

SquareRectangle::SquareRectangle(double side) : Rectangle(side,side), side(side) {}

double Rectangle::area() {
    return this->width * this->height;
}

double Rectangle::circumference() {
    return (this->width + this->height) * 2;
}

double Rectangle::getWidth() {
    return this->width;
}

double Rectangle::getHeight() {
    return this->height;
}

double SquareRectangle::getSide() {
    return this->side;
}

int main()
{
    int tc;
    double width, height;
    double side;
    Rectangle rectangle(0, 0);
    SquareRectangle sqRec(0);
    cin >> tc;
    switch (tc) {
        case 1:
            cin >> width;
            cin >> height;
            rectangle = Rectangle(width, height);
            cout << "Rectangle" << endl;
            cout << "Width: " << rectangle.getWidth() << endl;
            cout << "Height: " << rectangle.getHeight() << endl;
            cout << "Area: " << rectangle.area() << endl;
            cout << "Circumference: " << rectangle.circumference() << endl;
        break;

        case 2:
            cin >> side;
            sqRec = SquareRectangle(side);
            cout << "Square Rectangle" << endl;
            cout << "Width: " << sqRec.getWidth() << endl;
            cout << "Height: " << sqRec.getHeight() << endl;
            cout << "Side: " << sqRec.getSide() << endl;
            cout << "Area: " << sqRec.area() << endl;
            cout << "circumference: " << sqRec.circumference() << endl;
        break;
    }
}
