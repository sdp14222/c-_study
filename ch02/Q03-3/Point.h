#ifndef __POINT_H__
#define __POINT_H__

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

#endif