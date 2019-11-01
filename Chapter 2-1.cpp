/* Fundamental Data Types  기본 적은 자료형의 소개*/
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int a = 1;
	int b = -1;
	int c = 123;
	char Y = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;// 입력한 값의 저장 크기를 보여주는 문장임.
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

	// 초기화 하는 3가지 방법
	int i = (int)3.1415; // copy initialization 
	int e(123); // direct initialization 
	int f{ 123 }; // uniform initialization --> 객체지향에서 사용자가 직접 만든 데이터 타임을 다루는데 사용한다. 조금 더 엄격하게 작용한다.

	// 여러 변수를 초기화하는 방법
	int k, l; // 알고 있던거네..
	
	return 0;
}