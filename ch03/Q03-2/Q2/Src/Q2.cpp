#include "Printer.h"

int main(int argc, char const *argv[])
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	
	return 0;
}
