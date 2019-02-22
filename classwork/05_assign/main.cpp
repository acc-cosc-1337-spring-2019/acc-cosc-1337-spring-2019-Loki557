#include "rectangle.h"
#include<iostream>
#include<vector>

using std::vector;
using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	vector<Rectangle> rectangles;
	Rectangle rect1(4, 5);
	Rectangle rect2(10, 10);
	Rectangle rect3(100, 10);
	rectangles.push_back(rect1);
	rectangles.push_back(rect2);
	rectangles.push_back(rect3);
	int area_total = 0;
	for (auto r : rectangles)
	{
		area_total += r.return_area();
		cout << "Area: " << r.return_area() << "\n";
	}
	cout << "Total of the Areas: " << area_total;
	
	return 0;
}