//: Max Landis

#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;

  double perimeter;
  double area;

  cout << "Rectangle Properties:" << endl;

  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;

  area = length*width;
  cout << "Area = " << area << endl;

  perimeter = 2*(length+width);
  cout << "Perimeter = " << perimeter << endl;

}