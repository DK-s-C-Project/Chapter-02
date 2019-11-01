/* Bollean  불리언 자료형과 조건문 if */ // 연산자를 복습해 보아요.

#include<iostream>
using namespace std;

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{

	// bool isEqual type example
	cout << std::boolalpha;
	cout << isEqual(1, 1) << endl;;
	cout << isEqual(0, 3) << endl;;



	// bool type example
	bool b1 = true; // boolen type can be initializat as other values. --> copy initialization.
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization 

	b3 = false;

	cout << std::boolalpha; // with this statement, it will make output in letter.
	cout << b3 << endl;
	cout << b1 << endl;

	cout << !true << endl;// using ! --> not opperater. it is better for not using. Beacause of bugs.
	cout << !false << endl;

    // using bool initialization by if/else statement 
	if (3 > 1)// in (), we can put numbers , true / false. 
	{
		cout << "This is true " << endl;
		cout << "True second line" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}



	return 0;
}
