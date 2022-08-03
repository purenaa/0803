#include <iostream>
using namespace std;

Reference 사용
int main()
{
	int num = 10;
	int & ref = num;	//ref는 num의 별명

	cout << "num = " << ref << endl;
	cout << "ref = " << ref << endl;		//num의 값을 출력

	ref = 100;		//num = 100;을 수행함

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;	//num의 값 출력

	cout << "&num = " << &num << endl;
	cout << "&ref = " << &ref << endl; 		//num의 주소 출력

	return 0;

//Reference의 이해
//int main()
//{
//	using salary = double;
//	salary peter = 100.12;
//	salary& sangwon = peter;
//	cout << "peter's 값 = " << peter << endl;
//	cout << "peter's memory address = " << &peter << endl;
//	cout << "sangwon's 값 = " << sangwon << endl;
//	cout << "sangwon's memory address = " << &sangwon << endl;
//	return 0;
//}