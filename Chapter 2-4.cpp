/*About void*/
#include<iostream>
using namespace std;

void My_function()
{

}

int main()
{
	int i = 123;
	float f = 123.456f;

		void *my_void;// address
		my_void = (void*)&i;// adding &, meaning of a address.
		my_void = (void*)&f;
		return 0;
}

// it could be used in pointer!!