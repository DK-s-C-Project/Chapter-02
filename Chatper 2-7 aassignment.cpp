/* ASCII ǥ�� ��� �ִ� �������� ���ڵ��� cin/cout���� ��,����� �غ��ƿ�*/

#include<iostream>
#include<limits>
using namespace std;

int main()
{
	//char ch;

	//cin >> ch;
	//cout << int(ch) << endl; // --> �̰� ���� �����
	
	/*char ch;

	cin >> ch;
	cout << ch << " " << static_cast<int>(ch) << endl;*/

	//int a;
	//char ch;

	//cin >> a, ch;

	//if () // ������ ���Ѵ� ����
	//{
	//	cout << char(a) << endl;
	//}

	//else
	//{
	//	cout << int(ch) << endl;
	//}

	// �� �������� �����
	char ch;
	int a;
	ASC: 
	cout << "What is your input? N/L" << endl;
	cin >> ch;
	
	if (ch == 'N')
	{
		cout << "Please insert number " << endl;
		cin >> a;
		cout << char(a) << endl;
	}
	if (ch == 'L')
	{
		cout << "Please insert letter " << endl;
		cin >> ch;
		cout << int(ch) << endl;
	}

	cout << "Thank you for testing" << endl << "Do you want to try again? y/n" << endl;
	cin >> ch;

	if (ch == 'y')
	{
		goto ASC;
	}
	if (ch == 'n')
	{
		cout << "Good bye" << endl;
	}
	else
	{
		cout << "Worrng letter" << endl;
	}
	return 0;
}