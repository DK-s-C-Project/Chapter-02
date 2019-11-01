/* Symbolic Constants 심볼릭 상수 + cpp 11에 추가 된 constexpr */

#include<iostream>
#include<stdexcept>
#include "Chatper 2-9const.h"
#define PRICE_PER_ITEM 30 // 범위가 너무 넓어지기 때문에 사용을 하지 않는 것이 좋다. 매크로는 대문자로 쓴다.
using namespace std;

void printNumber(const int my_number) // to warn other programmers not to change patameters.
{
	int n = my_number;// if other programmers want to change the value, use this sentance.

	cout << my_number << endl;
}
// my_number is the value which mostly dont want to be change without some of the execptions. 
int main()
{
	printNumber(123);

	const double gravity{ 9.8 }; // can't chage the value 9.8 because of the const.

	int number;
	cin >> number;
	
	const int special_number(number); // 변수로 상수를 초기화 하지만 special_number는 바꾸지 못함 --> 사용자가 입력하기 전까지는 모르기 때문. / 런 타임 상수
	const int my_const(123); // 컴파일 타임의 상수 이미 my_const뒤에 선언을 하였기 때문. 
	constexpr int my_const2(123);

	// 컴파일 타임 상수 vs 런 타임 상수 = 컴파일 타임 상수는 컴파일 과정에서 선언이 되어진 경우이며 런 타임 상수는 사용자가 입력을 하고 결과 값이 나올 때 선언이 되는 경우이다.
	// 즉 컴파일 타임 상수는 이미 정해진 값을 고정으로 놓는 것이고 런 타임 상수는 사용자가 값을 넣어서 그 결과 값을 고정으로 놓는 경우이다.

	// Using Price per item 30 a bad example

	int num_item = 123;

	int price = num_item*PRICE_PER_ITEM;

	// Using Price per item 30 a good example

	const int price_per_item = 30; //#define PRICE_PER_ITEM 30 // 범위가 너무 넓어지기 때문에 사용을 하지 않는 것이 좋다.
	int num_item = 123;
	int price = num_item*price_per_item;
	// Header에 const를 몰아 넣는 경우도 있다.

	return 0;
}

int  main()
{
	double radius;
	cin >> radius;
	double circumstance = 2.0*radius*constants::pi;

	return 0;

}
// 물리 엔진을 만들 때 여러가지 const를 헤더에 저장하면 유용하다.