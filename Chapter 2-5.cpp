/* Floating Poiont Numbers �ε� �Ҽ��� ��*/
#include<iostream>
#include<iomanip> // ������� �����ϴ� ���̺귯��.
#include<limits>// asking to compiler 'what is the maximum number which short can describe?'
#include<cmath>
using namespace std;

int main()
{
	float f(3.14/*   3.14*100 = 3.14e2  */);// 3.14 = 31.4*0.1  "Be shore that it could be written in this pattern"
	double d;
	long double ld;

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;// The biggest absoult value.
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	cout << numeric_limits<float>::min() << endl;// the lowest absoult value.
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	cout << numeric_limits<float>::lowest() << endl;//the  range of the number.
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	cout << std::setprecision(16); // it specify the number of decimals to retain / forexample I put 16. so the number of decimals or 16.(���� ���� ����)
	cout << 1.0 / 3.0 << endl;

	double zero = 0.0; // when the output becomes infint, it means fucked up really bad. 
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero;

	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;

	// Determines if the given floating point number arg is a positive or negative infinity.
	cout << posinf << " " << std::isinf(posinf) << endl; 
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;



	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	
	cout << setprecision(1);

	cout << d1 << endl;
	cout << d2 << endl;

	// �� ������ ��� setprecision�� �ڸ��� �ű迡 ���� ������ �߻����θ� �����ϰ� �ִ�. �� �����Ͽ� ���׸��� ������ �ְ�, �̰��� �����Ǹ� ū ������ �߻����� ����ϴ�.
	return 0;
}