//main
#include "shape.h"
#include "line.h"
#include "circle.h"
#include <vector>
#include <iostream>
#include <memory>

int main() 
{
	//Instance can't be created since Shape is an abstract class
	//Shape s;
	//s.draw();

	Shape * line = new Line(); //creates dynamic memory (heap)
	line -> draw();
	delete line;
	std::cout << std::endl;
	
	std::vector<Shape*> shapes{ new Line(), new Circle() };
	//Vector of shape references
	for (auto& shape : shapes)
	{
		shape->draw();
	}
	
	std::cout << "\n\n";
	//Vector of shape pointers
	for (auto * shape : shapes)
	{
		shape->draw();
	}
	std::cout << "\n\n";

	//smart pointers in a vector
	std::unique_ptr <Shape> line2 = std::make_unique<Line>();
	line2->draw();
	std::cout << "\n";
	std::vector <std::unique_ptr <Shape>> shapes2;
	shapes2.push_back(std::make_unique<Line>());
	shapes2.push_back(std::make_unique<Circle>());

	for (auto & shape : shapes2)
	{
		shape->draw();
	}
	return 0;
}