#include "point.h"

void point::point(double init_x=0, double init_y=0)
{
	x = init_x;
	y = init_y;
}


void point::shift (double dx, double dy)
{
	x += dx;
	y += dy;
}

double point::get_x() const
{
return x;
}
double point::get_y() const
{
return y;
}
