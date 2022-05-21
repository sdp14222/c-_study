#include "Point.h"

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *tp = new Point;
	tp->xpos = p1.xpos + p2.xpos;
	tp->ypos = p1.ypos + p2.ypos;

	return *tp;
}