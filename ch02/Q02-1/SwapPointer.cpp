#include "SwapPointer.h"

void SwapPointer(int *(&ref1), int *(&ref2))
{
	int *temp = ref1;
	ref1 = ref2;
	ref2 = temp;
	cout << "";	
}