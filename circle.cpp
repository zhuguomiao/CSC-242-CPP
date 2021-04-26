#include <iostream>
using namespace std;
//This program prompts user to enter circle raduis
//Then the circle area is displayed
int main()
{
	double radius; 
	int PI = 3.14; 
	cout << "Enter radius: ";
	//user input and store in variable radius
	cin >> radius;
	//calculate the area with the circumfrence of the circle
	double area;
	area = PI * (radius * radius);
	double c = 2 * PI * radius;
	cout << "The area of a circle with radius " << radius << " is: " << area << endl;
	cout << "The circumfrence is: " << c << endl;
	return 0;
}
