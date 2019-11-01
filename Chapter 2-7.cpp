/* Char type */
// Look for the ASC Table. 
#include<iostream>
#include<limits>
using namespace std;

int main()
{
	char c1(65); //c1 = 65;
	char c2('A'); // writting letter '' writting statement goes "" . // std::string - ¹®ÀÚ¿­

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	// C casting style
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// CPP casting style
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char dino(97);
	cout << dino << endl;
	cout << static_cast<int>(dino) << endl; // even if using static_cast, the saved data in dino didn't changed.
	cout << dino << endl;

	// using cin 

	char c3(65); 

	cin >> c3;
	cout << c1 << "" << static_cast<int>(c3) << endl; // when the time pass on, it is not neccery to type static_cast all the time. short terms can be use.

	cin >> c3;
	cout << c1 << "" << static_cast<int>(c3) << endl;// There is a memo of a static_cast look for it.

	cin >> c3;
	cout << c1 << "" << static_cast<int>(c3) << endl;

	cin >> c3;
	cout << c1 << "" << static_cast<int>(c3) << endl;
	 
	// Q. When the input is 3 letter and ouput is 4 , what would going to happen??
	// A . the 3 output occured. And ask another input latter ==> makes 4 output anyway.

	char c4;
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	//wchar_t c; , char16/32_t; --> using in window programming. this is included in unicode. 

	return 0;
}