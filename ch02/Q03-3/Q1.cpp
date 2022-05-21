#include <iostream>
#include "Point.h"
using namespace std;

int main(int argc, char const *argv[])
{
	Point *p1 = new Point;
	Point *p2 = new Point;

	p1->xpos = 10;
	p1->ypos = 20;

	p2->xpos = 30;
	p2->ypos = 40;

	cout << "*p1 = (" << p1->xpos << ", " << p1->ypos << ")" << endl;
	cout << "*p2 = (" << p2->xpos << ", " << p2->ypos << ")" << endl;

	Point &p = PntAdder(*p1, *p2);
	cout << "p = (" << p.xpos << ", " << p.ypos << ")" << endl;

	delete p1;
	delete p2;
	delete &p;
	
	return 0;
}
