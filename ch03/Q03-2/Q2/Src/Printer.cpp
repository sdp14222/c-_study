#include <iostream>
#include "Printer.h"

using namespace std;

void Printer::SetString(const char* str)
{
	int i;

	for(i = 0; i < PRINTER_STR_SIZE - 1 && str[i]; i++)
		printer_str[i] = str[i];
	printer_str[i] = 0;
}

void Printer::ShowString(void)
{
	cout << printer_str << endl;
}