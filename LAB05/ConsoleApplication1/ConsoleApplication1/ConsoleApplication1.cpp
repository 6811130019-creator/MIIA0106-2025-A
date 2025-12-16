#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double calculateCircleArea(double x)
{
    double PI = 3.14159;
    double Carea = PI * x * x;
    return Carea;
}

double calculateRectangleArea(double length, double width)
{
	double Tarea = length * width;
	return Tarea;
}

int main()
{
    const double PI = 3.14159;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double Carea = calculateCircleArea(radius);
    cout << "The area of the circle with radius " << radius << " is " << Carea << endl;

    double length;
    double width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    double Tarea = calculateRectangleArea(length, width);
    cout << "The area of the rectangle is " << Tarea << endl;
    return 0;
}