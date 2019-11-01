/* Symbolic Constants �ɺ��� ��� + cpp 11�� �߰� �� constexpr */

#include<iostream>
#include<stdexcept>
#include "Chatper 2-9const.h"
#define PRICE_PER_ITEM 30 // ������ �ʹ� �о����� ������ ����� ���� �ʴ� ���� ����. ��ũ�δ� �빮�ڷ� ����.
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
	
	const int special_number(number); // ������ ����� �ʱ�ȭ ������ special_number�� �ٲ��� ���� --> ����ڰ� �Է��ϱ� �������� �𸣱� ����. / �� Ÿ�� ���
	const int my_const(123); // ������ Ÿ���� ��� �̹� my_const�ڿ� ������ �Ͽ��� ����. 
	constexpr int my_const2(123);

	// ������ Ÿ�� ��� vs �� Ÿ�� ��� = ������ Ÿ�� ����� ������ �������� ������ �Ǿ��� ����̸� �� Ÿ�� ����� ����ڰ� �Է��� �ϰ� ��� ���� ���� �� ������ �Ǵ� ����̴�.
	// �� ������ Ÿ�� ����� �̹� ������ ���� �������� ���� ���̰� �� Ÿ�� ����� ����ڰ� ���� �־ �� ��� ���� �������� ���� ����̴�.

	// Using Price per item 30 a bad example

	int num_item = 123;

	int price = num_item*PRICE_PER_ITEM;

	// Using Price per item 30 a good example

	const int price_per_item = 30; //#define PRICE_PER_ITEM 30 // ������ �ʹ� �о����� ������ ����� ���� �ʴ� ���� ����.
	int num_item = 123;
	int price = num_item*price_per_item;
	// Header�� const�� ���� �ִ� ��쵵 �ִ�.

	return 0;
}

int  main()
{
	double radius;
	cin >> radius;
	double circumstance = 2.0*radius*constants::pi;

	return 0;

}
// ���� ������ ���� �� �������� const�� ����� �����ϸ� �����ϴ�.