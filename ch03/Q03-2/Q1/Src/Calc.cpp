#include <iostream>
#include "Calc.h"
using namespace std;

void Calculator::Init(void)
{
	int i;
	for(i = 0; i < CNT_SIZE; i++)
		cnt[i] = 0;
}

double Calculator::Add(double d1, double d2)
{
	cnt[CALC::ADD_IDX]++;
	return d1 + d2;
}

double Calculator::Min(double d1, double d2)
{
	cnt[CALC::MIN_IDX]++;
	return d1 - d2;
}

double Calculator::Mul(double d1, double d2)
{
	cnt[CALC::MUL_IDX]++;
	return d1 * d2;

}

double Calculator::Div(double d1, double d2)
{
	cnt[CALC::DIV_IDX]++;
	return d1 / d2;
}

void Calculator::ShowOpCount(void)
{
	int i = 0;
	cout << "덧셈 : " << cnt[i++] << " ";
	cout << "뺄셈 : " << cnt[i++] << " ";
	cout << "곱셈 : " << cnt[i++] << " ";
	cout << "나눗셈 : " << cnt[i];
}