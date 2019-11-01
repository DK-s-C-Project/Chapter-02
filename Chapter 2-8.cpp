/* Literal Constants ¸®ÅÍ·² »ó¼ö*/
#include<iostream>
using namespace std;

int main()
{
	float pi = 3.14f; // pi is a memory that it is changeable.

	//const float pi = 3.14; // with the const the pi is unchangeable.

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10; // review the sign&unsigned. 

	int x = 012; // it is the octal number. 
	int y = 0xF; // it is the Hexa number. --> it is very common number in code, cuse of shorting sentance.
	//int z = 0d1011'11111'1010; --> in version over 2014 it could be used like this.

	// Decimal : 0.1.2.3.4.5.6.7.8.9.10
	// Octal : 0.1.2.3.4.5.6.7.8.10.11.12.13.14	 
	// Hexa : 0.1.2.3.4.5.6.7.8.9.A.B.C.D.E.F.10

	const int price_per_item = 10; // --> so make a unchangeable value not to make a magic number. 2 
	int num_items = 123;
	int price = num_items * 10; // it is no good in codenig, makeing a magic number. --> a magic number is a Constant that is changeable. 1

	return 0;
}