#include <iostream>
using namespace std;

Reference ���
int main()
{
	int num = 10;
	int & ref = num;	//ref�� num�� ����

	cout << "num = " << ref << endl;
	cout << "ref = " << ref << endl;		//num�� ���� ���

	ref = 100;		//num = 100;�� ������

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;	//num�� �� ���

	cout << "&num = " << &num << endl;
	cout << "&ref = " << &ref << endl; 		//num�� �ּ� ���

	return 0;

//Reference�� ����
//int main()
//{
//	using salary = double;
//	salary peter = 100.12;
//	salary& sangwon = peter;
//	cout << "peter's �� = " << peter << endl;
//	cout << "peter's memory address = " << &peter << endl;
//	cout << "sangwon's �� = " << sangwon << endl;
//	cout << "sangwon's memory address = " << &sangwon << endl;
//	return 0;
//}