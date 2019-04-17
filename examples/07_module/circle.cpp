#include "circle.h"
#include "shape.h"
#include <iostream>

//cpp

void Circle::draw()
{
	device_context->DrawCircle(wxPoint(point.x, point.y), radius);
}