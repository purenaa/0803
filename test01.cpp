#include <iostream>
#include "header1.h"
#include "header2.h"

using namespace std;
using namespace rectangle;
using namespace square;


namespace BestComlmpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComlmpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	int y1 = square::x;
	int y2 = rectangle::x;
	cout << "Y1 : " << y1 << endl;
	cout << "Y2 : " << y2 << endl;

	return 0;
}

void BestComlmpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
