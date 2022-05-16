#include <iostream>
#include "SwapPointer.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	cout << "ptr1 = " << ptr1 << endl;
	cout << "ptr2 = " << ptr2 << endl << endl;

	SwapPointer(ptr1, ptr2);

	cout << "ptr1 = " << ptr1 << endl;
	cout << "ptr2 = " << ptr2 << endl << endl;

	return 0;
}
