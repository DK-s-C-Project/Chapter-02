/* Fixed-width Integers ���� �ʺ� ����*/ //--> ��Ƽ �÷��� ���α׷��� �� �� ��� �ȴ�!!!! �����̰� ������� ���̴�. 
#include<iostream>
#include<cstdint>
using namespace std;

int main()
{
	std::int16_t i(5);// divide in to 2 in this flatform.
	std::int8_t myint = 65;

	// cout << myint <<endl;

	std::int_fast8_t fi(5);
	std::int_least64_t fl(5);

	return 0;
}