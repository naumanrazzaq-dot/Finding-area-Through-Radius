#include <iostream>
#include <cmath>

using namespace std;

int main() {
const double PI = 3.14159;
double radius, area;

cout << "Enter the radius";
cin >> radius;
area = PI * pow(radius, 2);
cout << "The radius of the circle is:" << radius << endl;
cout << "The area of the circle is:" << area << endl;

return 0;
}
