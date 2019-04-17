#include "circle.h"


//cpp

void Circle::draw()
{
	device_context->DrawCircle(wxPoint(point.x, point.y), radius);
}