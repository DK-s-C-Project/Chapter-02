/* Integers */

#include<iostream>
#include<cmath>// for the mathmeticial libery
#include<limits> // asking to compiler 'what is the maximum number which short can describe?'
using namespace std;

int main()
{
	short	s = 1;// 2 bytes --> 2*8 bits = 16bits
	int		i = 5;
	long	l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << pow(2, sizeof(short) * 8 - 1)-1 << endl;// by using cmath compiler, 'pow' can be used.
	cout << numeric_limits<short>::max() << endl;// by using limits compiler 'numeric_limits can be used'
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1;// 32768

	cout << s << endl; // overflow. 
	/* when the numer excess ther maximum number it goes to the lowest number.*/
	/* Forexample I expected number 32768 but the out put was -32768. it means that the maximum number was 32767, s+1 was 32768
	 short fuction cant discribe 32768, so it gives -32768 by lowest number*/
	return 0;
}

// Look for anothet overflow in other intigers.