#include <iostream>
using namespace std; 

int main()
{
	double radius, area; 
	int PI = 3.14; 
	cout << "Enter radius\n"<<endl; 
	cin >> radius; 
	area = PI * radius * radius; 
	cout << "Area of circle is" << area << endl;
	return 0; 
}
