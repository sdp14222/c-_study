#ifndef __CALC_H__
#define __CALC_H__

#define CNT_SIZE 4

namespace CALC
{
	enum 
	{
		ADD_IDX,
		MIN_IDX,
		MUL_IDX,
		DIV_IDX
	};
};


class Calculator
{
private:
	int cnt[CNT_SIZE];

public:
	void Init(void);
	double Add(double d1, double d2);
	double Min(double d1, double d2);
	double Mul(double d1, double d2);
	double Div(double d1, double d2);
	void ShowOpCount(void);
};

#endif