/* 정수를 입력 받아 홀수 인지 짝수 인지 판별하는 프로그램*/
#include<iostream>
using namespace std;

int main()
{
	int a;


		cin >> a;

		if (a % 2 == 0)// 홀수 짝수 판별하는 기호를 몰라서 베껴왔다.
		{
			cout << "Your input is Even Number" << endl;
		}

		else
		{
			cout << "Yout input is Odd Number" << endl;
		
		}


	return 0;
}

// 나중에 do- while 문을 응용해서 루프 돌리는 것을 추가해 보자.