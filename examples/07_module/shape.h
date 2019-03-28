

#ifndef SHAPE_H
#define SHAPE_H

//h
class Shape 
{
public:
	virtual void draw() = 0;//Pure virtual function("=0"), makes Shape an abstract class which can't create an instance
	//not a pure virtual function
	//virtual void draw();
};

#endif //!SHAPE_H