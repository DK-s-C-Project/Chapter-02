/* Fixed-width Integers 고정 너비 정수*/ //--> 멀티 플렛폼 프로그램을 할 때 사용 된다!!!! 은별이가 언급해준 것이다. 
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