/* Fundamental Data Types  �⺻ ���� �ڷ����� �Ұ�*/
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int a = 1;
	int b = -1;
	int c = 123;
	char Y = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;// �Է��� ���� ���� ũ�⸦ �����ִ� ������.
	cout << (uintptr_t)static_cast<void*>(&b) << endl;

	bool bvalue = true; // when its on false it gives a false answer, if it is true, ot gives true answer.
	cout << (bvalue ? 1 : 0) << endl;

	float fvalue = 3.141592f;
	double dvalue = 3.141592;// double is more detailed than float.

	auto avalue = 3.141592;// it gives an auto decision of data type.

	cout << avalue << endl;
	cout << fvalue << endl;
	cout << dvalue << endl;
	cout << sizeof(dvalue) << endl;// it shows the size of the data type.
	cout << sizeof(bool) << endl;// sizeof(bool) is always defind as 1.

	// �ʱ�ȭ �ϴ� 3���� ���
	int i = (int)3.1415; // copy initialization 
	int e(123); // direct initialization 
	int f{ 123 }; // uniform initialization --> ��ü���⿡�� ����ڰ� ���� ���� ������ Ÿ���� �ٷ�µ� ����Ѵ�. ���� �� �����ϰ� �ۿ��Ѵ�.

	// ���� ������ �ʱ�ȭ�ϴ� ���
	int k, l; // �˰� �ִ��ų�..
	
	return 0;
}