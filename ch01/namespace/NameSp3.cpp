#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
} // namespace BestComImpl

namespace BestComImpl
{
	void PrettyFunc(void);
} // namespace BestComImpl

namespace ProgComImpl
{
	void SimpleFunc(void);
} // namespace ProgComImpl

int main(int argc, char const *argv[])
{
	BestComImpl::SimpleFunc();
	
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}