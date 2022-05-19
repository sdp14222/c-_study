#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	const int num = 12;
	const int* p = &num;
	const int*(&ref) = p;

	cout << "num = " << num << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "ref = " << ref << endl;
	cout << "*ref = " << *ref << endl;
	
	return 0;
}
