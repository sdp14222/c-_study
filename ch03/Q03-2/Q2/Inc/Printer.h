#ifndef __PRINTER_H__
#define __PRINTER_H__

#define PRINTER_STR_SIZE 100

class Printer
{
private:
	char printer_str[PRINTER_STR_SIZE];

public:
	void SetString(const char* str);
	void ShowString(void);
};

#endif